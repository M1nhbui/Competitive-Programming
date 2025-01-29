#include <stdio.h>

int n = 6, m =3;
int a[] = {0, 5, 6, 3, 4, 5, 3};
int l[] = {0, 1, 2, 4};
int r[] = {0, 4, 5, 6};
int d[100];

int main() {
	int bot = 1, top = 0;
	int pointer = 1;

	for (int i=1; i<=m; i++) 
	{
		// Lấy những thằng có chỉ số nhỏ hơn left ra khỏi queue
		while (!empty() && d[bot] < l[i]) {
			bot++;
		}
		while (pointer <= r[i]) 
		{

			// Lấy những thằng bé hơn a[pointer] ra khỏi queue
			while (!empty() && a[pointer] >= a[d[top]]) {
				d[top] = 0;
				top--;
				// pop();
			}


			// Thêm a[pointer] vào queue
			d[++top] = pointer; // Push_back()



			pointer++;
		}

		printf("Max (%d, %d): %d\n", l[i], r[i], a[d[bot]]);
	}
}

