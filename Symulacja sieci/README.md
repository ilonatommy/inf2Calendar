# OPIS

klasa Pracownik (Worker)

dane:
   - czas pracy nad produktem
   - lista odbiorców wraz z preferencjami (z pliku txt, lista struktur)
   - kolejka produktów do wykoniania
   - typ kolejki (określamy przy tworzeniu workera)

zadania:
   - otrzymaj produkt
   - przekaż produkt (do siebie, do innego robotnika)
   - umieść w magazynie
  
klasa Rampa (Ramp)

dane:
   - produkt
   - częstotliwość dostarczania
   - lista odbiorców wraz z preferencjami ("Przyjmij, że na rampie pracuje osoba, która może mieć swoje preferencje…")
   
zadania:
   - pobranie produktu (odczyt z pliku?)
   - tworzenie produktów (CZYM SIĘ TO RÓŻNI OD POBRANIA?, CZEMU NIE JEST TO JEDNA METODA?)
  
klasa Symulacja (Simulation)

  dane: 
  - licznik tur
  
  zadania:
  - wykonaj turę
  
klasa Magazyn (Store)

zadania:
   - przyjmowanie produktów
   - robienie raportu (do pliku)
   
klasa-interfejs Kolejka (IQueue)
   - w pełni wirtualna metoda tworzenia kolejki
   
klasa kolejkaFIFO (FIFO)
   - tworzenie kolejki z kontenera STL std:queue poprzez override metody z IQueue
   
klasa kolejkaLIFO (LIFO)
   - tworzenie kolejki LIFO (stosu) std:stack poprzez override metody z IQueue
   
klasa Odbiorca (Reciever) 

dane:
   - preferencje (domyślnie ustawione na rozklad jednostajny, ale jest też opcja utworzenia odbiorcy ze sprecyzowanymi preferncjami)
   - 
   
   
   
