<?hh
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

$largest = 0;

for ($i = 100; $i <= 999; $i++) {
  for ($k = 100; $k <= 999; $k++) {
    $product = $i * $k;
    $productString = (string) $product;
    if (($productString == strrev($productString)) && $product > $largest) {
      $largest = $product;
    }
  }  
}

echo $largest;
