char highestOccurringChar(char input[]) {
    // Write your code here
    int count[52];
    for (int i=0; i<52; i++) {
        count[i] = 0;
    }

    int n = strlen(input);
    if (n==0) {
        return '\0';
    }

    for (int i=0; i<n; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            count[input[i] - 'a']++;
        }

        else if (input[i] >= 'A' && input[i] <= 'Z') {
            count[input[i] - 'A' + 26]++;
        }
    }

    int max = count[0];
    int maxind;
    for (int i=0; i<52; i++) {
        if (count[i] > max) {
            max = count[i];
            maxind = i;
        }
    }
    
    return maxind + 'a';
}