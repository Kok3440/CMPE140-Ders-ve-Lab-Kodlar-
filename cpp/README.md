\# C++ Algoritmaları ve Dönem Projeleri



Bu depo (repository), C++ programlama dili kullanılarak geliştirilmiş matematiksel hesaplamaları, algoritma analizlerini ve dönem projelerini içermektedir.



\## 📂 İçerik



\### 1. Pi Sayısı Hesaplama Yöntemleri (Approximations of Pi)

Farklı matematiksel ve istatistiksel yöntemlerle Pi sayısına yaklaşım algoritmaları:

\* \*\*Monte Carlo Yöntemi:\*\* Rastgele nokta üretimi (Random Sampling) ile olasılıksal alan hesaplama (`finding\_pi\_ekstra3.cpp`).

\* \*\*Leibniz Serisi:\*\* Sonsuz seri toplamı ile Pi yaklaşımı (`finding\_pi.cpp`, `finding\_pi\_task2.cpp`).

\* \*\*Wallis Çarpımı:\*\* Sonsuz çarpım formülü kullanılarak yapılan hesaplama (`finding\_pi\_ekstra2.cpp`).

\* \*\*Nilakantha Serisi:\*\* Daha hızlı yakınsayan alternatif bir seri yaklaşımı (`finding\_pi\_ekstra.cpp`).



\### 2. Sayı Teorisi Algoritmaları

Matematiksel sayı türlerini analiz eden fonksiyonlar (`hw2task2.cpp`):

\* \*\*Asal Sayı (Prime):\*\* Girilen sayının sadece 1'e ve kendisine bölünüp bölünmediğini kontrol eder.

\* \*\*Mükemmel Sayı (Perfect):\*\* Kendisi hariç pozitif bölenlerinin toplamı kendisine eşit olan sayıları bulur.

\* \*\*Armstrong Sayısı:\*\* Basamaklarının küpleri (veya basamak sayısı kuvvetleri) toplamı kendisine eşit olan sayıları tespit eder.



\### 3. Dönem Projeleri ve Mantık Oyunları

\* \*\*Gelir Vergisi Hesaplayıcı (Tax Calculator):\*\* Belirlenen 5 farklı gelir limitine ve vergi oranına göre (kademeli vergilendirme) net vergi borcunu hesaplar (`term\_project\_1\_düzeltme.cpp`).

\* \*\*Sihirli Tarih (Magic Date):\*\* Girilen tarihin (Ay \* Gün = Yıl) formatına uyup uymadığını kontrol eden mantıksal algoritma (`magic\_date.cpp`).

\* \*\*Yıldız Piramidi:\*\* İç içe döngüler (nested loops) kullanılarak konsola simetrik yıldız deseni çizdirme (`piramit2.cpp`).



\## 🚀 Kurulum ve Çalıştırma

Kodları derlemek için herhangi bir C++ derleyicisi (GCC, Clang) veya IDE (Dev-C++, Visual Studio, VS Code) kullanabilirsiniz.



Örnek Terminal Komutu:

```bash

g++ finding\_pi.cpp -o pi\_hesapla

./pi\_hesapla

