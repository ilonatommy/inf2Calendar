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

dane:
   - produkty
   - częstotliwość dostarczania
   
zadania:
   - pobranie produktu (odczyt z pliku)
   - tworzenie produktów
  
klasa Symulacja 

  dane: 
  - licznik tur
  
  zadania:
  - wykonaj turę
  
klasa Magazyn
   - przyjmowanie produktów
   - robienie raportu (do pliku)
   
klasa-interfejs Kolejka (IQueue)
   - w pełni wirtualna metoda tworzenia kolejki
   
klasa kolejkaFIFO
   - tworzenie kolejki z kontenera STL std:queue poprzez override metody z IQueue
   
klasa kolejkaLIFO   
   - tworzenie kolejki LIFO (stosu) std:stack poprzez override metody z IQueue
   
