# Μάθημα 2:

## Python
- Γλώσσα προγραμματισμού υψηλού επιπέδου. Δημιουργήθηκε το *1991*.
Q: Ποια γλώσσα είναι χαμηλού επιπέδου;
- [Πολύ δημοφιλής](https://www.tiobe.com/tiobe-index/)
- Από πού παίρνει το όνομά της;
[Από εδώ](https://www.youtube.com/watch?v=4HB7zqP9QNo)
	
## Ubuntu
- Λειτουργικό σύστημα βασισμένο στον πυρήνα Linux. Λέγεται και Linux Distribution.
### Q: Τι είναι το λειτουργικό σύστημα;
A: Πρόγραμμα που **ελέγχει** τα άλλα προγράμματα
- Market share: https://gs.statcounter.com/os-market-share/desktop/worldwide

## Terminal - Εντολές
Μέσω του terminal επικοινωνούμε με το λειτουργικό σύστημα. Γράφοντας κείμενο και πατώντας enter, επικοινωνούμε με τον **φλοιό** (shell), και εκτελούμε την αντίστοιχη εντολή.
- `ls` (List): Δείχνει όλα τα αρχεία/φακέλους στον φάκελο που βρισκόμαστε.
- `pwd` (Print Working Directory): Μας δείχνει σε ποιον φάκελο είμαστε. Οι φάκελοι χωρίζονται μεταξύ τους με `/`
- `cd [ΦΑΚΕΛΟΣ]` (Change Directory): Πηγαίνουμε στον φάκελο που θέλουμε.
### Q: Τι γίνεται αν δώσω φάκελο που δεν υπάρχει;
- `cd ..`: Πηγαίνουμε έναν φάκελο πίσω (πάνω).
### Q: Τι γίνεται αν δίνω `cd ..` συνέχεια;
- `git pull`: "Τραβάμε" τις καινούριες αλλαγές στον φάκελο shift-pro-coding
- `python`: Καλούμε τον διερμηνέα (interpreter) της Python, που διαβάζει τι γράφουμε γραμμή και γραμμή, το θεωρεί κώδικα Python, και εκτελεί τις αντίστοιχες εντολές.

## Python interpreter
Τρέχoντας την εντολή `python`, παίρνουμε κάτι τέτοιο:
```
Python 3.12.3 (main, Jul 31 2024, 17:43:48) [GCC 13.2.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
```
- Βγαίνω από τον διερμηνέα με exit() ή CTRL-D
- Το exit() είναι παράδειγμα μιας **συνάρτησης** function.
## Ορισμός function:
- Ένα σύνολο από εντολές (), στο οποίο δίνουμε ένα συγκεκριμένο όνομα για να μπορούμε να επαναχρησιμοποιήσουμε.
- Καλώ μια συνάρτηση γράφοντας το όνομά της με παρενθέσεις. π.χ. exit().
### Q: Ξέρουμε άλλες συναρτήσεις;

### Arguments (ορίσματα)
- Κάποιες συναρτήσεις μπορεί να δέχονται **arguments** και να πραγματοποιούν διαφορετική ενέργεια ανάλογα με το τι argument πήραν.
- Τα ορίσματα τα δίνουμε μέσα στις συναρτήσεις.

## print()
### Q: Τι είναι;
### Q: Τι ορίσματα δέχεται;
### Break it!
- print(print)
- print(help)

## Μεταβλητές
Αποθηκεύουμε ένα αντικείμενο που θεωρούμε χρήσιμο, και το βαφτίζουμε με ένα όνομα. Έτσι μπορούμε να το χρησιμοποιούμε πολλές φορές.

```python
number = 42
print(number)
```
Η Python πλέον ξέρει ότι όταν λέω `number`, εννοώ το 42

## Τύποι δεδομένων
### Integers
```python
num1 = 42
num2 = 17
```

## Τελεστές
Σε κάθε τύπο δεδομένων μπορούμε να κάνουμε ορισμένες **πράξεις**. Αυτές τις πράξεις τις λέμε **τελεστές** operators.

### Q: Ποιους τελεστές ξέρουμε;

### Τελεστές σε ακεραίους
Βάλτε print(<variable) για να δείτε το αποτέλεσμα
```python
num1 = 42
num2 = 17
sum = num1 + num2
print(sum)
dif = num1 - num2
dif2 = num2 - num1
mul = num1 * num2
div = num1 / num2
pow = num1 ** 2
mod = num1 % num2
```

### Break it!
- Παίξτε με τα κενά
- Τριπλή πρόσθεση;
- Divide by 0;

## Floats
```python
float1 = 3.01
float2 = 5.04
```

### Τελεστές
```python
flo1 = 3.01
flo2 = 5.02
sum = flo1 + flo2
dif = flo1 - flo2
dif2 = flo2 - flo1
mul1 = flo1 * flo2
pow = flo1 ** 2
```
### Break it!
- Παίξτε με τα κενά
- Τριπλή πρόσθεση;
- Divide by 0;

## Integers & Floats
```python
num1 = 5
num2 = 3.01
sum = num1 + num2
print(sum)
type(sum)
```
- Η εντολή type() δέχεται ως όρισμα μια μεταβλητή και επιστρέφει τον τύπο της
### Break it!
- type(random_variable)
- type(print)
- type(0)

### Δοκιμάστε:
- num1 - num2
- num1 * num2
- num2 / num1
- num1 ** num2

## Strings
Κείμενο που (για να ξεχωρίσουμε) βάζουμε ανάμεσα σε double quotes
```python
text1 = "Hello"
text2 = "Hello, World!"
```
### Q: από που βγαίνει;

### Break it!
- string + integer
- string + float
- string * integer
- string * float
- string ** integer

## Bool
Δύο καταστάσεις: `True` ή `False`.
```python
boo1 = True
boo2 = False
boo3 = not boo1
```

### Από που βγαίνει;
A: https://en.wikipedia.org/wiki/George_Boole

### Break it!
- `boo1 = true`
- `boo2 = false`
- `not not boo1`
- `boo1 + boo2`

## Άλλοι τύποι δεδομένων
- binary
- byte
- char
- long
- double

## Intermission: Jupyter Notebooks
Περιβάλλον που μας βοηθάει να παίζουμε με Python. Αφού βγούμε από την Python:
```
sudo apt install jupyter
```

Φτιάχνουμε ένα notebook:
```
jupyter notebook
```
Και ανοίγουμε το link:

**Το κλείνουμε με CTRL + C**.

## Conditionals

### if
Ελέγχει μια **συνθήκη**, και εκτελεί κάτι αν η συνθήκη είναι αληθινή
```python
number = 5
if number == 10:
	print("The Number is 10!")
```

### input()
Συνάρτηση, μας επιστρέφει την είσοδο που δίνουμε από το πληκτρολόγιο
```python
number = input()
if number == 10:
	print("The Number is 10!")
```

### else
```python
number = input()
if number == 10:
	print("The umber is 10!")
else:
	print("The number is NOT 10! Wow!")
```

### else if
```python
number = input()
if number > 10:
	print("The number is larger than 10!")
else if number < 10:
	print("The number is smaller than 10!")
else:
	print("The number is EXACTLY 10! Wow!")	
```

```python
number = input()
if number >= 10:
	print("The number is larger or equal to 10!")
if number <= 10:
	print("The number is smaller or equal to 10!")
if number != 10:
	print("The number is NOT 10! Wow!")	
```

### Break it!
- if number = 10
```python
number = 3.0 + 5.0
if number == 8:
	print("The result is 8")
else:
	print("Oh no.")	
```

### Άσκηση
Θέλουμε να δεχόμαστε από το πληκτρολόγιο έναν αριθμό και να εξετάζουμε αν είναι μονός ή ζυγός.

### Q: Ασκηση;
Θέλουμε να δεχόμαστε από το πληκτρολόγιο έναν αριθμό και να εξετάζουμε αν είναι πρώτος.


## For loops
```python
for i in range(100):
	print("Dormammu, I've come to bargain!")
for i in range(10, 100):
	print(i)
for i in range(10, 100, 5):
	print(i)	
```

### Άσκηση
Προπαίδεια του 13, μέχρι ΚΑΙ το 169.

## While
```python
i = 1
while i <= 10:
	print(i)
	i = i + 1
```

### Άσκηση
Εκτύπωσε μόνο αριθμούς που διαιρούνται και με το 2 και με το 3 ταυτόχρονα. Αλλά όχι αριθμούς που διαιρούνται με το 24. Και όχι το 102. Το φοβάμαι

### Άσκηση: αριθμοί Fibonacci
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...

### Break it
- While true

### Comments

## Functions
