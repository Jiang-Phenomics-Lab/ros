// Auto-generated. Do not edit!

// (in-package path_server.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetPointNameRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.point_name = null;
    }
    else {
      if (initObj.hasOwnProperty('point_name')) {
        this.point_name = initObj.point_name
      }
      else {
        this.point_name = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetPointNameRequest
    // Serialize message field [point_name]
    bufferOffset = _serializer.string(obj.point_name, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetPointNameRequest
    let len;
    let data = new SetPointNameRequest(null);
    // Deserialize message field [point_name]
    data.point_name = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.point_name.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'path_server/SetPointNameRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0e0e3778202d80927ca53f4e1bc7f936';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string point_name
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetPointNameRequest(null);
    if (msg.point_name !== undefined) {
      resolved.point_name = msg.point_name;
    }
    else {
      resolved.point_name = ''
    }

    return resolved;
    }
};

class SetPointNameResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetPointNameResponse
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetPointNameResponse
    let len;
    let data = new SetPointNameResponse(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'path_server/SetPointNameResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetPointNameResponse(null);
    return resolved;
    }
};

module.exports = {
  Request: SetPointNameRequest,
  Response: SetPointNameResponse,
  md5sum() { return '0e0e3778202d80927ca53f4e1bc7f936'; },
  datatype() { return 'path_server/SetPointName'; }
};
