string timeConversion(string str) {
   int h1 = (int) str[1] - '0';
   int h2 = (int) str[0] - '0';
   int hh = (h2 * 10 + h1 % 10);
   char str2[10];
   char str3[5];
   // If time is in "AM" 
   if (str[8] == 'A') {
      if (hh == 12) {
         strcpy(str2, "00");
         for (int i = 2; i <= 7; i++)
            str2[i] = str[i];
      } else {
         for (int i = 0; i <= 7; i++)
            // cout << str[i]; 
            str2[i] = str[i];
      }
   }

   // If time is in "PM" 
   else {
      if (hh == 12) {
         strcpy(str2, "12");
         for (int i = 2; i <= 7; i++)
            str2[i] = str[i];
      } else {
         hh = hh + 12;
         sprintf(str2, "%d", hh);
         // strcpy(str2,str3);

         for (int i = 2; i <= 7; i++)
            str2[i] = str[i];
      }
   }
   return str2;

}