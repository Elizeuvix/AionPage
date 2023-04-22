<?php
$servername = "localhost";
$serverusername = "root";
$serverpassword = "root";
$dbname = "al_alpha_site";

$conn = new mysqli($servername, $serverusername, $serverpassword, $dbname);

if (!$conn) {
    die("Connection Failed! " . mysqli_connect_error());
}

$sql = "SELECT id, username, password, email, active, lastlogin FROM siteusers";

$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    while ($row = mysqli_fetch_assoc($result)) {
        echo $row['id'] . ";" . $row['username'] . ";" . $row['password'] . ";" . $row['email'] . ";" . $row['active'] . ";". $row['lastlogin'] . "|";
    }
}
