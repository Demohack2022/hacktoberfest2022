import javax.swing.ImageIcon;
import javax.swing.JPanel;
import javax.swing.Timer;
import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.event.*;
import java.util.Random;
public class gamebody extends JPanel implements ActionListener,KeyListener{
	
	
	//this is for determine position of snake
	private int[] snakexlength = new int[750];
	private int[] snakeylength = new int[750];
	
	private boolean right = false;
	private boolean left = false;
	private boolean up = false;
	private boolean down = false;
	
	
	private ImageIcon rmouth; //right mouth
	private ImageIcon lmouth; //left mouth
	private ImageIcon umouth; //up mouth
	private ImageIcon dmouth; //down mouth
	private ImageIcon snake; //snake body
	
	
    private int[] fruitx= {25,50,75,100,125,150,175,200,225,250,275,300,325,350,375,
    		400,425,450,475,500,525,550,575,600,625,650,675,700,725,750,775,800,825,850};//fruit will be here(X)
    private int[] fruity= {75,100,125,150,175,200,225,250,275,300,325,350,375,400,425,450,475,
    		500,525,550,575,600,625};//fruit will be here(Y)
    
    private ImageIcon fruitimg;//img of fruit
    
    private Random random =new Random();
    
    private int xpos =random.nextInt(34);//random pos for fruit(X)
    private int ypos =random.nextInt(23);//andom pos for fruit(Y)
	
	private Timer time;
	private int delay =150;//speed of snake
	
	private int snakelength=3;//length of snake
	private int moves=0;

	private ImageIcon TitleImg;
	gamebody(){
		 addKeyListener(this);
		 setFocusable(true);
		 setFocusTraversalKeysEnabled(true);
		 time = new Timer(delay,this);
		 time.start();
	}
public void paint(Graphics g) {
	if(moves==0) //initial position of snake
	{
		snakexlength[0]=100;
		snakexlength[1]=75;
		snakexlength[2]=50;
		
		
		snakeylength[0]=200;
		snakeylength[1]=200;
		snakeylength[2]=200;
		
		
	}
	
    g.setColor(Color.WHITE);
	g.drawRect(24,10,851,55);
	
	    g.setColor(Color.WHITE);
		g.drawRect(24,74,851,577);
	
	TitleImg =new ImageIcon("snaketitle.jpg");
	TitleImg.paintIcon(this,g,25,11);
	
	
	g.setColor(Color.WHITE);
	g.setFont(new Font("arial",Font.PLAIN,14));
	g.drawString("score :"+snakelength,780,30);
	
	
	g.setColor(Color.BLACK);
	g.fillRect(25,75,850,575);
	
	
	
	rmouth=new ImageIcon("rightmouth.png");
	rmouth.paintIcon(this,g,snakexlength[0],snakeylength[0]);
	
	for(int i=0;i<snakelength;i++) { 
		//for changing mouth while changing direction
		if(i==0 && right) {
			rmouth=new ImageIcon("rightmouth.png");
			rmouth.paintIcon(this,g,snakexlength[i],snakeylength[i]);
		}
		
		if(i==0 && left) {
			lmouth=new ImageIcon("leftmouth.png");
			lmouth.paintIcon(this,g,snakexlength[i],snakeylength[i]);
		}
		
		if(i==0 && up) {
			umouth=new ImageIcon("upmouth.png");
			umouth.paintIcon(this,g,snakexlength[i],snakeylength[i]);
		}
		
		if(i==0 && down) {
			dmouth=new ImageIcon("downmouth.png");
			dmouth.paintIcon(this,g,snakexlength[i],snakeylength[i]);
		}
		if (i!=0) {
			snake=new ImageIcon("snakeimage.png");
			snake.paintIcon(this,g,snakexlength[i],snakeylength[i]);	
		}
	}
	
	fruitimg = new ImageIcon("enemy.png");
	fruitimg.paintIcon(this,g,fruitx[xpos],fruity[ypos]);
	
	if(fruitx[xpos]==snakexlength[0] && fruity[ypos]==snakeylength[0]) {
	snakelength++;
	xpos=random.nextInt(34);
	ypos=random.nextInt(23);
	}
	
	for(int i=1;i<=snakelength;i++) {
		if(snakexlength[i]==snakexlength[0] &&  snakeylength[i]==snakeylength[0]) {
			g.setColor(Color.WHITE);
			g.setFont(new Font("arial",Font.PLAIN,50));
			g.drawString("GAME OVER", 250, 250);
			right=false;
			left=false;
			up=false;
			down=false;
			
			g.setFont(new Font("arial",Font.PLAIN,25));
			g.drawString("ENTER to RESTART", 250, 350);
		}
	} 
	
	 g.dispose();
}

@Override
public void actionPerformed(ActionEvent e) {
	
	if(right) {
		for(int i=snakelength-1;i>=0;i--) {
			snakeylength[i+1]=snakeylength[i];
		}
		
		for(int i=snakelength;i>=0;i--) {
			if(i==0) {
				snakexlength[i]=snakexlength[i]+25;
			}
			else {
				snakexlength[i]=snakexlength[i-1];//storing the pos in backword variable
			}
			if(snakexlength[i]>850) {
				snakexlength[i]=25;
			}
		}
		repaint();
	}
	
	if(left) {
		for(int i=snakelength-1;i>=0;i--) {
			snakeylength[i+1]=snakeylength[i];
		}
		
		for(int i=snakelength;i>=0;i--) {
			if(i==0) {
				snakexlength[i]=snakexlength[i]-25;
			}
			else {
				snakexlength[i]=snakexlength[i-1];//storing the pos in backword variable
			}
			if(snakexlength[i]<25) {
				snakexlength[i]=850;
			}
		}
		repaint();
	}
	
	if(up) {
		for(int i=snakelength-1;i>=0;i--) {
			snakexlength[i+1]=snakexlength[i];
		}
		
		for(int i=snakelength;i>=0;i--) {
			if(i==0) {
				snakeylength[i]=snakeylength[i]-25;
			}
			else {
				snakeylength[i]=snakeylength[i-1];//storing the pos in backword variable
			}
			if(snakeylength[i]<75) {
				snakeylength[i]=625;
			}
		}
		repaint();
	}
	
	if(down) {
		for(int i=snakelength-1;i>=0;i--) {
			snakexlength[i+1]=snakexlength[i];
		}
		
		for(int i=snakelength;i>=0;i--) {
			if(i==0) {
				snakeylength[i]=snakeylength[i]+25;
			}
			else {
				snakeylength[i]=snakeylength[i-1];//storing the pos in backword variable
			}
			if(snakeylength[i]>625) {
				snakeylength[i]=75;
			}
		}
		repaint();
	}
	
}
@Override
public void keyTyped(KeyEvent e) {
	
}
@Override
public void keyPressed(KeyEvent e) {
	if(e.getKeyCode()==KeyEvent.VK_RIGHT) {
		moves++;
		if(!left) {
			right=true;
		}
		else {
		left=true;
		right=false;
		}
		up=false;
		down=false;
	}
	
	if(e.getKeyCode()==KeyEvent.VK_LEFT) {
		moves++;
		if(!right) {
			left=true;
		}
		else {
		right=true;
		left=false;
		}
		up=false;
		down=false;
	}
	
	if(e.getKeyCode()==KeyEvent.VK_UP) {
		moves++;
		if(!down) {
			up=true;
		}
		else {
		down=true;
		up=false;
		}
		right=false;
		left=false;
	}
	
	if(e.getKeyCode()==KeyEvent.VK_DOWN) {
		moves++;
		if(!up) {
			down=true;
		}
		else {
		up=true;
		down=false;
		}
		right=false;
		left=false;
	}
	
	if(e.getKeyCode()==KeyEvent.VK_ENTER) {
		snakelength=3;//image of snake
	    moves=0;
	    repaint();
	}
	
}
@Override
public void keyReleased(KeyEvent e) {
	// TODO Auto-generated method stub
	
}
}














