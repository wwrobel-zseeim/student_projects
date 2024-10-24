# Schody

Program oblicza ilość, długość i głębokość schodów w klatce schodowej, której wymiary są podane przez użytkownika.

# Standardy wielkości schodów

Według standardów, ergonomiczne schody powinny mieć następujące wymiary:

Wysokość schodów: **16-18 cm** <br>
Głębokość schodów: **25-32 cm**

# Działanie programu

1. Użytkownik podaje długość i wysokość w milimetrach miejsca, w którym chce zmieścić schody
2. Program sprawdza, czy schody się zmieszczą dzieląc dostępną wysokość przez kolejne liczby z zakresu [160;180]
3. Gdy program znajdzie najmniejszy dzielnik wysokości dostępnej przestrzeni ustawia liczbę schodów na zaokrągloną w górę wartość dzielenia długości dostępnej przestrzeni przez dzielnik z podanego wyżej zakresu
4. Jeżeli program nie znajdzie dzielnika wysokości dla jakiejkolwiek liczby z zakresu, zwraca wiadomość, że nie można stworzyć ergonomicznych schodów dla tej wysokości
5. Program dzieli dostępną długość na liczbę schodów, uzyskując długość jednego schodu
6. Jeżeli długość jednego schoda nie będzie mieścić się w zakresie 250-320 mm, od długości odejmuje 1 i powtarza powyższy algorytm
7. Jeżeli długość spadnie poniżej 250 mm, program zwraca wiadomość, że nie można stworzyć ergonomicznych schodów dla tej długości
8. Program zwraca ilość, długość, wysokość schodów i końcową łączną długość schodów

# Przykładowe wartości

<table>
	<tr>
		<th>Wysokość klatki schodowej</th>
		<th>Długość klatki schodowej</th>
		<th>Ilość schodów</th>		
		<th>Wysokość stopnia</th>
		<th>Głębokość stopnia</th>
		<th>Końcowa długość schodów</th>
	</tr>
	<tr>
		<td>360</td>
		<td>550</td>
		<td>2</td>
		<td>180</td>
		<td>275</td>
		<td>550</td>
	</tr>
	<tr>
		<td>1600</td>
		<td>2513</td>
		<td>10</td>
		<td>160</td>
		<td>251</td>
		<td>2510</td>
	</tr>
	<tr>
		<td>18180</td>
		<td>27000</td>
		<td>101</td>
		<td>180</td>
		<td>267</td>
		<td>26967</td>
	</tr>
</table>

# Testy

W pliku main_test.cpp załączono testy automatyczne napisane z użyciem biblioteki gtest dla podanych w tabeli przykładowych wartości wartości


