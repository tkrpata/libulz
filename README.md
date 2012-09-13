libulz
======

An abstraction library around ulz.


compiling
======

* cmake .
* make
* make install


linking
======

gcc yourcode.c -o yourcode -lulz


usage
======

    struct ulz * my_ulz = ulz_new(NULL);

    other_functions(my_ulz);
    ulz_free(my_ulz);

The end.

screenshot
======
![libulz screenshot](https://raw.github.com/ellzey/libulz/master/screenshot.png)

screenshot of the screenshot
======
![libulz screenshotscreenshot](https://raw.github.com/ellzey/libulz/master/screenshotscreenshot.png)
