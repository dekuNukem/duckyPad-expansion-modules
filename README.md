# duckyPad Expansion Module

duckyPad Expansion Module lets you add external **switches / buttons / foot pedals** to your duckyPad Pro.

* **8 Channels** Per Module

* **Daisy-Chain** up to 32 Channels

* USB-C Connector

![alt_text](resources/photos/expdpp.jpeg)

![alt_text](resources/photos/exp.gif)

## Table of Contents

![alt_text](resources/photos/underc.gif)

## Kit Assembly

* **Wash your hands first** to discharge static electricity

You should have the following parts:

![alt_text](resources/photos/items.png)

Insert the `8mm Screws` in `Bottom Plate`:

![alt_text](resources/photos/bottom.jpeg)

Place **something rigid** against the back, and flip over.

The screws should stay in place.

Put on **2.5mm Nylon Spacers**.

![alt_text](resources/photos/nylon.jpeg)

Insert the `Circuit Board`.

Then the `8mm Metal Spacer`

* **Moderately tighten** with a socket bit if available

* If using pliers, avoid scratching the PCB or nearby components.

![alt_text](resources/photos/spacer.jpeg)

Leave the `Top Plate` off for now.

You can install it after everything is wired up.

## Connection

Take a look at the `terminal block`:

![alt_text](resources/photos/block.jpeg)

* There are **7 Channels**, labelled 1 to 7.

* And a **Ground** (GND) connection.

The gist of operation is:

* A channel is **considered active** when it is **shorted to GND**.

Therefore, to wire up a switch, all you need is to:

* Connect **one side** of the switch to **GND**

* And the **other side** to the **desired channel**

-------

As an example, here's a push button with two wires attached:

![alt_text](resources/photos/push.jpeg)

When not pushed, those two wires are isolated.

When pushed, those two wires will be **connected together**.

Therefore, we just need to connect one wire to GND, and the other to a channel.

* Flip up the lever for GND and the desired channel (4 in this example)

![alt_text](resources/photos/flip.jpeg)

* Strip around half inch / 1.2cm of conductor
* Insert into the hole
* Flip level back down

![alt_text](resources/photos/inserted.jpeg)

## Key Test

Use a USB-C cable and connect the module as shown.

* Make sure the `Towards duckyPad` marking faces duckyPad

* The other end is used for daisy-chaining

![alt_text](resources/photos/usbc.png)

Press the `Key Test` script in `Welcome` profile

![alt_text](resources/photos/home.png)

Press a button, the screen should show what is being pressed.

Activate a channel on the expansion module.

The corresponding LED should light up:

![alt_text](resources/photos/led.png)

The screen should respond too:

![alt_text](resources/photos/test.jpeg)

If so, congrats! The wiring is correct.

## Configurator

![alt_text](resources/photos/underc.gif)

