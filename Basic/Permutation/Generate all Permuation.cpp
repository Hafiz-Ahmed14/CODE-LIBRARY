// Code 
int n = 3;
int a[] = [1, 2, 3];
sort(a, a + n);

while(1) {
  paisi = next_permutation(a, a + n);
  if(!paisi) break;
  for(int i = 0; i < n; i++) {
      cout << a[i] << " ";
  }
  cout << '\n';
}
