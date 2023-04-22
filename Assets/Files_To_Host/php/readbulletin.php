<?php
$servername = "localhost";
$serverusername = "root";
$serverpassword = "root";
$dbname = "al_alpha_site"; //Gameserver

$conn = new mysqli($servername, $serverusername, $serverpassword, $dbname);

if (!$conn) {
    die("Connection Failed! " . mysqli_connect_error());
}

$sql = "SELECT id, bulletin, date, active, fixed FROM bulletin ORDER BY fixed, date DESC";

$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    while ($row = mysqli_fetch_assoc($result)) {
        echo $row['id'] . ";" . $row['bulletin'] . ";" . $row['date'] . ";" . $row['active'] . ";" . $row['fixed'] . "|";
    }
}