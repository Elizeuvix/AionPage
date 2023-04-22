using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DatabasesController : MonoBehaviour
{
    List<string> topPlayerList;
    List<string> topLegionList;

    //Players Data
    string[] dataPlayers;
    string[] dataAbyss;
    string[] dataLegions;
    string[] dataMembers;
    string[] dataKinah;
    string[] dataSiteUsers;
    string[] dataBulletin;

    //Giant Strings
    string abyssGiantString;//player_id, ap, rank, daily_kill, all_kill
    string playersGiantString;//id, name, level, race, player_class, join_legion_id
    string legionsGiantString; //id, name, level, contribution_points, rank_cp, rank_pos
    string legionMembersGiantString;//legion_id, player_id, rank, challenge_score
    string kinahGiantString; //item_owner, item_count
    string siteusersGiantString; //id, username, password, email, active, lastlogin
    string bulletinsGiantString; //id, bulletin, date, active, fixed

    //Site Users Data
    string[] bulletinIds;
    string[] bulletinTexts;
    string[] bulletinDates;
    string[] bulletinActives;
    string[] bulletinFixeds;

    //Site Users Data
    string[] siteUserIds;
    string[] siteUsernames;
    string[] siteUsersPass;
    string[] siteUsersEmail;
    string[] siteUsersActives;
    string[] siteUsersLastLogin;

    //Players Data
    string[] id_player;
    string[] name_player;
    string[] level_player;
    string[] race_player;
    string[] class_player;

    //Abyss Data
    string[] id_player_Abyss;
    string[] ap_Abyss;
    string[] rank_Abyss;
    string[] dailyKill_Abyss;
    string[] allKill_Abyss;

    //Legions Data
    string[] id_Legion;
    string[] name_Legion;
    string[] level_Legion;
    string[] cp_Legion;
    string[] rankCp_Legion;
    string[] rankPos_Legion;

    //Members Data
    string[] id_Legion_Member;
    string[] id_Player_Member;
    string[] rank_Member;
    string[] challenge_score_Member;

    //Kinah Data
    string[] id_PlayerKinah;
    string[] playerKinah;

    string address;
    int counter;
    bool playerOk = false, abyssOk = false, legionsOk = false, membersOk = false, kinahOk = false, bulletinOk = false;

    LauncherModule launcherModule;

    private void Start()
    {
        //General configurations
        launcherModule = GetComponent<LauncherModule>();
        address = launcherModule.serverIP;

        //Lists
        topPlayerList = new List<string>();
        topLegionList = new List<string>();

        RefreshData();        
    }

    public void RefreshData()
    {
        //Start Coroutines
        playerOk = false; abyssOk = false; legionsOk = false; membersOk = false; kinahOk = false; bulletinOk = false;
        StartCoroutine("UpdatePlayers");
        StartCoroutine("UpdateAbyss");
        StartCoroutine("UpdateKinah");
        StartCoroutine("UpdateLegions");
        StartCoroutine("UpdateMembers");
        StartCoroutine("UpdateSiteUsers");
        StartCoroutine("UpdateBulletin");
    }

    private IEnumerator UpdateBulletin()
    {
        WWW bulletin = new WWW(address + "/readbulletin.php");
        yield return bulletin;
        bulletinOk = true;
        bulletinsGiantString = bulletin.text;

        dataBulletin = bulletinsGiantString.Split("|");

        bulletinIds = new string[dataBulletin.Length - 1];
        bulletinTexts = new string[dataBulletin.Length - 1];
        bulletinDates = new string[dataBulletin.Length - 1];
        bulletinActives = new string[dataBulletin.Length - 1];
        bulletinFixeds = new string[dataBulletin.Length - 1];

        for (int i = 0; i < dataBulletin.Length; i++)
        {
            string[] temp = dataBulletin[i].Split(";");
            if (temp[0] == "") continue;

            bulletinIds[i] = temp[0];
            bulletinTexts[i] = temp[1];
            bulletinDates[i] = temp[2];
            bulletinActives[i] = temp[3];
            bulletinFixeds[i] = temp[4];
        }
    }

    public bool BulletinIsOk()
    {
        return bulletinOk;
    }

    private IEnumerator UpdateSiteUsers()
    {
        WWW siteusers = new WWW(address + "/readsiteusers.php");
        yield return siteusers;
        //playerOk = true;
        siteusersGiantString = siteusers.text;

        dataSiteUsers = siteusersGiantString.Split("|");

        siteUserIds = new string[dataSiteUsers.Length - 1];
        siteUsernames = new string[dataSiteUsers.Length - 1];
        siteUsersPass = new string[dataSiteUsers.Length - 1];
        siteUsersEmail = new string[dataSiteUsers.Length - 1];
        siteUsersActives = new string[dataSiteUsers.Length - 1];
        siteUsersLastLogin = new string[dataSiteUsers.Length - 1];

        for (int i = 0; i < dataSiteUsers.Length; i++)
        {
            string[] temp = dataSiteUsers[i].Split(";");
            if (temp[0] == "") continue;

            siteUserIds[i] = temp[0];
            siteUsernames[i] = temp[1];
            siteUsersPass[i] = temp[2];
            siteUsersEmail[i] = temp[3];
            siteUsersActives[i] = temp[4];
            siteUsersLastLogin[i] = temp[4];
        }
    }

    private IEnumerator UpdatePlayers()
    {
        WWW players = new WWW(address + "/readplayers.php");
        yield return players;
        playerOk = true;
        playersGiantString = players.text;

        dataPlayers = playersGiantString.Split("|");

        id_player = new string[dataPlayers.Length - 1];
        name_player = new string[dataPlayers.Length - 1];
        level_player = new string[dataPlayers.Length - 1];
        race_player = new string[dataPlayers.Length - 1];
        class_player = new string[dataPlayers.Length - 1];

        for (int i = 0; i < dataPlayers.Length; i++)
        {
            string[] temp = dataPlayers[i].Split(";");
            if (temp[0] == "") continue;

            id_player[i] = temp[0];
            name_player[i] = temp[1];
            level_player[i] = temp[2];
            race_player[i] = temp[3];
            class_player[i] = temp[4];
        }
    }
    private IEnumerator UpdateAbyss()
    {
        WWW abyss = new WWW(address + "/readabyss.php");
        yield return abyss;
        abyssOk = true;
        abyssGiantString = abyss.text;

        dataAbyss = abyssGiantString.Split("|");

        id_player_Abyss = new string[dataAbyss.Length - 1];
        ap_Abyss = new string[dataAbyss.Length - 1];
        rank_Abyss = new string[dataAbyss.Length - 1];
        dailyKill_Abyss = new string[dataAbyss.Length - 1];
        allKill_Abyss = new string[dataAbyss.Length - 1];

        for (int i = 0; i < dataAbyss.Length; i++)
        {
            string[] temp = dataAbyss[i].Split(";");
            if (temp[0] == "") continue;

            id_player_Abyss[i] = temp[0];
            ap_Abyss[i] = temp[1];
            rank_Abyss[i] = temp[2];
            dailyKill_Abyss[i] = temp[3];
            allKill_Abyss[i] = temp[4];
        }
    }
    private IEnumerator UpdateKinah()
    {
        WWW kinah = new WWW(address + "/readkinah.php");
        yield return kinah;
        kinahOk = true;
        kinahGiantString = kinah.text;

        dataKinah = kinahGiantString.Split("|");
        id_PlayerKinah = new string[dataKinah.Length - 1];
        playerKinah = new string[dataKinah.Length - 1];
        //item_owner, item_count

        for (int i = 0; i < dataKinah.Length; i++)
        {
            string[] temp = dataKinah[i].Split(";");
            if (temp[0] == "") continue;

            id_PlayerKinah[i] = temp[0];
            playerKinah[i] = temp[1];
        }
    }
    private IEnumerator UpdateLegions()
    {
        WWW legions = new WWW(address + "/readlegions.php");
        yield return legions;
        legionsOk = true;
        legionsGiantString = legions.text;

        dataLegions = legionsGiantString.Split("|");

        id_Legion = new string[dataLegions.Length - 1];
        name_Legion = new string[dataLegions.Length - 1];
        level_Legion = new string[dataLegions.Length - 1];
        cp_Legion = new string[dataLegions.Length - 1];
        rankCp_Legion = new string[dataLegions.Length - 1];
        rankPos_Legion = new string[dataLegions.Length - 1];

        for (int i = 0; i < dataLegions.Length; i++)
        {
            string[] temp = dataLegions[i].Split(";");
            if (temp[0] == "") continue;

            id_Legion[i] = temp[0];
            name_Legion[i] = temp[1];
            level_Legion[i] = temp[2];
            cp_Legion[i] = temp[3];
            rankCp_Legion[i] = temp[4];
            rankPos_Legion[i] = temp[5];
        }
    }
    private IEnumerator UpdateMembers()
    {
        WWW legionMembers = new WWW(address + "/readlegionmembers.php");
        yield return legionMembers;
        membersOk = true;
        legionMembersGiantString = legionMembers.text;

        dataMembers = legionMembersGiantString.Split("|");

        id_Legion_Member = new string[dataMembers.Length - 1];
        id_Player_Member = new string[dataMembers.Length - 1];
        rank_Member = new string[dataMembers.Length - 1];
        challenge_score_Member = new string[dataMembers.Length - 1];

        for (int i = 0; i < dataMembers.Length; i++)
        {
            string[] temp = dataMembers[i].Split(";");
            if (temp[0] == "") continue;

            id_Legion_Member[i] = temp[0];
            id_Player_Member[i] = temp[1];
            rank_Member[i] = temp[2];
            challenge_score_Member[i] = temp[3];
        }
    }

    public bool DatabaseIsLoad()
    {
        if (playerOk && abyssOk && legionsOk && membersOk && kinahOk && bulletinOk)
            return true;
        else
            return false;
    }

    public List<string> GetTopPlayerList(TopType type)
    {
        if (dataPlayers.Length <= 10)
            counter = dataPlayers.Length - 1;
        else
            counter = 10;

        topPlayerList.Clear();

        switch (type)
        {
            case TopType.KILLER:
                for (int i = 0; i < counter; i++)
                {
                    topPlayerList.Add(GetTopKillerData(i));
                }
                break;
            case TopType.RICH:
                for (int i = 0; i < counter; i++)
                {
                    topPlayerList.Add(GetTopRichData(i));
                }
                break;
            case TopType.ABYSS:
                break;
            default:
                break;
        }

        return topPlayerList;
    }

    private string GetTopKillerData(int index)
    {
        string tempPlayer = "";
        string tempIdPlayer = "";
        string tempIdLegion = "";
        string tempLegion = "No Legion";

        for (int i = 0; i < id_player_Abyss.Length; i++)
        {
            if (i == index)
            {
                for (int x = 0; x < id_player.Length; x++)
                {
                    if (id_player[x] == id_player_Abyss[i])
                    {
                        tempPlayer = $"{name_player[x]};{race_player[x]}";
                        tempIdPlayer = id_player_Abyss[i];
                    }
                    else { continue; }

                    for (int j = 0; j < id_Player_Member.Length; j++)
                    {
                        if (tempIdPlayer == id_Player_Member[j])
                        {
                            tempIdLegion = id_Legion_Member[j];
                        }
                        else { continue; }
                    }

                    for (int j = 0; j < id_Legion.Length; j++)
                    {
                        if (id_Legion[j] == tempIdLegion)
                        {
                            tempLegion = name_Legion[j];
                        }
                        else { continue; }
                    }

                    tempPlayer = $"{tempPlayer};{tempLegion};{allKill_Abyss[i]}";
                }
            }
        }

        if (tempIdPlayer == "" || tempPlayer.Length < 4) { return null; }

        return tempPlayer;
    }

    private string GetTopRichData(int index)
    {
        string tempPlayer = "";
        string tempIdPlayer = "";
        string tempIdLegion = "";
        string tempLegion = "No Legion";

        for (int i = 0; i < playerKinah.Length; i++)
        {
            if (i == index)
            {
                for (int j = 0; j < id_player.Length; j++)
                {
                    if (id_PlayerKinah[i] == id_player[j])
                    {
                        tempPlayer = $"{name_player[j]};{race_player[j]}";
                        tempIdPlayer = id_player[j];

                        for (int x = 0; x < id_Player_Member.Length; x++)
                        {
                            if (tempIdPlayer == id_Player_Member[x])
                            {
                                tempIdLegion = id_Legion_Member[x];
                            }
                        }

                        for (int y = 0; y < id_Legion.Length; y++)
                        {
                            if (id_Legion[y] == tempIdLegion)
                            {
                                tempLegion = name_Legion[y];
                            }
                        }

                        tempPlayer = $"{tempPlayer};{tempLegion};{playerKinah[i]}";
                    }
                }
            }
        }

        if (tempIdPlayer == "" || tempPlayer.Length < 4) { return null; }

        return tempPlayer;
    }

    public List<string> GetTopLegionList()
    {
        if (dataLegions.Length <= 10)
            counter = dataLegions.Length - 1;
        else
            counter = 10;

        topLegionList.Clear();

        for (int i = 0; i < counter; i++)
        {
            topLegionList.Add(GetTopLegionsData(i));
        }

        return topLegionList;
    }

    private string GetTopLegionsData(int index)
    {
        string tempLegion = "";
        string tempIdLegion = "";
        string tempLeaderId = "";

        //LegionName, Race, Leader, Rank
        for (int i = 0; i < id_Legion.Length; i++)
        {
            if (i == index)
            {
                for (int j = 0; j < id_Legion_Member.Length; j++)
                {
                    if (id_Legion_Member[j] == id_Legion[i] && rank_Member[j] == "BRIGADE_GENERAL")
                    {
                        tempIdLegion = id_Legion[i];
                        tempLeaderId = id_Player_Member[j];
                    }
                }

                for (int x = 0; x < id_Legion.Length; x++)
                {
                    if (tempIdLegion == id_Legion[x])
                    {
                        tempLegion = $"{name_Legion[x]}";
                    }
                }

                for (int x = 0; x < id_player.Length; x++)
                {
                    if (tempLeaderId == id_player[x])
                    {
                        tempLegion = $"{tempLegion};{race_player[x]};{name_player[x]};{rankPos_Legion[i]}";
                    }
                }
            }
        }

        return tempLegion;
    }
    public List<string> GetBulletinData()
    {
        List<string> tempBulletin = new List<string>();
        tempBulletin.Clear();

        for (int i = 0; i < bulletinIds.Length; i++)
        {
            if(bulletinActives[i] == "1")
            {
                tempBulletin.Add($"{bulletinTexts[i]};{bulletinDates[i]};{bulletinFixeds[i]}");
            }
        }

        return tempBulletin;
    }

    public List<string> GetSiteUsersData(string username)
    {
        List<string> tempSiteUser = new List<string>();
        tempSiteUser.Clear();

        for (int i = 0; i < siteUserIds.Length; i++)
        {
            if(username == siteUsernames[i])
            {
                tempSiteUser.Add(siteUsernames[i]);
                tempSiteUser.Add(siteUsersEmail[i]);
                tempSiteUser.Add(siteUsersPass[i]);
                tempSiteUser.Add(siteUsersActives[i]);
                tempSiteUser.Add(siteUsersLastLogin[i]);
            }                
        }
        //username,email,password,active,lastloginDate
        return tempSiteUser;
    }
}
