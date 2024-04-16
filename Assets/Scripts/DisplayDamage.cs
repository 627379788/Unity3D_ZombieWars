using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DisplayDamage : MonoBehaviour
{
    [SerializeField] Canvas impactCanvas;
    [SerializeField] float displayTime = 3f;

    void Start()
    {
        impactCanvas.enabled = false;
    }
    public void ShowDamageImpact()
    {
        StartCoroutine(ShowSplatter());
    }
    public IEnumerator ShowSplatter()
    {
        impactCanvas.enabled = true;
        yield return new WaitForSeconds(displayTime);
        impactCanvas.enabled = false;
    }
}
