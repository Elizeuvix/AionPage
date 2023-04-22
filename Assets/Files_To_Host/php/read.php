<?php
$servername = "localhost";
$serverusername = "root";
$serverpassword = "root";
$dbname = "al_server_ls";

$conn = new mysqli($servername, $serverusername, $serverpassword, $dbname);

if (!$conn) {
    die("Connection Failed! " . mysqli_connect_error());
}

$sql = "SELECT name FROM account_data";

$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    while ($row = mysqli_fetch_assoc($result)) {
        echo $row['name']."|";
    }
}
