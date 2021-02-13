# Arrays

[check the notes here](https://cs50.harvard.edu/x/2021/notes/2/)

---

+ `string` is an array of `chars`
+ In C programming we can access value of next memory, by just indexing. Which is a flaw in terms of security.
+ Every array has a '\0' *Null character* which marks the end of array or end of characters
  say suppose you have an array, `a[] = 'allah';` then you can slice it with indexing
  + a[0] &rarr; 'a'
  + a[1] &rarr; 'l and so on
  + a[5] &rarr; '\0', which says its the end of array.
  NOTE: here a[0] is a **Char** but when you take the whole array a its **string**
+ When an array is passed to the function, its passed as reference to the function, which means; change in the array will reflect back in the original array. (implicit = True)
+ `printf(%i, a[i]);`, even though a[i] is a char value when its type-casted into integer it returns **ASCII value** of the char
+ check the end of array with `s[i] != '\0'`
+ Get length of the array with C's **string.h** library &larr; `strlen(a)`
