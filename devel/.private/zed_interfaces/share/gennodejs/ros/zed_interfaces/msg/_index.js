
"use strict";

let Skeleton2D = require('./Skeleton2D.js');
let RGBDSensors = require('./RGBDSensors.js');
let PlaneStamped = require('./PlaneStamped.js');
let Skeleton3D = require('./Skeleton3D.js');
let Keypoint3D = require('./Keypoint3D.js');
let BoundingBox3D = require('./BoundingBox3D.js');
let Object = require('./Object.js');
let Keypoint2Df = require('./Keypoint2Df.js');
let BoundingBox2Di = require('./BoundingBox2Di.js');
let ObjectsStamped = require('./ObjectsStamped.js');
let Keypoint2Di = require('./Keypoint2Di.js');
let BoundingBox2Df = require('./BoundingBox2Df.js');

module.exports = {
  Skeleton2D: Skeleton2D,
  RGBDSensors: RGBDSensors,
  PlaneStamped: PlaneStamped,
  Skeleton3D: Skeleton3D,
  Keypoint3D: Keypoint3D,
  BoundingBox3D: BoundingBox3D,
  Object: Object,
  Keypoint2Df: Keypoint2Df,
  BoundingBox2Di: BoundingBox2Di,
  ObjectsStamped: ObjectsStamped,
  Keypoint2Di: Keypoint2Di,
  BoundingBox2Df: BoundingBox2Df,
};
