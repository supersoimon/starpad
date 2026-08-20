# StarPad
StarPad is a Star Wars themed macropad with 4 keys, an OLED screen, a rotary encoder, and runs on QMK.

# Features
StarPad features:
- 4 keys
- 128 x 32 OLED screen
- Rotary Encoder (EC11)
- 4-layer PCB Case

# CAD
Here is the CAD design. It consists of 4 different layers (bottom, main, in between - holds keys together?, and top)
It uses m3 screws and heatset inserts to stay attached. There are two screws holding the PCB down, and 2 screws holding the case together.
<img width="470" height="475" alt="image" src="https://github.com/user-attachments/assets/a7412209-efcc-4b37-b4b6-f82fca82fb19" />
<img width="788" height="630" alt="Screenshot 2026-08-19 182906" src="https://github.com/user-attachments/assets/86f950f8-9b23-45fc-8799-4f88c7b7192a" />

# PCB Design
My PCB has a couple parts to it - a Seedo Xiao RP 2040, 4 keyswitches, an OLED screen, a rotary encoder, and 4 diodes.
<img width="755" height="529" alt="Screenshot 2026-08-19 183332" src="https://github.com/user-attachments/assets/89d2b798-2717-416c-be5f-45f2d6b35ea5" />
<img width="786" height="384" alt="Screenshot 2026-08-19 183340" src="https://github.com/user-attachments/assets/8ca5c180-cfb5-4756-ac46-fc512288779e" />

# Software
I use QMK for this project. The 4 keys control up, down, left, and right movement. The rotary encoder controls volume (haven't coded push yet), and the OLED isn't coded either, but I'm planning on adding a cool Star Wars design.
<img width="864" height="837" alt="Screenshot 2026-08-19 183650" src="https://github.com/user-attachments/assets/b07c75d6-bc4c-40e6-8324-69062824e6b0" />
