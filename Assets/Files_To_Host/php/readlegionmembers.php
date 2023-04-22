<?php
$servername = "localhost";
$serverusername = "root";
$serverpassword = "root";
$dbname = "al_server_gs"; //Gameserver

$conn = new mysqli($servername, $serverusername, $serverpassword, $dbname);

if (!$conn) {
    die("Connection Failed! " . mysqli_connect_error());
}

$sql = "SELECT legion_id, player_id, rank, challenge_score FROM legion_members ORDER BY rank DESC";

$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    while ($row = mysqli_fetch_assoc($result)) {
        echo $row['legion_id'] . ";" . $row['player_id'] . ";" . $row['rank'] . ";" . $row['challenge_score'] . "|";
    }
}