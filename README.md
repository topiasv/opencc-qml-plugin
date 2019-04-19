# OpenCC QML Plugin

Bridge between QML and OpenCC.

# How to use

Simply import the plugin with the following code in your QML file:  
`import net.toxip.openccqml 1.0`  
By default will convert from Simplified to Taiwanese Traditional with Taiwanese idoms.

# API Reference

`QString convert(QString convertString)`  
Converts simplified Chinese into Taiwanese traditional standard.  
  
**Parameters:**  
`QString convertString`: String to convert. By default will use `s2twp` mode. See changeMode method for more details on modes.

`QString changeMode(QString modeString)`
Use this method if you want to change the converter to something else than the default. Will use previous mode if an invalid string is provided.  
  
**Parameters:**  
`QString modeString`: New mode string  

Available modes:

  - `s2t` Simplified Chinese to Traditional Chinese 簡體到繁體
  - `t2s` Traditional Chinese to Simplified Chinese 繁體到簡體
  - `s2tw` Simplified Chinese to Traditional Chinese (Taiwan Standard) 簡體到臺灣正體
  - `tw2s` Traditional Chinese (Taiwan Standard) to Simplified Chinese 臺灣正體到簡體
  - `s2hk` Simplified Chinese to Traditional Chinese (Hong Kong Standard) 簡體到香港繁體（香港小學學習字詞表標準）
  - `hk2s` Traditional Chinese (Hong Kong Standard) to Simplified Chinese 香港繁體（香港小學學習字詞表標準）到簡體
  - `s2twp` Simplified Chinese to Traditional Chinese (Taiwan Standard) with Taiwanese idiom 簡體到繁體（臺灣正體標準）並轉換爲臺灣常用詞彙
  - `tw2sp` Traditional Chinese (Taiwan Standard) to Simplified Chinese with Mainland Chinese idiom 繁體（臺灣正體標準）到簡體並轉換爲中國大陸常用詞彙
  - `t2tw` Traditional Chinese (OpenCC Standard) to Taiwan Standard 繁體（OpenCC 標準）到臺灣正體
  - `t2hk` Traditional Chinese (OpenCC Standard) to Hong Kong Standard 繁體（OpenCC 標準）到香港繁體（香港小學學習字詞表標準）


**TODO**  
Provide a way to define the conversion method to allow conversion between different character sets

# OpenCC Documentation

[http://byvoid.github.io/OpenCC/1.0.4/index.html](http://byvoid.github.io/OpenCC/1.0.4/index.html)
