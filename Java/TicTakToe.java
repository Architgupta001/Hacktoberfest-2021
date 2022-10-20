import java.util.Scanner;


public class TicTakToe  {
    Scanner sc = new Scanner(System.in);

    public void startGame() throws Exception{
        char [][]array = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
        manageGame(array);
    }

    public void manageGame(char[][]array) throws Exception{
        char ch='X';
        int pos;
        displayBoard(array);
        do {
            
            pos = enterUserInput(array,ch);

            array = generateCharacterAndInsertIntoArray(ch, pos, array);
        
            ch = flipTurn(ch,array);
            
            displayBoard(array);

            if(evaluateResult(array)){
                if(!startNewGame())
                    return;
            }

        } while (true);
    }

    public int enterUserInput(char[][]array,char ch){
        int pos=-1;
        System.out.println("Dear player " +ch+"...");
        System.out.print("Enter your position from 1 to 9: ");
        pos = sc.nextInt();

        while(!checkPositionAvailabilityAndValidity(array, pos)){
            System.out.println("\n"+ pos +" is not valid...");
            pos = enterUserInput(array, ch);
        }
        return pos;
    }

    public char flipTurn(char ch,char[][]array){
        if(ch=='X'){
            return 'O';
        }
        else{
            return 'X';
        }
    }

    public boolean checkPositionAvailabilityAndValidity(char[][] array, int pos){
        pos-=1;
        int i=pos/3;
        int j=pos%3;

        if(pos>8 || array[i][j]!=' ')
            return false;

        return true;
    }
    
    public char[][] generateCharacterAndInsertIntoArray(char ch, int pos, char array[][]) throws Exception{
        pos-=1;
        int i=pos/3;
        int j=pos%3;
        
        array[i][j] = ch;

        return(array);

    }
    
    public void displayBoard(char array[][]) throws Exception{
        new ProcessBuilder("cmd.exe", "/c", "cls").inheritIO().start().waitFor();
        
        System.out.println("*---*---*---*");
        for(int i=0; i<3; i++){
            System.out.print("| ");
            for(int j=0; j<3; j++){
                System.out.print(array[i][j] + " | ");
            }
            System.out.println();
            System.out.println("*---*---*---*");
        }
    }

    public boolean evaluateResult(char [][] array){
        if(isFull(array)){
            System.out.println("Better luck...");
            return true;
        }

        //checking rows are equal or not
        for(int i=0; i<3; i++){
            if(array[i][0]==array[i][1] && array[i][1]==array[i][2] && array[i][0]!=' '){
                System.out.println(array[i][0]+ " wins...");
                return true;
            }
        }

        //checking columns are equal or not
        for(int j=0; j<3; j++){
            if(array[0][j]==array[1][j] && array[1][j]==array[2][j] && array[0][j]!=' '){
                System.out.println(array[0][j]+ " wins...");
                return true;
            }
        }

        //cheaking crosses
        if(((array[0][0]==array[1][1] && array[1][1]==array[2][2]) ||  
            (array[0][2]==array[1][1] && array[1][1]==array[2][0])) && 
            array[1][1]!=' '){
                System.out.println(array[1][1]+ " wins...");
                return true;
        }
        
        return false;
    }

    public boolean isFull(char [][] array){
        for(int i=0; i<3; i++){;
            for(int j=0; j<3; j++){
                if(array[i][j]==' ')
                    return false;
            }
        }
        return true;

    }

    public boolean startNewGame() throws Exception{
        System.out.print("\nEnter any key to start a new game, 0 to end it: ");
        int b = sc.nextInt();
        if(b>1)
            startGame();
        
        
        return false;


    }
    
    public static void main(String[] args) throws Exception{
        TicTakToe t = new TicTakToe();
        t.startGame();
    }   
}