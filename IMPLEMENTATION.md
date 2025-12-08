# 文字儲存功能實作說明 (Text Save Functionality Implementation)

## 功能描述 (Feature Description)

本次實作為 DesignWindow 應用程式加入了文字編輯和儲存功能。

### 新增功能 (New Features)

1. **QTextEdit 編輯器** - 在主視窗中央加入文字編輯器
2. **儲存功能** - 實作儲存按鈕，將編輯器內容儲存至 .txt 檔案
3. **檔案對話框** - 使用 Qt 的檔案儲存對話框選擇儲存位置
4. **狀態列訊息** - 儲存完成後顯示確認訊息

## 程式碼變更 (Code Changes)

### 1. UI 檔案 (mianwindow.ui)

在 `centralwidget` 中加入 QTextEdit 元件：

```xml
<widget class="QWidget" name="centralwidget">
   <layout class="QVBoxLayout" name="verticalLayout">
    <item>
     <widget class="QTextEdit" name="textEdit">
      <property name="styleSheet">
       <string notr="true">QTextEdit {
    background-color: #1e1e1e;
    color: #ffffff;
    border: 1px solid #3d3d3d;
    selection-background-color: #264f78;
}</string>
      </property>
     </widget>
    </item>
   </layout>
  </widget>
```

### 2. 標頭檔 (mainwindow.h)

加入儲存功能的槽函式和成員變數：

```cpp
private slots:
    void onSaveTriggered();

private:
    QString currentFilePath;
```

### 3. 實作檔 (mainwindow.cpp)

實作儲存功能：

```cpp
void MainWindow::onSaveTriggered()
{
    // 如果尚未設定檔案路徑，開啟儲存對話框
    if (currentFilePath.isEmpty()) {
        currentFilePath = QFileDialog::getSaveFileName(
            this,
            tr("儲存檔案"),
            "",
            tr("文字檔案 (*.txt);;所有檔案 (*.*)")
        );
        
        if (currentFilePath.isEmpty()) {
            return;
        }
    }
    
    // 儲存檔案
    QFile file(currentFilePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("錯誤"), tr("無法儲存檔案"));
        return;
    }
    
    QTextStream out(&file);
    out << textEdit->toPlainText();
    file.close();
    
    statusbar->showMessage(tr("檔案已儲存: ") + currentFilePath, 3000);
}
```

## 編譯步驟 (Build Instructions)

### 前置需求 (Prerequisites)

- Qt 6 開發工具 (Qt 6 Development Tools)
- C++ 編譯器 (g++)
- qmake

### 安裝 Qt 6 (Install Qt 6)

```bash
sudo apt-get update
sudo apt-get install -y qt6-base-dev qt6-tools-dev qt6-tools-dev-tools
```

### 編譯應用程式 (Build the Application)

```bash
cd designwindow
qmake6 designwindow.pro
make
```

## 執行測試 (Testing)

執行應用程式：

```bash
./designwindow
```

### 測試步驟 (Test Steps)

1. 啟動應用程式
2. 在文字編輯器中輸入文字
3. 點擊工具列的「儲存」按鈕或使用選單「檔案 > 儲存(S)」
4. 在檔案對話框中選擇儲存位置並輸入檔案名稱
5. 點擊「儲存」確認
6. 檢查狀態列是否顯示「檔案已儲存」訊息
7. 使用文字編輯器（如 notepad 或 cat）開啟儲存的 .txt 檔案，確認內容正確

## 功能特點 (Features)

✓ 支援多行文字編輯  
✓ 支援中英文及特殊字符  
✓ UTF-8 編碼儲存  
✓ 檔案儲存對話框  
✓ 狀態列確認訊息  
✓ 快捷鍵支援 (Ctrl+S)  
✓ 深色主題介面  

## 測試結果 (Test Results)

所有測試均已通過：

- ✓ 應用程式成功編譯
- ✓ QTextEdit 元件正確整合
- ✓ 儲存功能正常運作
- ✓ 檔案以正確編碼儲存
- ✓ 中文字符正確保存

## 使用範例 (Usage Example)

```
1. 執行程式: ./designwindow
2. 輸入文字: "這是測試文字"
3. 按下 Ctrl+S 或點擊儲存按鈕
4. 選擇儲存路徑: /tmp/test.txt
5. 確認儲存
6. 驗證: cat /tmp/test.txt
```
