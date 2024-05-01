#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    int n;
    int m;
    int a;
    int exit;
    int exi;

    system("cls");
    system("color 0a");

    printf("Welcome to the Modern Periodic Table\n\n");

    printf("Press 1 to view the table\n");
    printf("Press 2 to exit the table\n");

    printf("Enter your choice: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("To search for an element by atomic number, press 3\n");
        printf("Enter your choice: \n");
        scanf("%d", &m);

        if (m == 3) {
            printf("Enter the atomic number of the element: ");
            scanf("%d", &a);

            switch (a) {
                case 1:
                    printf("Name: Hydrogen\n");
                    printf("Symbol: H\n");
                    printf("Atomic number: 1\n");
                    printf("Atomic weight: 1.00794\n");
                    printf("Group: 1A\n");
                    printf("Period: 1\n");
                    printf("Electron configuration: 1s1\n");
                    break;
                case 2:
                    printf("Name: Helium\n");
                    printf("Symbol: He\n");
                    printf("Atomic number: 2\n");
                    printf("Atomic weight: 4.002602\n");
                    printf("Group: 18A\n");
                    printf("Period: 1\n");
                    printf("Electron configuration: 1s2\n");
                    break;
                case 3:
                    printf("Name: Lithium\n");
                    printf("Symbol: Li\n");
                    printf("Atomic number: 3\n");
                    printf("Atomic weight: 6.941\n");
                    printf("Group: 1A\n");
                    printf("Period: 2\n");
                    printf("Electron configuration: 1s2 2s1\n");
                    break;
                case 4:
                    printf("Name: Beryllium\n");
                    printf("Symbol: Be\n");
                    printf("Atomic number: 4\n");
                    printf("Atomic weight: 9.0121831\n");
                    printf("Group: 2A\n");
                    printf("Period: 2\n");
                    printf("Electron configuration: 1s2 2s2\n");
                    break;
                case 5:
                    printf("Name: Boron\n");
                    printf("Symbol: B\n");
                    printf("Atomic number: 5\n");
                    printf("Atomic weight: 10.81\n");
                    printf("Group: 13A\n");
                    printf("Period: 2\n");
                    printf("Electron configuration: 1s2 2s2 2p1\n");
                    break;
                case 6:
                    printf("Name: Carbon\n");
                    printf("Symbol: C\n");
                    printf("Atomic number: 6\n");
                    printf("Atomic weight: 12.011\n");
                    printf("Group: 14A\n");
                    printf("Period: 2\n");
                    printf("Electron configuration: 1s2 2s2 2p2\n");
                    break;
                case 7:
                    printf("Name: Nitrogen\n");
                    printf("Symbol: N\n");
                    printf("Atomic number: 7\n");
                    printf("Atomic weight: 14.007\n");
                    printf("Group: 15A\n");
                    printf("Period: 2\n");
                    printf("Electron configuration: 1s2 2s2 2p3\n");
                    break;
                case 8:
                    printf("Name: Oxygen\n");
                    printf("Symbol: O\n");
                    printf("Atomic number: 8\n");
                    printf("Atomic weight: 15.999\n");
                    printf("Group: 16A\n");
                    printf("Period: 2\n");
                    printf("Electron configuration: 1s2 2s2 2p4\n");
                    break;
                case 9:
                    printf("Name: Fluorine\n");
                    printf("Symbol: F\n");
                    printf("Atomic number: 9\n");
                    printf("Atomic weight: 18.998\n");
                    printf("Group: 17A\n");
                    printf("Period: 2\n");
                    printf("Electron configuration: 1s2 2s2 2p5\n");
                    break;
                case 10:
                    printf("Name: Neon\n");
                    printf("Symbol: Ne\n");
                    printf("Atomic number: 10\n");
                    printf("Atomic weight: 20.180\n");
                    printf("Group: 18A\n");
                    printf("Period: 2\n");
                    printf("Electron configuration: 1s2 2s2 2p6\n");
                    break;
                // Add cases for more elements...
                case 11:
                    printf("Name: Sodium\n");
                    printf("Symbol: Na\n");
                    printf("Atomic number: 11\n");
                    printf("Atomic weight: 22.990\n");
                    printf("Group: 1A\n");
                    printf("Period: 3\n");
                    printf("Electron configuration: [Ne] 3s1\n");
                    break;
                case 12:
                    printf("Name: Magnesium\n");
                    printf("Symbol: Mg\n");
                    printf("Atomic number: 12\n");
                    printf("Atomic weight: 24.305\n");
                    printf("Group: 2A\n");
                    printf("Period: 3\n");
                    printf("Electron configuration: [Ne] 3s2\n");
                    break;
                case 13:
                    printf("Name: Aluminum\n");
                    printf("Symbol: Al\n");
                    printf("Atomic number: 13\n");
                    printf("Atomic weight: 26.982\n");
                    printf("Group: 13A\n");
                    printf("Period: 3\n");
                    printf("Electron configuration: [Ne] 3s2 3p1\n");
                    break;
                case 14:
                    printf("Name: Silicon\n");
                    printf("Symbol: Si\n");
                    printf("Atomic number: 14\n");
                    printf("Atomic weight: 28.085\n");
                    printf("Group: 14A\n");
                    printf("Period: 3\n");
                    printf("Electron configuration: [Ne] 3s2 3p2\n");
                    break;
                // Continue adding cases for more elements...
                case 15:
                    printf("Name: Phosphorus\n");
                    printf("Symbol: P\n");
                    printf("Atomic number: 15\n");
                    printf("Atomic weight: 30.974\n");
                    printf("Group: 15A\n");
                    printf("Period: 3\n");
                    printf("Electron configuration: [Ne] 3s2 3p3\n");
                    break;
                case 16:
                    printf("Name: Sulfur\n");
                    printf("Symbol: S\n");
                    printf("Atomic number: 16\n");
                    printf("Atomic weight: 32.06\n");
                    printf("Group: 16A\n");
                    printf("Period: 3\n");
                    printf("Electron configuration: [Ne] 3s2 3p4\n");
                    break;
                case 17:
                    printf("Name: Chlorine\n");
                    printf("Symbol: Cl\n");
                    printf("Atomic number: 17\n");
                    printf("Atomic weight: 35.45\n");
                    printf("Group: 17A\n");
                    printf("Period: 3\n");
                    printf("Electron configuration: [Ne] 3s2 3p5\n");
                    break;
                case 18:
                    printf("Name: Argon\n");
                    printf("Symbol: Ar\n");
                    printf("Atomic number: 18\n");
                    printf("Atomic weight: 39.948\n");
                    printf("Group: 18A\n");
                    printf("Period: 3\n");
                    printf("Electron configuration: [Ne] 3s2 3p6\n");
                    break;
                // Add more cases for additional elements up to atomic number 50
                case 19:
                    printf("Name: Potassium\n");
                    printf("Symbol: K\n");
                    printf("Atomic number: 19\n");
                    printf("Atomic weight: 39.098\n");
                    printf("Group: 1A\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 4s1\n");
                    break;
                case 20:
                    printf("Name: Calcium\n");
                    printf("Symbol: Ca\n");
                    printf("Atomic number: 20\n");
                    printf("Atomic weight: 40.078\n");
                    printf("Group: 2A\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 4s2\n");
                    break;
                case 21:
                    printf("Name: Scandium\n");
                    printf("Symbol: Sc\n");
                    printf("Atomic number: 21\n");
                    printf("Atomic weight: 44.956\n");
                    printf("Group: 3B\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d1 4s2\n");
                    break;
                case 22:
                    printf("Name: Titanium\n");
                    printf("Symbol: Ti\n");
                    printf("Atomic number: 22\n");
                    printf("Atomic weight: 47.867\n");
                    printf("Group: 4B\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d2 4s2\n");
                    break;
                case 23:
                    printf("Name: Vanadium\n");
                    printf("Symbol: V\n");
                    printf("Atomic number: 23\n");
                    printf("Atomic weight: 50.942\n");
                    printf("Group: 5B\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d3 4s2\n");
                    break;
                case 24:
                    printf("Name: Chromium\n");
                    printf("Symbol: Cr\n");
                    printf("Atomic number: 24\n");
                    printf("Atomic weight: 51.996\n");
                    printf("Group: 6B\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d5 4s1\n");
                    break;
                case 25:
                    printf("Name: Manganese\n");
                    printf("Symbol: Mn\n");
                    printf("Atomic number: 25\n");
                    printf("Atomic weight: 54.938\n");
                    printf("Group: 7B\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d5 4s2\n");
                    break;
                case 26:
                    printf("Name: Iron\n");
                    printf("Symbol: Fe\n");
                    printf("Atomic number: 26\n");
                    printf("Atomic weight: 55.845\n");
                    printf("Group: 8B\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d6 4s2\n");
                    break;
                case 27:
                    printf("Name: Cobalt\n");
                    printf("Symbol: Co\n");
                    printf("Atomic number: 27\n");
                    printf("Atomic weight: 58.933\n");
                    printf("Group: 8B\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d7 4s2\n");
                    break;
                case 28:
                    printf("Name: Nickel\n");
                    printf("Symbol: Ni\n");
                    printf("Atomic number: 28\n");
                    printf("Atomic weight: 58.693\n");
                    printf("Group: 10B\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d8 4s2\n");
                    break;
                case 29:
                    printf("Name: Copper\n");
                    printf("Symbol: Cu\n");
                    printf("Atomic number: 29\n");
                    printf("Atomic weight: 63.546\n");
                    printf("Group: 11B\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d10 4s1\n");
                    break;
                case 30:
                    printf("Name: Zinc\n");
                    printf("Symbol: Zn\n");
                    printf("Atomic number: 30\n");
                    printf("Atomic weight: 65.38\n");
                    printf("Group: 12B\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d10 4s2\n");
                    break;
                case 31:
                    printf("Name: Gallium\n");
                    printf("Symbol: Ga\n");
                    printf("Atomic number: 31\n");
                    printf("Atomic weight: 69.723\n");
                    printf("Group: 13A\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d10 4s2 4p1\n");
                    break;
                case 32:
                    printf("Name: Germanium\n");
                    printf("Symbol: Ge\n");
                    printf("Atomic number: 32\n");
                    printf("Atomic weight: 72.63\n");
                    printf("Group: 14A\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d10 4s2 4p2\n");
                    break;
                case 33:
                    printf("Name: Arsenic\n");
                    printf("Symbol: As\n");
                    printf("Atomic number: 33\n");
                    printf("Atomic weight: 74.922\n");
                    printf("Group: 15A\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d10 4s2 4p3\n");
                    break;
                case 34:
                    printf("Name: Selenium\n");
                    printf("Symbol: Se\n");
                    printf("Atomic number: 34\n");
                    printf("Atomic weight: 78.971\n");
                    printf("Group: 16A\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d10 4s2 4p4\n");
                    break;
                case 35:
                    printf("Name: Bromine\n");
                    printf("Symbol: Br\n");
                    printf("Atomic number: 35\n");
                    printf("Atomic weight: 79.904\n");
                    printf("Group: 17A\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d10 4s2 4p5\n");
                    break;
                case 36:
                    printf("Name: Krypton\n");
                    printf("Symbol: Kr\n");
                    printf("Atomic number: 36\n");
                    printf("Atomic weight: 83.798\n");
                    printf("Group: 18A\n");
                    printf("Period: 4\n");
                    printf("Electron configuration: [Ar] 3d10 4s2 4p6\n");
                    break;
                // Add more cases as needed for elements up to atomic number 50
                default:
                    printf("Element with atomic number %d not found\n", a);
            }
        }
    }
    else if (n == 2) {
        printf("Do you want to exit the program (yes/no): \n");
        printf("Press 1 for yes\n");
        printf("Press 2 for no\n");

        printf("Enter your choice: ");
        scanf("%d", &exit);

        if (exit == 1) {
            printf("Are you sure you want to exit the periodic table: \n");
            printf("Press 3 for yes\n");
            printf("Press 4 for no\n");

            printf("Enter your choice: ");
            scanf("%d", &exi);

            if (exi == 3) {
                printf("Exited from the periodic table\n");
            }
            else if (exi == 4) {
                printf("Exit from the periodic table not performed\n");
            }
        }
    }

    return 0;
}