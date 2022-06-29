
int planetInput(int potval)
{
  if ((potval >= 0) && (potval <= 90))
  {
    Serial.print("Mercury");
    lcd.clear();
    lcd.print("Mercury");
    lcd.setCursor(0,1);
    //print the coordinates in 2nd row
    lcd.print(String(Lat) + ", " + String(Long));
    lcd.setCursor(0,0);
    return 1;
  }
  if ((potval >= 91) && (potval <= 191))
  {
    Serial.print("Venus");
    lcd.clear();
    lcd.print("Venus");
    lcd.setCursor(0,1);
    lcd.print(String(Lat) + ", " + String(Long));
    lcd.setCursor(0,0);
    return 2;
  }
  if ((potval >= 192) && (potval <= 292))
  {
    Serial.print("Mars");
    lcd.clear();
    lcd.print("Mars");
    lcd.setCursor(0,1);
    lcd.print(String(Lat) + ", " + String(Long));
    lcd.setCursor(0,0);
    return 4;
  }
  if ((potval >= 293) && (potval <= 393))
  {
    Serial.print("Jupiter");
    lcd.clear();
    lcd.print("Jupiter");
    lcd.setCursor(0,1);
    lcd.print(String(Lat) + ", " + String(Long));
    lcd.setCursor(0,0);
    return 5;
  }
  if ((potval >= 394) && (potval <= 494))
  {
    Serial.print("Saturn");
    lcd.clear();
    lcd.print("Saturn");
    lcd.setCursor(0,1);
    lcd.print(String(Lat) + ", " + String(Long));
    lcd.setCursor(0,0);
    return 6;
  }
  if ((potval >= 495) && (potval <= 595))
  {
    Serial.print("Uranus");
    lcd.clear();
    lcd.print("Uranus");
    lcd.setCursor(0,1);
    lcd.print(String(Lat) + ", " + String(Long));
    lcd.setCursor(0,0);
    return 7;
  }
  if ((potval >= 596) && (potval <= 696))
  {
    Serial.print("Neptune");
    lcd.clear();
    lcd.print("Neptune");
    lcd.setCursor(0,1);
    lcd.print(String(Lat) + ", " + String(Long));
    lcd.setCursor(0,0);
    return 8;
  }
  if ((potval >= 697) && (potval <= 1023))
  {
    Serial.print("Pluto");
    lcd.clear();
    lcd.print("Pluto");
    lcd.setCursor(0,1);
    lcd.print(String(Lat) + ", " + String(Long));
    lcd.setCursor(0,0);
    return 9;
  }
}
