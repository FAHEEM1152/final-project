#include <iostream>
using namespace std;

int main()
{
    char a='1', b='2', c='3',
         d='4', e='5', f='6',
         g='7', h='8', i='9';
    int pos;
    char turn = 'X';
    bool validMove;
    bool gameWon = false;

    for(int move = 1; move <= 9; move++) {
        cout << "\n " << a << " | " << b << " | " << c << endl;
        cout << "---|---|---" << endl;
        cout << " " << d << " | " << e << " | " << f << endl;
        cout << "---|---|---" << endl;
        cout << " " << g << " | " << h << " | " << i << endl;

        cout << "\nPlayer " << turn << " enter position: ";
        cin >> pos;

        validMove = true;

        switch(pos)
        {
            case 1: if(a=='1') a=turn; else validMove=false; break;
            case 2: if(b=='2') b=turn; else validMove=false; break;
            case 3: if(c=='3') c=turn; else validMove=false; break;
            case 4: if(d=='4') d=turn; else validMove=false; break;
            case 5: if(e=='5') e=turn; else validMove=false; break;
            case 6: if(f=='6') f=turn; else validMove=false; break;
            case 7: if(g=='7') g=turn; else validMove=false; break;
            case 8: if(h=='8') h=turn; else validMove=false; break;
            case 9: if(i=='9') i=turn; else validMove=false; break;
            default: validMove = false; break;
        }

        if(!validMove)
        {
            cout << "Invalid move! Try again.";
            move--;
            continue;
        }

        if((a==b && b==c) || (d==e && e==f) || (g==h && h==i) ||
           (a==d && d==g) || (b==e && e==h) || (c==f && f==i) ||
           (a==e && e==i) || (c==e && e==g)) {
            cout << "\nCongratulations! Player " << turn << " wins!" << endl;
            gameWon = true;
            break;
        }

        if(turn == 'X') turn = 'O';
        else turn = 'X';
    }

    if(!gameWon) {
        cout << "\nIt's a draw!" << endl;
    }

    return 0;
}
