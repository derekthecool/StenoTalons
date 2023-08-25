# Project Requirements

## Basic Features

- The device shall contain three different sections:
  - USB hub that coordinates the left and right hand boards
  - Right hand board
  - Left hand board
- The two handheld boards shall be battery powered
- Key layout description:

  - The left hand shall have S1-,S2-,T-,K-,P-,W-,H-,R-,A-,O-,\*1,#1
  - The right hand shall have #2,\*3,-E,-U,-F,-R,-P,-B,-L,-G,-T,-S,-D,-Z
  - Having S1, S2, and the #1,#2 extra thumb keys will give flexibility on the
    user preferred number input method

    Text visualization of desired key layout

    ```
    S1- T- P- H- *1 *3 -F -P -L -T -D
    S2- K- W- R-       -R -B -G -S -Z
           A- O- #1 #2 -E -U
    ```

## Firmware Features

- The [GeminiPR serial protocol](https://github.com/qmk/qmk_firmware/blob/master/docs/feature_stenography.md#geminipr-idgeminipr)
  shall be used (supported by Plover)
