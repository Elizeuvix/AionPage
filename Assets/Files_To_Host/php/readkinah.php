<?php
$servername = "localhost";
$serverusername = "root";
$serverpassword = "root";
$dbname = "al_server_gs"; //Gameserver

$conn = new mysqli($servername, $serverusername, $serverpassword, $dbname);

if (!$conn) {
    die("Connection Failed! " . mysqli_connect_error());
}

$sql = "SELECT item_owner, item_id, item_count FROM inventory WHERE item_id=182400001 ORDER BY item_count DESC";

$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    while ($row = mysqli_fetch_assoc($result)) {
        echo $row['item_owner'] . ";" . $row['item_count'] . "|";
    }
}