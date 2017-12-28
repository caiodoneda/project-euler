<?hh
// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

$list = new Vector(range(1,20));
$found = false;
$i = 0;
while (!$found) {
  $i++;
  $isSmallestMultiple = true;
  foreach ($list as $value) {
    if ($i % $value != 0) {
      $isSmallestMultiple = false;
      break;
    }
  }
  $found = $isSmallestMultiple;
}

echo $i;
