# Gear wings
Make a pair of steampunk gear wings that really rotate.

# Materials:
*  Stepper motor (28BYJ-48)
*  Stepper driver (ULN2003 Driver)
*  Stepper shaft coupler (e.g. https://www.amazon.com/dp/B0BF46M4NH?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1)
*  Adafruit Trinket 5V
*  9V battery with header snap and wire leads
*  6x jewelry header pins
*  Cardboard
*  4x M2x8 screws and M2 nuts for securing lid of electronics housing
*  2x M3x8 screws and nuts for securing stepper motor 
*  Strong glue such as Gorilla glue for assembling electronics backpack
*  Straps/ribbons for wearing electronics backpack
*  Optional on-off switch

# Wiring Diagram
![circuit_image](https://github.com/user-attachments/assets/4b2175c9-1c0c-4ceb-80da-5e8f9eb8e209)

# Assembly
Print 1x `center_gear.stl`, 2x each of `gear_3.stl`, `gear_4.stl`, and `gear_5.stl` (there is no gear 1 or gear 2; these were discarded drafts during prototyping).

Optionally print 1x each of `nautilus_left.stl` and `nautilus_right.stl`.

Print 1x each of `lid.stl`, `body.stl`, and `full_stepper_plate.stl`.

Use strong glue to attach the body to the stepper plate. The screw mounts should be closest to the open side of the box, not the side you're gluing to the stepper plate. 

Attach the stepper shaft coupler to the stepper shaft using the provided screw. Glue the center gear (`center_gear.stl`) on top of the coupler (there is an indent in the central gear circle for slotting in the coupler).

Create a wing base by laser cutting `wing_base.svg` out of heavy duty double thickness cardboard, or freestyle your own base out of any material you'd like. You'll need to be able to pierce the material later to place your gears. Cut a hole in your wing base to accomodate the stepper coupler and center gear, then glue the wing base to the 3D printed stepper plate.

Lay out your gears on the wing base and confirm that they all interlock. Pierce the wing base with a jewelry header pin to act as the central rod for each gear. Use jewelry pliers to trim and loop the end of the header wire so that the gear doesn't fall off. 

Assemble your circuit as shown above.

Place the circuit inside your 3D printed backpack. Add ribbons or straps to the lid if desired. Screw the lid down onto the body using M2 screws and secure with M2 nuts. 

<img src="https://github.com/user-attachments/assets/6b0b1447-62e3-4c7f-ad4e-b53277ab48de" width="600" alt="electronics housing">

# Arduino IDE notes
For board, select Adafruit Trinket (ATtiny85 @16MHz). To upload, hold and release the button on the Trinket to enter bootloader mode, then upload using programmer (Ctrl+Shift+U) or Sketch > Upload Using Programmer.

# Recommended improvements:
*  Add washers between the cardboard and the gears to reduce friction.
*  Enlarge or reshape the profile of the electronics housing backpack to better distribute weight across the back. The pack tends to tilt forward, leading to misalignment of the gears.
* Make the backpack shape cuter and more whimsical. Hide some of the stepper wiring that is exposed by the current design.
