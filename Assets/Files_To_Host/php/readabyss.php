<?php
$servername = "localhost";
$serverusername = "root";
$serverpassword = "root";
$dbname = "al_server_gs"; //Gameserver

$conn = new mysqli($servername, $serverusername, $serverpassword, $dbname);

if (!$conn) {
    die("Connection Failed! " . mysqli_connect_error());
}

$sql = "SELECT player_id, ap, rank, daily_kill, all_kill FROM abyss_rank ORDER BY all_kill DESC";

$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    while ($row = mysqli_fetch_assoc($result)) {
        echo $row['player_id'] . ";" . $row['ap'] . ";" . $row['rank'] . ";" . $row['daily_kill'] . ";" . $row['all_kill'] . "|";
    }
}