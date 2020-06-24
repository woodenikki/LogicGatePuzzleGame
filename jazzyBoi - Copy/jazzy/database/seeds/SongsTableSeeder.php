<?php

use Illuminate\Database\Seeder;

class SongsTableSeeder extends Seeder
{
    /**
     * Run the database seeds.
     *
     * @return void
     */
    public function run()
    {
        DB::table('songs')->insert([
            'title'         => "",
            'composer'      => "",
            'lyricist'      => "",
            'arranger'      => "",
            'bpm'           => "",
            'tempo'         => "",
            'operningKey'   => "",
            'pdfLink'       => "",
            'moonlighter'   => "",
            'red_dot'       => "",
            'video_link'    => "",  
            'ClarinetReq'   => "",
            'SopranoReq'    => "",
            'AltoReq'       => "",
            'TenorReq'      => "",
            'BariReq'       => "",
            'TrombReq'      => "",
            'TrumpReq'      => "",
            'PianoReq'      => "",
            'BassReq'       => "",
            'GuitarReq'     => "",
            'DrumsReq'      => ""

        ]);
    }
}
