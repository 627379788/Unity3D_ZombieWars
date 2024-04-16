using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Characters.FirstPerson;

public class WeaponZoom : MonoBehaviour
{
    Camera mainCamera;
    RigidbodyFirstPersonController fpsController;
    [SerializeField] float zoomedInFov = 20;
    [SerializeField] float zoomedOutFov = 60;
    [SerializeField] float zoomedInSensiitvity = 0.5f;
    [SerializeField] float zoomedOutSensiitvity = 2;
    bool zoomedInToggle = true;
    void Start()
    {
        mainCamera = GetComponentInParent<Camera>();
        fpsController = GetComponentInParent<RigidbodyFirstPersonController>();
    }

    void OnDisable() {
        ZoomOut();
    }

    void Update()
    {
        if (Input.GetButtonDown("Fire2")) {
            UpdateZoom();
        }
    }

    private void UpdateZoom()
    {
        if (zoomedInToggle)
        {
            ZoomIn();
        }
        else
        {
            ZoomOut();
        }
    }

    private void ZoomIn()
    {
        mainCamera.fieldOfView = zoomedInFov;
        fpsController.mouseLook.XSensitivity = zoomedInSensiitvity;
        fpsController.mouseLook.YSensitivity = zoomedInSensiitvity;
        zoomedInToggle = false;
    }

    private void ZoomOut()
    {
        mainCamera.fieldOfView = zoomedOutFov;
        fpsController.mouseLook.XSensitivity = zoomedOutSensiitvity;
        fpsController.mouseLook.YSensitivity = zoomedOutSensiitvity;
        zoomedInToggle = true;
    }
}
