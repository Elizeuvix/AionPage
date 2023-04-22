using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ItemConfig : MonoBehaviour
{
    [SerializeField] private TMP_Text textIndex;
    [SerializeField] private TMP_Text textName;
    [SerializeField] private TMP_Text textRace;
    [SerializeField] private TMP_Text textLegion;
    [SerializeField] private TMP_Text textKills;

    public void SetupItem(string name, string race, string legion, string record, int index)
    {  
        textIndex.text = (index + 1).ToString("D2");
        textName.text = name;
        textRace.text = race;
        textLegion.text = legion;
        textKills.text = record;
    }
}
