#include <bits/stdc++.h> 
vector <int> chuninNinja(int n , int m , vector < vector < int > > arr){
   // Write your code here.
   vector <int> rowmin;
   vector <int> colmax;
   vector <int> result;

   for (int i = 0; i < n; i++) {
      int minr = arr[i][0];
      for (int j = 0; j < m; j++) {
         if (arr[i][j] < minr) minr = arr[i][j]; 
      }
      rowmin.push_back(minr);
   }

   for (int j=0; j<m; j++) {
      int maxc = arr[0][j];
      for (int i=0; i<n; i++) {
         if (arr[i][j] > maxc) {
            maxc = arr[i][j];
         }
         
      }
      colmax.push_back(maxc);
   }

   for (int i=0; i<rowmin.size(); i++) {
      for (int j=0; j<colmax.size(); j++) {
         if (arr[i][j] == rowmin[i] && arr[i][j]==colmax[j]) result.push_back(rowmin[i]);
      }
   }

   return result;
   
}