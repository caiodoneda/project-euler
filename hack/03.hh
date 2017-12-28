<?hh
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?
function getPrimeFactor(int $number, ?int $prime): int {
  if ($prime == null) $prime = 2; 

  while ($number % $prime != 0) {
    $prime = getNextPrime($prime);
  }

  return $prime;
}

function getNextPrime(int $prime): int {
  $found = false;
  $number = $prime;

  while (!$found) {
    $number += 1;
    $found = isPrime($prime);    
  }

  return $number;
}

function isPrime(int $number): bool {
  if ($number == 1) return true;
  if ($number == 2) return true;
  
  $isPrime = false;
  
  for ($i = 2; $i <= $number; $i++ ) {
    if ($number % $i == 0) {
      $isPrime = true;
      break;
    }
  }

  return $isPrime; 
}

$number = 600851475143;
$primeFactors = new Vector();

while ($number != 1) {
  $prime = getPrimeFactor($number, $primeFactors->lastValue());
  $primeFactors->add($prime);
  while($number % $prime == 0) {
    $number = $number / $prime;
  }
}

echo $primeFactors->lastValue();
