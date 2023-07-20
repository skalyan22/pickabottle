using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using System;

public class trialManager : MonoBehaviour
{
    public enum TrialPhase
    {
        bInstructions,
        tDetector,
        observation,
        selection
    }

    public TextMeshProUGUI beginningInstructions;
    public TextMeshProUGUI gameInstructions;
    public TextMeshProUGUI playerPos;
    public TextMeshProUGUI targetPos;
    public TextMeshProUGUI gameTimer;
    public GameObject transformdetect;
    public transformdetect enable;
    public GameObject line;
    public GameObject bottleDisplay;
    public Button continueButton;
    public TrialPhase currentPhase;
    public label labelDisplayRef;

    private int count;
    // Start is called before the first frame update
    void Start()
    {
        currentPhase = TrialPhase.bInstructions;
        gameInstructions.gameObject.SetActive(false);
        line.gameObject.SetActive(false);
        transformdetect.gameObject.SetActive(false);
        bottleDisplay.gameObject.SetActive(false);
        continueButton.gameObject.SetActive(false);
        count = 0;
    }

    // Update is called once per frame
    void Update()
    {
        switch(currentPhase)
        {
            case TrialPhase.bInstructions:
                UpdateBeginningInstructions();
                break;
            case TrialPhase.tDetector:
                UpdateTransformDetect();
                break;
            case TrialPhase.observation:
                break;
            case TrialPhase.selection:
                UpdateSelection();
                break;
         }
        Debug.Log(currentPhase);
    }

    private IEnumerator beginningHelper()
    {
        yield return new WaitForSeconds(7f);
        beginningInstructions.gameObject.SetActive(false);
        currentPhase = TrialPhase.tDetector;
    }
    private void UpdateBeginningInstructions()
    {
        count += 1;
        if (count == 30)
        {
            Application.Quit();
        }
        beginningInstructions.gameObject.SetActive(true);
        StartCoroutine(beginningHelper());
    }
    private void UpdateTransformDetect()
    { 
        transformdetect.gameObject.SetActive(true);
        if (enable.isEnabled)
        {
            playerPos.gameObject.SetActive(false);
            targetPos.gameObject.SetActive(false);
            transformdetect.gameObject.SetActive(false);
            gameInstructions.gameObject.SetActive(true);
            continueButton.gameObject.SetActive(true);
            gameTimer.text = "";
            currentPhase = TrialPhase.observation;
        }
    }

    private System.Collections.IEnumerator Timer()
    {
        labelDisplayRef.gameObject.SetActive(true);
        labelDisplayRef.display();
        float timer = 30f;
        while (timer > 0f)
        {
            int seconds = Mathf.FloorToInt(timer);
            gameTimer.text = "Time Left: " + seconds.ToString();
            yield return new WaitForSeconds(1f);
            timer -= 1f;
        }
        gameTimer.text = "";
        line.gameObject.SetActive(false);
        currentPhase = TrialPhase.selection;
    }

    public void buttonClick()
    {
        gameInstructions.gameObject.SetActive(false);
        line.gameObject.SetActive(true);
        bottleDisplay.gameObject.SetActive(true);
        continueButton.gameObject.SetActive(false);
        StartCoroutine(Timer());
    }

    private void UpdateSelection()
    {
        if (Input.GetKey(KeyCode.G) || Input.GetKey(KeyCode.H) || Input.GetKey(KeyCode.J))
        {
            line.gameObject.SetActive(false);
            bottleDisplay.gameObject.SetActive(false);
            continueButton.gameObject.SetActive(false);
            labelDisplayRef.gameObject.SetActive(false);
            currentPhase = TrialPhase.bInstructions;
        }
    }
}
