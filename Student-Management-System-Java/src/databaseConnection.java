
//import com.sun.jdi.connect.spi.Connection;
import javax.swing.JOptionPane;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Connection;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author hp
 */
public class databaseConnection {
    final static String JDBC_DRIVER="com.mysql.cj.jdbc.Driver";
    final static String DB_URL="jdbc:mysql://localhost:3306/student";
    
    final static String USER="root";
    final static String PASS="";
    
    public static Connection connection() throws SQLException {
        
        try{
            Class.forName(JDBC_DRIVER);
            Connection conn=(Connection) DriverManager.getConnection(DB_URL,USER,PASS);
            System.out.println("connected successfully");
            return conn;
        }catch(ClassNotFoundException e){
            JOptionPane.showMessageDialog(null,e);
            return null;
        }
    }
    
}
