<?php

use Illuminate\Database\Migrations\Migration;
use Illuminate\Database\Schema\Blueprint;
use Illuminate\Support\Facades\Schema;

class CreateSongsTable extends Migration
{
    /**
     * Run the migrations.
     *
     * @return void
     */
    public function up()
    {
        Schema::create('songs', function (Blueprint $table) {
            $table->bigIncrements('songid');
            $table->text('title');
            $table->text('composer');
            $table->text('lyricist')->nullable();
            $table->text('arranger');
            $table->text('bpm')->nullable();
            $table->text('tempo')->nullable();
            $table->text('openingKey')->nullable();
            $table->text('pdfLink')->default(" ");
            $table->tinyInteger('moonlighter')->default(0);
            $table->tinyInteger('red_dot')->default(0);
            $table->text('video_link')->default("");
            $table->integer('ClarinetReq')->default(0);
            $table->integer('SopranoReq')->default(0);
            $table->integer('AltoReq')->default(0);
            $table->integer('TenorReq')->default(0);
            $table->integer('BariReq')->default(0);
            $table->integer('TrombReq')->default(0);
            $table->integer('TrumpReq')->default(0);
            $table->integer('PianoReq')->default(0);
            $table->integer('BassReq')->default(0);
            $table->integer('GuitarReq')->default(0);
            $table->integer('DrumsReq')->default(0);


                








        });
    }

    /**
     * Reverse the migrations.
     *
     * @return void
     */
    public function down()
    {
        Schema::dropIfExists('songs');
    }
}
