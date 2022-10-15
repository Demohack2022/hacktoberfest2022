import java.util.Random;
import java.util.Scanner;

public class rockPaperScissor {
    public static void main(String[] args) {
        Random r = new Random();
        Scanner scanner = new Scanner(System.in);
        int count  = 0;
        int computerCount = 0;
        while(count < 3 && computerCount < 3) {

            System.out.println("\n---STONE PAPER SCISSORS---\n0: Stone\n1: Paper\n2: Scissor");
            int computer = r.nextInt(3);
            // 0 = stone 1 = paper 2 = scissor
            System.out.print("Your choice: ");
            int choice = scanner.nextInt();
            switch (choice) {
                case 0:
                    if (computer == 0){
                        System.out.println("Computer chose Stone!\nTIE!");
                        count++;
                        computerCount++;
                    }
                    else if (computer == 1){
                        System.out.println("Computer chose Paper!\nYOU LOSE!");
                        computerCount++;
                    }
                    else{
                        System.out.println("Computer chose Scissors!\nYOU WIN!");
                        count++;
                    }
                    break;
                case 1:
                    if (computer == 0) {
                        System.out.println("Computer chose Stone!\nYOU WIN!");
                        count++;
                    }
                    else if(computer == 1) {
                        System.out.println("Computer chose Paper!\nTIE!");
                        count++;
                        computerCount++;
                    }
                    else{
                        System.out.println("Computer chose Scissors!\nYOU LOSE!");
                        computerCount++;
                    }
                    break;
                case 2:
                    if (computer == 0) {
                        System.out.println("Computer chose Stone!\nYOU LOSE!");
                        computerCount++;
                    }
                    else if (computer == 1){
                        System.out.println("Computer chose Paper!\nYOU WIN!");
                        count++;
                    }
                    else{
                        System.out.println("Computer chose Scissors!\nTIE!");
                        count++;
                        computerCount++;
                    }
                    break;
            }
            System.out.println("Score\nYOU: " + count + "\nCOMPUTER: " + computerCount);
        }
        if (computerCount == 3){
            System.out.println("\n\n------COMPUTER WINS!------\nYOU LOST! Better luck next time!");
        }
        else{
            System.out.println("\n\n-----YOU WIN!-----\nCOMPUTER LOST! Told you hoomans can't be defeated");
        }
    }

}
