# TM1638 library

A Particle library for tm1638-library

## Authors

### Created for Arduino

Ricardo Batista
Email: rjbatista(at)gmail.com
URL: https://github.com/rjbatista/tm1638-library/

### Ported to Particle

Nathan Genetzky
URL: https://github.com/ngenetzky/tm1638-library/

## Usage

See the [examples](examples) folder.

### Arduino

Just put the files on a TM1638 directory under "arduino/libraries" on your arduino IDE instalation

### Particle

#### Flash Example on your device

1. Clone repo.

    `git clone -b 'Particle/master' https://github.com/NGenetzky/tm1638-library.git`

2. Flash device.

    `particle flash my_device_name tm1638-library/examples/tm1638_one_module_example`


#### Add to your project

Within a 'particle project' execute  `particle library add tm1638-library`.
Then use the library, see [examples](examples) for guidance.

## Documentation

A library for interacting an arduino with a TM1638/TM1640.

Includes:

- Support for the TM1638 and TM1640;
- Support for common anode TM1638 module;
- Helper methods for displaying numbers in decimal, hexadecimal and binary;
- Support for multiple chained tm1638;
- Reading simultaneous button presses;
- Support for dimming the display and LEDs;
- Support for writing text;
- Support for module in inverted position.

See: TM1638 Display/LED module at http://www.dealextreme.com/p/81873?r=68099021
See: TM1640 Display module at http://www.dealextreme.com/p/104311?r=68099021

## Contributing

Here's how you can make changes to this library and eventually contribute
those changes back.

To get started,
[clone the library from GitHub to your local machine](https://help.github.com/articles/cloning-a-repository/).

Change the name of the library in `library.properties` to something different.
You can add your name at then end.

Modify the sources in <src> and <examples> with the new behavior.

To compile an example, use `particle compile examples/usage` command in
[Particle CLI](https://docs.particle.io/guide/tools-and-features/cli#update-your-device-remotely)
or use our
[Desktop IDE](https://docs.particle.io/guide/tools-and-features/dev/#compiling-code).

After your changes are done you can upload them with `particle library upload`
or `Upload` command in the IDE. This will create a private (only visible by
you) library that you can use in other projects. Do
`particle library add tm1638-library_myname`
to add the library to a project on your machine or add
the tm1638-library_myname library to a project on the Web IDE or Desktop IDE.

At this point, you can create a
[GitHub pull request](https://help.github.com/articles/about-pull-requests/)
with your changes to the original library. 

If you wish to make your library public, use `particle library publish` or
`Publish` command.

## LICENSE

Copyright 2017 rjbatista

See [LICENSE](LICENSE) file.
