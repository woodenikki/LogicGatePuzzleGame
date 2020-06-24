<!DOCTYPE html>
<html lang="{{ str_replace('_', '-', app()->getLocale()) }}">

<head>
    <title>Jazz Hub</title>
    <meta name="viewport" content="width=device-width, initial-scale=1" />
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bulma@0.8.0/css/bulma.min.css" />
    <link rel="stylesheet" href="./index.css" />
    <!-- <script src="./index.js"></script> -->
    <script defer src="https://use.fontawesome.com/releases/v5.3.1/js/all.js"></script>
</head>

<body>
    <nav class="navbar is-primary" role="navigation" aria-label="main navigation" style="margin-bottom: 1rem;">
        <div class="navbar-brand">
            <a class="navbar-item" href="https://bulma.io">
                <img src="/jazzhublogo.png" alt="cool_logo" />
                <h1 class="title" style="padding-left: 10px;">Jazz Hub</h1>
            </a>
        </div>
    </nav>



    <div class="columns is-desktop is-gapless is-marginless">
        <div class="column is-3 filly has-background-light">
            <div class="container margin-fix">

                <div class="field is-grouped">
                    <p class="control is-expanded">
                        <input class="input" type="text" placeholder="Find... something...?">
                    </p>
                    <p class="control">
                        <a class="button is-info">
                            Search
                        </a>
                    </p>
                </div>
                <hr>

                <div class="field has-addons">
                    <p class="control">
                        <a class="button is-static">
                            Clarinet
                        </a>
                    </p>
                    <p class="control is-expanded">
                        <input class="input" type="number" value="0" placeholder="0">
                    </p>
                </div>

                <div class="field has-addons">
                    <p class="control">
                        <a class="button is-static">
                            Soprano
                        </a>
                    </p>
                    <p class="control is-expanded">
                        <input class="input" type="number" value="0" placeholder="0">
                    </p>
                </div>

                <div class="field has-addons">
                    <p class="control">
                        <a class="button is-static">
                            Alto
                        </a>
                    </p>
                    <p class="control is-expanded">
                        <input class="input" type="number" value="0" placeholder="0">
                    </p>
                </div>

                <div class="field has-addons">
                    <p class="control">
                        <a class="button is-static">
                            Tenor
                        </a>
                    </p>
                    <p class="control is-expanded">
                        <input class="input" type="number" value="0" placeholder="0">
                    </p>
                </div>
                <div class="field has-addons">
                    <p class="control">
                        <a class="button is-static">
                            Bass
                        </a>
                    </p>
                    <p class="control is-expanded">
                        <input class="input" type="number" value="0" placeholder="0">
                    </p>
                </div>
                <div class="field has-addons">
                    <p class="control">
                        <a class="button is-static">
                            Guitar
                        </a>
                    </p>
                    <p class="control is-expanded">
                        <input class="input" type="number" value="0" placeholder="0">
                    </p>
                </div>
                <div class="field has-addons">
                    <p class="control">
                        <a class="button is-static">
                            Drums
                        </a>
                    </p>
                    <p class="control is-expanded">
                        <input class="input" type="number" value="0" placeholder="0">
                    </p>
                </div>
                <div class="field has-addons">
                    <p class="control">
                        <a class="button is-static">
                            Trombone
                        </a>
                    </p>
                    <p class="control is-expanded">
                        <input class="input" type="number" value="0" placeholder="0">
                    </p>
                </div>
                <div class="field has-addons">
                    <p class="control">
                        <a class="button is-static">
                            Trumpet
                        </a>
                    </p>
                    <p class="control is-expanded">
                        <input class="input" type="number" value="0" placeholder="0">
                    </p>
                </div>

                <hr>

                <div class="field has-addons">
                    <div class="control">
                        <button type="submit" class="button is-dark">Tempo</button>
                    </div>
                    <div class="control is-expanded">
                        <div class="select is-fullwidth">
                            <select name="country">
                                <option value="choice1">Slow</option>
                                <option value="choice2">Moderately Slow</option>
                                <option value="choice3">FoxTrot</option>
                                <option value="choice4">Bounce</option>
                            </select>
                        </div>
                    </div>

                </div>

                <div class="field has-addons">
                    <div class="control">
                        <button type="submit" class="button is-dark">Moonlighter</button>
                    </div>
                    <div class="control is-expanded">
                        <div class="select is-fullwidth">
                            <select name="country">
                                <option value="true">Yes</option>
                                <option value="false">No</option>
                            </select>
                        </div>
                    </div>

                </div>

                <div class="field has-addons">
                    <div class="control">
                        <button type="submit" class="button is-dark">Red Dot</button>
                    </div>
                    <div class="control is-expanded">
                        <div class="select is-fullwidth">
                            <select name="country">
                                <option value="true">Yes</option>
                                <option value="false">No</option>
                            </select>
                        </div>
                    </div>
                </div>

                <hr>

                <div class="buttons has-addons is-right">
                    <button class="button is-danger is-selected">Edit</button>
                    <button class="button is-warning">Add</button>
                    <button class="button is-success">Save</button>
                </div>
            </div>
        </div>
        <div class="column is-9 filly has-background-light">
            <div class="container">

                <div class="box table__wrapper">
                    <h1 class="title">Results</h1>

                    @if (count($songs) > 0)

                    <table class='table is-fullwidth'>
                        <thead>
                            <tr>
                                <th><abbr title='Position'>Title</abbr></th>
                                <th><abbr title='Position'>Link</abbr></th>
                                <th><abbr title='Position'>PDF</abbr></th>
                                <th><abbr title='Position'>Composer</abbr></th>
                                <th><abbr title='Position'>Lyricist</abbr></th>
                                <th><abbr title='Position'>Aranger</abbr></th>
                                <th><abbr title='Position'>Style</abbr></th>
                                <th><abbr title='Position'>Moonlighter</abbr></th>
                                <th><abbr title='Position'>Red Dot</abbr></th>
                            </tr>
                        </thead>
                        <tfoot>
                            <tr>
                                <th><abbr title='Position'>Pos</abbr></th>
                            </tr>
                        </tfoot>
                        <tbody>

                            @foreach($songs as $song)
                            <tr>

                                @foreach( $song as $key => $value)
                                    <td>
                                    @if ($key === 'pdfLink')
                                        <a href="{{$value}}"><i class="far fa-file-pdf has-text-danger"></i></a>
                                    @elseif ($key === 'video_link')
                                        @if ($value === "")
                                            <i class="fas fa-slash"></i>
                                        @else
                                            <a href='{{$value}}'><i class="fab fa-youtube has-text-danger"></i></a>
                                        @endif
                                    @else
                                        {{$value}}
                                    @endif  
                                    </td>  

                                @endforeach

                            </tr>
                            @endforeach

                        </tbody>
                    </table>

                    @else
                    <img src='https://loading.io/assets/img/p/landing/upload.svg'></img>
                    @endif


                </div>
            </div>

        </div>
    </div>


</body>

</html>