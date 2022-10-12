<?php
    $first_name = $_POST['first_name'];
    $last_name = $_POST['last_name'];
    $gender = $_POST['gender'];
    $email = $_POST['email'];
    $password = $_POST['password'];
    $number = $_POST['number'];

    $conn = new mysqli('localhost', 'root', '', 'tutorial');
    if($conn->connect_error){
        die('Connection Failed :'.$conn->connect_error);
    }else{
        $stmt = $conn->prepare("insert int registration(first_name, last_name, gender, email, password, number) values(?, ?, ?, ?, ?, ?");
        $stmt->bind_param("sssssi", $first_name, $last_name, $gender, $email, $password, $number)
        $stmt->execute();
        echo "registration successfully.....";
        $stmt->close();
        $conn->close();
    }
?>