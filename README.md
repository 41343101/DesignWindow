# DesignWindow

Qt6 based text editor application with save functionality.

## Features

- Modern dark theme UI
- Text editing with QTextEdit widget
- Save text to .txt files
- Chinese and English character support
- File save dialog
- Status bar notifications
- Keyboard shortcuts (Ctrl+S for save)

## Build Instructions

### Prerequisites

- Qt 6 development tools
- C++ compiler (g++)
- qmake

### Install Qt 6 (Ubuntu/Debian)

```bash
sudo apt-get update
sudo apt-get install -y qt6-base-dev qt6-tools-dev qt6-tools-dev-tools
```

### Build

```bash
cd designwindow
qmake6 designwindow.pro
make
```

### Run

```bash
./designwindow
```

## Usage

1. Launch the application
2. Type text in the text editor
3. Click the Save button or press Ctrl+S
4. Choose a location and filename
5. Click Save to save the file

## Documentation

See [IMPLEMENTATION.md](IMPLEMENTATION.md) for detailed implementation documentation (Chinese/English).
