<?php

$servername = "localhost";
$serverusername = "root";
$serverpassword = "root";
$dbname = "al_server_ls";

$user = $_POST["namePost"];
$password = $_POST["passwordPost"];
$email = $_POST["emailPost"];

$conn = new mysqli($servername, $serverusername, $serverpassword, $dbname);

if (!$conn) {
    die("Connection Failed! " . mysqli_connect_error());
}

$sql = "INSERT INTO account_data(name, password, email) VALUES ('" . $user . "', '" . $password . "', '" . $email . "')";

$result = mysqli_query($conn, $sql);

if (!$result) echo "Error!";
else echo "Success!";

?>