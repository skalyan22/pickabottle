using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class transformdetect : MonoBehaviour
{
    public GameObject centerEye;
    public TextMeshProUGUI playerDistanceText;
    public TextMeshProUGUI transformDistanceText;
    public bool isEnabled;

    private float transformAngle;
    private float transformXDistance;
    private float playerAngle;
    private float playerXDistance;

    // Start is called before the first frame update
    void Start()
    {
        isEnabled = false;
    }
    
    // Update is called once per frame
    void Update()
    {
        playerXDistance = centerEye.transform.position.x;
        playerAngle = (((Mathf.Atan2(centerEye.transform.position.z, playerXDistance)) * Mathf.Rad2Deg) + 360) % 360;
        transformXDistance = transform.position.x;
        transformAngle = transform.rotation.eulerAngles.y;

        playerDistanceText.text = "Player X-Position: " + playerXDistance.ToString("0.00") + "\n" + "\n" +
            "Angle of Player: " + playerAngle;

        transformDistanceText.text = "Target's X-Position: " + transformXDistance + "\n" +
            "Angle of Target: " + transformAngle;

        if ((Mathf.Abs(playerXDistance - transformXDistance) < 0.1) &
                (Mathf.Abs(playerAngle - transformAngle) < 5))
        {
            isEnabled = true;
        }
        else
        {
            isEnabled = false;
        }

    }
}
