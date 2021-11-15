# simulacra-DM
Dactyl Manuform - Simulacra edition

## Compile firmware
qmk compile -kb handwired/simulacra -km default -e PREPROCESSOR=RIGHT

qmk compile -kb handwired/simulacra -km default -e PREPROCESSOR=LEFT

## Flashing firmware
qmk flash -kb handwired/simulacra -km default -bl dfu-split-right

qmk flash -kb handwired/simulacra -km default -bl dfu-split-left
