using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ItemBulletinConfig : MonoBehaviour
{
    [Header("Bulletin")]
    public TMP_Text bulletinText;
    LayoutElement textLayout, bulletinLayout;

    public void SetupItem(string title, string texto, bool isFixed = false)
    {
        //bulletinLayout.preferredHeight = bulletinText.rectTransform.rect.height;
        //bulletinText.rectTransform.sizeDelta = new Vector2(bulletinText.rectTransform.sizeDelta.x, bulletinLayout.preferredHeight); 
        //textLayout.preferredHeight = bulletinText.rectTransform.rect.height;

        if (isFixed)
            bulletinText.text = texto;
        else
            bulletinText.text = $"<color=blue><b>{title}</b></color><br>{texto}<br>";
    }

}
