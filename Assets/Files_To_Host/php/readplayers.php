<?php
$servername = "localhost";
$serverusername = "root";
$serverpassword = "root";
$dbname = "al_server_gs"; //Gameserver

$conn = new mysqli($servername, $serverusername, $serverpassword, $dbname);

if (!$conn) {
    die("Connection Failed! " . mysqli_connect_error());
}

$sql = "SELECT id, name, level, race, player_class, join_legion_id FROM players";

$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    while ($row = mysqli_fetch_assoc($result)) {
        echo $row['id'] . ";" . $row['name'] . ";" . $row['level'] . ";" . $row['race'] . ";" . $row['player_class'] . ";" .$row['join_legion_id'] . "|";
    }
}