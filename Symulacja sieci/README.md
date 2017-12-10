# OPIS

klasa Worker
dane:
   - czas pracy nad produktem
   - lista oidbiorców wraz z preferencjami (z pliku txt, lista struktur)
   - kolejka produktów do wykoniania
   - typ kolejki (określamy przy tworzeniu workera)
zadania:
   - otrzymaj produkt
   - przekaż produkt (do siebie, do innego robotnika)
   - umieść w magazynie
  
klasa Rampa
dabe:
  -produkty
  -częstotliwość dostarczania
zadania:
  -pobranie produktu (odczyt z pliku)
  tworzenie produktów
  
klasa symulacja 
  dane: 
  -licznik tur
  zadania:
  -wykonaj turę
  
  magzayn
   - przyjmowaniue produktów
   - robienie raportu (do pliku)
   
