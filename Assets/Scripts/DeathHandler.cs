using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeathHandler : MonoBehaviour
{
    [SerializeField] Canvas gameOverCanvas;
    void Start()
    {
        gameOverCanvas.enabled = false;
    }
    public void HandleDeath() {
        // 停止帧时间
        gameOverCanvas.enabled = true;
        GetComponentInChildren<WeaponSwitcher>().enabled = false;
        Time.timeScale = 0;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
    }

}
