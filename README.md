libulz
======

An abstraction library around ulz.


compiling
======

* cmake .
* make
* make install

If you would like to disable OpenSSL support, you can pass -DULZ_DISABLE_SSL:STRING=ON to your cmake command.


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

screenshot of the screenshot on my desktop where I put my screenshots
======
![libulz screenshotofmyscrenshotonmydesktop](https://raw.github.com/ellzey/libulz/master/screenshotofthescreenshotwhereiputmyscreenshot.png)
