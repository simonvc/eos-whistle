# eos-whistle

This project turns the **SparkFun QuickLogic Thing Plus – EOS S3** board into a whistle‑to‑MIDI converter. Audio from the microphone is analyzed with a bank of Goertzel filters and mapped to MIDI notes.

## Directory layout

```
firmware/       Firmware source for the EOS S3
  ├── inc/      Header files
  ├── src/      C sources
  └── fpga/     Verilog for optional FPGA logic
host/           Host utilities such as flashing scripts
 docs/          Documentation and notes
```

## Building the firmware

1. Install the Arduino IDE and the **SparkFun QuickLogic EOS S3** board package.
2. Open the `firmware` directory as an Arduino sketch.
3. Select *SparkFun Thing Plus – QuickLogic EOS S3* from the board menu.
4. Click **Upload** to build and program the board.

Alternatively, adapt the Makefile and `host/src/upload.sh` script if you are using the QORC or another bare‑metal toolchain.

## Uploading

If using Arduino, the firmware is uploaded automatically. For a command line workflow, edit `host/src/upload.sh` with the correct flashing command (e.g., `qfprog`) and run it after building.
