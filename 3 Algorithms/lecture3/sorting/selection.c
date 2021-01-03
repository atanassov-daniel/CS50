#include <stdio.h>

int main(void)
{
    const int length = 10;
    int array[] = {6, 3, 3, 8, 5, 2, 7, 4, 1, 3};
    print_array(length, array);

    // what do I have to do if the number is equal to the other number? move them both or ignore the second one on this iteration at least
    for(int i = 0; i < length; i++)
    {
        int smallest; // smallest number so far
        int index; // index of the smallest number so far

        for(int j = i; j < length; j++)
        {
            int current = array[j];

            if (current < smallest)
            {
                smallest = current;
                index = j;
            }

            // on the last iteration swap the smallest element with the last one
            if ()
            {
                array[j] = index;
                array[index] = smallest;

            }
        }

    }
    // проверявам на всяка итерация на вложения дали сегашния е по-голям от предишния(ако не съм променял нищо може би) и ако всеки е по-голям от предния(timesBigger == length(-i)) break;-вам

    // какво ще стане ако опитам да разменя местата на последния елемент от масива със следващия, който не е еот масиваа
    // search through all elements and find the smallest one, put it on the first place and on its place put the first one
    // keep the smallest number and also its index for if it is indeed the smallest i'll have to get it
    // then start from the second element and repeat the same steps until we get to the last one

    // vzimam po 2 elementa i gi razmestvam,no kak 6te razbera dali kato cqlo e gotov array-a
}