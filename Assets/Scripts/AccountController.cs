using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using System.Security.Cryptography;
using System.Text;

public class AccountController : MonoBehaviour
{
    public List<string> siteUserData;
    string allLoginName;
    string[] registeredUsers;

    [Header("Site And Links Config")]
    string address = "127.0.0.1";
    public string forumUrl = "https://aion-alpha.forumeiros.com/";
    public string client1Download = "https://aion-alpha.forumeiros.com/t2-links-para-download-do-client-aion-7-7";
    public string launcherDownload = "https://aion-alpha.forumeiros.com/t3-download-do-launcher";
    public string duvidasForum = "https://aion-alpha.forumeiros.com/f5-duvidas";

    [Header("Site Login")]
    //username,email,password,active,lastloginDate
    bool isLoggedIn = false;
    string loginName;
    [SerializeField] TMP_Text textLogInfo;
    [SerializeField] Button btLogin;

    [Header("Panel Site Login")]
    public GameObject panelLogin;
    public TMP_InputField siteUsernameInput;
    public TMP_InputField sitePasswordInput;
    [SerializeField] TMP_Text textErrorLogin;
    private int tryLogin = 3;

    [Header("Panel Account")]
    public TMP_InputField usernameInput;
    public TMP_InputField emailInput;
    public TMP_InputField passwordInput;

    [Header("Menu")]
    public Languages languages = Languages.ENGLISH;
    public TMP_Dropdown languageDown;
    public Button btHome, btPlayers, btLegion, btDownload, btForum, btDonation, btRegister;

    [Header("Panels")]
    public SitePage sitePage = SitePage.HOME;    
    public GameObject panelRegister;
    public GameObject panelHome;
    public GameObject panelDownload;
    public GameObject panelDonate;

    [Header("Panel Home")]
    public TMP_Text textWelcome;

    [Header("Panel Top 10")]
    public GameObject panelTop10Player;
    public TMP_Dropdown top10Type;
    public GameObject top10Title;

    [Header("Message")]
    public GameObject panelMessage;
    public TMP_Text textMessage; 

    //language strings
    string pageTitle, menuHome, menuTopPlayer, menuLegion, menuDownload, menuForum, menuDonation, menuRegister;
    string messCreateAccount, messageError, loggedInInfo, loggedOffInfo, btLoginLabel, btLogoutLabel, bulletin, 
            bulletinTitle, serverStatusTitle, welcome, badPassword, passOrLoginEmpty, userNotFound;

    PanelController panelController;
    DatabasesController dbControl;
    LauncherModule launcherModule;

    private void Awake()
    {
        launcherModule = GetComponent<LauncherModule>();
        address = launcherModule.serverIP;
    }

    private IEnumerator Start()
    {
        siteUserData = new List<string>();
        siteUserData.Clear();
        panelController = GetComponent<PanelController>();
        dbControl = GetComponent<DatabasesController>();        
        ConfigDropTop10();
        ConfigDropdownnLang();

        WWW users = new WWW(address + "/read.php");
        yield return users;
        allLoginName = users.text;
        registeredUsers = allLoginName.Split("|");

        UpdateLanguage();
    }

    private void Update()
    {
        btPlayers.interactable = dbControl.DatabaseIsLoad();
        btLegion.interactable = dbControl.DatabaseIsLoad();
        top10Type.interactable = dbControl.DatabaseIsLoad();
        top10Type.gameObject.SetActive(!top10Title.activeSelf);

        if (isLoggedIn)
        {
            textLogInfo.text = $"{loggedInInfo} <color=orange><b>{loginName}</b></color>";
            TextMeshProUGUI textHome = btLogin.GetComponentInChildren<TextMeshProUGUI>(); 
            textHome.text = btLogoutLabel;
            textHome.color = Color.red;
        }
        else
        {
            textLogInfo.text = loggedOffInfo;
            TextMeshProUGUI textHome = btLogin.GetComponentInChildren<TextMeshProUGUI>(); 
            textHome.text = btLoginLabel;
            textHome.color = Color.blue;
        }
    }

    public void ButtonLogin()
    {
        if (isLoggedIn)
            isLoggedIn = false;
        else
            panelLogin.SetActive(true);
    }

    public void TryToLoginSite()
    {
        siteUserData.Clear();
        textErrorLogin.text = "";               

        if(siteUsernameInput.text == "" || sitePasswordInput.text == "")
        {
            Debug.Log("Username or Password can't be empty!");
            textErrorLogin.text = passOrLoginEmpty;
        }
        else
        {
            //username,email,password,active,lastloginDate
            siteUserData = dbControl.GetSiteUsersData(siteUsernameInput.text);

            if(siteUserData.Count <= 0)
            {
                Debug.Log("User not found!");
                textErrorLogin.text = userNotFound;
            }
            else
            {
                if(siteUserData[2] == EncodedString(sitePasswordInput.text))
                {
                    //login liberated
                    isLoggedIn = true;
                    loginName = siteUserData[0];
                    panelLogin.SetActive(false);
                    string mess = $"{loggedInInfo} {loginName}!";
                    StartCoroutine(ShowMessage(mess));
                }
                else
                {
                    Debug.Log("Incorrect Password!");
                    textErrorLogin.text = badPassword;

                    if (tryLogin > 0)
                    {
                        tryLogin--;
                    }else if (tryLogin == 0)
                    {
                        tryLogin = 3;
                        panelLogin.SetActive(false);
                    }                    
                }

                Debug.Log($"Senha Digitada: {EncodedString(sitePasswordInput.text)}");
                Debug.Log($"Senha Coletada: {siteUserData[2]}");
            }
        }        
    }

    private void ConfigDropTop10()
    {
        List<string> topType = new List<string>();
        topType.Add("Top 10 Killer");
        topType.Add("Top 10 Rich");

        top10Type.ClearOptions();
        top10Type.AddOptions(topType);
    }

    private void ConfigDropdownnLang()
    {
        List<string> lang = new List<string>();
        lang.Add("English");
        lang.Add("Português");
        lang.Add("Français");
        lang.Add("Deutsch");
        lang.Add("Русский");

        languageDown.ClearOptions();
        languageDown.AddOptions(lang);      
    }
    public void UpdateLanguage()
    {
        switch (languageDown.value)
        {
            //0=Eng, 1=Por, 2=Fra, 3=Ger, 4=Russ
            case 0:
                languages = Languages.ENGLISH;
                break;
            case 1:
                languages = Languages.PORTUGUES;
                break;
            case 2:
                languages = Languages.FRANCAIS;
                break;
            case 3:
                languages = Languages.DEUTSCH;
                break;
            case 4:
                languages = Languages.PYCCKNN;
                break;
            default:
                break;
        }
        UpdateLangStrings();
        TextMeshProUGUI textHome = btHome.GetComponentInChildren<TextMeshProUGUI>(); textHome.text = menuHome;
        TextMeshProUGUI textPlayers = btPlayers.GetComponentInChildren<TextMeshProUGUI>(); textPlayers.text = menuTopPlayer;
        TextMeshProUGUI textLegion = btLegion.GetComponentInChildren<TextMeshProUGUI>(); textLegion.text = menuLegion;
        TextMeshProUGUI textDownload = btDownload.GetComponentInChildren<TextMeshProUGUI>(); textDownload.text = menuDownload;
        TextMeshProUGUI textForum = btForum.GetComponentInChildren<TextMeshProUGUI>(); textForum.text = menuForum;
        TextMeshProUGUI textDonate = btDonation.GetComponentInChildren<TextMeshProUGUI>(); textDonate.text = menuDonation;
        TextMeshProUGUI textRegister = btRegister.GetComponentInChildren<TextMeshProUGUI>(); textRegister.text = menuRegister;


        //pageTitle, 
        textWelcome.text = welcome;
    }

    public void UpdatePage(string page = "home")
    {
        //home register download topPlayer legion abyss donate forum
        top10Title.SetActive(false);
        switch (page)
        {
            case "home":
                panelController.UpdadeBulletin();
                panelRegister.SetActive(false);
                panelTop10Player.SetActive(false);
                panelHome.SetActive(true);
                panelDownload.SetActive(false);
                panelDonate.SetActive(false);
                break;
            case "register":
                panelRegister.SetActive(true);
                panelTop10Player.SetActive(false);
                panelHome.SetActive(false);
                panelDownload.SetActive(false);
                panelDonate.SetActive(false);
                break;
            case "download":
                panelDownload.SetActive(true);
                panelRegister.SetActive(false);
                panelTop10Player.SetActive(false);
                panelHome.SetActive(false);
                panelDonate.SetActive(false);
                break;
            case "topPlayer":
                UpdateTop10List();                
                panelRegister.SetActive(false);
                panelTop10Player.SetActive(true);
                panelHome.SetActive(false);
                panelDownload.SetActive(false);
                panelDonate.SetActive(false);
                break;
            case "legion":
                top10Title.SetActive(true);
                panelController.ClearChildrenTop10();
                panelController.GetTopLegion();
                panelRegister.SetActive(false);
                panelTop10Player.SetActive(true);
                panelHome.SetActive(false);
                panelDownload.SetActive(false);
                panelDonate.SetActive(false);
                break;
            case "abyss":                
                panelRegister.SetActive(false);
                panelTop10Player.SetActive(true);
                panelHome.SetActive(false);
                panelDownload.SetActive(false);
                panelDonate.SetActive(false);                
                break;
            case "donate":
                panelRegister.SetActive(false);
                panelTop10Player.SetActive(false);
                panelHome.SetActive(false);
                panelDownload.SetActive(false);
                panelDonate.SetActive(true);
                break;
            case "forum":
                Application.OpenURL(forumUrl);
                break;
        }
    }

    public void DownloadClient()
    {
        Application.OpenURL(client1Download);
        panelRegister.SetActive(false);
        panelTop10Player.SetActive(false);
        panelHome.SetActive(true);
        panelDownload.SetActive(false);
        panelDonate.SetActive(false);
    }
    public void DownloadLauncher()
    {
        Application.OpenURL(launcherDownload);
        panelRegister.SetActive(false);
        panelTop10Player.SetActive(false);
        panelHome.SetActive(true);
        panelDownload.SetActive(false);
        panelDonate.SetActive(false);
    }

    public void UpdateTop10List()
    {
        panelController.ClearChildrenTop10();

        switch (top10Type.value)
        {
            case 0: //killer
                panelController.GetTopPlayer(TopType.KILLER);
                break;
            case 1: //rich
                panelController.GetTopPlayer(TopType.RICH);
                break;
        }
    }
    
    public void TryToRegister()
    {
        if(usernameInput.text == "" || passwordInput.text == "" || emailInput.text == "")
        {
            Debug.Log("Username, Email or Password can't be empty!");
        }
        else
        {
            if(usernameInput.text.Length < 4)
            {
                Debug.Log("Username, deve conter no mínimo 4 caracteres!");
            }else if (!IsAllowed())
            {
                Debug.Log("Username, já cadastrado por outro player!");
            }
            else
            {
                if(emailInput.text.Length < 6)
                {
                    Debug.Log("Email inválido!");
                }else if (passwordInput.text.Length < 6)
                {
                    Debug.Log("A senha deve conter no minimo 6 caracteres!");
                }
                else
                {
                    //"Liberado para registro!"
                    RegisterUser(usernameInput.text, passwordInput.text, emailInput.text);
                    panelRegister.SetActive(false);
                    //sitePage = SitePage.HOME;
                    UpdateLangStrings();
                    StartCoroutine(ShowMessage(messCreateAccount));
                    isLoggedIn = true;
                    loginName = usernameInput.text;
                }
            }
        }
    }

    private void RegisterUser(string name, string pass, string email)
    {
        WWWForm form = new WWWForm();

        form.AddField("namePost", name);
        form.AddField("passwordPost", EncodedString(pass));
        form.AddField("emailPost", email);

        WWW register = new WWW($"http://{address}/insertuser.php", form);
    }

    public static string Base64(string input)
    {
        //byte[] bytesUTF16 = Encoding.Unicode.GetBytes(texto); // codificação UTF-16
        //byte[] bytesASCII = Encoding.ASCII.GetBytes(texto); // codificação ASCII
        byte[] data = Encoding.UTF8.GetBytes(input);
        return Convert.ToBase64String(data);
    }

    static string EncodedString(string input)
    {
        byte[] inputBytes = Encoding.UTF8.GetBytes(input);
        byte[] hashBytes;

        using (SHA1 sha1 = SHA1.Create())
        {
            hashBytes = sha1.ComputeHash(inputBytes);
        }
        return Convert.ToBase64String(hashBytes);
    }

    private string ConvertToSha1(string input)
    {
        byte[] inputBytes = Encoding.UTF8.GetBytes(input);
        byte[] hashBytes;
        using (SHA1 sha1 = SHA1.Create())
        {
            hashBytes = sha1.ComputeHash(inputBytes);
        }
        string hashString = BitConverter.ToString(hashBytes).Replace("-", "").ToLower();        
        return hashString;
    }

    private IEnumerator ShowMessage(string mess)
    {
        panelMessage.SetActive(true);
        textMessage.text = mess;
        yield return new WaitForSeconds(10);
        panelMessage.SetActive(false);
    }

    public void CloseMessage()
    {
        StopCoroutine("ShowMessage");
        panelMessage.SetActive(false);
    }

    public void ClosePanel(GameObject panel)
    {
        panel.SetActive(false);
        UpdatePage("home");
    }

    private bool IsAllowed()
    {
        foreach (string user in registeredUsers)
        {
            if(user == usernameInput.text)
                return false;
        }
        return true;
    }
    private void UpdateLangStrings()
    {
        //string pageTitle, menuHome, menuTopPlayer, menuLegion, menuDownload, menuForum, menuDonation, menuRegister;
        //string messCreateAccount, messageError;
        switch (languages)
        {
            case Languages.ENGLISH:
                menuHome = "Home";
                welcome = "Welcome to";
                bulletin = "Register!<br>Download the Aion 7.7 client and install our launcher.<br>Come and have fun with us in this new world!";
                serverStatusTitle = "Server Status:";
                bulletinTitle = "Bulletin Board";
                btLoginLabel = "Login";
                btLogoutLabel = "Logout";
                loggedOffInfo = "You're logged out!";
                loggedInInfo = "You are logged in as:";
                badPassword = "Incorrect password!";
                passOrLoginEmpty = "Username and Password can't be empty!";
                userNotFound = "User not found!";
                menuTopPlayer = "Top Players";
                menuLegion = "Legions";
                menuDownload = "Downloads";
                menuForum = "Forum";
                menuDonation = "Donate";
                menuRegister = "Register";
                messCreateAccount = "Account created successfully!<br>Now download the Aion client and have fun!<br>Ask your questions in our forum.<br>Enjoy!";
                break;
            case Languages.PORTUGUES:
                bulletinTitle = "Avisos:";
                bulletin = "Registre-se!<br>Faça o download do client Aion 7.7 e instale o nosso launcher.<br>Venha se divertir conosco nesse novo mundo!";
                serverStatusTitle = "Server Status:";
                loggedInInfo = "Você está logado como:";
                loggedOffInfo = "Você está desconectado!";
                badPassword = "Senha Incorreta!";
                passOrLoginEmpty = "Usuário e Senha precisam ser preenchidos!";
                userNotFound = "Usuário não encontrado!";
                btLoginLabel = "Logar";
                btLogoutLabel = "Sair";
                menuHome = "Inicio";
                welcome = "Seja bem-vindo ao";
                menuTopPlayer = "Top Players";
                menuLegion = "Legiões";
                menuDownload = "Downloads";
                menuForum = "Fórum";
                menuDonation = "Doações";
                menuRegister = "Criar Conta";
                messCreateAccount = "Conta criada com sucesso!<br>Agora baixe o cliente Aion e divirta-se!<br>Faça suas perguntas em nosso fórum.<br>Aproveite!";
                break;
            case Languages.FRANCAIS:
                loggedInInfo = "Vous êtes connecté en tant que :";
                loggedOffInfo = "Vous êtes déconnecté !";
                badPassword = "Mot de passe incorrect !";
                passOrLoginEmpty = "Le nom d’utilisateur et le mot de passe ne peuvent pas être vides!";
                userNotFound = "Utilisateur introuvable! ";
                btLoginLabel = "Conn";
                btLogoutLabel = "Déconn";
                menuHome = "Accueil";
                menuTopPlayer = "Top Players";
                menuLegion = "Légions";
                menuDownload = "Télécharg.";
                menuForum = "Forum";
                menuDonation = "Don";
                menuRegister = "Enregistrer";
                messCreateAccount = "Compte créé avec succès! < br >Maintenant, téléchargez le client Aion et amusez-vous! < br >Posez vos questions dans notre forum. < br >Profitez - en!";
                break;
            case Languages.DEUTSCH:
                loggedInInfo = "Sie sind angemeldet als:";
                loggedOffInfo = "Sie sind ausgeloggt!";
                badPassword = "Falsches Passwort!";
                passOrLoginEmpty = "Benutzername und Passwort dürfen nicht leer sein!";
                userNotFound = "Benutzer nicht gefunden!";
                btLoginLabel = "Login";
                btLogoutLabel = "Abmelden";
                menuHome = "Startseite";
                menuTopPlayer = "Top-Spieler";
                menuLegion = "Legionen";
                menuDownload = "Downloads";
                menuForum = "Forum";
                menuDonation = "Spende";
                menuRegister = "Registrieren";
                messCreateAccount = "Konto erfolgreich erstellt! < br >Laden Sie jetzt den Aion-Client herunter und haben Sie Spaß! < br >Stellen Sie Ihre Fragen in unserem Forum. < br >Viel Spaß!";
                break;
            case Languages.PYCCKNN:
                loggedOffInfo = "Вы вышли из системы!";
                loggedInInfo = "Вы вошли в систему как:";
                badPassword = "Неверный пароль!";
                passOrLoginEmpty = "Имя пользователя и пароль не могут быть пустыми!";
                userNotFound = "Пользователь не найден!";
                btLoginLabel = "Вход";
                btLogoutLabel = "Bыход";
                menuHome = "Главная";
                menuTopPlayer = "Лучшие игроки";
                menuLegion = "Легионы";
                menuDownload = "Загрузки";
                menuForum = "Форум";
                menuDonation = "Пожертвование";
                menuRegister = "Регистрация";
                messCreateAccount = "Аккаунт успешно создан! <br>Теперь скачайте клиент Aion и получайте удовольствие! <br>Задавайте свои вопросы на нашем форуме. <br>Наслаждайтесь!";
                break;
            default:
                break;
        }
    }
}

public enum SitePage
{
    HOME,
    REGISTER,
    DOWNLOAD,
    TOP10KILLER,
    TOP10RICH,
    TOP10LEGION,
    ABYSSRANKING
}

public enum Languages
{
    ENGLISH, PORTUGUES, FRANCAIS, DEUTSCH, PYCCKNN //Русский
}
