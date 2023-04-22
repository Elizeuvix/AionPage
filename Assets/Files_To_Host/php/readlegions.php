<?php
$servername = "localhost";
$serverusername = "root";
$serverpassword = "root";
$dbname = "al_server_gs"; //Gameserver

$conn = new mysqli($servername, $serverusername, $serverpassword, $dbname);

if (!$conn) {
    die("Connection Failed! " . mysqli_connect_error());
}

$sql = "SELECT id, name, level, contribution_points, rank_cp, rank_pos FROM legions ORDER BY level DESC";

$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    while ($row = mysqli_fetch_assoc($result)) {
        echo $row['id'] . ";" . $row['name'] . ";" . $row['level'] . ";" . $row['contribution_points'] . ";" . $row['rank_cp'] . ";" . $row['rank_pos'] . "|";
    }
}