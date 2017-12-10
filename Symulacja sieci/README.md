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
   
klasa-interfejs IOdbiorca (Reciever) 

dane:
   - preferencje (domyślnie ustawione na rozklad jednostajny, ale jest też opcja utworzenia odbiorcy ze sprecyzowanymi preferncjami)
   - 
   
zadania:
   - utwórz odbiorcę (konstruktor)
   
klasa Raport (Report)  

dane:
   - częstotliwość raportowania jako array (np. gdy pusta, gdy pole ma wartość 2 to dla 2 tury), przed użyciem tablicę posortwać
   - czas raportowania (np. gdy -1 to brak raportu, gdy 2 to co 2 turę)
   
zadania:   
   - zapisz do plku raport o strukturze sieci
   - zapisz do pliku raport o stanie symulacji
   
klasa Połączenie (Link)   
dane:
   - enum typ wezła (ramp/worker/store)
   - l.poj węzła
   - preferencje wyboru danego odbiorcy
   
