<?php
// $servername = "localhost";
// $username = "username";
// $password = "password";
//  (hostname, username, password, database_name)
// Create connection
$conn = mysqli_connect('localhost','id19693081_demo26', 'Amitrawat@2612', 'id19693081_demo');
// Check connection
/*
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
  }
  echo "Connected successfully";
  */
  if(isset($_POST['signup']))
  {
    $name = $_POST['name'];
    $email = $_POST['email'];
    $password = $_POST['password'];
    $country = $_POST['country'];
    $query = INSERT INTO `auth` (`id`, `usename`, `email`, `password`, `country`) VALUES ($username, $email, $password, $country);
    $result = mysqli_query($conn,$query);
    if($result)
    {
      echo "Registration Successfully";
    }
    else{ 
      echo "failed:";
    }
  }
  ?>