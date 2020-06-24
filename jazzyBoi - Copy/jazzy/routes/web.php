<?php

/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider within a group which
| contains the "web" middleware group. Now create something great!
|
*/

Route::get('/', function () {
    $songs = DB::table('songs')->select('title', 'video_link', 'pdfLink', 'composer', 'lyricist', 'arranger', 'tempo', 'moonlighter', 'red_dot')->get();
    return view('index', ['songs'=>$songs]);
});
