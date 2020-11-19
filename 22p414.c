#include <stdio.h>

int main() {
	char letters[7] = {'A','B','C','E','F','G','H'}; 
	int count = 1, letter1, letter2, letter3, letter4, letter5, letter6, letter7;
		
		for (letter1=0; letter1<7; letter1++) {
			for (letter2=0; letter2<7; letter2++) {
				if (letter2!=letter1) {
					for (letter3=0; letter3<7; letter3++) {
						if (letter3!=letter2 && letter3!=letter1) {
							for (letter4=0; letter4<7; letter4++) {
								if (letter4!=letter1 && letter4!=letter2 && letter4!=letter3) {
									for (letter5=0; letter5<7; letter5++) {
										if (letter5!=letter1 && letter5!=letter2 && letter5!=letter3 && letter5!=letter4) {
											for (letter6=0; letter6<7; letter6++) {
												if (letter6!=letter5 && letter6!=letter4 && letter6!=letter3 && letter6!=letter2 && letter6!=letter1) {
													for (letter7=0; letter7<7; letter7++) {
														if (letter7!=letter6 && letter7!=letter5 && letter7!=letter4 && letter7!=letter3 && letter7!=letter2 && letter7!=letter1) {
															if (letter1==3) {
																printf("%d. %c %c %c %c %c %c %c\n", count, letters[letter1], 'D', letters[letter2], 
																letters[letter3], letters[letter4], letters[letter5], letters[letter6], letters[letter7]);
																count++;
															} else if (letter2==3) {
																printf("%d. %c %c %c %c %c %c %c\n", count, letters[letter1], letters[letter2], 'D',
																letters[letter3], letters[letter4], letters[letter5], letters[letter6], letters[letter7]);
																count++;
															} else if (letter3==3) {
																printf("%d. %c %c %c %c %c %c %c\n", count, letters[letter1], letters[letter2],
																letters[letter3], 'D', letters[letter4], letters[letter5], letters[letter6], letters[letter7]);
																count++;
															} else if (letter4==3) {
																printf("%d. %c %c %c %c %c %c %c\n", count, letters[letter1], letters[letter2],
																letters[letter3], letters[letter4], 'D', letters[letter5], letters[letter6], letters[letter7]);
																count++;
															} else if (letter5==3) {
																printf("%d. %c %c %c %c %c %c %c\n", count, letters[letter1], letters[letter2],
																letters[letter3], letters[letter4], letters[letter5], 'D', letters[letter6], letters[letter7]);
																count++;
															} else if (letter6==3) {
																printf("%d. %c %c %c %c %c %c %c\n", count, letters[letter1], letters[letter2],
																letters[letter3], letters[letter4], letters[letter5], letters[letter6], 'D', letters[letter7]);
																count++;
															} else if (letter7==3) {
																printf("%d. %c %c %c %c %c %c %c\n", count, letters[letter1], letters[letter2],
																letters[letter3], letters[letter4], letters[letter5], letters[letter6], letters[letter7], 'D');
																count++;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	
	return 0;
}
