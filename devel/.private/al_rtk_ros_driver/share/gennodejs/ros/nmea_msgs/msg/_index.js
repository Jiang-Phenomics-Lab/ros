
"use strict";

let Gpgga = require('./Gpgga.js');
let Gpgsa = require('./Gpgsa.js');
let Gprmc = require('./Gprmc.js');
let GpgsvSatellite = require('./GpgsvSatellite.js');
let Gpgsv = require('./Gpgsv.js');
let Sentence = require('./Sentence.js');
let Gpgst = require('./Gpgst.js');

module.exports = {
  Gpgga: Gpgga,
  Gpgsa: Gpgsa,
  Gprmc: Gprmc,
  GpgsvSatellite: GpgsvSatellite,
  Gpgsv: Gpgsv,
  Sentence: Sentence,
  Gpgst: Gpgst,
};
