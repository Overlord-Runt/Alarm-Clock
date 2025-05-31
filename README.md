# Curtain Manager Alarm Clock

Hello there. This project is an alarm clock that opens and closes my curtains for me because im too lazy to open them myself.
  

## Why I made this

This project came to mind after the 3rd day in a row I was unbothered to open my curtains in the morning and came home to a dark room.(darkness is scary)\
What? you expected some deep reason with an emotional backstory?\
Well too bad, everything I make is on a whim, boredom, or for the funnies.

## What this does

This is an alarm clock(shocker I know) that opens my curtains when it goes off.\
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

### The Off Button

The off Button connects to the Alarm Body with wires and can be placed basically anywhere.\
I personally like to use a big red button but if you wish to use something else like a motion sensor, I have left the pins available to use so that it is possible to use either option with no change to the firmware.

Why no snooze button?

Snooze buttons are for losers. If your alarm goes off, get your ass out of bed.


