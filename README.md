# Curtain Manager Alarm Clock

![hi](assets/case2.png)

Hello there. This project is an alarm clock that opens and closes my curtains for me because im too lazy to open them myself.
  

## Why I made this

This project came to mind after the 3rd day in a row I was unbothered to open my curtains in the morning and came home to a dark room.(darkness is scary)\
What? you expected some deep reason with an emotional backstory?\
Well too bad, everything I make is on a whim, boredom, or for the funnies.

## What this does

This is an alarm clock(shocker I know) that opens my curtains when it goes off.\
It has the following features:\

- Alarm Clock(You could have never guessed)
- Outside weather
- Inside weather
- Customisable Ring tone
- Opens Curtains for you

It is made up of 3 main sections:

- The Motor
- The Alarm body
- The Off Button

### The Motor
The motor I used for this is a NEMA17 Stepper and I designed a frame and gear for the motor to pulled my beaded curtain string.\
I chose this motor for 3 main reasons:

- The curtain is quite heavy and I dont believe a 5V motor could pull that much weight
- This stepper is quite cheap and I have used it before with it being simple to use.
- Steppers are cooler than 5V motors

I use a PCB to connect it to an A4988 stepper motor driver. This driver simplifies the firmware and wiring needed to control the motor.\
I also put a Buck Coverter inside because the stepper requires 12V whereas the alarm body needs 5, so the step down from a 12V power supply is what I felt would be easiest.\
If you want to use any other methods, it should be pretty easy to do.

### The Alarm Body

The alarm body features a 3d printed body, OLED SSD1306 128X64 Screen to view the current time, set alarm time, and view the weather. It also has 4 buttons that you czn use to change the time and do other cool programable things.

Inside there are

- 4 Buttons
- An SSD1306 OLED screen
- An ESP32
- An RTC
- 2 Buzzers
- A DHT22 sensor

The Alarm Body and the Motor are connected through a USBA-A cable as that allows for power transmission and for the 2 datalines for the stepper to transmit between the 2 modules in one clean cable.

![pcb](assets/pcb.png)

### The Off Button

The off Button connects to the Alarm Body with wires and can be placed basically anywhere.\
I personally like to use a big red button but if you wish to use something else like a motion sensor, I have left the pins available to use so that it is possible to use either option with no change to the firmware.

Why no snooze button?

Snooze buttons are for losers. If your alarm goes off, get your ass out of bed.

## How to make it

Wow you also wanna make this. I am honoured to hear that.

First thing you wanna do is download the cad folder and get all those files printing.

![boo](assets/case2.png)

This is the anoying part

![annoying](assets/motor.png)

I made this part to fit my own curtains. You will have to edit it to fit your own curtains. Everything else should be kept the same.

Order all the parts and the pcb. Once they arrive, you can get to soldering it all together. I will include photos of the finished version once I build it myself so you have a reference.

You need to put 3 heatsets per pcb and then 4 for the front panel of the Alarm Body.

The button connects via wires going through the back hole. the placement of the USBA hole is hopefully correct, If not, I can just change it.

After that you can flash the esp with firmware listed in the firmware folder(WIP FOR NOW) and screw everything in.

## Design files

Here are photos of the design files and models

![p](assets/pcb.png)\
![p](assets/PCB3.png)\
![p](assets/schm1.png)\
![p](assets/schm2.png)\
![p](assets/case2.png)\
![p](assets/motor.png)

# Bill Of Materials

List Of all materials needed to make this.


 - Nema17 Stepper Motor - x1 -  $5.13 - [source](https://www.aliexpress.com/item/1005007988050979.html?spm=a2g0o.cart.0.0.440338dakTt8D5&mp=1&pdp_npi=5%40dis%21AUD%21AUD%207.97%21AUD%203.23%21%21AUD%203.23%21%21%21%402103209b17486889160791148ef42c%2112000043173756354%21ct%21AU%216138339337%21%211%210)
 - Buzzer - x2
 - SSD1306 128X64 OLED display - X1 - $3.15 - Preowned
 - Buck Converter - X1 - $3.09 - [source](https://www.aliexpress.com/item/1005007259901753.html?spm=a2g0o.cart.0.0.3fb538daUB00x5&mp=1&pdp_npi=5%40dis%21AUD%21AUD%205.20%21AUD%204.89%21%21AUD%204.89%21%21%21%402101e9ec17487026778881064ecff3%2112000039979305524%21ct%21AU%216138339337%21%211%210)
 - RTC - X1 - $2.27 - [source](https://www.aliexpress.com/item/1005008172587774.html?spm=a2g0o.cart.0.0.3fb538daUB00x5&mp=1&pdp_npi=5%40dis%21AUD%21AUD%203.54%21AUD%203.54%21%21AUD%203.37%21%21%21%402101e9ec17487026778881064ecff3%2112000044177906467%21ct%21AU%216138339337%21%211%210)
 - ESP32-WROOM Dev Board - X1 - $4.24 - [source](https://www.aliexpress.com/item/1005006456519790.html?spm=a2g0o.cart.0.0.3fb538daUB00x5&mp=1&pdp_npi=5%40dis%21AUD%21AUD%2019.78%21AUD%206.61%21%21AUD%206.54%21%21%21%402101e9ec17487026778881064ecff3%2112000037265317361%21ct%21AU%216138339337%21%211%210)
 - PCB - X2 - $12.06 - JLCPCB
 - M3X05X06 Heatsets - X10 - $2.49 - [source](https://www.aliexpress.com/item/1005003582355741.html?spm=a2g0o.cart.0.0.3fb538daUB00x5&mp=1&pdp_npi=5%40dis%21AUD%21AUD%203.89%21AUD%203.89%21%21AUD%203.81%21%21%21%402101c59517487030715636687ef171%2112000026370649803%21ct%21AU%216138339337%21%211%210)
 - M3X6mm Screws - X14 - $1 - [source](https://www.aliexpress.com/item/32810852732.html?spm=a2g0o.cart.0.0.3fb538daUB00x5&mp=1&pdp_npi=5%40dis%21AUD%21AUD%202.32%21AUD%201.56%21%21AUD%201.48%21%21%21%402101e9ec17487026778881064ecff3%2112000037550700849%21ct%21AU%216138339337%21%211%210)
 - 12V Battery - X1 - $16.06 - [source](https://www.jaycar.com.au/12v-2-2ah-sla-battery/p/SB2482)
 - DHT22 Sensor - X1 - $1.73 - [source](https://www.aliexpress.com/item/32759901711.html?spm=a2g0o.cart.0.0.3fb538daUB00x5&mp=1&pdp_npi=5%40dis%21AUD%21AUD%202.69%21AUD%202.69%21%21AUD%202.69%21%21%21%402101e9ec17487026778881064ecff3%2162102476019%21ct%21AU%216138339337%21%211%210)
 - A4988 Motor Driver - X1 - $2.12 - [source](https://www.aliexpress.com/item/1005001771907921.html?spm=a2g0o.productlist.main.7.651fvWRBvWRBe0&algo_pvid=2133a30e-defa-4302-9858-dbc2495931f1&algo_exp_id=2133a30e-defa-4302-9858-dbc2495931f1-6&pdp_ext_f=%7B%22order%22%3A%22398%22%2C%22eval%22%3A%221%22%7D&pdp_npi=4%40dis%21AUD%214.89%214.89%21%21%213.10%213.10%21%402103010b17487023403607387e16b7%2112000046636839301%21sea%21AU%216138339337%21ABX&curPageLogUid=J6WxTjF3i9rx&utparam-url=scene%3Asearch%7Cquery_from%3A)
 - DS1095 USBA female port - X2 - $1.38 - [source](https://www.aliexpress.com/item/1005007822597305.html?spm=a2g0o.productlist.main.10.5df02562xE320M&algo_pvid=dd419a23-631b-4b7b-a0fb-6edaa9da48a0&algo_exp_id=dd419a23-631b-4b7b-a0fb-6edaa9da48a0-9&pdp_ext_f=%7B%22order%22%3A%221101%22%2C%22eval%22%3A%221%22%2C%22orig_sl_item_id%22%3A%221005007822597305%22%2C%22orig_item_id%22%3A%221005007077769791%22%7D&pdp_npi=4%40dis%21AUD%213.86%211.85%21%21%2117.58%218.44%21%402101eac917487032447777243efaea%2112000042331903916%21sea%21AU%216138339337%21ABX&curPageLogUid=2g05IbKQywTu&utparam-url=scene%3Asearch%7Cquery_from%3A)
 - USBA-A Cable - X1 - $1.29 - [source](https://www.aliexpress.com/item/1005007441805917.html?spm=a2g0o.productlist.main.3.296elc0wlc0w0u&algo_pvid=5a890205-65cb-4692-ae3d-cc6aeffe4b49&algo_exp_id=5a890205-65cb-4692-ae3d-cc6aeffe4b49-2&pdp_ext_f=%7B%22order%22%3A%224813%22%2C%22eval%22%3A%221%22%7D&pdp_npi=4%40dis%21AUD%212.04%211.56%21%21%219.30%217.11%21%4021030ea417487034244743454ed487%2112000040770581049%21sea%21AU%216138339337%21ABX&curPageLogUid=J4UnCQ3jA9Ju&utparam-url=scene%3Asearch%7Cquery_from%3A)
 - 6mm Buttons - X4
 - Wire - 1m

Total: $56.01


