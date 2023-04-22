using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PanelController : MonoBehaviour
{
    [Header("Top 10 Panel")]
    public GameObject itemTop10Prefab;
    public Transform contentTop10;
    public TMP_Text typeTitleOwner;
    public TMP_Text typeTitleLeaderOrLegion;
    public TMP_Text typeTitlePoint;

    [Header("Bulletin Board Panel")]
    public GameObject itemBulletinPrefab;
    public Transform contentBulletin;

    DatabasesController dbControl;

    private void Start()
    {
        dbControl = GetComponent<DatabasesController>();        
    }

    public void ClearChildrenTop10()
    {
        for (int i = 0; i < contentTop10.childCount; i++)
        {
            Destroy(contentTop10.GetChild(i).gameObject);
        }
    }

    public void ClearChildrenBulletin()
    {
        for (int i = 0; i < contentBulletin.childCount; i++)
        {
            Destroy(contentBulletin.GetChild(i).gameObject);
        }
    }

    public void UpdadeBulletin()
    {
        ClearChildrenBulletin();

        List<string> tempBulletin = new List<string>();
        tempBulletin.Clear();
        tempBulletin = dbControl.GetBulletinData();

        int counter;
        bool isFixed = false;
        if (tempBulletin.Count <= 15)
            counter = tempBulletin.Count;
        else counter = 15;

        for (int i = 0; i < counter; i++)
        {
            //Text, Date, Fixed
            string[] temp = tempBulletin[i].Split(";");
            if(temp[2] == "1") { isFixed = true; } else { isFixed = false; }            

            GameObject go = Instantiate(itemBulletinPrefab);
            go.transform.SetParent(contentBulletin);
            //Date, Information, isFixed
            go.GetComponent<ItemBulletinConfig>().SetupItem(temp[1],temp[0], isFixed);
        }
    }

    public void GetTopLegion()
    {
        int counter = 10;
        //GetTopLegionList()
        List<string> topLegionTemp = dbControl.GetTopLegionList();
        if (topLegionTemp.Count <= 10)
            counter = topLegionTemp.Count;
        else counter = 10;

        typeTitlePoint.text = "Rank";
        typeTitleOwner.text = "Legion";
        typeTitleLeaderOrLegion.text = "Leader";

        for (int i = 0; i < counter; i++)
        {
            string[] temp = topLegionTemp[i].Split(";");

            GameObject go = Instantiate(itemTop10Prefab);
            go.transform.SetParent(contentTop10);
            //LegionName, Race, Leader, Rank
            go.GetComponent<ItemConfig>().SetupItem(temp[0], temp[1], temp[2], temp[3], i);
        }

        dbControl.RefreshData();
    }

    public void GetTopPlayer(TopType type)
    {
        int counter = 10;        

        switch (type)
        {
            case TopType.KILLER:
                List<string> topPlayerTemp = dbControl.GetTopPlayerList(type);
                if (topPlayerTemp.Count <= 10)
                    counter = topPlayerTemp.Count;
                else counter = 10;

                typeTitlePoint.text = "Kills";
                typeTitleOwner.text = "Player";
                typeTitleLeaderOrLegion.text = "Legion";

                for (int i = 0; i < counter; i++){
                    string[] temp = topPlayerTemp[i].Split(";");

                    GameObject go = Instantiate(itemTop10Prefab);
                    go.transform.SetParent(contentTop10);
                    go.GetComponent<ItemConfig>().SetupItem(temp[0], temp[1], temp[2], temp[3], i);
                }
                break;
            case TopType.RICH:
                List<string> topRichTemp = dbControl.GetTopPlayerList(type);
                if (topRichTemp.Count <= 10)
                    counter = topRichTemp.Count;
                else counter = 10;

                typeTitlePoint.text = "Kinah";
                typeTitleOwner.text = "Player";
                typeTitleLeaderOrLegion.text = "Legion";

                for (int i = 0; i < counter; i++)
                {
                    string[] temp = topRichTemp[i].Split(";");

                    GameObject go = Instantiate(itemTop10Prefab);
                    go.transform.SetParent(contentTop10);
                    go.GetComponent<ItemConfig>().SetupItem(temp[0], temp[1], temp[2], temp[3], i);
                }
                break;
        }

        dbControl.RefreshData();
    }
}

public enum TopType
{
    KILLER,
    RICH,
    ABYSS
}
