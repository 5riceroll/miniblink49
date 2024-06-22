const EventEmitter = require('events').EventEmitter;
const binding = process.binding('atom_common_screen');
const Screen = binding.Screen;

Object.setPrototypeOf(Screen.prototype, EventEmitter.prototype); // ��on֮��ĺ����󶨹���

exports.Screen = new Screen();
exports.screen = exports.Screen;