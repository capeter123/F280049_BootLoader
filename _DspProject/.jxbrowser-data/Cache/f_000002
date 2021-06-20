(function(){/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
'use strict';var m;function aa(a){var b=0;return function(){return b<a.length?{done:!1,value:a[b++]}:{done:!0}}}
var ba="function"==typeof Object.defineProperties?Object.defineProperty:function(a,b,c){if(a==Array.prototype||a==Object.prototype)return a;a[b]=c.value;return a};
function ca(a){a=["object"==typeof globalThis&&globalThis,a,"object"==typeof window&&window,"object"==typeof self&&self,"object"==typeof global&&global];for(var b=0;b<a.length;++b){var c=a[b];if(c&&c.Math==Math)return c}throw Error("Cannot find global object");}
var da=ca(this);function r(a,b){if(b)a:{var c=da;a=a.split(".");for(var d=0;d<a.length-1;d++){var e=a[d];if(!(e in c))break a;c=c[e]}a=a[a.length-1];d=c[a];b=b(d);b!=d&&null!=b&&ba(c,a,{configurable:!0,writable:!0,value:b})}}
r("Symbol",function(a){function b(f){if(this instanceof b)throw new TypeError("Symbol is not a constructor");return new c(d+(f||"")+"_"+e++,f)}
function c(f,g){this.h=f;ba(this,"description",{configurable:!0,writable:!0,value:g})}
if(a)return a;c.prototype.toString=function(){return this.h};
var d="jscomp_symbol_"+(1E9*Math.random()>>>0)+"_",e=0;return b});
r("Symbol.iterator",function(a){if(a)return a;a=Symbol("Symbol.iterator");for(var b="Array Int8Array Uint8Array Uint8ClampedArray Int16Array Uint16Array Int32Array Uint32Array Float32Array Float64Array".split(" "),c=0;c<b.length;c++){var d=da[b[c]];"function"===typeof d&&"function"!=typeof d.prototype[a]&&ba(d.prototype,a,{configurable:!0,writable:!0,value:function(){return ea(aa(this))}})}return a});
function ea(a){a={next:a};a[Symbol.iterator]=function(){return this};
return a}
function u(a){var b="undefined"!=typeof Symbol&&Symbol.iterator&&a[Symbol.iterator];return b?b.call(a):{next:aa(a)}}
function fa(a){for(var b,c=[];!(b=a.next()).done;)c.push(b.value);return c}
var ha="function"==typeof Object.create?Object.create:function(a){function b(){}
b.prototype=a;return new b},ia=function(){function a(){function c(){}
new c;Reflect.construct(c,[],function(){});
return new c instanceof c}
if("undefined"!=typeof Reflect&&Reflect.construct){if(a())return Reflect.construct;var b=Reflect.construct;return function(c,d,e){c=b(c,d);e&&Reflect.setPrototypeOf(c,e.prototype);return c}}return function(c,d,e){void 0===e&&(e=c);
e=ha(e.prototype||Object.prototype);return Function.prototype.apply.call(c,e,d)||e}}(),ja;
if("function"==typeof Object.setPrototypeOf)ja=Object.setPrototypeOf;else{var ka;a:{var la={a:!0},ma={};try{ma.__proto__=la;ka=ma.a;break a}catch(a){}ka=!1}ja=ka?function(a,b){a.__proto__=b;if(a.__proto__!==b)throw new TypeError(a+" is not extensible");return a}:null}var na=ja;
function v(a,b){a.prototype=ha(b.prototype);a.prototype.constructor=a;if(na)na(a,b);else for(var c in b)if("prototype"!=c)if(Object.defineProperties){var d=Object.getOwnPropertyDescriptor(b,c);d&&Object.defineProperty(a,c,d)}else a[c]=b[c];a.O=b.prototype}
function oa(){this.o=!1;this.l=null;this.i=void 0;this.h=1;this.u=this.m=0;this.C=this.j=null}
function pa(a){if(a.o)throw new TypeError("Generator is already running");a.o=!0}
oa.prototype.B=function(a){this.i=a};
function qa(a,b){a.j={Ga:b,Ha:!0};a.h=a.m||a.u}
oa.prototype.return=function(a){this.j={return:a};this.h=this.u};
function w(a,b,c){a.h=c;return{value:b}}
oa.prototype.A=function(a){this.h=a};
function ra(a,b,c){a.m=b;void 0!=c&&(a.u=c)}
function sa(a){a.m=0;var b=a.j.Ga;a.j=null;return b}
function ta(a){a.C=[a.j];a.m=0;a.u=0}
function ua(a){var b=a.C.splice(0)[0];(b=a.j=a.j||b)?b.Ha?a.h=a.m||a.u:void 0!=b.A&&a.u<b.A?(a.h=b.A,a.j=null):a.h=a.u:a.h=0}
function va(a){this.h=new oa;this.i=a}
function wa(a,b){pa(a.h);var c=a.h.l;if(c)return xa(a,"return"in c?c["return"]:function(d){return{value:d,done:!0}},b,a.h.return);
a.h.return(b);return ya(a)}
function xa(a,b,c,d){try{var e=b.call(a.h.l,c);if(!(e instanceof Object))throw new TypeError("Iterator result "+e+" is not an object");if(!e.done)return a.h.o=!1,e;var f=e.value}catch(g){return a.h.l=null,qa(a.h,g),ya(a)}a.h.l=null;d.call(a.h,f);return ya(a)}
function ya(a){for(;a.h.h;)try{var b=a.i(a.h);if(b)return a.h.o=!1,{value:b.value,done:!1}}catch(c){a.h.i=void 0,qa(a.h,c)}a.h.o=!1;if(a.h.j){b=a.h.j;a.h.j=null;if(b.Ha)throw b.Ga;return{value:b.return,done:!0}}return{value:void 0,done:!0}}
function za(a){this.next=function(b){pa(a.h);a.h.l?b=xa(a,a.h.l.next,b,a.h.B):(a.h.B(b),b=ya(a));return b};
this.throw=function(b){pa(a.h);a.h.l?b=xa(a,a.h.l["throw"],b,a.h.B):(qa(a.h,b),b=ya(a));return b};
this.return=function(b){return wa(a,b)};
this[Symbol.iterator]=function(){return this}}
function x(a,b){b=new za(new va(b));na&&a.prototype&&na(b,a.prototype);return b}
r("Reflect",function(a){return a?a:{}});
r("Reflect.construct",function(){return ia});
r("Reflect.setPrototypeOf",function(a){return a?a:na?function(b,c){try{return na(b,c),!0}catch(d){return!1}}:null});
function Aa(a,b){return Object.prototype.hasOwnProperty.call(a,b)}
r("WeakMap",function(a){function b(k){this.h=(h+=Math.random()+1).toString();if(k){k=u(k);for(var l;!(l=k.next()).done;)l=l.value,this.set(l[0],l[1])}}
function c(){}
function d(k){var l=typeof k;return"object"===l&&null!==k||"function"===l}
function e(k){if(!Aa(k,g)){var l=new c;ba(k,g,{value:l})}}
function f(k){var l=Object[k];l&&(Object[k]=function(n){if(n instanceof c)return n;Object.isExtensible(n)&&e(n);return l(n)})}
if(function(){if(!a||!Object.seal)return!1;try{var k=Object.seal({}),l=Object.seal({}),n=new a([[k,2],[l,3]]);if(2!=n.get(k)||3!=n.get(l))return!1;n.delete(k);n.set(l,4);return!n.has(k)&&4==n.get(l)}catch(p){return!1}}())return a;
var g="$jscomp_hidden_"+Math.random();f("freeze");f("preventExtensions");f("seal");var h=0;b.prototype.set=function(k,l){if(!d(k))throw Error("Invalid WeakMap key");e(k);if(!Aa(k,g))throw Error("WeakMap key fail: "+k);k[g][this.h]=l;return this};
b.prototype.get=function(k){return d(k)&&Aa(k,g)?k[g][this.h]:void 0};
b.prototype.has=function(k){return d(k)&&Aa(k,g)&&Aa(k[g],this.h)};
b.prototype.delete=function(k){return d(k)&&Aa(k,g)&&Aa(k[g],this.h)?delete k[g][this.h]:!1};
return b});
r("Map",function(a){function b(){var h={};return h.previous=h.next=h.head=h}
function c(h,k){var l=h.h;return ea(function(){if(l){for(;l.head!=h.h;)l=l.previous;for(;l.next!=l.head;)return l=l.next,{done:!1,value:k(l)};l=null}return{done:!0,value:void 0}})}
function d(h,k){var l=k&&typeof k;"object"==l||"function"==l?f.has(k)?l=f.get(k):(l=""+ ++g,f.set(k,l)):l="p_"+k;var n=h.data_[l];if(n&&Aa(h.data_,l))for(h=0;h<n.length;h++){var p=n[h];if(k!==k&&p.key!==p.key||k===p.key)return{id:l,list:n,index:h,H:p}}return{id:l,list:n,index:-1,H:void 0}}
function e(h){this.data_={};this.h=b();this.size=0;if(h){h=u(h);for(var k;!(k=h.next()).done;)k=k.value,this.set(k[0],k[1])}}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var h=Object.seal({x:4}),k=new a(u([[h,"s"]]));if("s"!=k.get(h)||1!=k.size||k.get({x:4})||k.set({x:4},"t")!=k||2!=k.size)return!1;var l=k.entries(),n=l.next();if(n.done||n.value[0]!=h||"s"!=n.value[1])return!1;n=l.next();return n.done||4!=n.value[0].x||"t"!=n.value[1]||!l.next().done?!1:!0}catch(p){return!1}}())return a;
var f=new WeakMap;e.prototype.set=function(h,k){h=0===h?0:h;var l=d(this,h);l.list||(l.list=this.data_[l.id]=[]);l.H?l.H.value=k:(l.H={next:this.h,previous:this.h.previous,head:this.h,key:h,value:k},l.list.push(l.H),this.h.previous.next=l.H,this.h.previous=l.H,this.size++);return this};
e.prototype.delete=function(h){h=d(this,h);return h.H&&h.list?(h.list.splice(h.index,1),h.list.length||delete this.data_[h.id],h.H.previous.next=h.H.next,h.H.next.previous=h.H.previous,h.H.head=null,this.size--,!0):!1};
e.prototype.clear=function(){this.data_={};this.h=this.h.previous=b();this.size=0};
e.prototype.has=function(h){return!!d(this,h).H};
e.prototype.get=function(h){return(h=d(this,h).H)&&h.value};
e.prototype.entries=function(){return c(this,function(h){return[h.key,h.value]})};
e.prototype.keys=function(){return c(this,function(h){return h.key})};
e.prototype.values=function(){return c(this,function(h){return h.value})};
e.prototype.forEach=function(h,k){for(var l=this.entries(),n;!(n=l.next()).done;)n=n.value,h.call(k,n[1],n[0],this)};
e.prototype[Symbol.iterator]=e.prototype.entries;var g=0;return e});
function Ba(a,b,c){if(null==a)throw new TypeError("The 'this' value for String.prototype."+c+" must not be null or undefined");if(b instanceof RegExp)throw new TypeError("First argument to String.prototype."+c+" must not be a regular expression");return a+""}
r("String.prototype.endsWith",function(a){return a?a:function(b,c){var d=Ba(this,b,"endsWith");b+="";void 0===c&&(c=d.length);c=Math.max(0,Math.min(c|0,d.length));for(var e=b.length;0<e&&0<c;)if(d[--c]!=b[--e])return!1;return 0>=e}});
r("String.prototype.startsWith",function(a){return a?a:function(b,c){var d=Ba(this,b,"startsWith");b+="";var e=d.length,f=b.length;c=Math.max(0,Math.min(c|0,d.length));for(var g=0;g<f&&c<e;)if(d[c++]!=b[g++])return!1;return g>=f}});
r("Object.setPrototypeOf",function(a){return a||na});
var Ca="function"==typeof Object.assign?Object.assign:function(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(d)for(var e in d)Aa(d,e)&&(a[e]=d[e])}return a};
r("Object.assign",function(a){return a||Ca});
r("Promise",function(a){function b(g){this.h=0;this.j=void 0;this.i=[];this.o=!1;var h=this.l();try{g(h.resolve,h.reject)}catch(k){h.reject(k)}}
function c(){this.h=null}
function d(g){return g instanceof b?g:new b(function(h){h(g)})}
if(a)return a;c.prototype.i=function(g){if(null==this.h){this.h=[];var h=this;this.j(function(){h.u()})}this.h.push(g)};
var e=da.setTimeout;c.prototype.j=function(g){e(g,0)};
c.prototype.u=function(){for(;this.h&&this.h.length;){var g=this.h;this.h=[];for(var h=0;h<g.length;++h){var k=g[h];g[h]=null;try{k()}catch(l){this.l(l)}}}this.h=null};
c.prototype.l=function(g){this.j(function(){throw g;})};
b.prototype.l=function(){function g(l){return function(n){k||(k=!0,l.call(h,n))}}
var h=this,k=!1;return{resolve:g(this.K),reject:g(this.u)}};
b.prototype.K=function(g){if(g===this)this.u(new TypeError("A Promise cannot resolve to itself"));else if(g instanceof b)this.P(g);else{a:switch(typeof g){case "object":var h=null!=g;break a;case "function":h=!0;break a;default:h=!1}h?this.J(g):this.m(g)}};
b.prototype.J=function(g){var h=void 0;try{h=g.then}catch(k){this.u(k);return}"function"==typeof h?this.ba(h,g):this.m(g)};
b.prototype.u=function(g){this.B(2,g)};
b.prototype.m=function(g){this.B(1,g)};
b.prototype.B=function(g,h){if(0!=this.h)throw Error("Cannot settle("+g+", "+h+"): Promise already settled in state"+this.h);this.h=g;this.j=h;2===this.h&&this.L();this.C()};
b.prototype.L=function(){var g=this;e(function(){if(g.F()){var h=da.console;"undefined"!==typeof h&&h.error(g.j)}},1)};
b.prototype.F=function(){if(this.o)return!1;var g=da.CustomEvent,h=da.Event,k=da.dispatchEvent;if("undefined"===typeof k)return!0;"function"===typeof g?g=new g("unhandledrejection",{cancelable:!0}):"function"===typeof h?g=new h("unhandledrejection",{cancelable:!0}):(g=da.document.createEvent("CustomEvent"),g.initCustomEvent("unhandledrejection",!1,!0,g));g.promise=this;g.reason=this.j;return k(g)};
b.prototype.C=function(){if(null!=this.i){for(var g=0;g<this.i.length;++g)f.i(this.i[g]);this.i=null}};
var f=new c;b.prototype.P=function(g){var h=this.l();g.ia(h.resolve,h.reject)};
b.prototype.ba=function(g,h){var k=this.l();try{g.call(h,k.resolve,k.reject)}catch(l){k.reject(l)}};
b.prototype.then=function(g,h){function k(t,q){return"function"==typeof t?function(D){try{l(t(D))}catch(K){n(K)}}:q}
var l,n,p=new b(function(t,q){l=t;n=q});
this.ia(k(g,l),k(h,n));return p};
b.prototype.catch=function(g){return this.then(void 0,g)};
b.prototype.ia=function(g,h){function k(){switch(l.h){case 1:g(l.j);break;case 2:h(l.j);break;default:throw Error("Unexpected state: "+l.h);}}
var l=this;null==this.i?f.i(k):this.i.push(k);this.o=!0};
b.resolve=d;b.reject=function(g){return new b(function(h,k){k(g)})};
b.race=function(g){return new b(function(h,k){for(var l=u(g),n=l.next();!n.done;n=l.next())d(n.value).ia(h,k)})};
b.all=function(g){var h=u(g),k=h.next();return k.done?d([]):new b(function(l,n){function p(D){return function(K){t[D]=K;q--;0==q&&l(t)}}
var t=[],q=0;do t.push(void 0),q++,d(k.value).ia(p(t.length-1),n),k=h.next();while(!k.done)})};
return b});
function Da(a,b){a instanceof String&&(a+="");var c=0,d=!1,e={next:function(){if(!d&&c<a.length){var f=c++;return{value:b(f,a[f]),done:!1}}d=!0;return{done:!0,value:void 0}}};
e[Symbol.iterator]=function(){return e};
return e}
r("Array.prototype.entries",function(a){return a?a:function(){return Da(this,function(b,c){return[b,c]})}});
r("Object.entries",function(a){return a?a:function(b){var c=[],d;for(d in b)Aa(b,d)&&c.push([d,b[d]]);return c}});
r("Array.prototype.keys",function(a){return a?a:function(){return Da(this,function(b){return b})}});
r("Array.prototype.values",function(a){return a?a:function(){return Da(this,function(b,c){return c})}});
r("Object.is",function(a){return a?a:function(b,c){return b===c?0!==b||1/b===1/c:b!==b&&c!==c}});
r("Array.prototype.includes",function(a){return a?a:function(b,c){var d=this;d instanceof String&&(d=String(d));var e=d.length;c=c||0;for(0>c&&(c=Math.max(c+e,0));c<e;c++){var f=d[c];if(f===b||Object.is(f,b))return!0}return!1}});
r("String.prototype.includes",function(a){return a?a:function(b,c){return-1!==Ba(this,b,"includes").indexOf(b,c||0)}});
r("Array.from",function(a){return a?a:function(b,c,d){c=null!=c?c:function(h){return h};
var e=[],f="undefined"!=typeof Symbol&&Symbol.iterator&&b[Symbol.iterator];if("function"==typeof f){b=f.call(b);for(var g=0;!(f=b.next()).done;)e.push(c.call(d,f.value,g++))}else for(f=b.length,g=0;g<f;g++)e.push(c.call(d,b[g],g));return e}});
r("Number.isNaN",function(a){return a?a:function(b){return"number"===typeof b&&isNaN(b)}});
r("Number.MAX_SAFE_INTEGER",function(){return 9007199254740991});
r("Set",function(a){function b(c){this.h=new Map;if(c){c=u(c);for(var d;!(d=c.next()).done;)this.add(d.value)}this.size=this.h.size}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var c=Object.seal({x:4}),d=new a(u([c]));if(!d.has(c)||1!=d.size||d.add(c)!=d||1!=d.size||d.add({x:4})!=d||2!=d.size)return!1;var e=d.entries(),f=e.next();if(f.done||f.value[0]!=c||f.value[1]!=c)return!1;f=e.next();return f.done||f.value[0]==c||4!=f.value[0].x||f.value[1]!=f.value[0]?!1:e.next().done}catch(g){return!1}}())return a;
b.prototype.add=function(c){c=0===c?0:c;this.h.set(c,c);this.size=this.h.size;return this};
b.prototype.delete=function(c){c=this.h.delete(c);this.size=this.h.size;return c};
b.prototype.clear=function(){this.h.clear();this.size=0};
b.prototype.has=function(c){return this.h.has(c)};
b.prototype.entries=function(){return this.h.entries()};
b.prototype.values=function(){return this.h.values()};
b.prototype.keys=b.prototype.values;b.prototype[Symbol.iterator]=b.prototype.values;b.prototype.forEach=function(c,d){var e=this;this.h.forEach(function(f){return c.call(d,f,f,e)})};
return b});
r("Object.values",function(a){return a?a:function(b){var c=[],d;for(d in b)Aa(b,d)&&c.push(b[d]);return c}});
var y=this||self;function z(a,b,c){a=a.split(".");c=c||y;a[0]in c||"undefined"==typeof c.execScript||c.execScript("var "+a[0]);for(var d;a.length&&(d=a.shift());)a.length||void 0===b?c[d]&&c[d]!==Object.prototype[d]?c=c[d]:c=c[d]={}:c[d]=b}
function A(a,b){a=a.split(".");b=b||y;for(var c=0;c<a.length;c++)if(b=b[a[c]],null==b)return null;return b}
function Ea(){}
function Fa(a){a.va=void 0;a.getInstance=function(){return a.va?a.va:a.va=new a}}
function Ga(a){var b=typeof a;return"object"!=b?b:a?Array.isArray(a)?"array":b:"null"}
function Ha(a){var b=Ga(a);return"array"==b||"object"==b&&"number"==typeof a.length}
function Ia(a){var b=typeof a;return"object"==b&&null!=a||"function"==b}
function Ja(a){return Object.prototype.hasOwnProperty.call(a,Ka)&&a[Ka]||(a[Ka]=++La)}
var Ka="closure_uid_"+(1E9*Math.random()>>>0),La=0;function Ma(a,b,c){return a.call.apply(a.bind,arguments)}
function Na(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var e=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(e,d);return a.apply(b,e)}}return function(){return a.apply(b,arguments)}}
function Oa(a,b,c){Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?Oa=Ma:Oa=Na;return Oa.apply(null,arguments)}
function Pa(a,b){var c=Array.prototype.slice.call(arguments,1);return function(){var d=c.slice();d.push.apply(d,arguments);return a.apply(this,d)}}
function Qa(a,b){z(a,b,void 0)}
function B(a,b){function c(){}
c.prototype=b.prototype;a.O=b.prototype;a.prototype=new c;a.prototype.constructor=a;a.Vk=function(d,e,f){for(var g=Array(arguments.length-2),h=2;h<arguments.length;h++)g[h-2]=arguments[h];return b.prototype[e].apply(d,g)}}
function Ra(a){return a}
;function Sa(a,b){if(Error.captureStackTrace)Error.captureStackTrace(this,Sa);else{var c=Error().stack;c&&(this.stack=c)}a&&(this.message=String(a));b&&(this.Pa=b)}
B(Sa,Error);Sa.prototype.name="CustomError";function Ta(a){a=a.url;var b=/[?&]dsh=1(&|$)/.test(a);this.j=!b&&/[?&]ae=1(&|$)/.test(a);this.l=!b&&/[?&]ae=2(&|$)/.test(a);if((this.h=/[?&]adurl=([^&]*)/.exec(a))&&this.h[1]){try{var c=decodeURIComponent(this.h[1])}catch(d){c=null}this.i=c}}
;function Va(a){var b=!1,c;return function(){b||(c=a(),b=!0);return c}}
;var Wa=Array.prototype.indexOf?function(a,b){return Array.prototype.indexOf.call(a,b,void 0)}:function(a,b){if("string"===typeof a)return"string"!==typeof b||1!=b.length?-1:a.indexOf(b,0);
for(var c=0;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},C=Array.prototype.forEach?function(a,b,c){Array.prototype.forEach.call(a,b,c)}:function(a,b,c){for(var d=a.length,e="string"===typeof a?a.split(""):a,f=0;f<d;f++)f in e&&b.call(c,e[f],f,a)},Xa=Array.prototype.filter?function(a,b){return Array.prototype.filter.call(a,b,void 0)}:function(a,b){for(var c=a.length,d=[],e=0,f="string"===typeof a?a.split(""):a,g=0;g<c;g++)if(g in f){var h=f[g];
b.call(void 0,h,g,a)&&(d[e++]=h)}return d},Ya=Array.prototype.map?function(a,b){return Array.prototype.map.call(a,b,void 0)}:function(a,b){for(var c=a.length,d=Array(c),e="string"===typeof a?a.split(""):a,f=0;f<c;f++)f in e&&(d[f]=b.call(void 0,e[f],f,a));
return d},Za=Array.prototype.reduce?function(a,b,c){return Array.prototype.reduce.call(a,b,c)}:function(a,b,c){var d=c;
C(a,function(e,f){d=b.call(void 0,d,e,f,a)});
return d};
function $a(a,b){a:{for(var c=a.length,d="string"===typeof a?a.split(""):a,e=0;e<c;e++)if(e in d&&b.call(void 0,d[e],e,a)){b=e;break a}b=-1}return 0>b?null:"string"===typeof a?a.charAt(b):a[b]}
function ab(a,b){b=Wa(a,b);var c;(c=0<=b)&&Array.prototype.splice.call(a,b,1);return c}
function bb(a){var b=a.length;if(0<b){for(var c=Array(b),d=0;d<b;d++)c[d]=a[d];return c}return[]}
function cb(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(Ha(d)){var e=a.length||0,f=d.length||0;a.length=e+f;for(var g=0;g<f;g++)a[e+g]=d[g]}else a.push(d)}}
;function db(a,b){for(var c in a)b.call(void 0,a[c],c,a)}
function eb(a){var b=fb,c;for(c in b)if(a.call(void 0,b[c],c,b))return c}
function gb(a){for(var b in a)return!1;return!0}
function hb(a,b){if(null!==a&&b in a)throw Error('The object already contains the key "'+b+'"');a[b]=!0}
function ib(){var a=E("PLAYER_VARS",{});return null!==a&&"privembed"in a?a.privembed:!1}
function jb(a,b){for(var c in a)if(!(c in b)||a[c]!==b[c])return!1;for(var d in b)if(!(d in a))return!1;return!0}
function kb(a){var b={},c;for(c in a)b[c]=a[c];return b}
function lb(a){if(!a||"object"!==typeof a)return a;if("function"===typeof a.clone)return a.clone();if("undefined"!==typeof Map&&a instanceof Map)return new Map(a);if("undefined"!==typeof Set&&a instanceof Set)return new Set(a);var b=Array.isArray(a)?[]:"function"!==typeof ArrayBuffer||"function"!==typeof ArrayBuffer.isView||!ArrayBuffer.isView(a)||a instanceof DataView?{}:new a.constructor(a.length),c;for(c in a)b[c]=lb(a[c]);return b}
var mb="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" ");function nb(a,b){for(var c,d,e=1;e<arguments.length;e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<mb.length;f++)c=mb[f],Object.prototype.hasOwnProperty.call(d,c)&&(a[c]=d[c])}}
;var ob;function pb(){if(void 0===ob){var a=null,b=y.trustedTypes;if(b&&b.createPolicy){try{a=b.createPolicy("goog#html",{createHTML:Ra,createScript:Ra,createScriptURL:Ra})}catch(c){y.console&&y.console.error(c.message)}ob=a}else ob=a}return ob}
;var qb={};function rb(a){this.h=qb===qb?a:"";this.Y=!0}
rb.prototype.X=function(){return this.h.toString()};
rb.prototype.toString=function(){return this.h.toString()};function sb(a,b){this.h=b===tb?a:""}
m=sb.prototype;m.Y=!0;m.X=function(){return this.h.toString()};
m.ta=!0;m.qa=function(){return 1};
m.toString=function(){return this.h+""};
function ub(a){if(a instanceof sb&&a.constructor===sb)return a.h;Ga(a);return"type_error:TrustedResourceUrl"}
var tb={};function vb(a){var b=pb();a=b?b.createScriptURL(a):a;return new sb(a,tb)}
;var wb=String.prototype.trim?function(a){return a.trim()}:function(a){return/^[\s\xa0]*([\s\S]*?)[\s\xa0]*$/.exec(a)[1]};
function xb(a,b){if(b)a=a.replace(yb,"&amp;").replace(zb,"&lt;").replace(Ab,"&gt;").replace(Bb,"&quot;").replace(Cb,"&#39;").replace(Db,"&#0;");else{if(!Eb.test(a))return a;-1!=a.indexOf("&")&&(a=a.replace(yb,"&amp;"));-1!=a.indexOf("<")&&(a=a.replace(zb,"&lt;"));-1!=a.indexOf(">")&&(a=a.replace(Ab,"&gt;"));-1!=a.indexOf('"')&&(a=a.replace(Bb,"&quot;"));-1!=a.indexOf("'")&&(a=a.replace(Cb,"&#39;"));-1!=a.indexOf("\x00")&&(a=a.replace(Db,"&#0;"))}return a}
var yb=/&/g,zb=/</g,Ab=/>/g,Bb=/"/g,Cb=/'/g,Db=/\x00/g,Eb=/[\x00&<>"']/;function Fb(a,b){this.h=b===Gb?a:""}
m=Fb.prototype;m.Y=!0;m.X=function(){return this.h.toString()};
m.ta=!0;m.qa=function(){return 1};
m.toString=function(){return this.h.toString()};
function Hb(a){if(a instanceof Fb&&a.constructor===Fb)return a.h;Ga(a);return"type_error:SafeUrl"}
var Ib=/^(?:audio\/(?:3gpp2|3gpp|aac|L16|midi|mp3|mp4|mpeg|oga|ogg|opus|x-m4a|x-matroska|x-wav|wav|webm)|font\/\w+|image\/(?:bmp|gif|jpeg|jpg|png|tiff|webp|x-icon)|video\/(?:mpeg|mp4|ogg|webm|quicktime|x-matroska))(?:;\w+=(?:\w+|"[\w;,= ]+"))*$/i,Jb=/^data:(.*);base64,[a-z0-9+\/]+=*$/i,Kb=/^(?:(?:https?|mailto|ftp):|[^:/?#]*(?:[/?#]|$))/i;function Lb(a){if(a instanceof Fb)return a;a="object"==typeof a&&a.Y?a.X():String(a);Kb.test(a)||(a="about:invalid#zClosurez");return new Fb(a,Gb)}
var Gb={},Mb=new Fb("about:invalid#zClosurez",Gb);var Nb;a:{var Ob=y.navigator;if(Ob){var Pb=Ob.userAgent;if(Pb){Nb=Pb;break a}}Nb=""}function F(a){return-1!=Nb.indexOf(a)}
;function Qb(a,b,c){this.h=c===Rb?a:"";this.i=b}
m=Qb.prototype;m.ta=!0;m.qa=function(){return this.i};
m.Y=!0;m.X=function(){return this.h.toString()};
m.toString=function(){return this.h.toString()};
var Rb={};function Sb(a,b){var c=pb();a=c?c.createHTML(a):a;return new Qb(a,b,Rb)}
;function Tb(a,b){b=b instanceof Fb?b:Lb(b);a.href=Hb(b)}
function Ub(a,b){a.rel="stylesheet";a.href=ub(b).toString();(b=Vb('style[nonce],link[rel="stylesheet"][nonce]',a.ownerDocument&&a.ownerDocument.defaultView))&&a.setAttribute("nonce",b)}
function Wb(){return Vb("script[nonce]",void 0)}
var Xb=/^[\w+/_-]+[=]{0,2}$/;function Vb(a,b){b=(b||y).document;return b.querySelector?(a=b.querySelector(a))&&(a=a.nonce||a.getAttribute("nonce"))&&Xb.test(a)?a:"":""}
;function Yb(a){return a=xb(a,void 0)}
function Zb(a){for(var b=0,c=0;c<a.length;++c)b=31*b+a.charCodeAt(c)>>>0;return b}
;var $b=/^(?:([^:/?#.]+):)?(?:\/\/(?:([^\\/?#]*)@)?([^\\/?#]*?)(?::([0-9]+))?(?=[\\/?#]|$))?([^?#]+)?(?:\?([^#]*))?(?:#([\s\S]*))?$/;function ac(a){return a?decodeURI(a):a}
function bc(a){return ac(a.match($b)[3]||null)}
function cc(a,b,c){if(Array.isArray(b))for(var d=0;d<b.length;d++)cc(a,String(b[d]),c);else null!=b&&c.push(a+(""===b?"":"="+encodeURIComponent(String(b))))}
function dc(a){var b=[],c;for(c in a)cc(c,a[c],b);return b.join("&")}
function ec(a,b){b=dc(b);if(b){var c=a.indexOf("#");0>c&&(c=a.length);var d=a.indexOf("?");if(0>d||d>c){d=c;var e=""}else e=a.substring(d+1,c);a=[a.substr(0,d),e,a.substr(c)];c=a[1];a[1]=b?c?c+"&"+b:b:c;b=a[0]+(a[1]?"?"+a[1]:"")+a[2]}else b=a;return b}
var fc=/#|$/;function G(a,b){var c=void 0;return new (c||(c=Promise))(function(d,e){function f(k){try{h(b.next(k))}catch(l){e(l)}}
function g(k){try{h(b["throw"](k))}catch(l){e(l)}}
function h(k){k.done?d(k.value):(new c(function(l){l(k.value)})).then(f,g)}
h((b=b.apply(a,void 0)).next())})}
;function gc(){return F("iPhone")&&!F("iPod")&&!F("iPad")}
;function hc(a){hc[" "](a);return a}
hc[" "]=Ea;var ic=F("Opera"),jc=F("Trident")||F("MSIE"),kc=F("Edge"),lc=F("Gecko")&&!(-1!=Nb.toLowerCase().indexOf("webkit")&&!F("Edge"))&&!(F("Trident")||F("MSIE"))&&!F("Edge"),mc=-1!=Nb.toLowerCase().indexOf("webkit")&&!F("Edge");function nc(){var a=y.document;return a?a.documentMode:void 0}
var oc;a:{var pc="",qc=function(){var a=Nb;if(lc)return/rv:([^\);]+)(\)|;)/.exec(a);if(kc)return/Edge\/([\d\.]+)/.exec(a);if(jc)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);if(mc)return/WebKit\/(\S+)/.exec(a);if(ic)return/(?:Version)[ \/]?(\S+)/.exec(a)}();
qc&&(pc=qc?qc[1]:"");if(jc){var rc=nc();if(null!=rc&&rc>parseFloat(pc)){oc=String(rc);break a}}oc=pc}var sc=oc,tc;if(y.document&&jc){var uc=nc();tc=uc?uc:parseInt(sc,10)||void 0}else tc=void 0;var vc=tc;var wc=gc()||F("iPod"),xc=F("iPad"),yc=F("Safari")&&!((F("Chrome")||F("CriOS"))&&!F("Edge")||F("Coast")||F("Opera")||F("Edge")||F("Edg/")||F("OPR")||F("Firefox")||F("FxiOS")||F("Silk")||F("Android"))&&!(gc()||F("iPad")||F("iPod"));var zc={},Ac=null;
function Bc(a){var b=3;Ha(a);void 0===b&&(b=0);if(!Ac){Ac={};for(var c="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789".split(""),d=["+/=","+/","-_=","-_.","-_"],e=0;5>e;e++){var f=c.concat(d[e].split(""));zc[e]=f;for(var g=0;g<f.length;g++){var h=f[g];void 0===Ac[h]&&(Ac[h]=g)}}}b=zc[b];c=[];for(d=0;d<a.length;d+=3){var k=a[d],l=(e=d+1<a.length)?a[d+1]:0;h=(f=d+2<a.length)?a[d+2]:0;g=k>>2;k=(k&3)<<4|l>>4;l=(l&15)<<2|h>>6;h&=63;f||(h=64,e||(l=64));c.push(b[g],b[k],b[l]||"",b[h]||"")}return c.join("")}
;Object.freeze([]);var H=window;function Cc(a,b){a.src=ub(b);var c;b=(a.ownerDocument&&a.ownerDocument.defaultView||window).document;(c=(b=null===(c=b.querySelector)||void 0===c?void 0:c.call(b,"script[nonce]"))?b.nonce||b.getAttribute("nonce")||"":"")&&a.setAttribute("nonce",c)}
;var Dc=!jc||9<=Number(vc);function Ec(a,b){this.x=void 0!==a?a:0;this.y=void 0!==b?b:0}
m=Ec.prototype;m.clone=function(){return new Ec(this.x,this.y)};
m.equals=function(a){return a instanceof Ec&&(this==a?!0:this&&a?this.x==a.x&&this.y==a.y:!1)};
m.ceil=function(){this.x=Math.ceil(this.x);this.y=Math.ceil(this.y);return this};
m.floor=function(){this.x=Math.floor(this.x);this.y=Math.floor(this.y);return this};
m.round=function(){this.x=Math.round(this.x);this.y=Math.round(this.y);return this};function Fc(a,b){this.width=a;this.height=b}
m=Fc.prototype;m.clone=function(){return new Fc(this.width,this.height)};
m.aspectRatio=function(){return this.width/this.height};
m.isEmpty=function(){return!(this.width*this.height)};
m.ceil=function(){this.width=Math.ceil(this.width);this.height=Math.ceil(this.height);return this};
m.floor=function(){this.width=Math.floor(this.width);this.height=Math.floor(this.height);return this};
m.round=function(){this.width=Math.round(this.width);this.height=Math.round(this.height);return this};function Gc(a){var b=document;return"string"===typeof a?b.getElementById(a):a}
function Hc(a,b){db(b,function(c,d){c&&"object"==typeof c&&c.Y&&(c=c.X());"style"==d?a.style.cssText=c:"class"==d?a.className=c:"for"==d?a.htmlFor=c:Ic.hasOwnProperty(d)?a.setAttribute(Ic[d],c):0==d.lastIndexOf("aria-",0)||0==d.lastIndexOf("data-",0)?a.setAttribute(d,c):a[d]=c})}
var Ic={cellpadding:"cellPadding",cellspacing:"cellSpacing",colspan:"colSpan",frameborder:"frameBorder",height:"height",maxlength:"maxLength",nonce:"nonce",role:"role",rowspan:"rowSpan",type:"type",usemap:"useMap",valign:"vAlign",width:"width"};
function Jc(a,b,c){var d=arguments,e=document,f=String(d[0]),g=d[1];if(!Dc&&g&&(g.name||g.type)){f=["<",f];g.name&&f.push(' name="',Yb(g.name),'"');if(g.type){f.push(' type="',Yb(g.type),'"');var h={};nb(h,g);delete h.type;g=h}f.push(">");f=f.join("")}f=Kc(e,f);g&&("string"===typeof g?f.className=g:Array.isArray(g)?f.className=g.join(" "):Hc(f,g));2<d.length&&Lc(e,f,d);return f}
function Lc(a,b,c){function d(h){h&&b.appendChild("string"===typeof h?a.createTextNode(h):h)}
for(var e=2;e<c.length;e++){var f=c[e];if(!Ha(f)||Ia(f)&&0<f.nodeType)d(f);else{a:{if(f&&"number"==typeof f.length){if(Ia(f)){var g="function"==typeof f.item||"string"==typeof f.item;break a}if("function"===typeof f){g="function"==typeof f.item;break a}}g=!1}C(g?bb(f):f,d)}}}
function Kc(a,b){b=String(b);"application/xhtml+xml"===a.contentType&&(b=b.toLowerCase());return a.createElement(b)}
function Mc(a,b){for(var c=0;a;){if(b(a))return a;a=a.parentNode;c++}return null}
;function Nc(a){var b=Oc;if(b)for(var c in b)Object.prototype.hasOwnProperty.call(b,c)&&a.call(void 0,b[c],c,b)}
function Pc(){var a=[];Nc(function(b){a.push(b)});
return a}
var Oc={Hb:"allow-forms",Ib:"allow-modals",Jb:"allow-orientation-lock",Kb:"allow-pointer-lock",Lb:"allow-popups",Mb:"allow-popups-to-escape-sandbox",Nb:"allow-presentation",Ob:"allow-same-origin",Pb:"allow-scripts",Qb:"allow-top-navigation",Rb:"allow-top-navigation-by-user-activation"},Qc=Va(function(){return Pc()});
function Rc(){var a=Kc(document,"IFRAME"),b={};C(Qc(),function(c){a.sandbox&&a.sandbox.supports&&a.sandbox.supports(c)&&(b[c]=!0)});
return b}
;function Sc(a){Tc();return vb(a)}
var Tc=Ea;function Uc(a){"number"==typeof a&&(a=Math.round(a)+"px");return a}
;var Vc=(new Date).getTime();function Wc(a){if(!a)return"";a=a.split("#")[0].split("?")[0];a=a.toLowerCase();0==a.indexOf("//")&&(a=window.location.protocol+a);/^[\w\-]*:\/\//.test(a)||(a=window.location.href);var b=a.substring(a.indexOf("://")+3),c=b.indexOf("/");-1!=c&&(b=b.substring(0,c));c=a.substring(0,a.indexOf("://"));if(!c)throw Error("URI is missing protocol: "+a);if("http"!==c&&"https"!==c&&"chrome-extension"!==c&&"moz-extension"!==c&&"file"!==c&&"android-app"!==c&&"chrome-search"!==c&&"chrome-untrusted"!==c&&"chrome"!==
c&&"app"!==c&&"devtools"!==c)throw Error("Invalid URI scheme in origin: "+c);a="";var d=b.indexOf(":");if(-1!=d){var e=b.substring(d+1);b=b.substring(0,d);if("http"===c&&"80"!==e||"https"===c&&"443"!==e)a=":"+e}return c+"://"+b+a}
;function Xc(){function a(){e[0]=1732584193;e[1]=4023233417;e[2]=2562383102;e[3]=271733878;e[4]=3285377520;n=l=0}
function b(p){for(var t=g,q=0;64>q;q+=4)t[q/4]=p[q]<<24|p[q+1]<<16|p[q+2]<<8|p[q+3];for(q=16;80>q;q++)p=t[q-3]^t[q-8]^t[q-14]^t[q-16],t[q]=(p<<1|p>>>31)&4294967295;p=e[0];var D=e[1],K=e[2],N=e[3],X=e[4];for(q=0;80>q;q++){if(40>q)if(20>q){var Y=N^D&(K^N);var I=1518500249}else Y=D^K^N,I=1859775393;else 60>q?(Y=D&K|N&(D|K),I=2400959708):(Y=D^K^N,I=3395469782);Y=((p<<5|p>>>27)&4294967295)+Y+X+I+t[q]&4294967295;X=N;N=K;K=(D<<30|D>>>2)&4294967295;D=p;p=Y}e[0]=e[0]+p&4294967295;e[1]=e[1]+D&4294967295;e[2]=
e[2]+K&4294967295;e[3]=e[3]+N&4294967295;e[4]=e[4]+X&4294967295}
function c(p,t){if("string"===typeof p){p=unescape(encodeURIComponent(p));for(var q=[],D=0,K=p.length;D<K;++D)q.push(p.charCodeAt(D));p=q}t||(t=p.length);q=0;if(0==l)for(;q+64<t;)b(p.slice(q,q+64)),q+=64,n+=64;for(;q<t;)if(f[l++]=p[q++],n++,64==l)for(l=0,b(f);q+64<t;)b(p.slice(q,q+64)),q+=64,n+=64}
function d(){var p=[],t=8*n;56>l?c(h,56-l):c(h,64-(l-56));for(var q=63;56<=q;q--)f[q]=t&255,t>>>=8;b(f);for(q=t=0;5>q;q++)for(var D=24;0<=D;D-=8)p[t++]=e[q]>>D&255;return p}
for(var e=[],f=[],g=[],h=[128],k=1;64>k;++k)h[k]=0;var l,n;a();return{reset:a,update:c,digest:d,Qa:function(){for(var p=d(),t="",q=0;q<p.length;q++)t+="0123456789ABCDEF".charAt(Math.floor(p[q]/16))+"0123456789ABCDEF".charAt(p[q]%16);return t}}}
;function Yc(a,b,c){var d=String(y.location.href);return d&&a&&b?[b,Zc(Wc(d),a,c||null)].join(" "):null}
function Zc(a,b,c){var d=[],e=[];if(1==(Array.isArray(c)?2:1))return e=[b,a],C(d,function(h){e.push(h)}),$c(e.join(" "));
var f=[],g=[];C(c,function(h){g.push(h.key);f.push(h.value)});
c=Math.floor((new Date).getTime()/1E3);e=0==f.length?[c,b,a]:[f.join(":"),c,b,a];C(d,function(h){e.push(h)});
a=$c(e.join(" "));a=[c,a];0==g.length||a.push(g.join(""));return a.join("_")}
function $c(a){var b=Xc();b.update(a);return b.Qa().toLowerCase()}
;var ad={};function bd(a){this.h=a||{cookie:""}}
m=bd.prototype;m.isEnabled=function(){if(!y.navigator.cookieEnabled)return!1;if(!this.isEmpty())return!0;this.set("TESTCOOKIESENABLED","1",{wa:60});if("1"!==this.get("TESTCOOKIESENABLED"))return!1;this.remove("TESTCOOKIESENABLED");return!0};
m.set=function(a,b,c){var d=!1;if("object"===typeof c){var e=c.dl;d=c.secure||!1;var f=c.domain||void 0;var g=c.path||void 0;var h=c.wa}if(/[;=\s]/.test(a))throw Error('Invalid cookie name "'+a+'"');if(/[;\r\n]/.test(b))throw Error('Invalid cookie value "'+b+'"');void 0===h&&(h=-1);this.h.cookie=a+"="+b+(f?";domain="+f:"")+(g?";path="+g:"")+(0>h?"":0==h?";expires="+(new Date(1970,1,1)).toUTCString():";expires="+(new Date(Date.now()+1E3*h)).toUTCString())+(d?";secure":"")+(null!=e?";samesite="+e:"")};
m.get=function(a,b){for(var c=a+"=",d=(this.h.cookie||"").split(";"),e=0,f;e<d.length;e++){f=wb(d[e]);if(0==f.lastIndexOf(c,0))return f.substr(c.length);if(f==a)return""}return b};
m.remove=function(a,b,c){var d=void 0!==this.get(a);this.set(a,"",{wa:0,path:b,domain:c});return d};
m.isEmpty=function(){return!this.h.cookie};
m.clear=function(){for(var a=(this.h.cookie||"").split(";"),b=[],c=[],d,e,f=0;f<a.length;f++)e=wb(a[f]),d=e.indexOf("="),-1==d?(b.push(""),c.push(e)):(b.push(e.substring(0,d)),c.push(e.substring(d+1)));for(a=b.length-1;0<=a;a--)this.remove(b[a])};
var cd=new bd("undefined"==typeof document?null:document);function dd(a){return!!ad.FPA_SAMESITE_PHASE2_MOD||!(void 0===a||!a)}
function ed(a){a=void 0===a?!1:a;var b=y.__SAPISID||y.__APISID||y.__3PSAPISID||y.__OVERRIDE_SID;dd(a)&&(b=b||y.__1PSAPISID);if(b)return!0;var c=new bd(document);b=c.get("SAPISID")||c.get("APISID")||c.get("__Secure-3PAPISID")||c.get("SID");dd(a)&&(b=b||c.get("__Secure-1PAPISID"));return!!b}
function fd(a,b,c,d){(a=y[a])||(a=(new bd(document)).get(b));return a?Yc(a,c,d):null}
function gd(a){var b=void 0===b?!1:b;var c=Wc(String(y.location.href)),d=[];if(ed(b)){c=0==c.indexOf("https:")||0==c.indexOf("chrome-extension:")||0==c.indexOf("moz-extension:");var e=c?y.__SAPISID:y.__APISID;e||(e=new bd(document),e=e.get(c?"SAPISID":"APISID")||e.get("__Secure-3PAPISID"));(e=e?Yc(e,c?"SAPISIDHASH":"APISIDHASH",a):null)&&d.push(e);c&&dd(b)&&((b=fd("__1PSAPISID","__Secure-1PAPISID","SAPISID1PHASH",a))&&d.push(b),(a=fd("__3PSAPISID","__Secure-3PAPISID","SAPISID3PHASH",a))&&d.push(a))}return 0==
d.length?null:d.join(" ")}
;function hd(){this.data_=[];this.h=-1}
hd.prototype.set=function(a,b){b=void 0===b?!0:b;0<=a&&52>a&&0===a%1&&this.data_[a]!=b&&(this.data_[a]=b,this.h=-1)};
hd.prototype.get=function(a){return!!this.data_[a]};
function id(a){-1==a.h&&(a.h=Za(a.data_,function(b,c,d){return c?b+Math.pow(2,d):b},0));
return a.h}
;function jd(a,b){this.j=a;this.l=b;this.i=0;this.h=null}
jd.prototype.get=function(){if(0<this.i){this.i--;var a=this.h;this.h=a.next;a.next=null}else a=this.j();return a};
function kd(a,b){a.l(b);100>a.i&&(a.i++,b.next=a.h,a.h=b)}
;var ld;
function md(){var a=y.MessageChannel;"undefined"===typeof a&&"undefined"!==typeof window&&window.postMessage&&window.addEventListener&&!F("Presto")&&(a=function(){var e=Kc(document,"IFRAME");e.style.display="none";document.documentElement.appendChild(e);var f=e.contentWindow;e=f.document;e.open();e.close();var g="callImmediate"+Math.random(),h="file:"==f.location.protocol?"*":f.location.protocol+"//"+f.location.host;e=Oa(function(k){if(("*"==h||k.origin==h)&&k.data==g)this.port1.onmessage()},this);
f.addEventListener("message",e,!1);this.port1={};this.port2={postMessage:function(){f.postMessage(g,h)}}});
if("undefined"!==typeof a&&!F("Trident")&&!F("MSIE")){var b=new a,c={},d=c;b.port1.onmessage=function(){if(void 0!==c.next){c=c.next;var e=c.Da;c.Da=null;e()}};
return function(e){d.next={Da:e};d=d.next;b.port2.postMessage(0)}}return function(e){y.setTimeout(e,0)}}
;function nd(a){y.setTimeout(function(){throw a;},0)}
;function od(){this.i=this.h=null}
od.prototype.add=function(a,b){var c=pd.get();c.set(a,b);this.i?this.i.next=c:this.h=c;this.i=c};
od.prototype.remove=function(){var a=null;this.h&&(a=this.h,this.h=this.h.next,this.h||(this.i=null),a.next=null);return a};
var pd=new jd(function(){return new qd},function(a){return a.reset()});
function qd(){this.next=this.scope=this.h=null}
qd.prototype.set=function(a,b){this.h=a;this.scope=b;this.next=null};
qd.prototype.reset=function(){this.next=this.scope=this.h=null};function rd(a,b){sd||td();ud||(sd(),ud=!0);vd.add(a,b)}
var sd;function td(){if(y.Promise&&y.Promise.resolve){var a=y.Promise.resolve(void 0);sd=function(){a.then(wd)}}else sd=function(){var b=wd;
"function"!==typeof y.setImmediate||y.Window&&y.Window.prototype&&!F("Edge")&&y.Window.prototype.setImmediate==y.setImmediate?(ld||(ld=md()),ld(b)):y.setImmediate(b)}}
var ud=!1,vd=new od;function wd(){for(var a;a=vd.remove();){try{a.h.call(a.scope)}catch(b){nd(b)}kd(pd,a)}ud=!1}
;function xd(a,b){this.h=a[y.Symbol.iterator]();this.i=b;this.j=0}
xd.prototype[Symbol.iterator]=function(){return this};
xd.prototype.next=function(){var a=this.h.next();return{value:a.done?void 0:this.i.call(void 0,a.value,this.j++),done:a.done}};
function yd(a,b){return new xd(a,b)}
;function zd(){this.blockSize=-1}
;function Ad(){this.blockSize=-1;this.blockSize=64;this.h=[];this.u=[];this.m=[];this.j=[];this.j[0]=128;for(var a=1;a<this.blockSize;++a)this.j[a]=0;this.l=this.i=0;this.reset()}
B(Ad,zd);Ad.prototype.reset=function(){this.h[0]=1732584193;this.h[1]=4023233417;this.h[2]=2562383102;this.h[3]=271733878;this.h[4]=3285377520;this.l=this.i=0};
function Bd(a,b,c){c||(c=0);var d=a.m;if("string"===typeof b)for(var e=0;16>e;e++)d[e]=b.charCodeAt(c)<<24|b.charCodeAt(c+1)<<16|b.charCodeAt(c+2)<<8|b.charCodeAt(c+3),c+=4;else for(e=0;16>e;e++)d[e]=b[c]<<24|b[c+1]<<16|b[c+2]<<8|b[c+3],c+=4;for(e=16;80>e;e++){var f=d[e-3]^d[e-8]^d[e-14]^d[e-16];d[e]=(f<<1|f>>>31)&4294967295}b=a.h[0];c=a.h[1];var g=a.h[2],h=a.h[3],k=a.h[4];for(e=0;80>e;e++){if(40>e)if(20>e){f=h^c&(g^h);var l=1518500249}else f=c^g^h,l=1859775393;else 60>e?(f=c&g|h&(c|g),l=2400959708):
(f=c^g^h,l=3395469782);f=(b<<5|b>>>27)+f+k+l+d[e]&4294967295;k=h;h=g;g=(c<<30|c>>>2)&4294967295;c=b;b=f}a.h[0]=a.h[0]+b&4294967295;a.h[1]=a.h[1]+c&4294967295;a.h[2]=a.h[2]+g&4294967295;a.h[3]=a.h[3]+h&4294967295;a.h[4]=a.h[4]+k&4294967295}
Ad.prototype.update=function(a,b){if(null!=a){void 0===b&&(b=a.length);for(var c=b-this.blockSize,d=0,e=this.u,f=this.i;d<b;){if(0==f)for(;d<=c;)Bd(this,a,d),d+=this.blockSize;if("string"===typeof a)for(;d<b;){if(e[f]=a.charCodeAt(d),++f,++d,f==this.blockSize){Bd(this,e);f=0;break}}else for(;d<b;)if(e[f]=a[d],++f,++d,f==this.blockSize){Bd(this,e);f=0;break}}this.i=f;this.l+=b}};
Ad.prototype.digest=function(){var a=[],b=8*this.l;56>this.i?this.update(this.j,56-this.i):this.update(this.j,this.blockSize-(this.i-56));for(var c=this.blockSize-1;56<=c;c--)this.u[c]=b&255,b/=256;Bd(this,this.u);for(c=b=0;5>c;c++)for(var d=24;0<=d;d-=8)a[b]=this.h[c]>>d&255,++b;return a};function Cd(a){var b=A("window.location.href");null==a&&(a='Unknown Error of type "null/undefined"');if("string"===typeof a)return{message:a,name:"Unknown error",lineNumber:"Not available",fileName:b,stack:"Not available"};var c=!1;try{var d=a.lineNumber||a.line||"Not available"}catch(g){d="Not available",c=!0}try{var e=a.fileName||a.filename||a.sourceURL||y.$googDebugFname||b}catch(g){e="Not available",c=!0}b=Dd(a);if(!(!c&&a.lineNumber&&a.fileName&&a.stack&&a.message&&a.name)){c=a.message;if(null==
c){if(a.constructor&&a.constructor instanceof Function){if(a.constructor.name)c=a.constructor.name;else if(c=a.constructor,Ed[c])c=Ed[c];else{c=String(c);if(!Ed[c]){var f=/function\s+([^\(]+)/m.exec(c);Ed[c]=f?f[1]:"[Anonymous]"}c=Ed[c]}c='Unknown Error of type "'+c+'"'}else c="Unknown Error of unknown type";"function"===typeof a.toString&&Object.prototype.toString!==a.toString&&(c+=": "+a.toString())}return{message:c,name:a.name||"UnknownError",lineNumber:d,fileName:e,stack:b||"Not available"}}a.stack=
b;return{message:a.message,name:a.name,lineNumber:a.lineNumber,fileName:a.fileName,stack:a.stack}}
function Dd(a,b){b||(b={});b[Fd(a)]=!0;var c=a.stack||"";(a=a.Pa)&&!b[Fd(a)]&&(c+="\nCaused by: ",a.stack&&0==a.stack.indexOf(a.toString())||(c+="string"===typeof a?a:a.message+"\n"),c+=Dd(a,b));return c}
function Fd(a){var b="";"function"===typeof a.toString&&(b=""+a);return b+a.stack}
var Ed={};function Gd(a){a&&"function"==typeof a.dispose&&a.dispose()}
;function Hd(a){for(var b=0,c=arguments.length;b<c;++b){var d=arguments[b];Ha(d)?Hd.apply(null,d):Gd(d)}}
;function J(){this.h=this.h;this.u=this.u}
J.prototype.h=!1;J.prototype.dispose=function(){this.h||(this.h=!0,this.D())};
function Id(a,b){a.h?b():(a.u||(a.u=[]),a.u.push(b))}
J.prototype.D=function(){if(this.u)for(;this.u.length;)this.u.shift()()};function Jd(a){return"string"==typeof a.className?a.className:a.getAttribute&&a.getAttribute("class")||""}
function Kd(a,b){"string"==typeof a.className?a.className=b:a.setAttribute&&a.setAttribute("class",b)}
function Ld(a,b){a.classList?b=a.classList.contains(b):(a=a.classList?a.classList:Jd(a).match(/\S+/g)||[],b=0<=Wa(a,b));return b}
function Md(){var a=document.body;a.classList?a.classList.remove("inverted-hdpi"):Ld(a,"inverted-hdpi")&&Kd(a,Xa(a.classList?a.classList:Jd(a).match(/\S+/g)||[],function(b){return"inverted-hdpi"!=b}).join(" "))}
;var Nd="StopIteration"in y?y.StopIteration:{message:"StopIteration",stack:""};function Od(){}
Od.prototype.next=function(){return Od.prototype.j.call(this)};
Od.prototype.j=function(){throw Nd;};
Od.prototype.M=function(){return this};function Pd(a){if(a instanceof Qd||a instanceof Rd||a instanceof Sd)return a;if("function"==typeof a.next)return new Qd(function(){return Td(a)});
if("function"==typeof a[Symbol.iterator])return new Qd(function(){return a[Symbol.iterator]()});
if("function"==typeof a.M)return new Qd(function(){return Td(a.M())});
throw Error("Not an iterator or iterable.");}
function Td(a){if(!(a instanceof Od))return a;var b=!1;return{next:function(){for(var c;!b;)try{c=a.next();break}catch(d){if(d!==Nd)throw d;b=!0}return{value:c,done:b}}}}
function Qd(a){this.i=a}
Qd.prototype.M=function(){return new Rd(this.i())};
Qd.prototype[Symbol.iterator]=function(){return new Sd(this.i())};
Qd.prototype.h=function(){return new Sd(this.i())};
function Rd(a){this.i=a}
v(Rd,Od);Rd.prototype.next=function(){var a=this.i.next();if(a.done)throw Nd;return a.value};
Rd.prototype[Symbol.iterator]=function(){return new Sd(this.i)};
Rd.prototype.h=function(){return new Sd(this.i)};
function Sd(a){Qd.call(this,function(){return a});
this.j=a}
v(Sd,Qd);Sd.prototype.next=function(){return this.j.next()};function Ud(a,b){this.i={};this.h=[];this.V=this.size=0;var c=arguments.length;if(1<c){if(c%2)throw Error("Uneven number of arguments");for(var d=0;d<c;d+=2)this.set(arguments[d],arguments[d+1])}else if(a)if(a instanceof Ud)for(c=Vd(a),d=0;d<c.length;d++)this.set(c[d],a.get(c[d]));else for(d in a)this.set(d,a[d])}
function Vd(a){Wd(a);return a.h.concat()}
m=Ud.prototype;m.has=function(a){return Xd(this.i,a)};
m.equals=function(a,b){if(this===a)return!0;if(this.size!=a.size)return!1;b=b||Yd;Wd(this);for(var c,d=0;c=this.h[d];d++)if(!b(this.get(c),a.get(c)))return!1;return!0};
function Yd(a,b){return a===b}
m.isEmpty=function(){return 0==this.size};
m.clear=function(){this.i={};this.V=this.size=this.h.length=0};
m.remove=function(a){return this.delete(a)};
m.delete=function(a){return Xd(this.i,a)?(delete this.i[a],--this.size,this.V++,this.h.length>2*this.size&&Wd(this),!0):!1};
function Wd(a){if(a.size!=a.h.length){for(var b=0,c=0;b<a.h.length;){var d=a.h[b];Xd(a.i,d)&&(a.h[c++]=d);b++}a.h.length=c}if(a.size!=a.h.length){var e={};for(c=b=0;b<a.h.length;)d=a.h[b],Xd(e,d)||(a.h[c++]=d,e[d]=1),b++;a.h.length=c}}
m.get=function(a,b){return Xd(this.i,a)?this.i[a]:b};
m.set=function(a,b){Xd(this.i,a)||(this.size+=1,this.h.push(a),this.V++);this.i[a]=b};
m.forEach=function(a,b){for(var c=Vd(this),d=0;d<c.length;d++){var e=c[d],f=this.get(e);a.call(b,f,e,this)}};
m.clone=function(){return new Ud(this)};
m.keys=function(){return Pd(this.M(!0)).h()};
m.values=function(){return Pd(this.M(!1)).h()};
m.entries=function(){var a=this;return yd(this.keys(),function(b){return[b,a.get(b)]})};
m.M=function(a){Wd(this);var b=0,c=this.V,d=this,e=new Od;e.next=function(){if(c!=d.V)throw Error("The map has changed since the iterator was created");if(b>=d.h.length)throw Nd;var f=d.h[b++];return a?f:d.i[f]};
return e};
function Xd(a,b){return Object.prototype.hasOwnProperty.call(a,b)}
;var Zd=function(){if(!y.addEventListener||!Object.defineProperty)return!1;var a=!1,b=Object.defineProperty({},"passive",{get:function(){a=!0}});
try{y.addEventListener("test",Ea,b),y.removeEventListener("test",Ea,b)}catch(c){}return a}();function $d(a,b){this.type=a;this.h=this.target=b;this.defaultPrevented=this.j=!1}
$d.prototype.stopPropagation=function(){this.j=!0};
$d.prototype.preventDefault=function(){this.defaultPrevented=!0};function ae(a,b){$d.call(this,a?a.type:"");this.relatedTarget=this.h=this.target=null;this.button=this.screenY=this.screenX=this.clientY=this.clientX=0;this.key="";this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.altKey=this.ctrlKey=!1;this.state=null;this.pointerId=0;this.pointerType="";this.i=null;a&&this.init(a,b)}
B(ae,$d);var be={2:"touch",3:"pen",4:"mouse"};
ae.prototype.init=function(a,b){var c=this.type=a.type,d=a.changedTouches&&a.changedTouches.length?a.changedTouches[0]:null;this.target=a.target||a.srcElement;this.h=b;if(b=a.relatedTarget){if(lc){a:{try{hc(b.nodeName);var e=!0;break a}catch(f){}e=!1}e||(b=null)}}else"mouseover"==c?b=a.fromElement:"mouseout"==c&&(b=a.toElement);this.relatedTarget=b;d?(this.clientX=void 0!==d.clientX?d.clientX:d.pageX,this.clientY=void 0!==d.clientY?d.clientY:d.pageY,this.screenX=d.screenX||0,this.screenY=d.screenY||
0):(this.clientX=void 0!==a.clientX?a.clientX:a.pageX,this.clientY=void 0!==a.clientY?a.clientY:a.pageY,this.screenX=a.screenX||0,this.screenY=a.screenY||0);this.button=a.button;this.keyCode=a.keyCode||0;this.key=a.key||"";this.charCode=a.charCode||("keypress"==c?a.keyCode:0);this.ctrlKey=a.ctrlKey;this.altKey=a.altKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.pointerId=a.pointerId||0;this.pointerType="string"===typeof a.pointerType?a.pointerType:be[a.pointerType]||"";this.state=a.state;
this.i=a;a.defaultPrevented&&ae.O.preventDefault.call(this)};
ae.prototype.stopPropagation=function(){ae.O.stopPropagation.call(this);this.i.stopPropagation?this.i.stopPropagation():this.i.cancelBubble=!0};
ae.prototype.preventDefault=function(){ae.O.preventDefault.call(this);var a=this.i;a.preventDefault?a.preventDefault():a.returnValue=!1};var ce="closure_listenable_"+(1E6*Math.random()|0);var de=0;function ee(a,b,c,d,e){this.listener=a;this.h=null;this.src=b;this.type=c;this.capture=!!d;this.la=e;this.key=++de;this.ea=this.ha=!1}
function fe(a){a.ea=!0;a.listener=null;a.h=null;a.src=null;a.la=null}
;function ge(a){this.src=a;this.listeners={};this.h=0}
ge.prototype.add=function(a,b,c,d,e){var f=a.toString();a=this.listeners[f];a||(a=this.listeners[f]=[],this.h++);var g=he(a,b,d,e);-1<g?(b=a[g],c||(b.ha=!1)):(b=new ee(b,this.src,f,!!d,e),b.ha=c,a.push(b));return b};
ge.prototype.remove=function(a,b,c,d){a=a.toString();if(!(a in this.listeners))return!1;var e=this.listeners[a];b=he(e,b,c,d);return-1<b?(fe(e[b]),Array.prototype.splice.call(e,b,1),0==e.length&&(delete this.listeners[a],this.h--),!0):!1};
function ie(a,b){var c=b.type;c in a.listeners&&ab(a.listeners[c],b)&&(fe(b),0==a.listeners[c].length&&(delete a.listeners[c],a.h--))}
function he(a,b,c,d){for(var e=0;e<a.length;++e){var f=a[e];if(!f.ea&&f.listener==b&&f.capture==!!c&&f.la==d)return e}return-1}
;var je="closure_lm_"+(1E6*Math.random()|0),ke={},le=0;function me(a,b,c,d,e){if(d&&d.once)ne(a,b,c,d,e);else if(Array.isArray(b))for(var f=0;f<b.length;f++)me(a,b[f],c,d,e);else c=oe(c),a&&a[ce]?a.ca(b,c,Ia(d)?!!d.capture:!!d,e):pe(a,b,c,!1,d,e)}
function pe(a,b,c,d,e,f){if(!b)throw Error("Invalid event type");var g=Ia(e)?!!e.capture:!!e,h=qe(a);h||(a[je]=h=new ge(a));c=h.add(b,c,d,g,f);if(!c.h){d=re();c.h=d;d.src=a;d.listener=c;if(a.addEventListener)Zd||(e=g),void 0===e&&(e=!1),a.addEventListener(b.toString(),d,e);else if(a.attachEvent)a.attachEvent(se(b.toString()),d);else if(a.addListener&&a.removeListener)a.addListener(d);else throw Error("addEventListener and attachEvent are unavailable.");le++}}
function re(){function a(c){return b.call(a.src,a.listener,c)}
var b=te;return a}
function ne(a,b,c,d,e){if(Array.isArray(b))for(var f=0;f<b.length;f++)ne(a,b[f],c,d,e);else c=oe(c),a&&a[ce]?a.j.add(String(b),c,!0,Ia(d)?!!d.capture:!!d,e):pe(a,b,c,!0,d,e)}
function ue(a,b,c,d,e){if(Array.isArray(b))for(var f=0;f<b.length;f++)ue(a,b[f],c,d,e);else(d=Ia(d)?!!d.capture:!!d,c=oe(c),a&&a[ce])?a.j.remove(String(b),c,d,e):a&&(a=qe(a))&&(b=a.listeners[b.toString()],a=-1,b&&(a=he(b,c,d,e)),(c=-1<a?b[a]:null)&&ve(c))}
function ve(a){if("number"!==typeof a&&a&&!a.ea){var b=a.src;if(b&&b[ce])ie(b.j,a);else{var c=a.type,d=a.h;b.removeEventListener?b.removeEventListener(c,d,a.capture):b.detachEvent?b.detachEvent(se(c),d):b.addListener&&b.removeListener&&b.removeListener(d);le--;(c=qe(b))?(ie(c,a),0==c.h&&(c.src=null,b[je]=null)):fe(a)}}}
function se(a){return a in ke?ke[a]:ke[a]="on"+a}
function te(a,b){if(a.ea)a=!0;else{b=new ae(b,this);var c=a.listener,d=a.la||a.src;a.ha&&ve(a);a=c.call(d,b)}return a}
function qe(a){a=a[je];return a instanceof ge?a:null}
var we="__closure_events_fn_"+(1E9*Math.random()>>>0);function oe(a){if("function"===typeof a)return a;a[we]||(a[we]=function(b){return a.handleEvent(b)});
return a[we]}
;function xe(){J.call(this);this.j=new ge(this);this.P=this;this.F=null}
B(xe,J);xe.prototype[ce]=!0;xe.prototype.addEventListener=function(a,b,c,d){me(this,a,b,c,d)};
xe.prototype.removeEventListener=function(a,b,c,d){ue(this,a,b,c,d)};
function ye(a,b){var c=a.F;if(c){var d=[];for(var e=1;c;c=c.F)d.push(c),++e}a=a.P;c=b.type||b;"string"===typeof b?b=new $d(b,a):b instanceof $d?b.target=b.target||a:(e=b,b=new $d(c,a),nb(b,e));e=!0;if(d)for(var f=d.length-1;!b.j&&0<=f;f--){var g=b.h=d[f];e=ze(g,c,!0,b)&&e}b.j||(g=b.h=a,e=ze(g,c,!0,b)&&e,b.j||(e=ze(g,c,!1,b)&&e));if(d)for(f=0;!b.j&&f<d.length;f++)g=b.h=d[f],e=ze(g,c,!1,b)&&e}
xe.prototype.D=function(){xe.O.D.call(this);if(this.j){var a=this.j,b=0,c;for(c in a.listeners){for(var d=a.listeners[c],e=0;e<d.length;e++)++b,fe(d[e]);delete a.listeners[c];a.h--}}this.F=null};
xe.prototype.ca=function(a,b,c,d){return this.j.add(String(a),b,!1,c,d)};
function ze(a,b,c,d){b=a.j.listeners[String(b)];if(!b)return!0;b=b.concat();for(var e=!0,f=0;f<b.length;++f){var g=b[f];if(g&&!g.ea&&g.capture==c){var h=g.listener,k=g.la||g.src;g.ha&&ie(a.j,g);e=!1!==h.call(k,d)&&e}}return e&&!d.defaultPrevented}
;function Ae(a){var b=[];Be(new Ce,a,b);return b.join("")}
function Ce(){}
function Be(a,b,c){if(null==b)c.push("null");else{if("object"==typeof b){if(Array.isArray(b)){var d=b;b=d.length;c.push("[");for(var e="",f=0;f<b;f++)c.push(e),Be(a,d[f],c),e=",";c.push("]");return}if(b instanceof String||b instanceof Number||b instanceof Boolean)b=b.valueOf();else{c.push("{");e="";for(d in b)Object.prototype.hasOwnProperty.call(b,d)&&(f=b[d],"function"!=typeof f&&(c.push(e),De(d,c),c.push(":"),Be(a,f,c),e=","));c.push("}");return}}switch(typeof b){case "string":De(b,c);break;case "number":c.push(isFinite(b)&&
!isNaN(b)?String(b):"null");break;case "boolean":c.push(String(b));break;case "function":c.push("null");break;default:throw Error("Unknown type: "+typeof b);}}}
var Ee={'"':'\\"',"\\":"\\\\","/":"\\/","\b":"\\b","\f":"\\f","\n":"\\n","\r":"\\r","\t":"\\t","\x0B":"\\u000b"},Fe=/\uffff/.test("\uffff")?/[\\"\x00-\x1f\x7f-\uffff]/g:/[\\"\x00-\x1f\x7f-\xff]/g;function De(a,b){b.push('"',a.replace(Fe,function(c){var d=Ee[c];d||(d="\\u"+(c.charCodeAt(0)|65536).toString(16).substr(1),Ee[c]=d);return d}),'"')}
;function Ge(a){if(!a)return!1;try{return!!a.$goog_Thenable}catch(b){return!1}}
;function He(a){this.h=0;this.o=void 0;this.l=this.i=this.j=null;this.u=this.m=!1;if(a!=Ea)try{var b=this;a.call(void 0,function(c){Ie(b,2,c)},function(c){Ie(b,3,c)})}catch(c){Ie(this,3,c)}}
function Je(){this.next=this.context=this.onRejected=this.i=this.h=null;this.j=!1}
Je.prototype.reset=function(){this.context=this.onRejected=this.i=this.h=null;this.j=!1};
var Ke=new jd(function(){return new Je},function(a){a.reset()});
function Le(a,b,c){var d=Ke.get();d.i=a;d.onRejected=b;d.context=c;return d}
function Me(a){return new He(function(b,c){c(a)})}
He.prototype.then=function(a,b,c){return Ne(this,"function"===typeof a?a:null,"function"===typeof b?b:null,c)};
He.prototype.$goog_Thenable=!0;function Oe(a,b){return Ne(a,null,b,void 0)}
He.prototype.cancel=function(a){if(0==this.h){var b=new Pe(a);rd(function(){Qe(this,b)},this)}};
function Qe(a,b){if(0==a.h)if(a.j){var c=a.j;if(c.i){for(var d=0,e=null,f=null,g=c.i;g&&(g.j||(d++,g.h==a&&(e=g),!(e&&1<d)));g=g.next)e||(f=g);e&&(0==c.h&&1==d?Qe(c,b):(f?(d=f,d.next==c.l&&(c.l=d),d.next=d.next.next):Re(c),Se(c,e,3,b)))}a.j=null}else Ie(a,3,b)}
function Te(a,b){a.i||2!=a.h&&3!=a.h||Ue(a);a.l?a.l.next=b:a.i=b;a.l=b}
function Ne(a,b,c,d){var e=Le(null,null,null);e.h=new He(function(f,g){e.i=b?function(h){try{var k=b.call(d,h);f(k)}catch(l){g(l)}}:f;
e.onRejected=c?function(h){try{var k=c.call(d,h);void 0===k&&h instanceof Pe?g(h):f(k)}catch(l){g(l)}}:g});
e.h.j=a;Te(a,e);return e.h}
He.prototype.C=function(a){this.h=0;Ie(this,2,a)};
He.prototype.F=function(a){this.h=0;Ie(this,3,a)};
function Ie(a,b,c){if(0==a.h){a===c&&(b=3,c=new TypeError("Promise cannot resolve to itself"));a.h=1;a:{var d=c,e=a.C,f=a.F;if(d instanceof He){Te(d,Le(e||Ea,f||null,a));var g=!0}else if(Ge(d))d.then(e,f,a),g=!0;else{if(Ia(d))try{var h=d.then;if("function"===typeof h){Ve(d,h,e,f,a);g=!0;break a}}catch(k){f.call(a,k);g=!0;break a}g=!1}}g||(a.o=c,a.h=b,a.j=null,Ue(a),3!=b||c instanceof Pe||We(a,c))}}
function Ve(a,b,c,d,e){function f(k){h||(h=!0,d.call(e,k))}
function g(k){h||(h=!0,c.call(e,k))}
var h=!1;try{b.call(a,g,f)}catch(k){f(k)}}
function Ue(a){a.m||(a.m=!0,rd(a.B,a))}
function Re(a){var b=null;a.i&&(b=a.i,a.i=b.next,b.next=null);a.i||(a.l=null);return b}
He.prototype.B=function(){for(var a;a=Re(this);)Se(this,a,this.h,this.o);this.m=!1};
function Se(a,b,c,d){if(3==c&&b.onRejected&&!b.j)for(;a&&a.u;a=a.j)a.u=!1;if(b.h)b.h.j=null,Xe(b,c,d);else try{b.j?b.i.call(b.context):Xe(b,c,d)}catch(e){Ye.call(null,e)}kd(Ke,b)}
function Xe(a,b,c){2==b?a.i.call(a.context,c):a.onRejected&&a.onRejected.call(a.context,c)}
function We(a,b){a.u=!0;rd(function(){a.u&&Ye.call(null,b)})}
var Ye=nd;function Pe(a){Sa.call(this,a)}
B(Pe,Sa);Pe.prototype.name="cancel";function L(a){J.call(this);this.o=1;this.l=[];this.m=0;this.i=[];this.j={};this.B=!!a}
B(L,J);m=L.prototype;m.subscribe=function(a,b,c){var d=this.j[a];d||(d=this.j[a]=[]);var e=this.o;this.i[e]=a;this.i[e+1]=b;this.i[e+2]=c;this.o=e+3;d.push(e);return e};
function Ze(a,b,c,d){if(b=a.j[b]){var e=a.i;(b=$a(b,function(f){return e[f+1]==c&&e[f+2]==d}))&&a.da(b)}}
m.da=function(a){var b=this.i[a];if(b){var c=this.j[b];0!=this.m?(this.l.push(a),this.i[a+1]=Ea):(c&&ab(c,a),delete this.i[a],delete this.i[a+1],delete this.i[a+2])}return!!b};
m.W=function(a,b){var c=this.j[a];if(c){for(var d=Array(arguments.length-1),e=1,f=arguments.length;e<f;e++)d[e-1]=arguments[e];if(this.B)for(e=0;e<c.length;e++){var g=c[e];$e(this.i[g+1],this.i[g+2],d)}else{this.m++;try{for(e=0,f=c.length;e<f;e++)g=c[e],this.i[g+1].apply(this.i[g+2],d)}finally{if(this.m--,0<this.l.length&&0==this.m)for(;c=this.l.pop();)this.da(c)}}return 0!=e}return!1};
function $e(a,b,c){rd(function(){a.apply(b,c)})}
m.clear=function(a){if(a){var b=this.j[a];b&&(C(b,this.da,this),delete this.j[a])}else this.i.length=0,this.j={}};
m.D=function(){L.O.D.call(this);this.clear();this.l.length=0};function af(a){this.h=a}
af.prototype.set=function(a,b){void 0===b?this.h.remove(a):this.h.set(a,Ae(b))};
af.prototype.get=function(a){try{var b=this.h.get(a)}catch(c){return}if(null!==b)try{return JSON.parse(b)}catch(c){throw"Storage: Invalid value was encountered";}};
af.prototype.remove=function(a){this.h.remove(a)};function bf(a){this.h=a}
B(bf,af);function cf(a){this.data=a}
function df(a){return void 0===a||a instanceof cf?a:new cf(a)}
bf.prototype.set=function(a,b){bf.O.set.call(this,a,df(b))};
bf.prototype.i=function(a){a=bf.O.get.call(this,a);if(void 0===a||a instanceof Object)return a;throw"Storage: Invalid value was encountered";};
bf.prototype.get=function(a){if(a=this.i(a)){if(a=a.data,void 0===a)throw"Storage: Invalid value was encountered";}else a=void 0;return a};function ef(a){this.h=a}
B(ef,bf);ef.prototype.set=function(a,b,c){if(b=df(b)){if(c){if(c<Date.now()){ef.prototype.remove.call(this,a);return}b.expiration=c}b.creation=Date.now()}ef.O.set.call(this,a,b)};
ef.prototype.i=function(a){var b=ef.O.i.call(this,a);if(b){var c=b.creation,d=b.expiration;if(d&&d<Date.now()||c&&c>Date.now())ef.prototype.remove.call(this,a);else return b}};function ff(){}
;function gf(){}
B(gf,ff);gf.prototype[Symbol.iterator]=function(){return Pd(this.M(!0)).h()};
gf.prototype.clear=function(){var a=Array.from(this);a=u(a);for(var b=a.next();!b.done;b=a.next())this.remove(b.value)};function hf(a){this.h=a}
B(hf,gf);m=hf.prototype;m.isAvailable=function(){if(!this.h)return!1;try{return this.h.setItem("__sak","1"),this.h.removeItem("__sak"),!0}catch(a){return!1}};
m.set=function(a,b){try{this.h.setItem(a,b)}catch(c){if(0==this.h.length)throw"Storage mechanism: Storage disabled";throw"Storage mechanism: Quota exceeded";}};
m.get=function(a){a=this.h.getItem(a);if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
m.remove=function(a){this.h.removeItem(a)};
m.M=function(a){var b=0,c=this.h,d=new Od;d.next=function(){if(b>=c.length)throw Nd;var e=c.key(b++);if(a)return e;e=c.getItem(e);if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return e};
return d};
m.clear=function(){this.h.clear()};
m.key=function(a){return this.h.key(a)};function jf(){var a=null;try{a=window.localStorage||null}catch(b){}this.h=a}
B(jf,hf);function kf(a,b){this.i=a;this.h=null;if(jc&&!(9<=Number(vc))){lf||(lf=new Ud);this.h=lf.get(a);this.h||(b?this.h=document.getElementById(b):(this.h=document.createElement("userdata"),this.h.addBehavior("#default#userData"),document.body.appendChild(this.h)),lf.set(a,this.h));try{this.h.load(this.i)}catch(c){this.h=null}}}
B(kf,gf);var mf={".":".2E","!":".21","~":".7E","*":".2A","'":".27","(":".28",")":".29","%":"."},lf=null;function nf(a){return"_"+encodeURIComponent(a).replace(/[.!~*'()%]/g,function(b){return mf[b]})}
m=kf.prototype;m.isAvailable=function(){return!!this.h};
m.set=function(a,b){this.h.setAttribute(nf(a),b);of(this)};
m.get=function(a){a=this.h.getAttribute(nf(a));if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
m.remove=function(a){this.h.removeAttribute(nf(a));of(this)};
m.M=function(a){var b=0,c=this.h.XMLDocument.documentElement.attributes,d=new Od;d.next=function(){if(b>=c.length)throw Nd;var e=c[b++];if(a)return decodeURIComponent(e.nodeName.replace(/\./g,"%")).substr(1);e=e.nodeValue;if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return e};
return d};
m.clear=function(){for(var a=this.h.XMLDocument.documentElement,b=a.attributes.length;0<b;b--)a.removeAttribute(a.attributes[b-1].nodeName);of(this)};
function of(a){try{a.h.save(a.i)}catch(b){throw"Storage mechanism: Quota exceeded";}}
;function pf(a,b){this.i=a;this.h=b+"::"}
B(pf,gf);pf.prototype.set=function(a,b){this.i.set(this.h+a,b)};
pf.prototype.get=function(a){return this.i.get(this.h+a)};
pf.prototype.remove=function(a){this.i.remove(this.h+a)};
pf.prototype.M=function(a){var b=this.i.M(!0),c=this,d=new Od;d.next=function(){for(var e=b.next();e.substr(0,c.h.length)!=c.h;)e=b.next();return a?e.substr(c.h.length):c.i.get(e)};
return d};function qf(a,b){1<b.length?a[b[0]]=b[1]:1===b.length&&Object.assign(a,b[0])}
;var rf,sf,tf=y.window,uf=(null===(rf=null===tf||void 0===tf?void 0:tf.yt)||void 0===rf?void 0:rf.config_)||(null===(sf=null===tf||void 0===tf?void 0:tf.ytcfg)||void 0===sf?void 0:sf.data_)||{};z("yt.config_",uf,void 0);function M(a){for(var b=0;b<arguments.length;++b);qf(uf,arguments)}
function E(a,b){return a in uf?uf[a]:b}
;var vf=[];function wf(a){vf.forEach(function(b){return b(a)})}
function xf(a){return a&&window.yterr?function(){try{return a.apply(this,arguments)}catch(b){yf(b)}}:a}
function yf(a){var b=A("yt.logging.errors.log");b?b(a,"ERROR",void 0,void 0,void 0):(b=E("ERRORS",[]),b.push([a,"ERROR",void 0,void 0,void 0]),M("ERRORS",b));wf(a)}
function zf(a){var b=A("yt.logging.errors.log");b?b(a,"WARNING",void 0,void 0,void 0):(b=E("ERRORS",[]),b.push([a,"WARNING",void 0,void 0,void 0]),M("ERRORS",b))}
;var Af=window.yt&&window.yt.msgs_||window.ytcfg&&window.ytcfg.msgs||{};z("yt.msgs_",Af,void 0);function Bf(a){qf(Af,arguments)}
;function O(a){a=Cf(a);return"string"===typeof a&&"false"===a?!1:!!a}
function Df(a,b){a=Cf(a);return void 0===a&&void 0!==b?b:Number(a||0)}
function Cf(a){var b=E("EXPERIMENTS_FORCED_FLAGS",{});return void 0!==b[a]?b[a]:E("EXPERIMENT_FLAGS",{})[a]}
;var Ef=0,Ff=mc?"webkit":lc?"moz":jc?"ms":ic?"o":"";z("ytDomDomGetNextId",A("ytDomDomGetNextId")||function(){return++Ef},void 0);var Gf={stopImmediatePropagation:1,stopPropagation:1,preventMouseEvent:1,preventManipulation:1,preventDefault:1,layerX:1,layerY:1,screenX:1,screenY:1,scale:1,rotation:1,webkitMovementX:1,webkitMovementY:1};
function Hf(a){this.type="";this.state=this.source=this.data=this.currentTarget=this.relatedTarget=this.target=null;this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.ctrlKey=this.altKey=!1;this.rotation=this.clientY=this.clientX=0;this.changedTouches=this.touches=null;try{if(a=a||window.event){this.event=a;for(var b in a)b in Gf||(this[b]=a[b]);this.rotation=a.rotation;var c=a.target||a.srcElement;c&&3==c.nodeType&&(c=c.parentNode);this.target=c;var d=a.relatedTarget;if(d)try{d=d.nodeName?
d:null}catch(e){d=null}else"mouseover"==this.type?d=a.fromElement:"mouseout"==this.type&&(d=a.toElement);this.relatedTarget=d;this.clientX=void 0!=a.clientX?a.clientX:a.pageX;this.clientY=void 0!=a.clientY?a.clientY:a.pageY;this.keyCode=a.keyCode?a.keyCode:a.which;this.charCode=a.charCode||("keypress"==this.type?this.keyCode:0);this.altKey=a.altKey;this.ctrlKey=a.ctrlKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.h=a.pageX;this.i=a.pageY}}catch(e){}}
function If(a){if(document.body&&document.documentElement){var b=document.body.scrollTop+document.documentElement.scrollTop;a.h=a.clientX+(document.body.scrollLeft+document.documentElement.scrollLeft);a.i=a.clientY+b}}
Hf.prototype.preventDefault=function(){this.event&&(this.event.returnValue=!1,this.event.preventDefault&&this.event.preventDefault())};
Hf.prototype.stopPropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopPropagation&&this.event.stopPropagation())};
Hf.prototype.stopImmediatePropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopImmediatePropagation&&this.event.stopImmediatePropagation())};var fb=y.ytEventsEventsListeners||{};z("ytEventsEventsListeners",fb,void 0);var Jf=y.ytEventsEventsCounter||{count:0};z("ytEventsEventsCounter",Jf,void 0);
function Kf(a,b,c,d){d=void 0===d?{}:d;a.addEventListener&&("mouseenter"!=b||"onmouseenter"in document?"mouseleave"!=b||"onmouseenter"in document?"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"):b="mouseout":b="mouseover");return eb(function(e){var f="boolean"===typeof e[4]&&e[4]==!!d,g=Ia(e[4])&&Ia(d)&&jb(e[4],d);return!!e.length&&e[0]==a&&e[1]==b&&e[2]==c&&(f||g)})}
var Lf=Va(function(){var a=!1;try{var b=Object.defineProperty({},"capture",{get:function(){a=!0}});
window.addEventListener("test",null,b)}catch(c){}return a});
function Mf(a,b,c,d){d=void 0===d?{}:d;if(!a||!a.addEventListener&&!a.attachEvent)return"";var e=Kf(a,b,c,d);if(e)return e;e=++Jf.count+"";var f=!("mouseenter"!=b&&"mouseleave"!=b||!a.addEventListener||"onmouseenter"in document);var g=f?function(h){h=new Hf(h);if(!Mc(h.relatedTarget,function(k){return k==a}))return h.currentTarget=a,h.type=b,c.call(a,h)}:function(h){h=new Hf(h);
h.currentTarget=a;return c.call(a,h)};
g=xf(g);a.addEventListener?("mouseenter"==b&&f?b="mouseover":"mouseleave"==b&&f?b="mouseout":"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"),Lf()||"boolean"===typeof d?a.addEventListener(b,g,d):a.addEventListener(b,g,!!d.capture)):a.attachEvent("on"+b,g);fb[e]=[a,b,c,g,d];return e}
function Nf(a){a&&("string"==typeof a&&(a=[a]),C(a,function(b){if(b in fb){var c=fb[b],d=c[0],e=c[1],f=c[3];c=c[4];d.removeEventListener?Lf()||"boolean"===typeof c?d.removeEventListener(e,f,c):d.removeEventListener(e,f,!!c.capture):d.detachEvent&&d.detachEvent("on"+e,f);delete fb[b]}}))}
;var Of=window.ytcsi&&window.ytcsi.now?window.ytcsi.now:window.performance&&window.performance.timing&&window.performance.now&&window.performance.timing.navigationStart?function(){return window.performance.timing.navigationStart+window.performance.now()}:function(){return(new Date).getTime()};function Pf(a,b){"function"===typeof a&&(a=xf(a));return window.setTimeout(a,b)}
function Qf(a){window.clearTimeout(a)}
;function Rf(a){this.C=a;this.i=null;this.m=0;this.B=null;this.o=0;this.j=[];for(a=0;4>a;a++)this.j.push(0);this.l=0;this.J=Mf(window,"mousemove",Oa(this.K,this));a=Oa(this.F,this);"function"===typeof a&&(a=xf(a));this.L=window.setInterval(a,25)}
B(Rf,J);Rf.prototype.K=function(a){void 0===a.h&&If(a);var b=a.h;void 0===a.i&&If(a);this.i=new Ec(b,a.i)};
Rf.prototype.F=function(){if(this.i){var a=Of();if(0!=this.m){var b=this.B,c=this.i,d=b.x-c.x;b=b.y-c.y;d=Math.sqrt(d*d+b*b)/(a-this.m);this.j[this.l]=.5<Math.abs((d-this.o)/this.o)?1:0;for(c=b=0;4>c;c++)b+=this.j[c]||0;3<=b&&this.C();this.o=d}this.m=a;this.B=this.i;this.l=(this.l+1)%4}};
Rf.prototype.D=function(){window.clearInterval(this.L);Nf(this.J)};function Sf(){}
function Tf(a,b){return Uf(a,0,b)}
function Vf(a,b){return Uf(a,1,b)}
;function Wf(){Sf.apply(this,arguments)}
v(Wf,Sf);function Uf(a,b,c){void 0!==c&&Number.isNaN(Number(c))&&(c=void 0);var d=A("yt.scheduler.instance.addJob");return d?d(a,b,c):void 0===c?(a(),NaN):Pf(a,c||0)}
function Xf(a){if(void 0===a||!Number.isNaN(Number(a))){var b=A("yt.scheduler.instance.cancelJob");b?b(a):Qf(a)}}
Wf.prototype.start=function(){var a=A("yt.scheduler.instance.start");a&&a()};
Wf.prototype.pause=function(){var a=A("yt.scheduler.instance.pause");a&&a()};Wf.h||(Wf.h=new Wf);var Yf={};
function Zf(a){var b=void 0===a?{}:a;a=void 0===b.Va?!0:b.Va;b=void 0===b.jb?!1:b.jb;if(null==A("_lact",window)){var c=parseInt(E("LACT"),10);c=isFinite(c)?Date.now()-Math.max(c,0):-1;z("_lact",c,window);z("_fact",c,window);-1==c&&$f();Mf(document,"keydown",$f);Mf(document,"keyup",$f);Mf(document,"mousedown",$f);Mf(document,"mouseup",$f);a&&(b?Mf(window,"touchmove",function(){ag("touchmove",200)},{passive:!0}):(Mf(window,"resize",function(){ag("resize",200)}),Mf(window,"scroll",function(){ag("scroll",200)})));
new Rf(function(){ag("mouse",100)});
Mf(document,"touchstart",$f,{passive:!0});Mf(document,"touchend",$f,{passive:!0})}}
function ag(a,b){Yf[a]||(Yf[a]=!0,Vf(function(){$f();Yf[a]=!1},b))}
function $f(){null==A("_lact",window)&&Zf();var a=Date.now();z("_lact",a,window);-1==A("_fact",window)&&z("_fact",a,window);(a=A("ytglobal.ytUtilActivityCallback_"))&&a()}
function bg(){var a=A("_lact",window);return null==a?-1:Math.max(Date.now()-a,0)}
;function cg(){var a=dg;A("yt.ads.biscotti.getId_")||z("yt.ads.biscotti.getId_",a,void 0)}
function eg(a){z("yt.ads.biscotti.lastId_",a,void 0)}
;var fg=/^[\w.]*$/,gg={q:!0,search_query:!0};function hg(a,b){b=a.split(b);for(var c={},d=0,e=b.length;d<e;d++){var f=b[d].split("=");if(1==f.length&&f[0]||2==f.length)try{var g=ig(f[0]||""),h=ig(f[1]||"");g in c?Array.isArray(c[g])?cb(c[g],h):c[g]=[c[g],h]:c[g]=h}catch(p){var k=p,l=f[0],n=String(hg);k.args=[{key:l,value:f[1],query:a,method:jg==n?"unchanged":n}];gg.hasOwnProperty(l)||zf(k)}}return c}
var jg=String(hg);function kg(a){var b=[];db(a,function(c,d){var e=encodeURIComponent(String(d)),f;Array.isArray(c)?f=c:f=[c];C(f,function(g){""==g?b.push(e):b.push(e+"="+encodeURIComponent(String(g)))})});
return b.join("&")}
function lg(a){"?"==a.charAt(0)&&(a=a.substr(1));return hg(a,"&")}
function mg(){var a=window.location.href;return-1!=a.indexOf("?")?(a=(a||"").split("#")[0],a=a.split("?",2),lg(1<a.length?a[1]:a[0])):{}}
function ng(a,b,c){var d=a.split("#",2);a=d[0];d=1<d.length?"#"+d[1]:"";var e=a.split("?",2);a=e[0];e=lg(e[1]||"");for(var f in b)!c&&null!==e&&f in e||(e[f]=b[f]);return ec(a,e)+d}
function og(a){if(!b)var b=window.location.href;var c=a.match($b)[1]||null,d=bc(a);c&&d?(a=a.match($b),b=b.match($b),a=a[3]==b[3]&&a[1]==b[1]&&a[4]==b[4]):a=d?bc(b)==d&&(Number(b.match($b)[4]||null)||null)==(Number(a.match($b)[4]||null)||null):!0;return a}
function ig(a){return a&&a.match(fg)?a:decodeURIComponent(a.replace(/\+/g," "))}
;function pg(a){var b=qg;a=void 0===a?A("yt.ads.biscotti.lastId_")||"":a;var c=Object,d=c.assign,e={};e.dt=Vc;e.flash="0";a:{try{var f=b.h.top.location.href}catch(Ua){f=2;break a}f=f?f===b.i.location.href?0:1:2}e=(e.frm=f,e);e.u_tz=-(new Date).getTimezoneOffset();var g=void 0===g?H:g;try{var h=g.history.length}catch(Ua){h=0}e.u_his=h;e.u_java=!!H.navigator&&"unknown"!==typeof H.navigator.javaEnabled&&!!H.navigator.javaEnabled&&H.navigator.javaEnabled();H.screen&&(e.u_h=H.screen.height,e.u_w=H.screen.width,
e.u_ah=H.screen.availHeight,e.u_aw=H.screen.availWidth,e.u_cd=H.screen.colorDepth);H.navigator&&H.navigator.plugins&&(e.u_nplug=H.navigator.plugins.length);H.navigator&&H.navigator.mimeTypes&&(e.u_nmime=H.navigator.mimeTypes.length);h=b.h;try{var k=h.screenX;var l=h.screenY}catch(Ua){}try{var n=h.outerWidth;var p=h.outerHeight}catch(Ua){}try{var t=h.innerWidth;var q=h.innerHeight}catch(Ua){}try{var D=h.screenLeft;var K=h.screenTop}catch(Ua){}try{t=h.innerWidth,q=h.innerHeight}catch(Ua){}try{var N=
h.screen.availWidth;var X=h.screen.availTop}catch(Ua){}k=[D,K,k,l,N,X,n,p,t,q];l=b.h.top;try{var Y=(l||window).document,I="CSS1Compat"==Y.compatMode?Y.documentElement:Y.body;var T=(new Fc(I.clientWidth,I.clientHeight)).round()}catch(Ua){T=new Fc(-12245933,-12245933)}Y=T;T={};I=new hd;y.SVGElement&&y.document.createElementNS&&I.set(0);l=Rc();l["allow-top-navigation-by-user-activation"]&&I.set(1);l["allow-popups-to-escape-sandbox"]&&I.set(2);y.crypto&&y.crypto.subtle&&I.set(3);y.TextDecoder&&y.TextEncoder&&
I.set(4);I=id(I);T.bc=I;T.bih=Y.height;T.biw=Y.width;T.brdim=k.join();b=b.i;b=(T.vis={visible:1,hidden:2,prerender:3,preview:4,unloaded:5}[b.visibilityState||b.webkitVisibilityState||b.mozVisibilityState||""]||0,T.wgl=!!H.WebGLRenderingContext,T);c=d.call(c,e,b);c.ca_type="image";a&&(c.bid=a);return c}
var qg=new function(){var a=window.document;this.h=window;this.i=a};
z("yt.ads_.signals_.getAdSignalsString",function(a){return kg(pg(a))},void 0);var rg="XMLHttpRequest"in y?function(){return new XMLHttpRequest}:null;
function sg(){if(!rg)return null;var a=rg();return"open"in a?a:null}
function tg(a){switch(a&&"status"in a?a.status:-1){case 200:case 201:case 202:case 203:case 204:case 205:case 206:case 304:return!0;default:return!1}}
;var ug={Authorization:"AUTHORIZATION","X-Goog-Visitor-Id":"SANDBOXED_VISITOR_ID","X-Youtube-Chrome-Connected":"CHROME_CONNECTED_HEADER","X-YouTube-Client-Name":"INNERTUBE_CONTEXT_CLIENT_NAME","X-YouTube-Client-Version":"INNERTUBE_CONTEXT_CLIENT_VERSION","X-YouTube-Delegation-Context":"INNERTUBE_CONTEXT_SERIALIZED_DELEGATION_CONTEXT","X-YouTube-Device":"DEVICE","X-Youtube-Identity-Token":"ID_TOKEN","X-YouTube-Page-CL":"PAGE_CL","X-YouTube-Page-Label":"PAGE_BUILD_LABEL","X-YouTube-Variants-Checksum":"VARIANTS_CHECKSUM"},
vg="app debugcss debugjs expflag force_ad_params force_ad_encrypted force_viral_ad_response_params forced_experiments innertube_snapshots innertube_goldens internalcountrycode internalipoverride absolute_experiments conditional_experiments sbb sr_bns_address client_dev_root_url".split(" "),wg=!1;
function xg(a,b){b=void 0===b?{}:b;var c=og(a),d=O("web_ajax_ignore_global_headers_if_set"),e;for(e in ug){var f=E(ug[e]);!f||!c&&bc(a)||d&&void 0!==b[e]||(b[e]=f)}if(c||!bc(a))b["X-YouTube-Utc-Offset"]=String(-(new Date).getTimezoneOffset());if(c||!bc(a)){try{var g=(new Intl.DateTimeFormat).resolvedOptions().timeZone}catch(h){}g&&(b["X-YouTube-Time-Zone"]=g)}if(c||!bc(a))b["X-YouTube-Ad-Signals"]=kg(pg(void 0));return b}
function yg(a){var b=window.location.search,c=bc(a);O("debug_handle_relative_url_for_query_forward_killswitch")||c||!og(a)||(c=document.location.hostname);var d=ac(a.match($b)[5]||null);d=(c=c&&(c.endsWith("youtube.com")||c.endsWith("youtube-nocookie.com")))&&d&&d.startsWith("/api/");if(!c||d)return a;var e=lg(b),f={};C(vg,function(g){e[g]&&(f[g]=e[g])});
return ng(a,f||{},!1)}
function zg(a,b){var c=b.format||"JSON";a=Ag(a,b);var d=Bg(a,b),e=!1,f=Cg(a,function(k){if(!e){e=!0;h&&Qf(h);var l=tg(k),n=null,p=400<=k.status&&500>k.status,t=500<=k.status&&600>k.status;if(l||p||t)n=Dg(a,c,k,b.convertToSafeHtml);if(l)a:if(k&&204==k.status)l=!0;else{switch(c){case "XML":l=0==parseInt(n&&n.return_code,10);break a;case "RAW":l=!0;break a}l=!!n}n=n||{};p=b.context||y;l?b.onSuccess&&b.onSuccess.call(p,k,n):b.onError&&b.onError.call(p,k,n);b.onFinish&&b.onFinish.call(p,k,n)}},b.method,
d,b.headers,b.responseType,b.withCredentials);
if(b.onTimeout&&0<b.timeout){var g=b.onTimeout;var h=Pf(function(){e||(e=!0,f.abort(),Qf(h),g.call(b.context||y,f))},b.timeout)}return f}
function Ag(a,b){b.includeDomain&&(a=document.location.protocol+"//"+document.location.hostname+(document.location.port?":"+document.location.port:"")+a);var c=E("XSRF_FIELD_NAME",void 0);if(b=b.urlParams)b[c]&&delete b[c],a=ng(a,b||{},!0);return a}
function Bg(a,b){var c=E("XSRF_FIELD_NAME",void 0),d=E("XSRF_TOKEN",void 0),e=b.postBody||"",f=b.postParams,g=E("XSRF_FIELD_NAME",void 0),h;b.headers&&(h=b.headers["Content-Type"]);b.excludeXsrf||bc(a)&&!b.withCredentials&&bc(a)!=document.location.hostname||"POST"!=b.method||h&&"application/x-www-form-urlencoded"!=h||b.postParams&&b.postParams[g]||(f||(f={}),f[c]=d);f&&"string"===typeof e&&(e=lg(e),nb(e,f),e=b.postBodyFormat&&"JSON"==b.postBodyFormat?JSON.stringify(e):dc(e));f=e||f&&!gb(f);!wg&&f&&
"POST"!=b.method&&(wg=!0,yf(Error("AJAX request with postData should use POST")));return e}
function Dg(a,b,c,d){var e=null;switch(b){case "JSON":try{var f=c.responseText}catch(g){throw d=Error("Error reading responseText"),d.params=a,zf(d),g;}a=c.getResponseHeader("Content-Type")||"";f&&0<=a.indexOf("json")&&(")]}'\n"===f.substring(0,5)&&(f=f.substring(5)),e=JSON.parse(f));break;case "XML":if(a=(a=c.responseXML)?Eg(a):null)e={},C(a.getElementsByTagName("*"),function(g){e[g.tagName]=Fg(g)})}d&&Gg(e);
return e}
function Gg(a){if(Ia(a))for(var b in a){var c;(c="html_content"==b)||(c=b.length-5,c=0<=c&&b.indexOf("_html",c)==c);if(c){c=b;var d=Sb(a[b],null);a[c]=d}else Gg(a[b])}}
function Eg(a){return a?(a=("responseXML"in a?a.responseXML:a).getElementsByTagName("root"))&&0<a.length?a[0]:null:null}
function Fg(a){var b="";C(a.childNodes,function(c){b+=c.nodeValue});
return b}
function Cg(a,b,c,d,e,f,g){function h(){4==(k&&"readyState"in k?k.readyState:0)&&b&&xf(b)(k)}
c=void 0===c?"GET":c;d=void 0===d?"":d;var k=sg();if(!k)return null;"onloadend"in k?k.addEventListener("loadend",h,!1):k.onreadystatechange=h;O("debug_forward_web_query_parameters")&&(a=yg(a));k.open(c,a,!0);f&&(k.responseType=f);g&&(k.withCredentials=!0);c="POST"==c&&(void 0===window.FormData||!(d instanceof FormData));if(e=xg(a,e))for(var l in e)k.setRequestHeader(l,e[l]),"content-type"==l.toLowerCase()&&(c=!1);c&&k.setRequestHeader("Content-Type","application/x-www-form-urlencoded");k.send(d);
return k}
;var Hg=wc||xc;function Ig(a){var b=Nb;return b?0<=b.toLowerCase().indexOf(a):!1}
;var Jg={},Kg=0;
function Lg(a,b,c,d,e){e=void 0===e?"":e;if(a)if(c&&!Ig("cobalt")){if(a){a instanceof Fb||(a="object"==typeof a&&a.Y?a.X():String(a),Kb.test(a)?a=new Fb(a,Gb):(a=String(a),a=a.replace(/(%0A|%0D)/g,""),a=(b=a.match(Jb))&&Ib.test(b[1])?new Fb(a,Gb):null));a=Hb(a||Mb);if("about:invalid#zClosurez"===a||a.startsWith("data"))a="";else{if(!(a instanceof Qb)){b="object"==typeof a;var f=null;b&&a.ta&&(f=a.qa());a=Sb(xb(b&&a.Y?a.X():String(a)),f)}a instanceof Qb&&a.constructor===Qb?a=a.h:(Ga(a),a="type_error:SafeHtml");
a=encodeURIComponent(String(Ae(a.toString())))}/^[\s\xa0]*$/.test(a)||(a=Jc("IFRAME",{src:'javascript:"<body><img src=\\""+'+a+'+"\\"></body>"',style:"display:none"}),(9==a.nodeType?a:a.ownerDocument||a.document).body.appendChild(a))}}else if(e)Cg(a,b,"POST",e,d);else if(E("USE_NET_AJAX_FOR_PING_TRANSPORT",!1)||d)Cg(a,b,"GET","",d);else{b:{try{var g=new Ta({url:a});if(g.j&&g.i||g.l){var h=ac(a.match($b)[5]||null),k;if(!(k=!h||!h.endsWith("/aclk"))){var l=a.search(fc);d:{for(c=0;0<=(c=a.indexOf("ri",
c))&&c<l;){var n=a.charCodeAt(c-1);if(38==n||63==n){var p=a.charCodeAt(c+2);if(!p||61==p||38==p||35==p){var t=c;break d}}c+=3}t=-1}if(0>t)var q=null;else{var D=a.indexOf("&",t);if(0>D||D>l)D=l;t+=3;q=decodeURIComponent(a.substr(t,D-t).replace(/\+/g," "))}k="1"!==q}f=!k;break b}}catch(K){}f=!1}f?Mg(a)?(b&&b(),f=!0):f=!1:f=!1;f||Ng(a,b)}}
function Og(a,b,c){c=void 0===c?"":c;Mg(a,c)?b&&b():Lg(a,b,void 0,void 0,c)}
function Mg(a,b){try{if(window.navigator&&window.navigator.sendBeacon&&window.navigator.sendBeacon(a,void 0===b?"":b))return!0}catch(c){}return!1}
function Ng(a,b){var c=new Image,d=""+Kg++;Jg[d]=c;c.onload=c.onerror=function(){b&&Jg[d]&&b();delete Jg[d]};
c.src=a}
;var Pg=y.ytPubsubPubsubInstance||new L,Qg=y.ytPubsubPubsubSubscribedKeys||{},Rg=y.ytPubsubPubsubTopicToKeys||{},Sg=y.ytPubsubPubsubIsSynchronous||{};function Tg(a,b){var c=Ug();if(c&&b){var d=c.subscribe(a,function(){var e=arguments;var f=function(){Qg[d]&&b.apply&&"function"==typeof b.apply&&b.apply(window,e)};
try{Sg[a]?f():Pf(f,0)}catch(g){yf(g)}},void 0);
Qg[d]=!0;Rg[a]||(Rg[a]=[]);Rg[a].push(d);return d}return 0}
function Vg(a){var b=Ug();b&&("number"===typeof a?a=[a]:"string"===typeof a&&(a=[parseInt(a,10)]),C(a,function(c){b.unsubscribeByKey(c);delete Qg[c]}))}
function Wg(a,b){var c=Ug();c&&c.publish.apply(c,arguments)}
function Xg(a){var b=Ug();if(b)if(b.clear(a),a)Yg(a);else for(var c in Rg)Yg(c)}
function Ug(){return y.ytPubsubPubsubInstance}
function Yg(a){Rg[a]&&(a=Rg[a],C(a,function(b){Qg[b]&&delete Qg[b]}),a.length=0)}
L.prototype.subscribe=L.prototype.subscribe;L.prototype.unsubscribeByKey=L.prototype.da;L.prototype.publish=L.prototype.W;L.prototype.clear=L.prototype.clear;z("ytPubsubPubsubInstance",Pg,void 0);z("ytPubsubPubsubTopicToKeys",Rg,void 0);z("ytPubsubPubsubIsSynchronous",Sg,void 0);z("ytPubsubPubsubSubscribedKeys",Qg,void 0);var Zg=window,P=Zg.ytcsi&&Zg.ytcsi.now?Zg.ytcsi.now:Zg.performance&&Zg.performance.timing&&Zg.performance.now&&Zg.performance.timing.navigationStart?function(){return Zg.performance.timing.navigationStart+Zg.performance.now()}:function(){return(new Date).getTime()};var $g=Df("initial_gel_batch_timeout",2E3),ah=Math.pow(2,16)-1,bh=null,ch=0,dh=void 0,eh=0,fh=0,gh=0,hh=!0,ih=y.ytLoggingTransportGELQueue_||new Map;z("ytLoggingTransportGELQueue_",ih,void 0);var jh=y.ytLoggingTransportTokensToCttTargetIds_||{};z("ytLoggingTransportTokensToCttTargetIds_",jh,void 0);
function kh(a,b){if("log_event"===a.endpoint){var c="";a.ja?c="visitorOnlyApprovedKey":a.G&&(jh[a.G.token]=lh(a.G),c=a.G.token);var d=ih.get(c)||[];ih.set(c,d);d.push(a.payload);b&&(dh=new b);a=Df("tvhtml5_logging_max_batch")||Df("web_logging_max_batch")||100;b=P();d.length>=a?mh({writeThenSend:!0}):10<=b-gh&&(nh(),gh=b)}}
function oh(a,b){if("log_event"===a.endpoint){var c="";a.ja?c="visitorOnlyApprovedKey":a.G&&(jh[a.G.token]=lh(a.G),c=a.G.token);var d=new Map;d.set(c,[a.payload]);b&&(dh=new b);return new He(function(e){dh&&dh.isReady()?ph(d,e,{bypassNetworkless:!0}):e()})}}
function mh(a){a=void 0===a?{}:a;new He(function(b){Qf(eh);Qf(fh);fh=0;dh&&dh.isReady()?(ph(ih,b,a),ih.clear()):(nh(),b())})}
function nh(){O("web_gel_timeout_cap")&&!fh&&(fh=Pf(function(){mh({writeThenSend:!0})},6E4));
Qf(eh);var a=E("LOGGING_BATCH_TIMEOUT",Df("web_gel_debounce_ms",1E4));O("shorten_initial_gel_batch_timeout")&&hh&&(a=$g);eh=Pf(function(){mh({writeThenSend:!0})},a)}
function ph(a,b,c){var d=dh;c=void 0===c?{}:c;var e=Math.round(P()),f=a.size;a=u(a);for(var g=a.next();!g.done;g=a.next()){var h=u(g.value);g=h.next().value;var k=h.next().value;h=lb({context:qh(d.config_||rh())});h.events=k;(k=jh[g])&&sh(h,g,k);delete jh[g];g="visitorOnlyApprovedKey"===g;th(h,e,g);O("send_beacon_before_gel")&&window.navigator&&window.navigator.sendBeacon&&!c.writeThenSend&&Og("/generate_204");uh(d,"log_event",h,{retry:!0,onSuccess:function(){f--;f||b();ch=Math.round(P()-e)},
onError:function(){f--;f||b()},
Ka:c,ja:g});hh=!1}}
function th(a,b,c){a.requestTimeMs=String(b);O("unsplit_gel_payloads_in_logs")&&(a.unsplitGelPayloadsInLogs=!0);!c&&(b=E("EVENT_ID",void 0))&&((c=E("BATCH_CLIENT_COUNTER",void 0)||0)||(c=Math.floor(Math.random()*ah/2)),c++,c>ah&&(c=1),M("BATCH_CLIENT_COUNTER",c),b={serializedEventId:b,clientCounter:String(c)},a.serializedClientEventId=b,bh&&ch&&O("log_gel_rtt_web")&&(a.previousBatchInfo={serializedClientEventId:bh,roundtripMs:String(ch)}),bh=b,ch=0)}
function sh(a,b,c){if(c.videoId)var d="VIDEO";else if(c.playlistId)d="PLAYLIST";else return;a.credentialTransferTokenTargetId=c;a.context=a.context||{};a.context.user=a.context.user||{};a.context.user.credentialTransferTokens=[{token:b,scope:d}]}
function lh(a){var b={};a.videoId?b.videoId=a.videoId:a.playlistId&&(b.playlistId=a.playlistId);return b}
;var vh=y.ytLoggingGelSequenceIdObj_||{};z("ytLoggingGelSequenceIdObj_",vh,void 0);function wh(a,b,c,d){d=void 0===d?{}:d;var e={},f=Math.round(d.timestamp||P());e.eventTimeMs=f<Number.MAX_SAFE_INTEGER?f:0;e[a]=b;a=bg();e.context={lastActivityMs:String(d.timestamp||!isFinite(a)?-1:a)};O("log_sequence_info_on_gel_web")&&d.U&&(a=e.context,b=d.U,vh[b]=b in vh?vh[b]+1:0,a.sequence={index:vh[b],groupKey:b},d.Ta&&delete vh[d.U]);(d.fl?oh:kh)({endpoint:"log_event",payload:e,G:d.G,ja:d.ja},c)}
;function xh(){if(!y.matchMedia)return"WEB_DISPLAY_MODE_UNKNOWN";try{return y.matchMedia("(display-mode: standalone)").matches?"WEB_DISPLAY_MODE_STANDALONE":y.matchMedia("(display-mode: minimal-ui)").matches?"WEB_DISPLAY_MODE_MINIMAL_UI":y.matchMedia("(display-mode: fullscreen)").matches?"WEB_DISPLAY_MODE_FULLSCREEN":y.matchMedia("(display-mode: browser)").matches?"WEB_DISPLAY_MODE_BROWSER":"WEB_DISPLAY_MODE_UNKNOWN"}catch(a){return"WEB_DISPLAY_MODE_UNKNOWN"}}
;function yh(a,b,c,d,e){cd.set(""+a,b,{wa:c,path:"/",domain:void 0===d?"youtube.com":d,secure:void 0===e?!1:e})}
;var zh=A("ytglobal.prefsUserPrefsPrefs_")||{};z("ytglobal.prefsUserPrefsPrefs_",zh,void 0);function Ah(){this.h=E("ALT_PREF_COOKIE_NAME","PREF");this.i=E("ALT_PREF_COOKIE_DOMAIN","youtube.com");var a=cd.get(""+this.h,void 0);if(a){a=decodeURIComponent(a).split("&");for(var b=0;b<a.length;b++){var c=a[b].split("="),d=c[0];(c=c[1])&&(zh[d]=c.toString())}}}
Ah.prototype.get=function(a,b){Bh(a);Ch(a);a=void 0!==zh[a]?zh[a].toString():null;return null!=a?a:b?b:""};
Ah.prototype.set=function(a,b){Bh(a);Ch(a);if(null==b)throw Error("ExpectedNotNull");zh[a]=b.toString()};
Ah.prototype.remove=function(a){Bh(a);Ch(a);delete zh[a]};
Ah.prototype.clear=function(){for(var a in zh)delete zh[a]};
function Ch(a){if(/^f([1-9][0-9]*)$/.test(a))throw Error("ExpectedRegexMatch: "+a);}
function Bh(a){if(!/^\w+$/.test(a))throw Error("ExpectedRegexMismatch: "+a);}
function Dh(a){a=void 0!==zh[a]?zh[a].toString():null;return null!=a&&/^[A-Fa-f0-9]+$/.test(a)?parseInt(a,16):null}
Fa(Ah);var Eh={bluetooth:"CONN_DISCO",cellular:"CONN_CELLULAR_UNKNOWN",ethernet:"CONN_WIFI",none:"CONN_NONE",wifi:"CONN_WIFI",wimax:"CONN_CELLULAR_4G",other:"CONN_UNKNOWN",unknown:"CONN_UNKNOWN","slow-2g":"CONN_CELLULAR_2G","2g":"CONN_CELLULAR_2G","3g":"CONN_CELLULAR_3G","4g":"CONN_CELLULAR_4G"},Fh={"slow-2g":"EFFECTIVE_CONNECTION_TYPE_SLOW_2G","2g":"EFFECTIVE_CONNECTION_TYPE_2G","3g":"EFFECTIVE_CONNECTION_TYPE_3G","4g":"EFFECTIVE_CONNECTION_TYPE_4G"};
function Gh(){var a=y.navigator;return a?a.connection:void 0}
;function Hh(){return"INNERTUBE_API_KEY"in uf&&"INNERTUBE_API_VERSION"in uf}
function rh(){return{innertubeApiKey:E("INNERTUBE_API_KEY",void 0),innertubeApiVersion:E("INNERTUBE_API_VERSION",void 0),Wa:E("INNERTUBE_CONTEXT_CLIENT_CONFIG_INFO"),Xa:E("INNERTUBE_CONTEXT_CLIENT_NAME","WEB"),innertubeContextClientVersion:E("INNERTUBE_CONTEXT_CLIENT_VERSION",void 0),Za:E("INNERTUBE_CONTEXT_HL",void 0),Ya:E("INNERTUBE_CONTEXT_GL",void 0),ab:E("INNERTUBE_HOST_OVERRIDE",void 0)||"",cb:!!E("INNERTUBE_USE_THIRD_PARTY_AUTH",!1),bb:!!E("INNERTUBE_OMIT_API_KEY_WHEN_AUTH_HEADER_IS_PRESENT",
!1),appInstallData:E("SERIALIZED_CLIENT_CONFIG_DATA",void 0)}}
function qh(a){var b={client:{hl:a.Za,gl:a.Ya,clientName:a.Xa,clientVersion:a.innertubeContextClientVersion,configInfo:a.Wa}};O("web_include_ua_it_context")&&navigator.userAgent&&(b.client.userAgent=String(navigator.userAgent));var c=y.devicePixelRatio;c&&1!=c&&(b.client.screenDensityFloat=String(c));c=E("EXPERIMENTS_TOKEN","");""!==c&&(b.client.experimentsToken=c);c=[];var d=E("EXPERIMENTS_FORCED_FLAGS",{});for(e in d)c.push({key:e,value:String(d[e])});var e=E("EXPERIMENT_FLAGS",{});for(var f in e)f.startsWith("force_")&&
void 0===d[f]&&c.push({key:f,value:String(e[f])});0<c.length&&(b.request={internalExperimentFlags:c});f=b.client.clientName;if("WEB"===f||"MWEB"===f||1===f||2===f){if(!O("web_include_display_mode_killswitch")){var g;b.client.mainAppWebInfo=null!=(g=b.client.mainAppWebInfo)?g:{};b.client.mainAppWebInfo.webDisplayMode=xh()}}else if(g=b.client.clientName,("WEB_REMIX"===g||76===g)&&!O("music_web_display_mode_killswitch")){var h;b.client.Ja=null!=(h=b.client.Ja)?h:{};b.client.Ja.webDisplayMode=xh()}a.appInstallData&&
(b.client.configInfo=b.client.configInfo||{},b.client.configInfo.appInstallData=a.appInstallData);E("DELEGATED_SESSION_ID")&&!O("pageid_as_header_web")&&(b.user={onBehalfOfUser:E("DELEGATED_SESSION_ID")});a:{if(h=Gh()){a=Eh[h.type||"unknown"]||"CONN_UNKNOWN";h=Eh[h.effectiveType||"unknown"]||"CONN_UNKNOWN";"CONN_CELLULAR_UNKNOWN"===a&&"CONN_UNKNOWN"!==h&&(a=h);if("CONN_UNKNOWN"!==a)break a;if("CONN_UNKNOWN"!==h){a=h;break a}}a=void 0}a&&(b.client.connectionType=a);O("web_log_effective_connection_type")&&
(a=Gh(),a=null!==a&&void 0!==a&&a.effectiveType?Fh.hasOwnProperty(a.effectiveType)?Fh[a.effectiveType]:"EFFECTIVE_CONNECTION_TYPE_UNKNOWN":void 0,a&&(b.client.effectiveConnectionType=a));a=Object;h=a.assign;g=b.client;f={};e=u(Object.entries(lg(E("DEVICE",""))));for(c=e.next();!c.done;c=e.next())d=u(c.value),c=d.next().value,d=d.next().value,"cbrand"===c?f.deviceMake=d:"cmodel"===c?f.deviceModel=d:"cbr"===c?f.browserName=d:"cbrver"===c?f.browserVersion=d:"cos"===c?f.osName=d:"cosver"===c?f.osVersion=
d:"cplatform"===c&&(f.platform=d);b.client=h.call(a,g,f);return b}
function Ih(a,b,c){c=void 0===c?{}:c;var d={"X-Goog-Visitor-Id":c.visitorData||E("VISITOR_DATA","")};if(b&&b.includes("www.youtube-nocookie.com"))return d;(b=c.Uk||E("AUTHORIZATION"))||(a?b="Bearer "+A("gapi.auth.getToken")().Tk:b=gd([]));b&&(d.Authorization=b,d["X-Goog-AuthUser"]=E("SESSION_INDEX",0),O("pageid_as_header_web")&&(d["X-Goog-PageId"]=E("DELEGATED_SESSION_ID")));return d}
;function Jh(a){a=Object.assign({},a);delete a.Authorization;var b=gd();if(b){var c=new Ad;c.update(E("INNERTUBE_API_KEY",void 0));c.update(b);a.hash=Bc(c.digest())}return a}
;function Kh(a){var b=new jf;(b=b.isAvailable()?a?new pf(b,a):b:null)||(a=new kf(a||"UserDataSharedStore"),b=a.isAvailable()?a:null);this.h=(a=b)?new ef(a):null;this.i=document.domain||window.location.hostname}
Kh.prototype.set=function(a,b,c,d){c=c||31104E3;this.remove(a);if(this.h)try{this.h.set(a,b,Date.now()+1E3*c);return}catch(f){}var e="";if(d)try{e=escape(Ae(b))}catch(f){return}else e=escape(b);yh(a,e,c,this.i)};
Kh.prototype.get=function(a,b){var c=void 0,d=!this.h;if(!d)try{c=this.h.get(a)}catch(e){d=!0}if(d&&(c=cd.get(""+a,void 0))&&(c=unescape(c),b))try{c=JSON.parse(c)}catch(e){this.remove(a),c=void 0}return c};
Kh.prototype.remove=function(a){this.h&&this.h.remove(a);var b=this.i;cd.remove(""+a,"/",void 0===b?"youtube.com":b)};var Lh;function Mh(){Lh||(Lh=new Kh("yt.innertube"));return Lh}
function Nh(a,b,c,d){if(d)return null;d=Mh().get("nextId",!0)||1;var e=Mh().get("requests",!0)||{};e[d]={method:a,request:b,authState:Jh(c),requestTime:Math.round(P())};Mh().set("nextId",d+1,86400,!0);Mh().set("requests",e,86400,!0);return d}
function Oh(a){var b=Mh().get("requests",!0)||{};delete b[a];Mh().set("requests",b,86400,!0)}
function Ph(a){var b=Mh().get("requests",!0);if(b){for(var c in b){var d=b[c];if(!(6E4>Math.round(P())-d.requestTime)){var e=d.authState,f=Jh(Ih(!1));jb(e,f)&&(e=d.request,"requestTimeMs"in e&&(e.requestTimeMs=Math.round(P())),uh(a,d.method,e,{}));delete b[c]}}Mh().set("requests",b,86400,!0)}}
;function Qh(a,b){this.version=a;this.args=b}
;function Rh(a,b){this.topic=a;this.h=b}
Rh.prototype.toString=function(){return this.topic};var Sh=A("ytPubsub2Pubsub2Instance")||new L;L.prototype.subscribe=L.prototype.subscribe;L.prototype.unsubscribeByKey=L.prototype.da;L.prototype.publish=L.prototype.W;L.prototype.clear=L.prototype.clear;z("ytPubsub2Pubsub2Instance",Sh,void 0);var Th=A("ytPubsub2Pubsub2SubscribedKeys")||{};z("ytPubsub2Pubsub2SubscribedKeys",Th,void 0);var Uh=A("ytPubsub2Pubsub2TopicToKeys")||{};z("ytPubsub2Pubsub2TopicToKeys",Uh,void 0);var Vh=A("ytPubsub2Pubsub2IsAsync")||{};z("ytPubsub2Pubsub2IsAsync",Vh,void 0);
z("ytPubsub2Pubsub2SkipSubKey",null,void 0);function Wh(a,b){var c=Xh();c&&c.publish.call(c,a.toString(),a,b)}
function Yh(a){var b=Zh,c=Xh();if(!c)return 0;var d=c.subscribe(b.toString(),function(e,f){var g=A("ytPubsub2Pubsub2SkipSubKey");g&&g==d||(g=function(){if(Th[d])try{if(f&&b instanceof Rh&&b!=e)try{var h=b.h,k=f;if(!k.args||!k.version)throw Error("yt.pubsub2.Data.deserialize(): serializedData is incomplete.");try{if(!h.V){var l=new h;h.V=l.version}var n=h.V}catch(p){}if(!n||k.version!=n)throw Error("yt.pubsub2.Data.deserialize(): serializedData version is incompatible.");try{f=Reflect.construct(h,
bb(k.args))}catch(p){throw p.message="yt.pubsub2.Data.deserialize(): "+p.message,p;}}catch(p){throw p.message="yt.pubsub2.pubsub2 cross-binary conversion error for "+b.toString()+": "+p.message,p;}a.call(window,f)}catch(p){yf(p)}},Vh[b.toString()]?A("yt.scheduler.instance")?Vf(g):Pf(g,0):g())});
Th[d]=!0;Uh[b.toString()]||(Uh[b.toString()]=[]);Uh[b.toString()].push(d);return d}
function $h(){var a=ai,b=Yh(function(c){a.apply(void 0,arguments);bi(b)});
return b}
function bi(a){var b=Xh();b&&("number"===typeof a&&(a=[a]),C(a,function(c){b.unsubscribeByKey(c);delete Th[c]}))}
function Xh(){return A("ytPubsub2Pubsub2Instance")}
;function ci(){}
;var di=function(){var a;return function(){a||(a=new Kh("ytidb"));return a}}();
function ei(){var a;return null===(a=di())||void 0===a?void 0:a.get("LAST_RESULT_ENTRY_KEY",!0)}
function fi(a){this.h=void 0===a?!1:a;(a=ei())||(a={hasSucceededOnce:this.h});this.i=a;var b,c;O("ytidb_analyze_is_supported")&&(null===(c=di())||void 0===c?0:c.h)&&(c={hasSucceededOnce:this.i.hasSucceededOnce||this.h},null===(b=di())||void 0===b?void 0:b.set("LAST_RESULT_ENTRY_KEY",c,2592E3,!0))}
fi.prototype.isSupported=function(){return this.h};var gi=[],hi=!1;function ii(a){hi||(gi.push({type:"ERROR",payload:a}),10<gi.length&&gi.shift())}
function ji(a,b){hi||(gi.push({type:"EVENT",eventType:a,payload:b}),10<gi.length&&gi.shift())}
;function ki(a,b){for(var c=[],d=1;d<arguments.length;++d)c[d-1]=arguments[d];d=Error.call(this,a);this.message=d.message;"stack"in d&&(this.stack=d.stack);this.args=[].concat(c instanceof Array?c:fa(u(c)))}
v(ki,Error);function li(){if(void 0!==E("DATASYNC_ID",void 0))return E("DATASYNC_ID",void 0);throw new ki("Datasync ID not set","unknown");}
;function mi(a){if(0<=a.indexOf(":"))throw Error("Database name cannot contain ':'");}
function ni(a){return a.substr(0,a.indexOf(":"))||a}
;var oi={},pi=(oi.AUTH_INVALID="No user identifier specified.",oi.EXPLICIT_ABORT="Transaction was explicitly aborted.",oi.IDB_NOT_SUPPORTED="IndexedDB is not supported.",oi.MISSING_OBJECT_STORE="Object store not created.",oi.UNKNOWN_ABORT="Transaction was aborted for unknown reasons.",oi.QUOTA_EXCEEDED="The current transaction exceeded its quota limitations.",oi.QUOTA_MAYBE_EXCEEDED="The current transaction may have failed because of exceeding quota limitations.",oi.EXECUTE_TRANSACTION_ON_CLOSED_DB=
"Can't start a transaction on a closed database",oi),qi={},ri=(qi.AUTH_INVALID="ERROR",qi.EXECUTE_TRANSACTION_ON_CLOSED_DB="WARNING",qi.EXPLICIT_ABORT="IGNORED",qi.IDB_NOT_SUPPORTED="ERROR",qi.MISSING_OBJECT_STORE="ERROR",qi.QUOTA_EXCEEDED="WARNING",qi.QUOTA_MAYBE_EXCEEDED="WARNING",qi.UNKNOWN_ABORT="WARNING",qi),si={},ti=(si.AUTH_INVALID=!1,si.EXECUTE_TRANSACTION_ON_CLOSED_DB=!1,si.EXPLICIT_ABORT=!1,si.IDB_NOT_SUPPORTED=!1,si.MISSING_OBJECT_STORE=!1,si.QUOTA_EXCEEDED=!1,si.QUOTA_MAYBE_EXCEEDED=!0,
si.UNKNOWN_ABORT=!0,si);function Q(a,b,c,d,e){b=void 0===b?{}:b;c=void 0===c?pi[a]:c;d=void 0===d?ri[a]:d;e=void 0===e?ti[a]:e;ki.call(this,c,Object.assign({name:"YtIdbKnownError",isSw:void 0===self.document,isIframe:self!==self.top,type:a},b));this.type=a;this.message=c;this.level=d;this.h=e;Object.setPrototypeOf(this,Q.prototype)}
v(Q,ki);function ui(a){Q.call(this,"MISSING_OBJECT_STORE",{Yk:a},pi.MISSING_OBJECT_STORE);Object.setPrototypeOf(this,ui.prototype)}
v(ui,Q);var vi=["The database connection is closing","Can't start a transaction on a closed database","A mutation operation was attempted on a database that did not allow mutations"];
function wi(a,b,c){b=ni(b);var d=a instanceof Error?a:Error("Unexpected error: "+a);if(d instanceof Q)return d;if("QuotaExceededError"===d.name)return new Q("QUOTA_EXCEEDED",{objectStoreNames:c,dbName:b});if(yc&&"UnknownError"===d.name)return new Q("QUOTA_MAYBE_EXCEEDED",{objectStoreNames:c,dbName:b});if("InvalidStateError"===d.name&&vi.some(function(e){return d.message.includes(e)}))return new Q("EXECUTE_TRANSACTION_ON_CLOSED_DB",{objectStoreNames:c,
dbName:b});if("AbortError"===d.name)return new Q("UNKNOWN_ABORT",{objectStoreNames:c,dbName:b},d.message);d.args=[{name:"IdbError",Zk:d.name,dbName:b,objectStoreNames:c}];d.level="WARNING";return d}
;function xi(a){if(!a)throw Error();throw a;}
function yi(a){return a}
function R(a){function b(e){if("PENDING"===d.state.status){d.state={status:"REJECTED",reason:e};e=u(d.onRejected);for(var f=e.next();!f.done;f=e.next())f=f.value,f()}}
function c(e){if("PENDING"===d.state.status){d.state={status:"FULFILLED",value:e};e=u(d.h);for(var f=e.next();!f.done;f=e.next())f=f.value,f()}}
var d=this;this.i=a;this.state={status:"PENDING"};this.h=[];this.onRejected=[];try{this.i(c,b)}catch(e){b(e)}}
R.all=function(a){return new R(function(b,c){var d=[],e=a.length;0===e&&b(d);for(var f={aa:0};f.aa<a.length;f={aa:f.aa},++f.aa)zi(R.resolve(a[f.aa]).then(function(g){return function(h){d[g.aa]=h;e--;0===e&&b(d)}}(f)),function(g){c(g)})})};
R.resolve=function(a){return new R(function(b,c){a instanceof R?a.then(b,c):b(a)})};
R.reject=function(a){return new R(function(b,c){c(a)})};
R.prototype.then=function(a,b){var c=this,d=null!==a&&void 0!==a?a:yi,e=null!==b&&void 0!==b?b:xi;return new R(function(f,g){"PENDING"===c.state.status?(c.h.push(function(){Ai(c,c,d,f,g)}),c.onRejected.push(function(){Bi(c,c,e,f,g)})):"FULFILLED"===c.state.status?Ai(c,c,d,f,g):"REJECTED"===c.state.status&&Bi(c,c,e,f,g)})};
function zi(a,b){a.then(void 0,b)}
function Ai(a,b,c,d,e){try{if("FULFILLED"!==a.state.status)throw Error("calling handleResolve before the promise is fulfilled.");var f=c(a.state.value);f instanceof R?Ci(a,b,f,d,e):d(f)}catch(g){e(g)}}
function Bi(a,b,c,d,e){try{if("REJECTED"!==a.state.status)throw Error("calling handleReject before the promise is rejected.");var f=c(a.state.reason);f instanceof R?Ci(a,b,f,d,e):d(f)}catch(g){e(g)}}
function Ci(a,b,c,d,e){b===c?e(new TypeError("Circular promise chain detected.")):c.then(function(f){f instanceof R?Ci(a,b,f,d,e):d(f)},function(f){e(f)})}
;function Di(a,b,c){function d(){c(a.error);f()}
function e(){b(a.result);f()}
function f(){try{a.removeEventListener("success",e),a.removeEventListener("error",d)}catch(g){}}
a.addEventListener("success",e);a.addEventListener("error",d)}
function Ei(a){return new Promise(function(b,c){Di(a,b,c)})}
function Fi(a){return new R(function(b,c){Di(a,b,c)})}
;function Gi(a,b){return new R(function(c,d){function e(){var f=a?b(a):null;f?f.then(function(g){a=g;e()},d):c()}
e()})}
;function Hi(a,b){this.h=a;this.options=b;this.transactionCount=0;this.j=Math.round(P());this.i=!1}
m=Hi.prototype;m.add=function(a,b,c){return Ii(this,[a],{mode:"readwrite",I:!0},function(d){return Ji(d,a).add(b,c)})};
m.clear=function(a){return Ii(this,[a],{mode:"readwrite",I:!0},function(b){return Ji(b,a).clear()})};
m.close=function(){var a;this.h.close();(null===(a=this.options)||void 0===a?0:a.closed)&&this.options.closed()};
m.count=function(a,b){return Ii(this,[a],{mode:"readonly",I:!0},function(c){return Ji(c,a).count(b)})};
function Ki(a,b,c){a=a.h.createObjectStore(b,c);return new Li(a)}
m.delete=function(a,b){return Ii(this,[a],{mode:"readwrite",I:!0},function(c){return Ji(c,a).delete(b)})};
m.get=function(a,b){return Ii(this,[a],{mode:"readonly",I:!0},function(c){return Ji(c,a).get(b)})};
function Mi(a,b,c,d){return Ii(a,[b],{mode:"readwrite",I:!0},function(e){e=Ji(e,b);return Fi(e.h.put(c,d))})}
m.objectStoreNames=function(){return Array.from(this.h.objectStoreNames)};
function Ii(a,b,c,d){return G(a,function f(){var g=this,h,k,l,n,p,t,q,D,K,N,X,Y;return x(f,function(I){switch(I.h){case 1:var T={mode:"readonly",I:!1};"string"===typeof c?T.mode=c:T=c;h=T;g.transactionCount++;k=h.I?Df("ytidb_transaction_try_count",1):1;l=0;case 2:if(n){I.A(3);break}l++;p=Math.round(P());ra(I,4);t=g.h.transaction(b,h.mode);T=new Ni(t);T=Oi(T,d);return w(I,T,6);case 6:return q=I.i,D=Math.round(P()),Pi(g,p,D,l,void 0,b.join(),h),I.return(q);case 4:K=sa(I);N=Math.round(P());X=wi(K,g.h.name,
b.join());if((Y=X instanceof Q&&!X.h)||l>=k)Pi(g,p,N,l,X,b.join(),h),n=X;I.A(2);break;case 3:return I.return(Promise.reject(n))}})})}
function Pi(a,b,c,d,e,f,g){b=c-b;e?(e instanceof Q&&("QUOTA_EXCEEDED"===e.type||"QUOTA_MAYBE_EXCEEDED"===e.type)&&ji("QUOTA_EXCEEDED",{dbName:ni(a.h.name),objectStoreNames:f,transactionCount:a.transactionCount,transactionMode:g.mode}),e instanceof Q&&"UNKNOWN_ABORT"===e.type&&(ji("TRANSACTION_UNEXPECTEDLY_ABORTED",{objectStoreNames:f,transactionDuration:b,transactionCount:a.transactionCount,dbDuration:c-a.j}),a.i=!0),Qi(a,!1,d,f,b),ii(e)):Qi(a,!0,d,f,b)}
function Qi(a,b,c,d,e){ji("TRANSACTION_ENDED",{objectStoreNames:d,connectionHasUnknownAbortedTransaction:a.i,duration:e,isSuccessful:b,tryCount:c})}
m.getName=function(){return this.h.name};
function Li(a){this.h=a}
m=Li.prototype;m.add=function(a,b){return Fi(this.h.add(a,b))};
m.autoIncrement=function(){return this.h.autoIncrement};
m.clear=function(){return Fi(this.h.clear()).then(function(){})};
m.count=function(a){return Fi(this.h.count(a))};
function Ri(a,b){return Si(a,{query:b},function(c){return c.delete().then(function(){return c.continue()})}).then(function(){})}
m.delete=function(a){return a instanceof IDBKeyRange?Ri(this,a):Fi(this.h.delete(a))};
m.get=function(a){return Fi(this.h.get(a))};
m.index=function(a){return new Ti(this.h.index(a))};
m.getName=function(){return this.h.name};
m.keyPath=function(){return this.h.keyPath};
function Si(a,b,c){a=a.h.openCursor(b.query,b.direction);return Ui(a).then(function(d){return Gi(d,c)})}
function Ni(a){var b=this;this.h=a;this.i=new Map;this.aborted=!1;this.done=new Promise(function(c,d){b.h.addEventListener("complete",function(){c()});
b.h.addEventListener("error",function(e){e.currentTarget===e.target&&d(b.h.error)});
b.h.addEventListener("abort",function(){var e=b.h.error;if(e)d(e);else if(!b.aborted){e=Q;for(var f=b.h.objectStoreNames,g=[],h=0;h<f.length;h++){var k=f.item(h);if(null===k)throw Error("Invariant: item in DOMStringList is null");g.push(k)}e=new e("UNKNOWN_ABORT",{objectStoreNames:g.join(),dbName:b.h.db.name,mode:b.h.mode});d(e)}})})}
function Oi(a,b){var c=new Promise(function(d,e){try{zi(b(a).then(function(f){d(f)}),e)}catch(f){e(f),a.abort()}});
return Promise.all([c,a.done]).then(function(d){return u(d).next().value})}
Ni.prototype.abort=function(){this.h.abort();this.aborted=!0;throw new Q("EXPLICIT_ABORT");};
function Ji(a,b){b=a.h.objectStore(b);var c=a.i.get(b);c||(c=new Li(b),a.i.set(b,c));return c}
function Ti(a){this.h=a}
m=Ti.prototype;m.count=function(a){return Fi(this.h.count(a))};
m.delete=function(a){return Vi(this,{query:a},function(b){return b.delete().then(function(){return b.continue()})})};
m.get=function(a){return Fi(this.h.get(a))};
m.getKey=function(a){return Fi(this.h.getKey(a))};
m.keyPath=function(){return this.h.keyPath};
m.unique=function(){return this.h.unique};
function Vi(a,b,c){a=a.h.openCursor(void 0===b.query?null:b.query,void 0===b.direction?"next":b.direction);return Ui(a).then(function(d){return Gi(d,c)})}
function Wi(a,b){this.request=a;this.cursor=b}
function Ui(a){return Fi(a).then(function(b){return null===b?null:new Wi(a,b)})}
m=Wi.prototype;m.advance=function(a){this.cursor.advance(a);return Ui(this.request)};
m.continue=function(a){this.cursor.continue(a);return Ui(this.request)};
m.delete=function(){return Fi(this.cursor.delete()).then(function(){})};
m.getKey=function(){return this.cursor.key};
m.getValue=function(){return this.cursor.value};
m.update=function(a){return Fi(this.cursor.update(a))};function Xi(a,b,c){return new Promise(function(d,e){function f(){t||(t=new Hi(g.result,{closed:p}));return t}
var g=self.indexedDB.open(a,b),h=c.blocked,k=c.blocking,l=c.ub,n=c.upgrade,p=c.closed,t;g.addEventListener("upgradeneeded",function(q){try{if(null===q.newVersion)throw Error("Invariant: newVersion on IDbVersionChangeEvent is null");if(null===g.transaction)throw Error("Invariant: transaction on IDbOpenDbRequest is null");q.dataLoss&&"none"!==q.dataLoss&&ji("IDB_DATA_CORRUPTED",{reason:q.dataLossMessage||"unknown reason",dbName:ni(a)});var D=f(),K=new Ni(g.transaction);n&&n(D,q.oldVersion,q.newVersion,
K);K.done.catch(function(N){e(N)})}catch(N){e(N)}});
g.addEventListener("success",function(){var q=g.result;k&&q.addEventListener("versionchange",function(){k(f())});
q.addEventListener("close",function(){ji("IDB_UNEXPECTEDLY_CLOSED",{dbName:ni(a),dbVersion:q.version});l&&l()});
d(f())});
g.addEventListener("error",function(){e(g.error)});
h&&g.addEventListener("blocked",function(){h()})})}
function Yi(a,b,c){c=void 0===c?{}:c;return Xi(a,b,c)}
function Zi(a,b){b=void 0===b?{}:b;return G(this,function d(){var e,f,g;return x(d,function(h){e=self.indexedDB.deleteDatabase(a);f=b;(g=f.blocked)&&e.addEventListener("blocked",function(){g()});
return w(h,Ei(e),0)})})}
;function $i(a,b){this.name=a;this.options=b;this.j=!1}
$i.prototype.i=function(a,b,c){c=void 0===c?{}:c;return Yi(a,b,c)};
$i.prototype.delete=function(a){a=void 0===a?{}:a;return Zi(this.name,a)};
$i.prototype.open=function(){var a=this;if(!this.h){var b,c=function(){a.h===b&&(a.h=void 0)},d={blocking:function(f){f.close()},
closed:c,ub:c,upgrade:this.options.upgrade},e=function(){return G(a,function g(){var h=this,k,l,n;return x(g,function(p){switch(p.h){case 1:return ra(p,2),w(p,h.i(h.name,h.options.version,d),4);case 4:k=p.i;a:{var t=u(Object.keys(h.options.xa));for(var q=t.next();!q.done;q=t.next())if(q=q.value,!k.h.objectStoreNames.contains(q)){t=q;break a}t=void 0}l=t;if(void 0===l){p.A(5);break}if(h.j){p.A(6);break}h.j=!0;return w(p,h.delete(),7);case 7:return p.return(e());case 6:throw new ui(l);case 5:return p.return(k);
case 2:n=sa(p);if(n instanceof DOMException?"VersionError"===n.name:"DOMError"in self&&n instanceof DOMError?"VersionError"===n.name:n instanceof Object&&"message"in n&&"An attempt was made to open a database using a lower version than the existing version."===n.message)return p.return(h.i(h.name,void 0,Object.assign(Object.assign({},d),{upgrade:void 0})));c();throw n;}})})};
this.h=b=e()}return this.h};var aj=new $i("YtIdbMeta",{xa:{databases:!0},upgrade:function(a,b){1>b&&Ki(a,"databases",{keyPath:"actualName"})}});
function bj(a){return G(this,function c(){var d;return x(c,function(e){if(1==e.h)return w(e,aj.open(),2);d=e.i;return e.return(Ii(d,["databases"],{I:!0,mode:"readwrite"},function(f){var g=Ji(f,"databases");return g.get(a.actualName).then(function(h){if(h?a.actualName!==h.actualName||a.publicName!==h.publicName||a.userIdentifier!==h.userIdentifier||a.clearDataOnAuthChange!==h.clearDataOnAuthChange:1)return Fi(g.h.put(a,void 0)).then(function(){})})}))})})}
function cj(a){return G(this,function c(){var d;return x(c,function(e){if(1==e.h)return w(e,aj.open(),2);d=e.i;return e.return(d.delete("databases",a))})})}
function dj(a){return G(this,function c(){var d,e;return x(c,function(f){return 1==f.h?(d=[],w(f,aj.open(),2)):3!=f.h?(e=f.i,w(f,Ii(e,["databases"],{I:!0,mode:"readonly"},function(g){d.length=0;return Si(Ji(g,"databases"),{},function(h){a(h.getValue())&&d.push(h.getValue());return h.continue()})}),3)):f.return(d)})})}
function ej(){return dj(function(a){return"LogsDatabaseV2"===a.publicName&&void 0!==a.userIdentifier})}
;var fj;
function gj(){return G(this,function b(){var c,d,e;return x(b,function(f){switch(f.h){case 1:if(O("ytidb_is_supported_cache_success_result")&&(c=ei(),null===c||void 0===c?0:c.hasSucceededOnce))return f.return(new fi(!0));var g;if(g=Hg)g=/WebKit\/([0-9]+)/.exec(Nb),g=!!(g&&600<=parseInt(g[1],10));g&&(g=/WebKit\/([0-9]+)/.exec(Nb),g=!(g&&602<=parseInt(g[1],10)));if(g||kc)return f.return(new fi(!1));try{if(d=self,!(d.indexedDB&&d.IDBIndex&&d.IDBKeyRange&&d.IDBObjectStore))return f.return(new fi(!1))}catch(h){return f.return(new fi(!1))}if(!("IDBTransaction"in self&&
"objectStoreNames"in IDBTransaction.prototype))return f.return(new fi(!1));ra(f,2);e={actualName:"yt-idb-test-do-not-use",publicName:"yt-idb-test-do-not-use",userIdentifier:void 0};return w(f,bj(e),4);case 4:return w(f,cj("yt-idb-test-do-not-use"),5);case 5:return f.return(new fi(!0));case 2:return sa(f),f.return(new fi(!1))}})})}
function hj(){if(void 0!==fj)return fj;hi=!0;return fj=gj().then(function(a){hi=!1;return a.isSupported()})}
;function ij(a){try{li();var b=!0}catch(c){b=!1}if(!b)throw a=new Q("AUTH_INVALID"),ii(a),a;b=li();return{actualName:a+":"+b,publicName:a,userIdentifier:b}}
function jj(a,b,c,d){var e,f;return G(this,function h(){var k,l;return x(h,function(n){switch(n.h){case 1:return w(n,kj({caller:"openDbImpl",publicName:a,version:b}),2);case 2:return mi(a),k=c?{actualName:a,publicName:a,userIdentifier:void 0}:ij(a),k.clearDataOnAuthChange=O("remove_clear_data_on_auth_change_killswitch")?null!==(e=d.clearDataOnAuthChange)&&void 0!==e?e:!1:null!==(f=d.clearDataOnAuthChange)&&void 0!==f?f:!0,ra(n,3),w(n,bj(k),5);case 5:return w(n,Yi(k.actualName,b,d),6);case 6:return n.return(n.i);
case 3:return l=sa(n),ra(n,7),w(n,cj(k.actualName),9);case 9:n.h=8;n.m=0;break;case 7:sa(n);case 8:throw l;}})})}
function kj(a){return G(this,function c(){var d;return x(c,function(e){if(1==e.h)return w(e,hj(),2);if(!e.i)throw d=new Q("IDB_NOT_SUPPORTED",{context:a}),ii(d),d;e.h=0})})}
function lj(a,b,c){c=void 0===c?{}:c;return jj(a,b,!1,c)}
function mj(a,b,c){c=void 0===c?{}:c;return jj(a,b,!0,c)}
function nj(a,b){b=void 0===b?{}:b;return G(this,function d(){var e;return x(d,function(f){if(1==f.h)return w(f,hj(),2);if(3!=f.h){if(!f.i)return f.return();mi(a);e=ij(a);return w(f,Zi(e.actualName,b),3)}return w(f,cj(e.actualName),0)})})}
function oj(a,b){var c=this;a=a.map(function(d){return G(c,function f(){return x(f,function(g){return 1==g.h?w(g,Zi(d.actualName,b),2):w(g,cj(d.actualName),0)})})});
return Promise.all(a).then(function(){})}
function pj(){var a=void 0===a?{}:a;return G(this,function c(){var d;return x(c,function(e){if(1==e.h)return w(e,hj(),2);if(3!=e.h){if(!e.i)return e.return();mi("LogsDatabaseV2");return w(e,ej(),3)}d=e.i;return w(e,oj(d,a),0)})})}
function qj(a,b){b=void 0===b?{}:b;return G(this,function d(){return x(d,function(e){if(1==e.h)return w(e,hj(),2);if(3!=e.h){if(!e.i)return e.return();mi(a);return w(e,Zi(a,b),3)}return w(e,cj(a),0)})})}
;function rj(){R.call(this,function(){});
throw Error("Not allowed to instantiate the thennable outside of the core library.");}
v(rj,R);rj.reject=R.reject;rj.resolve=R.resolve;rj.all=R.all;function sj(a,b){$i.call(this,a,b);this.options=b;mi(a)}
v(sj,$i);function tj(a,b){var c;return function(){c||(c=new sj(a,b));return c}}
sj.prototype.i=function(a,b,c){c=void 0===c?{}:c;return(this.options.za?mj:lj)(a,b,Object.assign(Object.assign({},c),{clearDataOnAuthChange:this.options.clearDataOnAuthChange}))};
sj.prototype.delete=function(a){a=void 0===a?{}:a;return(this.options.za?qj:nj)(this.name,a)};
function uj(a,b){return tj(a,b)}
;var vj;
function wj(){if(vj)return vj();var a={};vj=uj("LogsDatabaseV2",{xa:(a.LogsRequestsStore=!0,a.sapisid=!0,a.SWHealthLog=!0,a),za:!O("nwl_use_ytidb_partitioning"),clearDataOnAuthChange:O("nwl_use_ytidb_partitioning"),upgrade:function(b,c,d){2>c&&2<=d&&(Ki(b,"LogsRequestsStore",{keyPath:"id",autoIncrement:!0}).h.createIndex("newRequest",["status","authHash","interface","timestamp"],{unique:!1}),Ki(b,"sapisid"));3>c&&3<=d&&Ki(b,"SWHealthLog",{keyPath:"id",autoIncrement:!0}).h.createIndex("swHealthNewRequest",["interface",
"timestamp"],{unique:!1})},
version:3});return vj()}
;function xj(){return wj().open()}
function yj(a){return G(this,function c(){var d,e,f,g,h;return x(c,function(k){switch(k.h){case 1:return d={startTime:P(),transactionType:"YT_IDB_TRANSACTION_TYPE_WRITE"},w(k,zj(),2);case 2:return e=k.i,w(k,xj(),3);case 3:return f=k.i,g=Object.assign(Object.assign({},a),{options:JSON.parse(JSON.stringify(a.options)),authHash:e,interface:E("INNERTUBE_CONTEXT_CLIENT_NAME",0)}),w(k,Mi(f,"LogsRequestsStore",g),4);case 4:return h=k.i,d.vb=P(),Aj(d),k.return(h)}})})}
function Bj(a){return G(this,function c(){var d,e,f,g,h,k,l,n;return x(c,function(p){switch(p.h){case 1:return d={startTime:P(),transactionType:"YT_IDB_TRANSACTION_TYPE_READ"},w(p,zj(),2);case 2:return e=p.i,f=E("INNERTUBE_CONTEXT_CLIENT_NAME",0),g=[a,e,f,0],h=[a,e,f,P()],k=IDBKeyRange.bound(g,h),w(p,xj(),3);case 3:return l=p.i,n=void 0,w(p,Ii(l,["LogsRequestsStore"],{mode:"readwrite",I:!0},function(t){return Vi(Ji(t,"LogsRequestsStore").index("newRequest"),{query:k,direction:"prev"},function(q){q.getValue()&&
(n=q.getValue(),"NEW"===a&&(n.status="QUEUED",q.update(n)))})}),4);
case 4:return d.vb=P(),Aj(d),p.return(n)}})})}
function Cj(a){return G(this,function c(){var d;return x(c,function(e){if(1==e.h)return w(e,xj(),2);d=e.i;return e.return(Ii(d,["LogsRequestsStore"],{mode:"readwrite",I:!0},function(f){var g=Ji(f,"LogsRequestsStore");return g.get(a).then(function(h){if(h)return h.status="QUEUED",Fi(g.h.put(h,void 0)).then(function(){return h})})}))})})}
function Dj(a){return G(this,function c(){var d;return x(c,function(e){if(1==e.h)return w(e,xj(),2);d=e.i;return e.return(Ii(d,["LogsRequestsStore"],{mode:"readwrite",I:!0},function(f){var g=Ji(f,"LogsRequestsStore");return g.get(a).then(function(h){return h?(h.status="NEW",h.sendCount+=1,Fi(g.h.put(h,void 0)).then(function(){return h})):rj.resolve(void 0)})}))})})}
function Ej(a){return G(this,function c(){var d;return x(c,function(e){if(1==e.h)return w(e,xj(),2);d=e.i;return e.return(d.delete("LogsRequestsStore",a))})})}
function Fj(){return G(this,function b(){var c;return x(b,function(d){if(1==d.h)return w(d,xj(),2);c=d.i;return d.return(c.clear("LogsRequestsStore"))})})}
function Gj(){return G(this,function b(){var c,d;return x(b,function(e){if(1==e.h)return w(e,xj(),2);c=e.i;d=P()-2592E6;return w(e,Ii(c,["LogsRequestsStore"],{mode:"readwrite",I:!0},function(f){return Si(Ji(f,"LogsRequestsStore"),{},function(g){if(g.getValue().timestamp<=d)return g.delete().then(function(){return g.continue()})})}),0)})})}
function Hj(){return G(this,function b(){return x(b,function(c){return 1==c.h?w(c,pj(),2):w(c,qj("LogsDatabaseV2"),0)})})}
function zj(){return G(this,function b(){var c;return x(b,function(d){if(1==d.h){ci.h||(ci.h=new ci);var e={};var f=gd([]);f&&(e.Authorization=f,f=void 0,void 0===f&&(f=Number(E("SESSION_INDEX",0)),f=isNaN(f)?0:f),e["X-Goog-AuthUser"]=f,"INNERTUBE_HOST_OVERRIDE"in uf||(e["X-Origin"]=window.location.origin),O("pageid_as_header_web")&&"DELEGATED_SESSION_ID"in uf&&(e["X-Goog-PageId"]=E("DELEGATED_SESSION_ID")));e instanceof He||(f=new He(Ea),Ie(f,2,e),e=f);return w(d,e,2)}c=d.i;e=d.return;f=Jh(c);var g=
new Ad;g.update(JSON.stringify(f,Object.keys(f).sort()));f=g.digest();g="";for(var h=0;h<f.length;h++)g+="0123456789ABCDEF".charAt(Math.floor(f[h]/16))+"0123456789ABCDEF".charAt(f[h]%16);return e.call(d,g)})})}
function Ij(a){return G(this,function c(){var d;return x(c,function(e){if(1==e.h)return w(e,xj(),2);d=e.i;return w(e,Mi(d,"sapisid",a,"sapisid"),0)})})}
function Jj(){return G(this,function b(){var c,d;return x(b,function(e){if(1==e.h)return w(e,xj(),2);if(3!=e.h)return c=e.i,w(e,c.get("sapisid","sapisid"),3);d=e.i;return e.return(d||"")})})}
function Aj(a){var b=Df("nwl_latency_sampling_rate",.01);.02<b||Math.random()<=b&&Wh("nwl_transaction_latency_payload",a)}
;var Kj={},Lj=uj("ServiceWorkerLogsDatabase",{xa:(Kj.SWHealthLog=!0,Kj),za:!0,upgrade:function(a,b,c){1>b&&1<=c&&Ki(a,"SWHealthLog",{keyPath:"id",autoIncrement:!0}).h.createIndex("swHealthNewRequest",["interface","timestamp"],{unique:!1})},
version:1});function Mj(){return G(this,function b(){var c,d;return x(b,function(e){if(1==e.h)return O("web_clean_sw_logs_store")?w(e,Lj().open(),3):e.A(0);c=e.i;d=P()-2592E6;return w(e,Ii(c,["SWHealthLog"],{mode:"readwrite",I:!0},function(f){return Si(Ji(f,"SWHealthLog"),{},function(g){if(g.getValue().timestamp<=d)return g.delete().then(function(){return g.continue()})})}),0)})})}
function Nj(){return G(this,function b(){var c,d;return x(b,function(e){switch(e.h){case 1:return w(e,Lj().open(),2);case 2:return c=e.i,w(e,c.clear("SWHealthLog"),3);case 3:return w(e,xj(),4);case 4:return d=e.i,e.return(d.clear("SWHealthLog"))}})})}
;var Oj=["__Secure-1PAPISID","SAPISID","__Secure-3PAPISID"];function Pj(){for(var a=u(Oj),b=a.next();!b.done;b=a.next())if(b=cd.get(b.value))return b;return"LOGGED_OUT"}
function Qj(){xe.call(this);this.pollingInterval=3E3;this.i=[null,null,null];this.m=!1;Rj(this)}
v(Qj,xe);function Sj(){Qj.h||(Qj.h=new Qj);var a=Qj.h;a.m=!0;a.verifyUser();Tj(a)}
Qj.prototype.verifyUser=function(){var a=Rj(this),b=a.fb;if(!a.tb)return Tj(this),!0;ye(this,"ytsessionchange");b&&ye(this,"ytuserinvalid");Tj(this);return!1};
function Rj(a){var b=Oj.map(function(e){var f;return null!==(f=cd.get(e))&&void 0!==f?f:""}),c=b.some(function(e,f){return a.i&&""!==a.i[f]&&""===e}),d=b.some(function(e,f){return a.i&&a.i[f]!==e});
a.i=b;return{fb:c,tb:d}}
function Tj(a){a.m&&(Uj(a),a.l=Tf(function(){a.verifyUser()},a.pollingInterval))}
function Uj(a){a.l&&(Xf(a.l),a.l=void 0)}
;var Vj;function Wj(){Vj||(Vj=new Kh("yt.offline"));return Vj}
function Xj(a){if(O("offline_error_handling")){var b=Wj().get("errors",!0)||{};b[a.message]={name:a.name,stack:a.stack};a.level&&(b[a.message].level=a.level);Wj().set("errors",b,2592E3,!0)}}
function Yj(){if(O("offline_error_handling")){var a=Wj().get("errors",!0);if(a){for(var b in a)if(a[b]){var c=new ki(b,"sent via offline_errors");c.name=a[b].name;c.stack=a[b].stack;c.level=a[b].level;yf(c)}Wj().set("errors",{},2592E3,!0)}}}
;var Zj=Df("network_polling_interval",3E4);function S(){xe.call(this);this.L=0;this.o=this.l=!1;this.B=0;this.m=this.J=!1;this.i=this.ka();this.m=O("validate_network_status");ak(this);bk(this)}
v(S,xe);function ck(){if(!S.h){var a=A("yt.networkStatusManager.instance")||new S;z("yt.networkStatusManager.instance",a,void 0);S.h=a}return S.h}
m=S.prototype;m.N=function(){this.m||this.i===this.ka()||zf(new ki("NetworkStatusManager isOnline does not match window status"));return this.i};
m.gb=function(a){this.l=!0;if(void 0===a?0:a)this.L||dk(this)};
m.ka=function(){var a=window.navigator.onLine;return void 0===a?!0:a};
m.Ra=function(){this.J=!0};
m.ca=function(a,b){return xe.prototype.ca.call(this,a,b)};
function bk(a){window.addEventListener("online",function(){return G(a,function c(){var d=this;return x(c,function(e){if(1==e.h)return d.m?w(e,d.T(),2):(d.i=!0,d.l&&ye(d,"ytnetworkstatus-online"),e.A(2));ek(d);d.J&&Yj();e.h=0})})})}
function ak(a){window.addEventListener("offline",function(){return G(a,function c(){var d=this;return x(c,function(e){if(1==e.h)return d.m?w(e,d.T(),2):(d.i=!1,d.l&&ye(d,"ytnetworkstatus-offline"),e.A(2));ek(d);e.h=0})})})}
function dk(a){a.L=Tf(function(){return G(a,function c(){var d=this;return x(c,function(e){if(1==e.h){if(O("trigger_nsm_validation_checks_with_nwl")&&!d.i)return w(e,d.T(),3);if(d.ka()){if(!1!==d.i)return e.A(3);d.o=!0;d.B=P();return d.l?d.m?w(e,d.T(),11):(d.i=!0,ye(d,"ytnetworkstatus-online"),e.A(11)):e.A(11)}if(!0!==d.i)return e.A(3);d.o=!0;d.B=P();return d.l?d.m?w(e,d.T(),3):(d.i=!1,ye(d,"ytnetworkstatus-offline"),e.A(3)):e.A(3)}if(3!=e.h)return d.J&&Yj(),e.A(3);dk(d);e.h=0})})},Zj)}
function ek(a){a.o&&(zf(new ki("NetworkStatusManager state did not match poll",P()-a.B)),a.o=!1)}
m.T=function(a){var b=this;return this.C?this.C:this.C=new Promise(function(c){return G(b,function e(){var f,g,h,k=this;return x(e,function(l){switch(l.h){case 1:return f=window.AbortController?new window.AbortController:void 0,g=null===f||void 0===f?void 0:f.signal,h=!1,ra(l,2,3),f&&(k.K=Vf(function(){f.abort()},a||2E4)),w(l,fetch("/generate_204",{method:"HEAD",
signal:g}),5);case 5:h=!0;case 3:ta(l);k.C=void 0;k.K&&Xf(k.K);h!==k.i&&(k.i=h,k.i&&k.l?ye(k,"ytnetworkstatus-online"):k.l&&ye(k,"ytnetworkstatus-offline"));c(h);ua(l);break;case 2:sa(l),h=!1,l.A(3)}})})})};
S.prototype.sendNetworkCheckRequest=S.prototype.T;S.prototype.listen=S.prototype.ca;S.prototype.enableErrorFlushing=S.prototype.Ra;S.prototype.getWindowStatus=S.prototype.ka;S.prototype.monitorNetworkStatusChange=S.prototype.gb;S.prototype.isNetworkAvailable=S.prototype.N;S.getInstance=ck;function fk(a){a=void 0===a?{}:a;xe.call(this);var b=this;this.l=this.o=0;this.i=ck();var c=A("yt.networkStatusManager.instance.monitorNetworkStatusChange").bind(this.i);c&&c(a.Sa);a.eb&&(c=A("yt.networkStatusManager.instance.enableErrorFlushing").bind(this.i))&&c();if(c=A("yt.networkStatusManager.instance.listen").bind(this.i))a.ma?(this.ma=a.ma,c("ytnetworkstatus-online",function(){gk(b,"publicytnetworkstatus-online")}),c("ytnetworkstatus-offline",function(){gk(b,"publicytnetworkstatus-offline")})):
(c("ytnetworkstatus-online",function(){ye(b,"publicytnetworkstatus-online")}),c("ytnetworkstatus-offline",function(){ye(b,"publicytnetworkstatus-offline")}))}
v(fk,xe);fk.prototype.N=function(){var a=A("yt.networkStatusManager.instance.isNetworkAvailable").bind(this.i);return a?a():!0};
fk.prototype.T=function(a){return G(this,function c(){var d=this,e;return x(c,function(f){return(e=A("yt.networkStatusManager.instance.sendNetworkCheckRequest").bind(d.i))?f.return(e(a)):f.return(!0)})})};
function gk(a,b){a.ma?a.l?(Xf(a.o),a.o=Vf(function(){a.m!==b&&(ye(a,b),a.m=b,a.l=P())},a.ma-(P()-a.l))):(ye(a,b),a.m=b,a.l=P()):ye(a,b)}
;var hk=!1,ik=!1,jk=0,kk=0,lk,mk=y.ytNetworklessLoggingInitializationOptions||{isNwlInitialized:hk,isIdbSupported:ik,potentialEsfErrorCounter:kk};O("export_networkless_options")&&z("ytNetworklessLoggingInitializationOptions",mk,void 0);
function nk(){G(this,function b(){var c,d,e,f;return x(b,function(g){switch(g.h){case 1:return w(g,hj(),2);case 2:(c=g.i)&&(ik=!0);d=O("networkless_logging");if(c&&d)return O("nwl_use_ytidb_partitioning")?w(g,qj("LogsDatabaseV2"),8):w(g,pj(),8);if(!c){g.A(0);break}return w(g,Hj(),0);case 8:return Sj(),document.addEventListener("ytsessionchange",function(){ok()}),w(g,Jj(),11);
case 11:e=g.i;f=Pj();if(e===f){g.A(12);break}ok();return w(g,Ij(f),12);case 12:if(!(O("enable_nwl_cleaning_logic")&&Math.random()<=Df("nwl_cleaning_rate",.1))){g.A(14);break}return w(g,Gj(),15);case 15:return w(g,Mj(),14);case 14:hk=!0;pk();qk().N()&&rk();qk().ca("publicytnetworkstatus-online",rk);qk().ca("publicytnetworkstatus-offline",sk);if(!O("networkless_immediately_drop_sw_health_store")){g.A(17);break}return w(g,tk(),17);case 17:if(!O("networkless_immediately_drop_all_requests")){g.A(19);break}return w(g,
Hj(),19);case 19:O("export_networkless_options")&&(mk.isNwlInitialized=hk,mk.isIdbSupported=ik),g.h=0}})})}
function uk(a,b){function c(d){var e=qk().N();if(!vk()||!d||e&&O("vss_networkless_bypass_write"))wk(a,b);else{var f={url:a,options:b,timestamp:P(),status:"NEW",sendCount:0};yj(f).then(function(g){f.id=g;(qk().N()||O("networkless_always_online"))&&xk(f)}).catch(function(g){xk(f);
qk().N()?yf(g):Xj(g)})}}
b=void 0===b?{}:b;O("skip_is_supported_killswitch")?hj().then(function(d){c(d)}):c(yk())}
function zk(a,b){function c(d){if(vk()&&d){var e={url:a,options:b,timestamp:P(),status:"NEW",sendCount:0},f=!1,g=b.onSuccess?b.onSuccess:function(){};
e.options.onSuccess=function(h,k){void 0!==e.id?Ej(e.id):f=!0;g(h,k)};
wk(e.url,e.options);yj(e).then(function(h){e.id=h;f&&Ej(e.id)}).catch(function(h){qk().N()?yf(h):Xj(h)})}else wk(a,b)}
b=void 0===b?{}:b;O("skip_is_supported_killswitch")?hj().then(function(d){c(d)}):c(yk())}
function rk(){var a=this;jk||(jk=Vf(function(){return G(a,function c(){var d;return x(c,function(e){if(1==e.h)return w(e,Bj("NEW"),2);if(3!=e.h)return d=e.i,d?w(e,xk(d),3):(sk(),e.return());if(!O("nwl_throttling_race_fix")||jk)jk=0,rk();e.h=0})})},100))}
function sk(){Xf(jk);jk=0}
function xk(a){return G(this,function c(){var d;return x(c,function(e){switch(e.h){case 1:if(void 0===a.id){e.A(2);break}return w(e,Cj(a.id),3);case 3:(d=e.i)?a=d:zf(Error("The request cannot be found in the database."));case 2:if(Ak(a,2592E6)){e.A(4);break}zf(Error("Networkless Logging: Stored logs request expired age limit"));if(void 0===a.id){e.A(5);break}return w(e,Ej(a.id),5);case 5:return e.return();case 4:var f=a=Bk(a),g,h;if(null===(h=null===(g=null===f||void 0===f?void 0:f.options)||void 0===
g?void 0:g.postParams)||void 0===h?0:h.requestTimeMs)f.options.postParams.requestTimeMs=Math.round(P());(a=f)&&wk(a.url,a.options);e.h=0}})})}
function Bk(a){var b=this,c=a.options.onError?a.options.onError:function(){};
a.options.onError=function(e,f){return G(b,function h(){return x(h,function(k){switch(k.h){case 1:if(!(O("trigger_nsm_validation_checks_with_nwl")&&(A("ytNetworklessLoggingInitializationOptions")?mk.potentialEsfErrorCounter:kk)<=Df("potential_esf_error_limit",10))){k.A(2);break}return w(k,qk().T(),3);case 3:if(qk().N())A("ytNetworklessLoggingInitializationOptions")&&mk.potentialEsfErrorCounter++,kk++;else return c(e,f),k.return();case 2:if(void 0===(null===a||void 0===a?void 0:a.id)){k.A(4);break}return 1>
a.sendCount?w(k,Dj(a.id),8):w(k,Ej(a.id),4);case 8:Vf(function(){qk().N()&&rk()},5E3);
case 4:c(e,f),k.h=0}})})};
var d=a.options.onSuccess?a.options.onSuccess:function(){};
a.options.onSuccess=function(e,f){return G(b,function h(){return x(h,function(k){if(1==k.h)return void 0===(null===a||void 0===a?void 0:a.id)?k.A(2):w(k,Ej(a.id),2);d(e,f);k.h=0})})};
return a}
function Ak(a,b){a=a.timestamp;return P()-a>=b?!1:!0}
function pk(){var a=this;Bj("QUEUED").then(function(b){b&&!Ak(b,12E4)?Vf(function(){return G(a,function d(){return x(d,function(e){if(1==e.h)return void 0===b.id?e.A(2):w(e,Dj(b.id),2);pk();e.h=0})})}):O("nwl_trigger_throttle_after_reset")&&qk().N()&&rk()})}
function ok(){Fj().catch(function(a){yf(a)})}
function tk(){return G(this,function b(){return x(b,function(c){return c.return(Nj().catch(function(d){yf(d)}))})})}
function qk(){lk||(lk=new fk({eb:!0,Sa:O("trigger_nsm_validation_checks_with_nwl")}));return lk}
function wk(a,b){if(O("networkless_with_beacon")){var c=["method","postBody"];if(Object.keys(b).length>c.length)var d=!0;else{d=0;c=u(c);for(var e=c.next();!e.done;e=c.next())b.hasOwnProperty(e.value)&&d++;d=Object.keys(b).length!==d}d?zg(a,b):Og(a,void 0,b.postBody)}else zg(a,b)}
function vk(){return A("ytNetworklessLoggingInitializationOptions")?mk.isNwlInitialized:hk}
function yk(){return A("ytNetworklessLoggingInitializationOptions")?mk.isIdbSupported:ik}
;function Ck(a){var b=this;this.config_=null;a?this.config_=a:Hh()&&(this.config_=rh());Tf(function(){Ph(b)},5E3)}
Ck.prototype.isReady=function(){!this.config_&&Hh()&&(this.config_=rh());return!!this.config_};
function uh(a,b,c,d){function e(t){t=void 0===t?!1:t;var q;if(d.retry&&"www.youtube-nocookie.com"!=h&&(t||(q=Nh(b,c,l,k)),q)){var D=g.onSuccess,K=g.onFetchSuccess;g.onSuccess=function(N,X){Oh(q);D(N,X)};
c.onFetchSuccess=function(N,X){Oh(q);K(N,X)}}try{t&&d.retry&&!d.Ka.bypassNetworkless?(g.method="POST",!d.Ka.writeThenSend&&O("nwl_send_fast_on_unload")?zk(p,g):uk(p,g)):(g.method="POST",g.postParams||(g.postParams={}),zg(p,g))}catch(N){if("InvalidAccessError"==N.name)q&&(Oh(q),q=0),zf(Error("An extension is blocking network request."));
else throw N;}q&&Tf(function(){Ph(a)},5E3)}
!E("VISITOR_DATA")&&"visitor_id"!==b&&.01>Math.random()&&zf(new ki("Missing VISITOR_DATA when sending innertube request.",b,c,d));if(!a.isReady()){var f=new ki("innertube xhrclient not ready",b,c,d);yf(f);throw f;}var g={headers:{"Content-Type":"application/json"},method:"POST",postParams:c,postBodyFormat:"JSON",onTimeout:function(){d.onTimeout()},
onFetchTimeout:d.onTimeout,onSuccess:function(t,q){if(d.onSuccess)d.onSuccess(q)},
onFetchSuccess:function(t){if(d.onSuccess)d.onSuccess(t)},
onError:function(t,q){if(d.onError)d.onError(q)},
onFetchError:function(t){if(d.onError)d.onError(t)},
timeout:d.timeout,withCredentials:!0},h="";(f=a.config_.ab)&&(h=f);var k=a.config_.cb||!1,l=Ih(k,h,d);Object.assign(g.headers,l);g.headers.Authorization&&!h&&(g.headers["x-origin"]=window.location.origin);f="/youtubei/"+a.config_.innertubeApiVersion+"/"+b;var n={alt:"json"};a.config_.bb&&g.headers.Authorization||(n.key=a.config_.innertubeApiKey);var p=ng(""+h+f,n||{},!0);vk()?hj().then(function(t){e(t)}):e(!1)}
;function Dk(a,b,c){c=void 0===c?{}:c;var d=Ck;E("ytLoggingEventsDefaultDisabled",!1)&&Ck==Ck&&(d=null);wh(a,b,d,c)}
;var Ek=[{Ia:function(a){return"Cannot read property '"+a.key+"'"},
ya:{TypeError:[{regexp:/Cannot read property '([^']+)' of (null|undefined)/,groups:["key","value"]},{regexp:/\u65e0\u6cd5\u83b7\u53d6\u672a\u5b9a\u4e49\u6216 (null|undefined) \u5f15\u7528\u7684\u5c5e\u6027\u201c([^\u201d]+)\u201d/,groups:["value","key"]},{regexp:/\uc815\uc758\ub418\uc9c0 \uc54a\uc74c \ub610\ub294 (null|undefined) \ucc38\uc870\uc778 '([^']+)' \uc18d\uc131\uc744 \uac00\uc838\uc62c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4./,groups:["value","key"]},{regexp:/No se puede obtener la propiedad '([^']+)' de referencia nula o sin definir/,
groups:["key"]},{regexp:/Unable to get property '([^']+)' of (undefined or null) reference/,groups:["key","value"]}],Error:[{regexp:/(Permission denied) to access property "([^']+)"/,groups:["reason","key"]}]}},{Ia:function(a){return"Cannot call '"+a.key+"'"},
ya:{TypeError:[{regexp:/(?:([^ ]+)?\.)?([^ ]+) is not a function/,groups:["base","key"]},{regexp:/([^ ]+) called on (null or undefined)/,groups:["key","value"]},{regexp:/Object (.*) has no method '([^ ]+)'/,groups:["base","key"]},{regexp:/Object doesn't support property or method '([^ ]+)'/,groups:["key"]},{regexp:/\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u306f '([^']+)' \u30d7\u30ed\u30d1\u30c6\u30a3\u307e\u305f\u306f\u30e1\u30bd\u30c3\u30c9\u3092\u30b5\u30dd\u30fc\u30c8\u3057\u3066\u3044\u307e\u305b\u3093/,
groups:["key"]},{regexp:/\uac1c\uccb4\uac00 '([^']+)' \uc18d\uc131\uc774\ub098 \uba54\uc11c\ub4dc\ub97c \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4./,groups:["key"]}]}}];var Gk={S:[],R:[{Ca:Fk,weight:500}]};function Fk(a){a=a.stack;return a.includes("chrome://")||a.includes("chrome-extension://")||a.includes("moz-extension://")}
;function Hk(){this.R=[];this.S=[]}
var Ik;function Jk(){if(!Ik){var a=Ik=new Hk;a.S.length=0;a.R.length=0;Gk.S&&a.S.push.apply(a.S,Gk.S);Gk.R&&a.R.push.apply(a.R,Gk.R)}return Ik}
;var Kk=new L;function Lk(a){function b(){return a.charCodeAt(d++)}
var c=a.length,d=0;do{var e=Mk(b);if(Infinity===e)break;var f=e>>3;switch(e&7){case 0:e=Mk(b);if(2===f)return e;break;case 1:if(2===f)return;d+=8;break;case 2:e=Mk(b);if(2===f)return a.substr(d,e);d+=e;break;case 5:if(2===f)return;d+=4;break;default:return}}while(d<c)}
function Mk(a){var b=a(),c=b&127;if(128>b)return c;b=a();c|=(b&127)<<7;if(128>b)return c;b=a();c|=(b&127)<<14;if(128>b)return c;b=a();return 128>b?c|(b&127)<<21:Infinity}
;function Nk(a,b,c,d){if(a)if(Array.isArray(a)){var e=d;for(d=0;d<a.length&&!(a[d]&&(e+=Ok(d,a[d],b,c),500<e));d++);d=e}else if("object"===typeof a)for(e in a){if(a[e]){var f=e;var g=a[e],h=b,k=c;f="string"!==typeof g||"clickTrackingParams"!==f&&"trackingParams"!==f?0:(g=Lk(atob(g.replace(/-/g,"+").replace(/_/g,"/"))))?Ok(f+".ve",g,h,k):0;d+=f;d+=Ok(e,a[e],b,c);if(500<d)break}}else c[b]=Pk(a),d+=c[b].length;else c[b]=Pk(a),d+=c[b].length;return d}
function Ok(a,b,c,d){c+="."+a;a=Pk(b);d[c]=a;return c.length+a.length}
function Pk(a){return("string"===typeof a?a:String(JSON.stringify(a))).substr(0,500)}
;var Qk=new Set,Rk=0,Sk=0,Tk=0,Uk=[],Vk=["PhantomJS","Googlebot","TO STOP THIS SECURITY SCAN go/scan"];function Wk(a){Xk(a,"WARNING")}
function Xk(a,b,c,d,e,f){f=void 0===f?{}:f;f.name=c||E("INNERTUBE_CONTEXT_CLIENT_NAME",1);f.version=d||E("INNERTUBE_CONTEXT_CLIENT_VERSION",void 0);c=f||{};b=void 0===b?"ERROR":b;b=void 0===b?"ERROR":b;if(a&&(a.hasOwnProperty("level")&&a.level&&(b=a.level),O("console_log_js_exceptions")&&(d=[],d.push("Name: "+a.name),d.push("Message: "+a.message),a.hasOwnProperty("params")&&d.push("Error Params: "+JSON.stringify(a.params)),a.hasOwnProperty("args")&&d.push("Error args: "+JSON.stringify(a.args)),d.push("File name: "+
a.fileName),d.push("Stacktrace: "+a.stack),window.console.log(d.join("\n"),a)),!(5<=Rk))){var g=Cd(a);d=g.message||"Unknown Error";e=g.name||"UnknownError";var h=g.stack||a.i||"Not available";h.startsWith(e+": "+d)&&(f=h.split("\n"),f.shift(),h=f.join("\n"));f=g.lineNumber||"Not available";g=g.fileName||"Not available";var k=0;if(a.hasOwnProperty("args")&&a.args&&a.args.length)for(var l=0;l<a.args.length&&!(k=Nk(a.args[l],"params."+l,c,k),500<=k);l++);else if(a.hasOwnProperty("params")&&a.params){var n=
a.params;if("object"===typeof a.params)for(l in n){if(n[l]){var p="params."+l,t=Pk(n[l]);c[p]=t;k+=p.length+t.length;if(500<k)break}}else c.params=Pk(n)}if(Uk.length)for(l=0;l<Uk.length&&!(k=Nk(Uk[l],"params.context."+l,c,k),500<=k);l++);navigator.vendor&&!c.hasOwnProperty("vendor")&&(c["device.vendor"]=navigator.vendor);l={message:d,name:e,lineNumber:f,fileName:g,stack:h,params:c,sampleWeight:1};c=Number(a.columnNumber);isNaN(c)||(l.lineNumber=l.lineNumber+":"+c);if("IGNORED"===a.level)a=0;else a:{a=
Jk();c=u(a.S);for(d=c.next();!d.done;d=c.next())if(d=d.value,l.message&&l.message.match(d.Xk)){a=d.weight;break a}a=u(a.R);for(c=a.next();!c.done;c=a.next())if(c=c.value,c.Ca(l)){a=c.weight;break a}a=1}l.sampleWeight=a;a=u(Ek);for(c=a.next();!c.done;c=a.next())if(c=c.value,c.ya[l.name])for(e=u(c.ya[l.name]),d=e.next();!d.done;d=e.next())if(f=d.value,d=l.message.match(f.regexp)){l.params["params.error.original"]=d[0];e=f.groups;f={};for(g=0;g<e.length;g++)f[e[g]]=d[g+1],l.params["params.error."+e[g]]=
d[g+1];l.message=c.Ia(f);break}l.params||(l.params={});a=Jk();l.params["params.errorServiceSignature"]="msg="+a.S.length+"&cb="+a.R.length;l.params["params.serviceWorker"]="false";y.document&&y.document.querySelectorAll&&(l.params["params.fscripts"]=String(document.querySelectorAll("script:not([nonce])").length));window.yterr&&"function"===typeof window.yterr&&window.yterr(l);if(0!==l.sampleWeight&&!Qk.has(l.message)){"ERROR"===b?(Kk.W("handleError",l),O("record_app_crashed_web")&&0===Tk&&1===l.sampleWeight&&
(Tk++,Dk("appCrashed",{appCrashType:"APP_CRASH_TYPE_BREAKPAD"})),Sk++):"WARNING"===b&&Kk.W("handleWarning",l);if(O("kevlar_gel_error_routing")){a=b;b:{c=u(Vk);for(d=c.next();!d.done;d=c.next())if(Ig(d.value.toLowerCase())){c=!0;break b}c=!1}if(c)c=void 0;else{d={stackTrace:l.stack};l.fileName&&(d.filename=l.fileName);c=l.lineNumber&&l.lineNumber.split?l.lineNumber.split(":"):[];0!==c.length&&(1!==c.length||isNaN(Number(c[0]))?2!==c.length||isNaN(Number(c[0]))||isNaN(Number(c[1]))||(d.lineNumber=Number(c[0]),
d.columnNumber=Number(c[1])):d.lineNumber=Number(c[0]));c={level:"ERROR_LEVEL_UNKNOWN",message:l.message,errorClassName:l.name,sampleWeight:l.sampleWeight};"ERROR"===a?c.level="ERROR_LEVEL_ERROR":"WARNING"===a&&(c.level="ERROR_LEVEL_WARNNING");d={isObfuscated:!0,browserStackInfo:d};e={pageUrl:window.location.href,kvPairs:[]};E("FEXP_EXPERIMENTS")&&(e.experimentIds=E("FEXP_EXPERIMENTS"));if(f=l.params)for(g=u(Object.keys(f)),h=g.next();!h.done;h=g.next())h=h.value,e.kvPairs.push({key:"client."+h,value:String(f[h])});
f=E("SERVER_NAME",void 0);g=E("SERVER_VERSION",void 0);f&&g&&(e.kvPairs.push({key:"server.name",value:f}),e.kvPairs.push({key:"server.version",value:g}));c={errorMetadata:e,stackTrace:d,logMessage:c}}c&&(Dk("clientError",c),("ERROR"===a||O("errors_flush_gel_always_killswitch"))&&mh())}if(!O("suppress_error_204_logging")){a=l.params||{};b={urlParams:{a:"logerror",t:"jserror",type:l.name,msg:l.message.substr(0,250),line:l.lineNumber,level:b,"client.name":a.name},postParams:{url:E("PAGE_NAME",window.location.href),
file:l.fileName},method:"POST"};a.version&&(b["client.version"]=a.version);if(b.postParams){l.stack&&(b.postParams.stack=l.stack);c=u(Object.keys(a));for(d=c.next();!d.done;d=c.next())d=d.value,b.postParams["client."+d]=a[d];if(a=E("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS",void 0))for(c=u(Object.keys(a)),d=c.next();!d.done;d=c.next())d=d.value,b.postParams[d]=a[d];a=E("SERVER_NAME",void 0);c=E("SERVER_VERSION",void 0);a&&c&&(b.postParams["server.name"]=a,b.postParams["server.version"]=c)}zg(E("ECATCHER_REPORT_HOST",
"")+"/error_204",b)}Qk.add(l.message);Rk++}}}
function Yk(a,b){for(var c=[],d=1;d<arguments.length;++d)c[d-1]=arguments[d];a.args||(a.args=[]);a.args.push.apply(a.args,c instanceof Array?c:fa(u(c)))}
;var Zk={hc:3611,wb:27686,xb:85013,yb:23462,Ab:42016,Bb:62407,Cb:26926,zb:43781,Db:51236,Eb:79148,Fb:50160,Gb:77504,Sb:87907,Tb:18630,Ub:54445,Vb:80935,Wb:105675,Xb:37521,Yb:47786,Zb:98349,ac:123695,cc:6827,dc:29434,ec:7282,fc:124448,kc:32276,jc:76278,lc:93911,mc:106531,nc:27259,oc:27262,pc:27263,sc:21759,tc:27107,uc:62936,wc:49568,xc:38408,yc:80637,zc:68727,Ac:68728,Bc:80353,Cc:80356,Dc:74610,Ec:45707,Fc:83962,Gc:83970,Hc:46713,Ic:89711,Jc:74612,Kc:93265,Lc:74611,Nc:113533,Oc:93252,Pc:99357,Rc:94521,
Sc:114252,Tc:113532,Uc:94522,Qc:94583,Vc:88E3,Wc:93253,Xc:93254,Yc:94387,Zc:94388,bd:93255,cd:97424,Mc:72502,dd:110111,ed:76019,gd:117092,hd:117093,fd:89431,jd:110466,kd:77240,ld:60508,md:105350,nd:73393,od:113534,pd:92098,qd:84517,rd:83759,sd:80357,td:86113,ud:72598,vd:72733,wd:107349,xd:124275,yd:118203,zd:117431,Ad:117429,Bd:117430,Cd:117432,Dd:120080,Ed:117259,Fd:121692,Gd:97615,Hd:31402,Id:84774,Jd:95117,Kd:98930,Ld:98931,Md:98932,Nd:43347,Od:45474,Pd:100352,Qd:84758,Rd:98443,Sd:117985,Td:74613,
Ud:74614,Vd:64502,Wd:74615,Xd:74616,Yd:122224,Zd:74617,ae:77820,be:74618,ce:93278,de:93274,ee:93275,ge:93276,he:22110,ie:29433,ke:120541,me:82047,ne:113550,oe:75836,pe:75837,qe:42352,re:84512,se:76065,te:75989,ue:16623,we:32594,xe:27240,ye:32633,ze:74858,Be:3945,Ae:16989,Ce:45520,De:25488,Ee:25492,Fe:25494,Ge:55760,He:14057,Ie:18451,Je:57204,Ke:57203,Le:17897,Me:57205,Ne:18198,Oe:17898,Pe:17909,Qe:43980,Re:46220,Se:11721,Te:49954,Ue:96369,Ve:3854,We:56251,Xe:25624,Ye:16906,Ze:99999,af:68172,bf:27068,
cf:47973,df:72773,ef:26970,ff:26971,gf:96805,hf:17752,jf:73233,kf:109512,lf:22256,mf:14115,nf:22696,pf:89278,qf:89277,rf:109513,sf:43278,tf:43459,uf:43464,vf:89279,wf:43717,xf:55764,yf:22255,zf:89281,Af:40963,Bf:43277,Cf:43442,Df:91824,Ef:120137,Ff:96367,Gf:36850,Hf:72694,If:37414,Jf:36851,Lf:124863,Kf:121343,Mf:73491,Nf:54473,Of:43375,Pf:46674,Qf:32473,Rf:72901,Sf:72906,Tf:50947,Uf:50612,Vf:50613,Wf:50942,Xf:84938,Yf:84943,Zf:84939,ag:84941,cg:84944,dg:84940,eg:84942,fg:35585,gg:51926,hg:79983,ig:63238,
jg:18921,kg:63241,lg:57893,mg:41182,ng:33424,og:22207,pg:42993,qg:36229,rg:22206,sg:22205,tg:18993,ug:19001,vg:18990,wg:18991,xg:18997,yg:18725,zg:19003,Ag:36874,Bg:44763,Cg:33427,Dg:67793,Eg:22182,Fg:37091,Gg:34650,Hg:50617,Ig:47261,Jg:22287,Kg:25144,Lg:97917,Mg:62397,Ng:125598,Og:36961,Pg:108035,Qg:27426,Rg:27857,Sg:27846,Tg:27854,Ug:69692,Vg:61411,Wg:39299,Xg:38696,Yg:62520,Zg:36382,ah:108701,bh:50663,dh:36387,eh:14908,fh:37533,gh:105443,hh:61635,ih:62274,jh:65702,kh:65703,lh:65701,mh:76256,nh:37671,
oh:49953,qh:36216,rh:28237,sh:39553,th:29222,uh:26107,vh:38050,wh:26108,yh:120745,xh:26109,zh:26110,Ah:66881,Bh:28236,Ch:14586,Dh:57929,Eh:74723,Fh:44098,Gh:44099,Hh:23528,Ih:61699,Jh:59149,Kh:101951,Lh:97346,Mh:118051,Nh:95102,Oh:64882,Ph:119505,Qh:63595,Rh:63349,Sh:95101,Th:75240,Uh:27039,Vh:68823,Wh:21537,Xh:83464,Yh:75707,Zh:83113,ai:101952,bi:101953,di:79610,fi:125755,gi:24402,hi:24400,ii:32925,ji:57173,ki:122502,li:64423,mi:64424,ni:33986,oi:100828,ri:21409,si:11070,ti:11074,vi:17880,wi:14001,
yi:30709,zi:30707,Ai:30711,Bi:30710,Ci:30708,xi:26984,Di:63648,Ei:63649,Fi:51879,Gi:111059,Hi:5754,Ii:20445,Ji:110386,Ki:113746,Li:66557,Mi:17310,Ni:28631,Oi:21589,Pi:68012,Qi:60480,Ri:31571,Si:76980,Ti:41577,Ui:45469,Vi:38669,Wi:13768,Xi:13777,Yi:62985,Zi:4724,aj:59369,bj:43927,cj:43928,dj:12924,ej:100355,hj:56219,ij:27669,jj:10337,gj:47896,kj:122629,lj:121258,mj:107598,nj:96639,oj:107536,pj:96661,qj:96658,rj:116646,sj:121122,tj:96660,uj:127738,vj:127083,wj:104443,xj:96659,yj:106442,zj:63667,Aj:63668,
Bj:63669,Cj:78314,Dj:55761,Ej:127098,Fj:96368,Gj:67374,Hj:48992,Ij:49956,Jj:31961,Kj:26388,Lj:23811,Mj:5E4,Nj:126250,Oj:96370,Pj:47355,Qj:47356,Rj:37935,Sj:45521,Tj:21760,Uj:83769,Vj:49977,Wj:49974,Xj:93497,Yj:93498,Zj:34325,ak:115803,bk:123707,ck:100081,dk:35309,ek:68314,fk:25602,gk:100339,hk:59018,ik:18248,jk:50625,kk:9729,lk:37168,mk:37169,nk:21667,pk:16749,qk:18635,rk:39305,sk:18046,tk:53969,uk:8213,vk:93926,wk:102852,xk:110099,yk:22678,zk:69076,Bk:100856,Ck:17736,Dk:3832,Ek:55759,Fk:64031,Gk:93044,
Hk:93045,Ik:34388,Jk:17657,Kk:17655,Lk:39579,Mk:39578,Nk:77448,Ok:8196,Pk:11357,Qk:69877,Rk:8197,Sk:82039};function $k(){var a=kb(al),b;return Oe(new He(function(c,d){a.onSuccess=function(e){tg(e)?c(new bl(e)):d(new cl("Request failed, status="+(e&&"status"in e?e.status:-1),"net.badstatus",e))};
a.onError=function(e){d(new cl("Unknown request error","net.unknown",e))};
a.onTimeout=function(e){d(new cl("Request timed out","net.timeout",e))};
b=zg("//googleads.g.doubleclick.net/pagead/id",a)}),function(c){c instanceof Pe&&b.abort();
return Me(c)})}
function cl(a,b,c){Sa.call(this,a+", errorCode="+b);this.errorCode=b;this.xhr=c;this.name="PromiseAjaxError"}
v(cl,Sa);function bl(a){this.xhr=a}
;function dl(){this.i=0;this.h=null}
dl.prototype.then=function(a,b,c){return 1===this.i&&a?(a=a.call(c,this.h),Ge(a)?a:el(a)):2===this.i&&b?(a=b.call(c,this.h),Ge(a)?a:fl(a)):this};
dl.prototype.getValue=function(){return this.h};
dl.prototype.$goog_Thenable=!0;function fl(a){var b=new dl;a=void 0===a?null:a;b.i=2;b.h=void 0===a?null:a;return b}
function el(a){var b=new dl;a=void 0===a?null:a;b.i=1;b.h=void 0===a?null:a;return b}
;function gl(a){Sa.call(this,a.message||a.description||a.name);this.isMissing=a instanceof hl;this.isTimeout=a instanceof cl&&"net.timeout"==a.errorCode;this.isCanceled=a instanceof Pe}
v(gl,Sa);gl.prototype.name="BiscottiError";function hl(){Sa.call(this,"Biscotti ID is missing from server")}
v(hl,Sa);hl.prototype.name="BiscottiMissingError";var al={format:"RAW",method:"GET",timeout:5E3,withCredentials:!0},il=null;function dg(){if(O("condition_biscotti_fetch_on_consent_cookie_html5_clients")&&!cd.get("CONSENT","").startsWith("YES+"))return Me(Error("User has not consented - not fetching biscotti id."));if("1"==ib())return Me(Error("Biscotti ID is not available in private embed mode"));il||(il=Oe($k().then(jl),function(a){return kl(2,a)}));
return il}
function jl(a){a=a.xhr.responseText;if(0!=a.lastIndexOf(")]}'",0))throw new hl;a=JSON.parse(a.substr(4));if(1<(a.type||1))throw new hl;a=a.id;eg(a);il=el(a);ll(18E5,2);return a}
function kl(a,b){b=new gl(b);eg("");il=fl(b);0<a&&ll(12E4,a-1);throw b;}
function ll(a,b){Pf(function(){Oe($k().then(jl,function(c){return kl(b,c)}),Ea)},a)}
function ml(){try{var a=A("yt.ads.biscotti.getId_");return a?a():dg()}catch(b){return Me(b)}}
;function nl(a){if("1"!=ib()){a&&cg();try{ml().then(function(){},function(){}),Pf(nl,18E5)}catch(b){yf(b)}}}
;var ol=Date.now().toString();
function pl(){a:{if(window.crypto&&window.crypto.getRandomValues)try{var a=Array(16),b=new Uint8Array(16);window.crypto.getRandomValues(b);for(var c=0;c<a.length;c++)a[c]=b[c];var d=a;break a}catch(e){}d=Array(16);for(a=0;16>a;a++){b=Date.now();for(c=0;c<b%23;c++)d[a]=Math.random();d[a]=Math.floor(256*Math.random())}if(ol)for(a=1,b=0;b<ol.length;b++)d[a%16]=d[a%16]^d[(a-1)%16]/4^ol.charCodeAt(b),a++}a=[];for(b=0;b<d.length;b++)a.push("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_".charAt(d[b]&63));
return a.join("")}
;var ql,rl=y.ytLoggingDocDocumentNonce_;rl||(rl=pl(),Qa("ytLoggingDocDocumentNonce_",rl));ql=rl;var sl={je:0,ic:1,qc:2,ph:3,le:4,Ak:5,ci:6,fj:7,0:"DEFAULT",1:"CHAT",2:"CONVERSATIONS",3:"MINIPLAYER",4:"DIALOG",5:"VOZ",6:"MUSIC_WATCH_TABS",7:"SHARE"};function tl(a){this.h=a}
function ul(a){return new tl({trackingParams:a})}
tl.prototype.getAsJson=function(){var a={};void 0!==this.h.trackingParams?a.trackingParams=this.h.trackingParams:(a.veType=this.h.veType,void 0!==this.h.veCounter&&(a.veCounter=this.h.veCounter),void 0!==this.h.elementIndex&&(a.elementIndex=this.h.elementIndex));void 0!==this.h.dataElement&&(a.dataElement=this.h.dataElement.getAsJson());void 0!==this.h.youtubeData&&(a.youtubeData=this.h.youtubeData);return a};
tl.prototype.toString=function(){return JSON.stringify(this.getAsJson())};
tl.prototype.isClientVe=function(){return!this.h.trackingParams&&!!this.h.veType};function vl(a){a=void 0===a?0:a;return 0==a?"client-screen-nonce":"client-screen-nonce."+a}
function wl(a){a=void 0===a?0:a;return 0==a?"ROOT_VE_TYPE":"ROOT_VE_TYPE."+a}
function xl(a){return E(wl(void 0===a?0:a),void 0)}
z("yt_logging_screen.getRootVeType",xl,void 0);function yl(a){return(a=xl(void 0===a?0:a))?new tl({veType:a,youtubeData:void 0}):null}
function zl(){var a=E("csn-to-ctt-auth-info");a||(a={},M("csn-to-ctt-auth-info",a));return a}
function Al(a){a=void 0===a?0:a;var b=E(vl(a));if(!b&&!E("USE_CSN_FALLBACK",!0))return null;b||0!=a||(b="UNDEFINED_CSN");return b?b:null}
z("yt_logging_screen.getCurrentCsn",Al,void 0);function Bl(a,b,c){var d=zl();(c=Al(c))&&delete d[c];b&&(d[a]=b)}
function Cl(a){return zl()[a]}
z("yt_logging_screen.getCttAuthInfo",Cl,void 0);function Dl(a,b,c,d){c=void 0===c?0:c;if(a!==E(vl(c))||b!==E(wl(c)))Bl(a,d,c),M(vl(c),a),M(wl(c),b),b=function(){setTimeout(function(){a&&wh("foregroundHeartbeatScreenAssociated",{clientDocumentNonce:ql,clientScreenNonce:a},Ck)},0)},"requestAnimationFrame"in window?window.requestAnimationFrame(b):b()}
z("yt_logging_screen.setCurrentScreen",Dl,void 0);function El(a){Qh.call(this,1,arguments);this.csn=a}
v(El,Qh);var Zh=new Rh("screen-created",El),Fl=[],Hl=Gl,Il=0;function Jl(a,b,c,d){var e=d.filter(function(f){f.csn!==b?(f.csn=b,f=!0):f=!1;return f});
c={csn:b,parentVe:c.getAsJson(),childVes:Ya(e,function(f){return f.getAsJson()})};
d=u(d);for(e=d.next();!e.done;e=d.next())e=e.value.getAsJson(),(gb(e)||!e.trackingParams&&!e.veType)&&Wk(Error("Child VE logged with no data"));d={G:Cl(b),U:b};"UNDEFINED_CSN"==b?Kl("visualElementAttached",c,d):a?wh("visualElementAttached",c,a,d):Dk("visualElementAttached",c,d)}
function Gl(){for(var a=Math.random()+"",b=[],c=0,d=0;d<a.length;d++){var e=a.charCodeAt(d);255<e&&(b[c++]=e&255,e>>=8);b[c++]=e}return Bc(b)}
function Kl(a,b,c){Fl.push({payloadName:a,payload:b,options:c});Il||(Il=$h())}
function ai(a){if(Fl){for(var b=u(Fl),c=b.next();!c.done;c=b.next())c=c.value,c.payload&&(c.payload.csn=a.csn,wh(c.payloadName,c.payload,null,c.options));Fl.length=0}Il=0}
;function Ll(){this.i=new Set;this.h=new Set;this.j=new Map}
Ll.prototype.clear=function(){this.i.clear();this.h.clear();this.j.clear()};
Fa(Ll);function Ml(a,b){for(var c=[],d=1;d<arguments.length;++d)c[d-1]=arguments[d];if(!Nl(a)||c.some(function(e){return!Nl(e)}))throw Error("Only objects may be merged.");
c=u(c);for(d=c.next();!d.done;d=c.next())Ol(a,d.value);return a}
function Ol(a,b){for(var c in b)if(Nl(b[c])){if(c in a&&!Nl(a[c]))throw Error("Cannot merge an object into a non-object.");c in a||(a[c]={});Ol(a[c],b[c])}else if(Pl(b[c])){if(c in a&&!Pl(a[c]))throw Error("Cannot merge an array into a non-array.");c in a||(a[c]=[]);Ql(a[c],b[c])}else a[c]=b[c];return a}
function Ql(a,b){b=u(b);for(var c=b.next();!c.done;c=b.next())c=c.value,Nl(c)?a.push(Ol({},c)):Pl(c)?a.push(Ql([],c)):a.push(c);return a}
function Nl(a){return"object"===typeof a&&!Array.isArray(a)}
function Pl(a){return"object"===typeof a&&Array.isArray(a)}
;function Rl(a,b){Qh.call(this,1,arguments)}
v(Rl,Qh);function Sl(a,b){Qh.call(this,1,arguments)}
v(Sl,Qh);var Tl=new Rh("aft-recorded",Rl),Ul=new Rh("timing-sent",Sl);var Vl=window;function Wl(){this.timing={};this.clearResourceTimings=function(){};
this.webkitClearResourceTimings=function(){};
this.mozClearResourceTimings=function(){};
this.msClearResourceTimings=function(){};
this.oClearResourceTimings=function(){}}
var U=Vl.performance||Vl.mozPerformance||Vl.msPerformance||Vl.webkitPerformance||new Wl;var Xl=!1,Yl={'script[name="scheduler/scheduler"]':"sj",'script[name="player/base"]':"pj",'link[rel="stylesheet"][name="www-player"]':"pc",'link[rel="stylesheet"][name="player/www-player"]':"pc",'script[name="desktop_polymer/desktop_polymer"]':"dpj",'link[rel="import"][name="desktop_polymer"]':"dph",'script[name="mobile-c3/mobile-c3"]':"mcj",'link[rel="stylesheet"][name="mobile-c3"]':"mcc",'script[name="player-plasma-ias-phone/base"]':"mcppj",'script[name="player-plasma-ias-tablet/base"]':"mcptj",
'link[rel="stylesheet"][name="mobile-polymer-player-ias"]':"mcpc",'link[rel="stylesheet"][name="mobile-polymer-player-svg-ias"]':"mcpsc",'script[name="mobile_blazer_core_mod"]':"mbcj",'link[rel="stylesheet"][name="mobile_blazer_css"]':"mbc",'script[name="mobile_blazer_logged_in_users_mod"]':"mbliuj",'script[name="mobile_blazer_logged_out_users_mod"]':"mblouj",'script[name="mobile_blazer_noncore_mod"]':"mbnj","#player_css":"mbpc",'script[name="mobile_blazer_desktopplayer_mod"]':"mbpj",'link[rel="stylesheet"][name="mobile_blazer_tablet_css"]':"mbtc",
'script[name="mobile_blazer_watch_mod"]':"mbwj"};Oa(U.clearResourceTimings||U.webkitClearResourceTimings||U.mozClearResourceTimings||U.msClearResourceTimings||U.oClearResourceTimings||Ea,U);function Zl(a){var b=$l(a);if(b.aft)return b.aft;a=E((a||"")+"TIMING_AFT_KEYS",["ol"]);for(var c=a.length,d=0;d<c;d++){var e=b[a[d]];if(e)return e}return NaN}
function am(){var a;if(O("csi_use_performance_navigation_timing")){var b,c,d,e=null===(d=null===(c=null===(b=null===(a=null===U||void 0===U?void 0:U.getEntriesByType)||void 0===a?void 0:a.call(U,"navigation"))||void 0===b?void 0:b[0])||void 0===c?void 0:c.toJSON)||void 0===d?void 0:d.call(c);e?(e.requestStart=bm(e.requestStart),e.responseEnd=bm(e.responseEnd),e.redirectStart=bm(e.redirectStart),e.redirectEnd=bm(e.redirectEnd),e.domainLookupEnd=bm(e.domainLookupEnd),e.connectStart=bm(e.connectStart),
e.connectEnd=bm(e.connectEnd),e.responseStart=bm(e.responseStart),e.secureConnectionStart=bm(e.secureConnectionStart),e.domainLookupStart=bm(e.domainLookupStart),e.isPerformanceNavigationTiming=!0,a=e):a=U.timing}else a=U.timing;return a}
function cm(){return O("csi_use_time_origin")&&U.timeOrigin?Math.floor(U.timeOrigin):U.timing.navigationStart}
function bm(a){return Math.round(cm()+a)}
function dm(a){var b;(b=A("ytcsi."+(a||"")+"data_"))||(b={tick:{},info:{}},Qa("ytcsi."+(a||"")+"data_",b));return b}
function em(a){a=dm(a);a.info||(a.info={});return a.info}
function $l(a){a=dm(a);a.tick||(a.tick={});return a.tick}
function fm(a){var b=dm(a).nonce;b||(b=pl(),dm(a).nonce=b);return b}
function gm(a){var b=$l(a||""),c=Zl(a);c&&!Xl&&(Wh(Tl,new Rl(Math.round(c-b._start),a)),Xl=!0)}
;function hm(){if(U.getEntriesByType){var a=U.getEntriesByType("paint");if(a=$a(a,function(b){return"first-paint"===b.name}))return bm(a.startTime)}a=U.timing;
return a.hb?Math.max(0,a.hb):0}
;function im(){var a=A("ytcsi.debug");a||(a=[],z("ytcsi.debug",a,void 0),z("ytcsi.reference",{},void 0));return a}
function jm(a){a=a||"";var b=A("ytcsi.reference");b||(im(),b=A("ytcsi.reference"));if(b[a])return b[a];var c=im(),d={timerName:a,info:{},tick:{},span:{}};c.push(d);return b[a]=d}
;var km=y.ytLoggingLatencyUsageStats_||{};z("ytLoggingLatencyUsageStats_",km,void 0);function lm(){this.h=0}
function mm(){lm.h||(lm.h=new lm);return lm.h}
lm.prototype.tick=function(a,b,c){nm(this,"tick_"+a+"_"+b)||Dk("latencyActionTicked",{tickName:a,clientActionNonce:b},{timestamp:c})};
lm.prototype.info=function(a,b){var c=Object.keys(a).join("");nm(this,"info_"+c+"_"+b)||(a=Object.assign({},a),a.clientActionNonce=b,Dk("latencyActionInfo",a))};
lm.prototype.span=function(a,b){var c=Object.keys(a).join("");nm(this,"span_"+c+"_"+b)||(a.clientActionNonce=b,Dk("latencyActionSpan",a))};
function nm(a,b){km[b]=km[b]||{count:0};var c=km[b];c.count++;c.time=P();a.h||(a.h=Tf(function(){var d=P(),e;for(e in km)km[e]&&6E4<d-km[e].time&&delete km[e];a&&(a.h=0)},5E3));
return 5<c.count?(6===c.count&&1>1E5*Math.random()&&(c=new ki("CSI data exceeded logging limit with key",b.split("_")),0<=b.indexOf("plev")||Wk(c)),!0):!1}
;var V={},om=(V.auto_search="LATENCY_ACTION_AUTO_SEARCH",V.ad_to_ad="LATENCY_ACTION_AD_TO_AD",V.ad_to_video="LATENCY_ACTION_AD_TO_VIDEO",V.app_startup="LATENCY_ACTION_APP_STARTUP",V["artist.analytics"]="LATENCY_ACTION_CREATOR_ARTIST_ANALYTICS",V["artist.events"]="LATENCY_ACTION_CREATOR_ARTIST_CONCERTS",V["artist.presskit"]="LATENCY_ACTION_CREATOR_ARTIST_PROFILE",V.browse="LATENCY_ACTION_BROWSE",V.channels="LATENCY_ACTION_CHANNELS",V.creator_channel_dashboard="LATENCY_ACTION_CREATOR_CHANNEL_DASHBOARD",
V["channel.analytics"]="LATENCY_ACTION_CREATOR_CHANNEL_ANALYTICS",V["channel.comments"]="LATENCY_ACTION_CREATOR_CHANNEL_COMMENTS",V["channel.content"]="LATENCY_ACTION_CREATOR_POST_LIST",V["channel.copyright"]="LATENCY_ACTION_CREATOR_CHANNEL_COPYRIGHT",V["channel.editing"]="LATENCY_ACTION_CREATOR_CHANNEL_EDITING",V["channel.monetization"]="LATENCY_ACTION_CREATOR_CHANNEL_MONETIZATION",V["channel.music"]="LATENCY_ACTION_CREATOR_CHANNEL_MUSIC",V["channel.translations"]="LATENCY_ACTION_CREATOR_CHANNEL_TRANSLATIONS",
V["channel.videos"]="LATENCY_ACTION_CREATOR_CHANNEL_VIDEOS",V["channel.live_streaming"]="LATENCY_ACTION_CREATOR_LIVE_STREAMING",V.chips="LATENCY_ACTION_CHIPS",V["dialog.copyright_strikes"]="LATENCY_ACTION_CREATOR_DIALOG_COPYRIGHT_STRIKES",V["dialog.uploads"]="LATENCY_ACTION_CREATOR_DIALOG_UPLOADS",V.direct_playback="LATENCY_ACTION_DIRECT_PLAYBACK",V.embed="LATENCY_ACTION_EMBED",V.entity_key_serialization_perf="LATENCY_ACTION_ENTITY_KEY_SERIALIZATION_PERF",V.entity_key_deserialization_perf="LATENCY_ACTION_ENTITY_KEY_DESERIALIZATION_PERF",
V.home="LATENCY_ACTION_HOME",V.library="LATENCY_ACTION_LIBRARY",V.live="LATENCY_ACTION_LIVE",V.live_pagination="LATENCY_ACTION_LIVE_PAGINATION",V.onboarding="LATENCY_ACTION_KIDS_ONBOARDING",V.parent_profile_settings="LATENCY_ACTION_KIDS_PARENT_PROFILE_SETTINGS",V.parent_tools_collection="LATENCY_ACTION_PARENT_TOOLS_COLLECTION",V.parent_tools_dashboard="LATENCY_ACTION_PARENT_TOOLS_DASHBOARD",V.player_att="LATENCY_ACTION_PLAYER_ATTESTATION",V["post.comments"]="LATENCY_ACTION_CREATOR_POST_COMMENTS",
V["post.edit"]="LATENCY_ACTION_CREATOR_POST_EDIT",V.prebuffer="LATENCY_ACTION_PREBUFFER",V.prefetch="LATENCY_ACTION_PREFETCH",V.profile_settings="LATENCY_ACTION_KIDS_PROFILE_SETTINGS",V.profile_switcher="LATENCY_ACTION_KIDS_PROFILE_SWITCHER",V.reel_watch="LATENCY_ACTION_REEL_WATCH",V.results="LATENCY_ACTION_RESULTS",V.search_ui="LATENCY_ACTION_SEARCH_UI",V.search_suggest="LATENCY_ACTION_SUGGEST",V.search_zero_state="LATENCY_ACTION_SEARCH_ZERO_STATE",V.secret_code="LATENCY_ACTION_KIDS_SECRET_CODE",
V.seek="LATENCY_ACTION_PLAYER_SEEK",V.settings="LATENCY_ACTION_SETTINGS",V.tenx="LATENCY_ACTION_TENX",V.video_to_ad="LATENCY_ACTION_VIDEO_TO_AD",V.watch="LATENCY_ACTION_WATCH",V.watch_it_again="LATENCY_ACTION_KIDS_WATCH_IT_AGAIN",V["watch,watch7"]="LATENCY_ACTION_WATCH",V["watch,watch7_html5"]="LATENCY_ACTION_WATCH",V["watch,watch7ad"]="LATENCY_ACTION_WATCH",V["watch,watch7ad_html5"]="LATENCY_ACTION_WATCH",V.wn_comments="LATENCY_ACTION_LOAD_COMMENTS",V.ww_rqs="LATENCY_ACTION_WHO_IS_WATCHING",V["video.analytics"]=
"LATENCY_ACTION_CREATOR_VIDEO_ANALYTICS",V["video.comments"]="LATENCY_ACTION_CREATOR_VIDEO_COMMENTS",V["video.edit"]="LATENCY_ACTION_CREATOR_VIDEO_EDIT",V["video.translations"]="LATENCY_ACTION_CREATOR_VIDEO_TRANSLATIONS",V["video.video_editor"]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR",V["video.video_editor_async"]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR_ASYNC",V["video.monetization"]="LATENCY_ACTION_CREATOR_VIDEO_MONETIZATION",V.voice_assistant="LATENCY_ACTION_VOICE_ASSISTANT",V.cast_load_by_entity_to_watch=
"LATENCY_ACTION_CAST_LOAD_BY_ENTITY_TO_WATCH",V.networkless_performance="LATENCY_ACTION_NETWORKLESS_PERFORMANCE",V),W={},pm=(W.ad_allowed="adTypesAllowed",W.yt_abt="adBreakType",W.ad_cpn="adClientPlaybackNonce",W.ad_docid="adVideoId",W.yt_ad_an="adNetworks",W.ad_at="adType",W.aida="appInstallDataAgeMs",W.browse_id="browseId",W.p="httpProtocol",W.t="transportProtocol",W.cpn="clientPlaybackNonce",W.ccs="creatorInfo.creatorCanaryState",W.csn="clientScreenNonce",W.docid="videoId",W.GetHome_rid="requestIds",
W.GetSearch_rid="requestIds",W.GetPlayer_rid="requestIds",W.GetWatchNext_rid="requestIds",W.GetBrowse_rid="requestIds",W.GetLibrary_rid="requestIds",W.is_continuation="isContinuation",W.is_nav="isNavigation",W.b_p="kabukiInfo.browseParams",W.is_prefetch="kabukiInfo.isPrefetch",W.is_secondary_nav="kabukiInfo.isSecondaryNav",W.prev_browse_id="kabukiInfo.prevBrowseId",W.query_source="kabukiInfo.querySource",W.voz_type="kabukiInfo.vozType",W.yt_lt="loadType",W.mver="creatorInfo.measurementVersion",W.yt_ad=
"isMonetized",W.nr="webInfo.navigationReason",W.nrsu="navigationRequestedSameUrl",W.ncnp="webInfo.nonPreloadedNodeCount",W.pnt="performanceNavigationTiming",W.prt="playbackRequiresTap",W.plt="playerInfo.playbackType",W.pis="playerInfo.playerInitializedState",W.paused="playerInfo.isPausedOnLoad",W.yt_pt="playerType",W.fmt="playerInfo.itag",W.yt_pl="watchInfo.isPlaylist",W.yt_pre="playerInfo.preloadType",W.yt_ad_pr="prerollAllowed",W.pa="previousAction",W.yt_red="isRedSubscriber",W.rce="mwebInfo.responseContentEncoding",
W.scrh="screenHeight",W.scrw="screenWidth",W.st="serverTimeMs",W.ssdm="shellStartupDurationMs",W.br_trs="tvInfo.bedrockTriggerState",W.kebqat="kabukiInfo.earlyBrowseRequestInfo.abandonmentType",W.kebqa="kabukiInfo.earlyBrowseRequestInfo.adopted",W.label="tvInfo.label",W.is_mdx="tvInfo.isMdx",W.preloaded="tvInfo.isPreloaded",W.upg_player_vis="playerInfo.visibilityState",W.query="unpluggedInfo.query",W.upg_chip_ids_string="unpluggedInfo.upgChipIdsString",W.yt_vst="videoStreamType",W.vph="viewportHeight",
W.vpw="viewportWidth",W.yt_vis="isVisible",W.rcl="mwebInfo.responseContentLength",W.GetSettings_rid="requestIds",W.GetTrending_rid="requestIds",W.GetMusicSearchSuggestions_rid="requestIds",W.REQUEST_ID="requestIds",W),qm="isContinuation isNavigation kabukiInfo.earlyBrowseRequestInfo.adopted kabukiInfo.isPrefetch kabukiInfo.isSecondaryNav isMonetized navigationRequestedSameUrl performanceNavigationTiming playerInfo.isPausedOnLoad prerollAllowed isRedSubscriber tvInfo.isMdx tvInfo.isPreloaded isVisible watchInfo.isPlaylist playbackRequiresTap".split(" "),
rm={},sm=(rm.ccs="CANARY_STATE_",rm.mver="MEASUREMENT_VERSION_",rm.pis="PLAYER_INITIALIZED_STATE_",rm.yt_pt="LATENCY_PLAYER_",rm.pa="LATENCY_ACTION_",rm.yt_vst="VIDEO_STREAM_TYPE_",rm),tm="all_vc ap aq c cver cbrand cmodel cplatform ctheme ei l_an l_mm plid srt yt_fss yt_li vpst vpni2 vpil2 icrc icrt pa GetAccountOverview_rid GetHistory_rid cmt d_vpct d_vpnfi d_vpni nsru pc pfa pfeh pftr pnc prerender psc rc start tcrt tcrc ssr vpr vps yt_abt yt_fn yt_fs yt_pft yt_pre yt_pt yt_pvis ytu_pvis yt_ref yt_sts tds".split(" ");
function um(a){return!!E("FORCE_CSI_ON_GEL",!1)||O("csi_on_gel")||O("enable_csi_on_gel")||!!dm(a).useGel}
function vm(a,b,c){var d=wm(c);d.gelTicks&&(d.gelTicks["tick_"+a]=!0);c||b||P();return um(c)?(jm(c||"").tick[a]=b||P(),d=fm(c),"_start"===a?(a=mm(),nm(a,"baseline_"+d)||Dk("latencyActionBaselined",{clientActionNonce:d},{timestamp:b})):mm().tick(a,d,b),gm(c),!0):!1}
function xm(a,b,c){c=wm(c);if(c.gelInfos)c.gelInfos["info_"+a]=!0;else{var d={};c.gelInfos=(d["info_"+a]=!0,d)}if(a.match("_rid")){var e=a.split("_rid")[0];a="REQUEST_ID"}if(a in pm){c=pm[a];0<=Wa(qm,c)&&(b=!!b);a in sm&&"string"===typeof b&&(b=sm[a]+b.toUpperCase());a=b;b=c.split(".");for(var f=d={},g=0;g<b.length-1;g++){var h=b[g];f[h]={};f=f[h]}f[b[b.length-1]]="requestIds"===c?[{id:a,endpoint:e}]:a;return Ml({},d)}0<=Wa(tm,a)||Wk(new ki("Unknown label logged with GEL CSI",a))}
function wm(a){a=dm(a);if(a.gel){var b=a.gel;b.gelInfos||(b.gelInfos={});b.gelTicks||(b.gelTicks={})}else a.gel={gelTicks:{},gelInfos:{}};return a.gel}
function ym(a){a=wm(a);a.gelInfos||(a.gelInfos={});return a.gelInfos}
;function zm(a,b,c){null!==b&&(em(c)[a]=b,um(c)?(a=xm(a,b,c))&&um(c)&&(b=jm(c||""),Ml(b.info,a),Ml(ym(c),a),c=fm(c),mm().info(a,c)):jm(c||"").info[a]=b)}
function Z(a,b,c){var d=$l(c);if(!b&&"_"!==a[0]){var e=a;U.mark&&(0==e.lastIndexOf("mark_",0)||(e="mark_"+e),c&&(e+=" ("+c+")"),U.mark(e))}e=b||P();d[a]=e;vm(a,b,c)||(Am(c),jm(c||"").tick[a]=b||P());return d[a]}
function Bm(a,b){if(um(void 0)){var c=wm(void 0);if(c.gelSpans)c.gelSpans[a]=!0;else{var d={};c.gelSpans=(d[a]=!0,d)}a={spanName:a,spanLengthUsec:String(Math.round(1E3*b))};jm("").span[String(a.spanName)]=a;b=wm(void 0);b.gelSpans||(b.gelSpans={});Ml(b.gelSpans,a);b=fm(void 0);mm().span(a,b)}}
function Cm(){var a=fm(void 0);requestAnimationFrame(function(){setTimeout(function(){a===fm(void 0)&&Z("ol",void 0,void 0)},0)})}
function Am(a){if(!A("yt.timing."+(a||"")+"pingSent_")){var b=E((a||"")+"TIMING_ACTION",void 0),c=$l(a);if(b=!!A("ytglobal.timing"+(a||"")+"ready_")&&b)b="_start"in $l(void 0);if(b&&Zl(a))if(gm(a),a)Dm(a);else{b=!0;var d=E("TIMING_WAIT",[]);if(d.length)for(var e=0,f=d.length;e<f;++e)if(!(d[e]in c)){b=!1;break}b&&Dm(a)}}}
function Em(){var a=document;if("visibilityState"in a)a=a.visibilityState;else{var b=Ff+"VisibilityState";a=b in a?a[b]:void 0}switch(a){case "hidden":return 0;case "visible":return 1;case "prerender":return 2;case "unloaded":return 3;default:return-1}}
function Dm(a){if(!um(a)){var b=$l(a),c=em(a),d=b._start,e=E("CSI_SERVICE_NAME","youtube"),f={v:2,s:e,action:E((a||"")+"TIMING_ACTION",void 0)},g=c.srt;void 0!==b.srt&&delete c.srt;b.aft=Zl(a);var h=$l(a),k=h.pbr,l=h.vc;h=h.pbs;k&&l&&h&&k<l&&l<h&&em(a).yt_pvis&&"youtube"===e&&(zm("yt_lt","hot_bg",a),e=b.vc,k=b.pbs,delete b.aft,c.aft=Math.round(k-e));for(var n in c)"_"!==n.charAt(0)&&(f[n]=c[n]);b.ps=P();n={};e=[];for(var p in b)"_"!==p.charAt(0)&&(k=Math.round(b[p]-d),n[p]=k,e.push(p+"."+k));f.rt=
e.join(",");b=!!c.ap;c="";for(var t in f)f.hasOwnProperty(t)&&(c+="&"+t+"="+f[t]);f="/csi_204?"+c.substring(1);window.navigator&&window.navigator.sendBeacon&&(b||O("always_send_csi_204_with_beacon"))?Og(f):Lg(f);z("yt.timing."+(a||"")+"pingSent_",!0,void 0);Wh(Ul,new Sl(n.aft+(Number(g)||0),a))}}
function Fm(a,b){a=document.querySelector(a);if(!a)return!1;var c="",d=a.nodeName;"SCRIPT"===d?(c=a.src,c||(c=a.getAttribute("data-timing-href"))&&(c=window.location.protocol+c)):"LINK"===d&&(c=a.href);Wb()&&a.setAttribute("nonce",Wb());return c?(a=U.getEntriesByName(c))&&a[0]&&(a=a[0],c=cm(),Z("rsf_"+b,c+Math.round(a.fetchStart)),Z("rse_"+b,c+Math.round(a.responseEnd)),void 0!==a.transferSize&&(b=em(void 0),c=ym(void 0),"rc"in b||"rc"in c||zm("rc",""),0===a.transferSize))?!0:!1:!1}
function Gm(){var a=window.location.protocol,b=U.getEntriesByType("resource");b=Xa(b,function(c){return 0===c.name.indexOf(a+"//fonts.gstatic.com/s/")});
(b=Za(b,function(c,d){return d.duration>c.duration?d:c},{duration:0}))&&0<b.startTime&&0<b.responseEnd&&(Z("wffs",bm(b.startTime)),Z("wffe",bm(b.responseEnd)))}
var Hm=window;Hm.ytcsi&&(Hm.ytcsi.info=zm,Hm.ytcsi.tick=Z);function Im(){this.l=[];this.u=[];this.h=[];this.i=new Set;this.m=new Map}
function Jm(a,b,c){c=void 0===c?0:c;b.then(function(d){var e,f;a.i.has(c)&&a.j&&a.j();var g=Al(c),h=yl(c);g&&h&&(d.csn=g,(null===(e=d.response)||void 0===e?0:e.trackingParams)&&Jl(a.client,g,h,[ul(d.response.trackingParams)]),(null===(f=d.playerResponse)||void 0===f?0:f.trackingParams)&&Jl(a.client,g,h,[ul(d.playerResponse.trackingParams)]))})}
function Km(a,b,c,d){d=void 0===d?0:d;if(a.i.has(d))a.l.push([b,c]);else{var e=Al(d);c=c||yl(d);e&&c&&Jl(a.client,e,c,[b])}}
Im.prototype.clickCommand=function(a,b,c){c=Al(void 0===c?0:c);if(!a.clickTrackingParams||!c)return!1;var d=this.client;var e="INTERACTION_LOGGING_GESTURE_TYPE_GENERIC_CLICK";a={csn:c,ve:ul(a.clickTrackingParams).getAsJson(),gestureType:e};b&&(a.clientData=b);b={G:Cl(c),U:c};"UNDEFINED_CSN"==c?Kl("visualElementGestured",a,b):d?wh("visualElementGestured",a,d,b):Dk("visualElementGestured",a,b);return!0};
function Lm(a,b,c){c=void 0===c?{}:c;a.i.add(c.layer||0);a.j=function(){Mm(a,b,c);var f=yl(c.layer);if(f){for(var g=u(a.l),h=g.next();!h.done;h=g.next())h=h.value,Km(a,h[0],h[1]||f,c.layer);f=u(a.u);for(g=f.next();!g.done;g=f.next()){var k=g.value;g=void 0;g=void 0===g?0:g;h=Al(g);var l=k[0]||yl(g);h&&l&&(g=a.client,k=k[1],k={csn:h,ve:l.getAsJson(),clientData:k},l={G:Cl(h),U:h},"UNDEFINED_CSN"==h?Kl("visualElementStateChanged",k,l):g?wh("visualElementStateChanged",k,g,l):Dk("visualElementStateChanged",
k,l))}}};
Al(c.layer)||a.j();if(c.Fa)for(var d=u(c.Fa),e=d.next();!e.done;e=d.next())Jm(a,e.value,c.layer);else Xk(Error("Delayed screen needs a data promise."))}
function Mm(a,b,c){c=void 0===c?{}:c;c.layer||(c.layer=0);var d=void 0!==c.ib?c.ib:c.layer;var e=Al(d);d=yl(d);var f;d&&(void 0!==c.parentCsn?f={clientScreenNonce:c.parentCsn,visualElement:d}:e&&"UNDEFINED_CSN"!==e&&(f={clientScreenNonce:e,visualElement:d}));var g,h=E("EVENT_ID");O("screen_manager_log_servlet_ei")&&"UNDEFINED_CSN"===e&&h&&(g={servletData:{serializedServletEventId:h}});try{var k=a.client;h=f;var l=c.Ea,n=c.G,p=Hl(),t={csn:p,pageVe:(new tl({veType:b,youtubeData:g})).getAsJson()};h&&
h.visualElement?t.implicitGesture={parentCsn:h.clientScreenNonce,gesturedVe:h.visualElement.getAsJson()}:h&&Wk(new ki("newScreen() parent element does not have a VE - rootVe",b));l&&(t.cloneCsn=l);l={G:n,U:p};k?wh("screenCreated",t,k,l):Dk("screenCreated",t,l);Wh(Zh,new El(p));var q=p}catch(D){Yk(D,{bl:b,rootVe:d,parentVisualElement:void 0,Wk:e,al:f,Ea:c.Ea});Xk(D);return}Dl(q,b,c.layer,c.G);if((b=e&&"UNDEFINED_CSN"!==e&&d)&&!(b=O("screen_manager_skip_hide_killswitch"))){a:{b=u(Object.values(sl));
for(f=b.next();!f.done;f=b.next())if(Al(f.value)==e){b=!0;break a}b=!1}b=!b}b&&(b=a.client,f=!0,k=(f=void 0===f?!1:f)?16:8,d={csn:e,ve:d.getAsJson(),eventType:k},f={G:Cl(e),U:e,Ta:f},"UNDEFINED_CSN"==e?Kl("visualElementHidden",d,f):b?wh("visualElementHidden",d,b,f):Dk("visualElementHidden",d,f));a.h[a.h.length-1]&&!a.h[a.h.length-1].csn&&(a.h[a.h.length-1].csn=q||"");zm("csn",q);Ll.getInstance().clear();d=yl(c.layer);e&&"UNDEFINED_CSN"!==e&&d&&(O("web_mark_root_visible")||O("music_web_mark_root_visible"))&&
(e=q,q=O("use_default_events_client")?void 0:Ck,b={csn:e,ve:d.getAsJson(),eventType:1},f={G:Cl(e),U:e},"UNDEFINED_CSN"==e?Kl("visualElementShown",b,f):q?wh("visualElementShown",b,q,f):Dk("visualElementShown",b,f));a.i.delete(c.layer||0);a.j=void 0;e=u(a.m);for(q=e.next();!q.done;q=e.next())q=u(q.value),b=q.next().value,q.next().value.has(c.layer)&&d&&Km(a,b,d,c.layer)}
;function Nm(a){a&&(a.dataset?a.dataset[Om("loaded")]="true":a.setAttribute("data-loaded","true"))}
function Pm(a,b){return a?a.dataset?a.dataset[Om(b)]:a.getAttribute("data-"+b):null}
var Qm={};function Om(a){return Qm[a]||(Qm[a]=String(a).replace(/\-([a-z])/g,function(b,c){return c.toUpperCase()}))}
;var Rm=/\.vflset|-vfl[a-zA-Z0-9_+=-]+/,Sm=/-[a-zA-Z]{2,3}_[a-zA-Z]{2,3}(?=(\/|$))/;function Tm(a,b,c){c=void 0===c?null:c;if(window.spf&&spf.script){c="";if(a){var d=a.indexOf("jsbin/"),e=a.lastIndexOf(".js"),f=d+6;-1<d&&-1<e&&e>f&&(c=a.substring(f,e),c=c.replace(Rm,""),c=c.replace(Sm,""),c=c.replace("debug-",""),c=c.replace("tracing-",""))}spf.script.load(a,c,b)}else Um(a,b,c)}
function Um(a,b,c){c=void 0===c?null:c;var d=Vm(a),e=document.getElementById(d),f=e&&Pm(e,"loaded"),g=e&&!f;f?b&&b():(b&&(f=Tg(d,b),b=""+Ja(b),Wm[b]=f),g||(e=Xm(a,d,function(){Pm(e,"loaded")||(Nm(e),Wg(d),Pf(Pa(Xg,d),0))},c)))}
function Xm(a,b,c,d){d=void 0===d?null:d;var e=Kc(document,"SCRIPT");e.id=b;e.onload=function(){c&&setTimeout(c,0)};
e.onreadystatechange=function(){switch(e.readyState){case "loaded":case "complete":e.onload()}};
d&&e.setAttribute("nonce",d);Cc(e,Sc(a));a=document.getElementsByTagName("head")[0]||document.body;a.insertBefore(e,a.firstChild);return e}
function Ym(a){a=Vm(a);var b=document.getElementById(a);b&&(Xg(a),b.parentNode.removeChild(b))}
function Zm(a,b){a&&b&&(a=""+Ja(b),(a=Wm[a])&&Vg(a))}
function Vm(a){var b=document.createElement("a");Tb(b,a);a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"js-"+Zb(a)}
var Wm={};var $m=[],an=!1;function bn(){if((!O("condition_ad_status_fetch_on_consent_cookie_html5_clients")||cd.get("CONSENT","").startsWith("YES+"))&&"1"!=ib()){var a=function(){an=!0;"google_ad_status"in window?M("DCLKSTAT",1):M("DCLKSTAT",2)};
try{Tm("//static.doubleclick.net/instream/ad_status.js",a)}catch(b){}$m.push(Vf(function(){if(!(an||"google_ad_status"in window)){try{Zm("//static.doubleclick.net/instream/ad_status.js",a)}catch(b){}an=!0;M("DCLKSTAT",3)}},5E3))}}
function cn(){var a=Number(E("DCLKSTAT",0));return isNaN(a)?0:a}
;function dn(){this.i=!1;this.h=null}
dn.prototype.initialize=function(a,b,c,d){d=void 0===d?!1:d;var e,f;if(a.program){var g=null!==(e=a.interpreterScript)&&void 0!==e?e:null,h=null!==(f=a.interpreterUrl)&&void 0!==f?f:null;if(a.interpreterSafeScript){g=a.interpreterSafeScript.privateDoNotAccessOrElseSafeScriptWrappedValue||"";var k=pb();g=k?k.createScript(g):g;g=(new rb(g)).toString()}a.interpreterSafeUrl&&(h=vb(a.interpreterSafeUrl.privateDoNotAccessOrElseTrustedResourceUrlWrappedValue||"").toString());en(this,g,h,a.program,b,c,d)}else Wk(Error("Cannot initialize botguard without program"))};
function en(a,b,c,d,e,f,g){g=void 0===g?!1:g;c?(a.i=!0,Tm(c,function(){a.i=!1;var h=0<=c.indexOf("/th/");(h?window.trayride:window.botguard)?fn(a,d,!!g,h,e):(Ym(c),Wk(new ki("Unable to load Botguard","from "+c)))},f)):b&&(f=Kc(document,"SCRIPT"),f.textContent=b,f.nonce=Wb(),document.head.appendChild(f),document.head.removeChild(f),((b=b.includes("trayride"))?window.trayride:window.botguard)?fn(a,d,!!g,b,e):Wk(Error("Unable to load Botguard from JS")))}
function fn(a,b,c,d,e){var f,g;if(d=d?null===(f=window.trayride)||void 0===f?void 0:f.ad:null===(g=window.botguard)||void 0===g?void 0:g.bg)if(c)try{gn(a,new d(b,e?function(){return e(b)}:Ea))}catch(h){h instanceof Error&&Wk(h)}else{try{gn(a,new d(b))}catch(h){h instanceof Error&&Wk(h)}e&&e(b)}else Wk(Error("Failed to finish initializing VM"))}
dn.prototype.invoke=function(a){a=void 0===a?{}:a;return this.h?this.h.hasOwnProperty("hot")?this.h.hot(void 0,void 0,a):this.h.invoke(void 0,void 0,a):null};
dn.prototype.dispose=function(){this.h=null};
function gn(a,b){a.h=b}
;var hn=new dn;function jn(){return!!hn.h}
function kn(a){a=void 0===a?{}:a;return hn.invoke(a)}
;var ln=window,mn=/[A-Za-z]+\/[0-9.]+/g;function nn(a,b){if(a.replace(mn,"")!==b.replace(mn,""))return!1;a=a.match(mn);b=b.match(mn);if(a.length!==b.length)return!1;for(var c=0;c<a.length;c++){var d=a[c],e=b[c];if(!d.startsWith(e)&&!e.startsWith(d))return!1}return!0}
function on(){var a=ln.uaChPolyfill.state;if(0===a.type)Dk("clientHintsPolyfillEvent",{clientHintsSupported:!1});else{var b=navigator.userAgent,c=void 0!==a.syntheticUa&&nn(a.syntheticUa,b);Dk("clientHintsPolyfillEvent",{clientHintsSupported:!0,uaAccessedBeforePolyfill:a.didAccessUaBeforePolyfillAvailable,syntheticUaMatches:c});c||(b={syntheticUa:a.syntheticUa,ua:b},b.brand=a.data.brands.map(function(d){return'"'+d.brand+'"; v="'+d.version+'"'}),b.mobileness=a.data.mobile,a=a.data.values,a.architecture&&
(b.platformArchitecture=a.architecture),a.model&&(b.model=a.model),a.platform&&(b.platformBrand=a.platform),a.platformVersion&&(b.platformVersion=a.platformVersion),a.uaFullVersion&&(b.fullVersion=a.uaFullVersion),Dk("clientHintsPolyfillDiagnostics",b))}}
var pn=!1;function qn(){var a;1===(null===(a=ln.uaChPolyfill)||void 0===a?void 0:a.state.type)?pn||(ln.uaChPolyfill.onReady=qn,pn=!0):ln.uaChPolyfill&&on()}
;function rn(a,b,c){J.call(this);var d=this;c=c||E("POST_MESSAGE_ORIGIN",void 0)||window.document.location.protocol+"//"+window.document.location.hostname;this.j=b||null;this.C="*";this.l=c;this.sessionId=null;this.channel="widget";this.F=!!a;this.B=function(e){a:if(!("*"!=d.l&&e.origin!=d.l||d.j&&e.source!=d.j||"string"!==typeof e.data)){try{var f=JSON.parse(e.data)}catch(g){break a}if(!(null==f||d.F&&(d.sessionId&&d.sessionId!=f.id||d.channel&&d.channel!=f.channel))&&f)switch(f.event){case "listening":"null"!=
e.origin&&(d.l=d.C=e.origin);d.j=e.source;d.sessionId=f.id;d.i&&(d.i(),d.i=null);break;case "command":d.m&&(!d.o||0<=Wa(d.o,f.func))&&d.m(f.func,f.args,e.origin)}}};
this.o=this.i=this.m=null;window.addEventListener("message",this.B)}
v(rn,J);rn.prototype.sendMessage=function(a,b){if(b=b||this.j){this.sessionId&&(a.id=this.sessionId);this.channel&&(a.channel=this.channel);try{var c=JSON.stringify(a);b.postMessage(c,this.C)}catch(d){zf(d)}}};
rn.prototype.D=function(){window.removeEventListener("message",this.B);J.prototype.D.call(this)};function sn(){this.i=[];this.isReady=!1;this.j={};var a=this.h=new rn(!!E("WIDGET_ID_ENFORCE")),b=this.kb.bind(this);a.m=b;a.o=null;this.h.channel="widget";if(a=E("WIDGET_ID"))this.h.sessionId=a}
m=sn.prototype;m.kb=function(a,b,c){"addEventListener"===a&&b?(a=b[0],this.j[a]||"onReady"===a||(this.addEventListener(a,tn(this,a)),this.j[a]=!0)):this.Aa(a,b,c)};
m.Aa=function(){};
function tn(a,b){return function(c){return a.sendMessage(b,c)}}
m.addEventListener=function(){};
m.Ua=function(){this.isReady=!0;this.sendMessage("initialDelivery",this.sa());this.sendMessage("onReady");C(this.i,this.Ma,this);this.i=[]};
m.sa=function(){return null};
function un(a,b){a.sendMessage("infoDelivery",b)}
m.Ma=function(a){this.isReady?this.h.sendMessage(a):this.i.push(a)};
m.sendMessage=function(a,b){this.Ma({event:a,info:void 0===b?null:b})};
m.dispose=function(){this.h=null};function vn(a){return(0===a.search("cue")||0===a.search("load"))&&"loadModule"!==a}
function wn(a,b,c){if("string"===typeof a)return{videoId:a,startSeconds:b,suggestedQuality:c};b=["endSeconds","startSeconds","mediaContentUrl","suggestedQuality","videoId"];c={};for(var d=0;d<b.length;d++){var e=b[d];a[e]&&(c[e]=a[e])}return c}
function xn(a,b,c,d){if(Ia(a)&&!Array.isArray(a)){b="playlist list listType index startSeconds suggestedQuality".split(" ");c={};for(d=0;d<b.length;d++){var e=b[d];a[e]&&(c[e]=a[e])}return c}b={index:b,startSeconds:c,suggestedQuality:d};"string"===typeof a&&16===a.length?b.list="PL"+a:b.playlist=a;return b}
;function yn(a){sn.call(this);this.listeners=[];this.api=a;this.addEventListener("onReady",this.onReady.bind(this));this.addEventListener("onVideoProgress",this.qb.bind(this));this.addEventListener("onVolumeChange",this.rb.bind(this));this.addEventListener("onApiChange",this.lb.bind(this));this.addEventListener("onPlaybackQualityChange",this.nb.bind(this));this.addEventListener("onPlaybackRateChange",this.ob.bind(this));this.addEventListener("onStateChange",this.pb.bind(this));this.addEventListener("onWebglSettingsChanged",
this.sb.bind(this))}
v(yn,sn);m=yn.prototype;
m.Aa=function(a,b,c){if(this.api.isExternalMethodAvailable(a,c)){b=b||[];if(0<b.length&&vn(a)){var d=b;if(Ia(d[0])&&!Array.isArray(d[0]))var e=d[0];else switch(e={},a){case "loadVideoById":case "cueVideoById":e=wn(d[0],void 0!==d[1]?Number(d[1]):void 0,d[2]);break;case "loadVideoByUrl":case "cueVideoByUrl":e=d[0];"string"===typeof e&&(e={mediaContentUrl:e,startSeconds:void 0!==d[1]?Number(d[1]):void 0,suggestedQuality:d[2]});b:{if((d=e.mediaContentUrl)&&(d=/\/([ve]|embed)\/([^#?]+)/.exec(d))&&d[2]){d=
d[2];break b}d=null}e.videoId=d;e=wn(e);break;case "loadPlaylist":case "cuePlaylist":e=xn(d[0],d[1],d[2],d[3])}b.length=1;b[0]=e}this.api.handleExternalCall(a,b,c);vn(a)&&un(this,this.sa())}};
m.onReady=function(){var a=this.Ua.bind(this);this.h.i=a};
m.addEventListener=function(a,b){this.listeners.push({eventType:a,listener:b});this.api.addEventListener(a,b)};
m.sa=function(){if(!this.api)return null;var a=this.api.getApiInterface();ab(a,"getVideoData");for(var b={apiInterface:a},c=0,d=a.length;c<d;c++){var e=a[c];if(0===e.search("get")||0===e.search("is")){var f=0;0===e.search("get")?f=3:0===e.search("is")&&(f=2);f=e.charAt(f).toLowerCase()+e.substr(f+1);try{var g=this.api[e]();b[f]=g}catch(h){}}}b.videoData=this.api.getVideoData();b.currentTimeLastUpdated_=Date.now()/1E3;return b};
m.pb=function(a){a={playerState:a,currentTime:this.api.getCurrentTime(),duration:this.api.getDuration(),videoData:this.api.getVideoData(),videoStartBytes:0,videoBytesTotal:this.api.getVideoBytesTotal(),videoLoadedFraction:this.api.getVideoLoadedFraction(),playbackQuality:this.api.getPlaybackQuality(),availableQualityLevels:this.api.getAvailableQualityLevels(),currentTimeLastUpdated_:Date.now()/1E3,playbackRate:this.api.getPlaybackRate(),mediaReferenceTime:this.api.getMediaReferenceTime()};this.api.getVideoUrl&&
(a.videoUrl=this.api.getVideoUrl());this.api.getVideoContentRect&&(a.videoContentRect=this.api.getVideoContentRect());this.api.getProgressState&&(a.progressState=this.api.getProgressState());this.api.getPlaylist&&(a.playlist=this.api.getPlaylist());this.api.getPlaylistIndex&&(a.playlistIndex=this.api.getPlaylistIndex());this.api.getStoryboardFormat&&(a.storyboardFormat=this.api.getStoryboardFormat());un(this,a)};
m.nb=function(a){un(this,{playbackQuality:a})};
m.ob=function(a){un(this,{playbackRate:a})};
m.lb=function(){for(var a=this.api.getOptions(),b={namespaces:a},c=0,d=a.length;c<d;c++){var e=a[c],f=this.api.getOptions(e);b[e]={options:f};for(var g=0,h=f.length;g<h;g++){var k=f[g],l=this.api.getOption(e,k);b[e][k]=l}}this.sendMessage("apiInfoDelivery",b)};
m.rb=function(){un(this,{muted:this.api.isMuted(),volume:this.api.getVolume()})};
m.qb=function(a){a={currentTime:a,videoBytesLoaded:this.api.getVideoBytesLoaded(),videoLoadedFraction:this.api.getVideoLoadedFraction(),currentTimeLastUpdated_:Date.now()/1E3,playbackRate:this.api.getPlaybackRate(),mediaReferenceTime:this.api.getMediaReferenceTime()};this.api.getProgressState&&(a.progressState=this.api.getProgressState());un(this,a)};
m.sb=function(){var a={sphericalProperties:this.api.getSphericalProperties()};un(this,a)};
m.dispose=function(){sn.prototype.dispose.call(this);for(var a=0;a<this.listeners.length;a++){var b=this.listeners[a];this.api.removeEventListener(b.eventType,b.listener)}this.listeners=[]};function zn(a){J.call(this);this.i={};this.started=!1;this.connection=a;this.connection.subscribe("command",this.La,this)}
v(zn,J);m=zn.prototype;m.start=function(){this.started||this.h||(this.started=!0,this.connection.Z("RECEIVING"))};
m.Z=function(a,b){this.started&&!this.h&&this.connection.Z(a,b)};
m.La=function(a,b,c){if(this.started&&!this.h){var d=b||{};switch(a){case "addEventListener":"string"===typeof d.event&&this.addListener(d.event);break;case "removeEventListener":"string"===typeof d.event&&this.removeListener(d.event);break;default:this.api.isReady()&&this.api.isExternalMethodAvailable(a,c||null)&&(b=An(a,b||{}),c=this.api.handleExternalCall(a,b,c||null),(c=Bn(a,c))&&this.Z(a,c))}}};
m.addListener=function(a){if(!(a in this.i)){var b=this.mb.bind(this,a);this.i[a]=b;this.addEventListener(a,b)}};
m.mb=function(a,b){this.started&&!this.h&&this.connection.Z(a,this.ra(a,b))};
m.ra=function(a,b){if(null!=b)return{value:b}};
m.removeListener=function(a){a in this.i&&(this.removeEventListener(a,this.i[a]),delete this.i[a])};
m.D=function(){var a=this.connection;a.h||Ze(a.i,"command",this.La,this);this.connection=null;for(var b in this.i)this.i.hasOwnProperty(b)&&this.removeListener(b);J.prototype.D.call(this)};function Cn(a,b){zn.call(this,b);this.api=a;this.start()}
v(Cn,zn);Cn.prototype.addEventListener=function(a,b){this.api.addEventListener(a,b)};
Cn.prototype.removeEventListener=function(a,b){this.api.removeEventListener(a,b)};
function An(a,b){switch(a){case "loadVideoById":return a=wn(b),[a];case "cueVideoById":return a=wn(b),[a];case "loadVideoByPlayerVars":return[b];case "cueVideoByPlayerVars":return[b];case "loadPlaylist":return a=xn(b),[a];case "cuePlaylist":return a=xn(b),[a];case "seekTo":return[b.seconds,b.allowSeekAhead];case "playVideoAt":return[b.index];case "setVolume":return[b.volume];case "setPlaybackQuality":return[b.suggestedQuality];case "setPlaybackRate":return[b.suggestedRate];case "setLoop":return[b.loopPlaylists];
case "setShuffle":return[b.shufflePlaylist];case "getOptions":return[b.module];case "getOption":return[b.module,b.option];case "setOption":return[b.module,b.option,b.value];case "handleGlobalKeyDown":return[b.keyCode,b.shiftKey,b.ctrlKey,b.altKey,b.metaKey,b.key,b.code]}return[]}
function Bn(a,b){switch(a){case "isMuted":return{muted:b};case "getVolume":return{volume:b};case "getPlaybackRate":return{playbackRate:b};case "getAvailablePlaybackRates":return{availablePlaybackRates:b};case "getVideoLoadedFraction":return{videoLoadedFraction:b};case "getPlayerState":return{playerState:b};case "getCurrentTime":return{currentTime:b};case "getPlaybackQuality":return{playbackQuality:b};case "getAvailableQualityLevels":return{availableQualityLevels:b};case "getDuration":return{duration:b};
case "getVideoUrl":return{videoUrl:b};case "getVideoEmbedCode":return{videoEmbedCode:b};case "getPlaylist":return{playlist:b};case "getPlaylistIndex":return{playlistIndex:b};case "getOptions":return{options:b};case "getOption":return{option:b}}}
Cn.prototype.ra=function(a,b){switch(a){case "onReady":return;case "onStateChange":return{playerState:b};case "onPlaybackQualityChange":return{playbackQuality:b};case "onPlaybackRateChange":return{playbackRate:b};case "onError":return{errorCode:b}}return zn.prototype.ra.call(this,a,b)};
Cn.prototype.D=function(){zn.prototype.D.call(this);delete this.api};function Dn(a){a=void 0===a?!1:a;J.call(this);this.i=new L(a);Id(this,Pa(Gd,this.i))}
B(Dn,J);Dn.prototype.subscribe=function(a,b,c){return this.h?0:this.i.subscribe(a,b,c)};
Dn.prototype.l=function(a,b){this.h||this.i.W.apply(this.i,arguments)};function En(a,b,c){Dn.call(this);this.j=a;this.destination=b;this.id=c}
v(En,Dn);En.prototype.Z=function(a,b){this.h||this.j.Z(this.destination,this.id,a,b)};
En.prototype.D=function(){this.destination=this.j=null;Dn.prototype.D.call(this)};function Fn(a,b,c){J.call(this);this.destination=a;this.origin=c;this.i=Mf(window,"message",this.j.bind(this));this.connection=new En(this,a,b);Id(this,Pa(Gd,this.connection))}
v(Fn,J);Fn.prototype.Z=function(a,b,c,d){this.h||a!==this.destination||(a={id:b,command:c},d&&(a.data=d),this.destination.postMessage(Ae(a),this.origin))};
Fn.prototype.j=function(a){var b;if(b=!this.h)if(b=a.origin===this.origin)a:{b=this.destination;do{b:{var c=a.source;do{if(c===b){c=!0;break b}if(c===c.parent)break;c=c.parent}while(null!=c);c=!1}if(c){b=!0;break a}b=b.opener}while(null!=b);b=!1}if(b&&(b=a.data,"string"===typeof b)){try{b=JSON.parse(b)}catch(d){return}b.command&&(c=this.connection,c.h||c.l("command",b.command,b.data,a.origin))}};
Fn.prototype.D=function(){Nf(this.i);this.destination=null;J.prototype.D.call(this)};function Gn(){J.call(this);this.i=[]}
v(Gn,J);Gn.prototype.D=function(){for(;this.i.length;){var a=this.i.pop();a.target.removeEventListener(a.name,a.Ca)}J.prototype.D.call(this)};function Hn(a){a=a||{};var b={},c={};this.url=a.url||"";this.args=a.args||kb(b);this.assets=a.assets||{};this.attrs=a.attrs||kb(c);this.fallback=a.fallback||null;this.fallbackMessage=a.fallbackMessage||null;this.html5=!!a.html5;this.disable=a.disable||{};this.loaded=!!a.loaded;this.messages=a.messages||{}}
Hn.prototype.clone=function(){var a=new Hn,b;for(b in this)if(this.hasOwnProperty(b)){var c=this[b];"object"==Ga(c)?a[b]=kb(c):a[b]=c}return a};var In=/cssbin\/(?:debug-)?([a-zA-Z0-9_-]+?)(?:-2x|-web|-rtl|-vfl|.css)/;function Jn(a){a=a||"";if(window.spf){var b=a.match(In);spf.style.load(a,b?b[1]:"",void 0)}else Kn(a)}
function Kn(a){var b=Ln(a),c=document.getElementById(b),d=c&&Pm(c,"loaded");d||c&&!d||(c=Mn(a,b,function(){Pm(c,"loaded")||(Nm(c),Wg(b),Pf(Pa(Xg,b),0))}))}
function Mn(a,b,c){var d=document.createElement("link");d.id=b;d.onload=function(){c&&setTimeout(c,0)};
a=Sc(a);Ub(d,a);(document.getElementsByTagName("head")[0]||document.body).appendChild(d);return d}
function Ln(a){var b=Kc(document,"A");Tb(b,new Fb(a,Gb));a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"css-"+Zb(a)}
;function Nn(a,b,c,d){J.call(this);var e=this;this.F=b;this.webPlayerContextConfig=d;this.na=!1;this.api={};this.ba=this.m=null;this.J=new L;this.i={};this.L=this.fa=this.elementId=this.oa=this.config=null;this.K=!1;this.l=this.B=null;this.ga={};this.Na=["onReady"];this.lastError=null;this.Ba=NaN;this.C={};this.Oa=new Gn(this);this.P=0;this.j=this.o=a;Id(this,Pa(Gd,this.J));On(this);Pn(this);Id(this,Pa(Gd,this.Oa));c?this.P=Pf(function(){e.loadNewVideoConfig(c)},0):d&&(Qn(this),Rn(this))}
v(Nn,J);m=Nn.prototype;m.getId=function(){return this.F};
m.loadNewVideoConfig=function(a){if(!this.h){this.P&&(Qf(this.P),this.P=0);var b=a||{};b instanceof Hn||(b=new Hn(b));this.config=b;this.setConfig(a);Rn(this);this.isReady()&&Sn(this)}};
function Qn(a){var b,c;a.webPlayerContextConfig?c=a.webPlayerContextConfig.rootElementId:c=a.config.attrs.id;a.elementId=c||a.elementId;"video-player"===a.elementId&&(a.elementId=a.F,a.webPlayerContextConfig?a.webPlayerContextConfig.rootElementId=a.F:a.config.attrs.id=a.F);(null===(b=a.j)||void 0===b?void 0:b.id)===a.elementId&&(a.elementId+="-player",a.webPlayerContextConfig?a.webPlayerContextConfig.rootElementId=a.elementId:a.config.attrs.id=a.elementId)}
m.setConfig=function(a){var b;this.oa=a;this.config=Tn(a);Qn(this);this.fa||(this.fa=Un(this,(null===(b=this.config.args)||void 0===b?void 0:b.jsapicallback)||"onYouTubePlayerReady"));this.config.args?this.config.args.jsapicallback=null:this.config.args={jsapicallback:null};var c;if(null===(c=this.config)||void 0===c?0:c.attrs)a=this.config.attrs,(c=a.width)&&this.j&&(this.j.style.width=Uc(Number(c)||c)),(a=a.height)&&this.j&&(this.j.style.height=Uc(Number(a)||a))};
function Sn(a){var b;a.config&&!0!==a.config.loaded&&(a.config.loaded=!0,!a.config.args||"0"!==a.config.args.autoplay&&0!==a.config.args.autoplay&&!1!==a.config.args.autoplay?a.api.loadVideoByPlayerVars(null!==(b=a.config.args)&&void 0!==b?b:null):a.api.cueVideoByPlayerVars(a.config.args))}
function Vn(a){var b=!0,c=Wn(a);c&&a.config&&(a=Xn(a),b=Pm(c,"version")===a);return b&&!!A("yt.player.Application.create")}
function Rn(a){if(!a.h&&!a.K){var b=Vn(a);if(b&&"html5"===(Wn(a)?"html5":null))a.L="html5",a.isReady()||Yn(a);else if(Zn(a),a.L="html5",b&&a.l&&a.o)a.o.appendChild(a.l),Yn(a);else{a.config&&(a.config.loaded=!0);var c=!1;a.B=function(){c=!0;var d=$n(a,"player_bootstrap_method")?A("yt.player.Application.createAlternate")||A("yt.player.Application.create"):A("yt.player.Application.create");var e=a.config?Tn(a.config):void 0;d&&d(a.o,e,a.webPlayerContextConfig);Yn(a)};
a.K=!0;b?a.B():(Tm(Xn(a),a.B),(b=ao(a))&&Jn(b),bo(a)&&!c&&z("yt.player.Application.create",null,void 0))}}}
function Wn(a){var b=Gc(a.elementId);!b&&a.j&&a.j.querySelector&&(b=a.j.querySelector("#"+a.elementId));return b}
function Yn(a){var b;if(!a.h){var c=Wn(a),d=!1;c&&c.getApiInterface&&c.getApiInterface()&&(d=!0);d?(a.K=!1,!$n(a,"html5_remove_not_servable_check_killswitch")&&(null===c||void 0===c?0:c.isNotServable)&&a.config&&(null===c||void 0===c?0:c.isNotServable(null===(b=a.config.args)||void 0===b?void 0:b.video_id))||co(a)):a.Ba=Pf(function(){Yn(a)},50)}}
function co(a){On(a);a.na=!0;var b=Wn(a);if(b){a.m=eo(a,b,"addEventListener");a.ba=eo(a,b,"removeEventListener");var c=b.getApiInterface();c=c.concat(b.getInternalApiInterface());for(var d=a.api,e=0;e<c.length;e++){var f=c[e];d[f]||(d[f]=eo(a,b,f))}}for(var g in a.i)a.i.hasOwnProperty(g)&&a.m&&a.m(g,a.i[g]);Sn(a);a.fa&&a.fa(a.api);a.J.W("onReady",a.api)}
function eo(a,b,c){var d=b[c];return function(e){for(var f=[],g=0;g<arguments.length;++g)f[g-0]=arguments[g];try{return a.lastError=null,d.apply(b,f)}catch(h){"sendAbandonmentPing"!==c&&(h.params=c,a.lastError=h,Wk(h))}}}
function On(a){a.na=!1;if(a.ba)for(var b in a.i)a.i.hasOwnProperty(b)&&a.ba(b,a.i[b]);for(var c in a.C)a.C.hasOwnProperty(c)&&Qf(Number(c));a.C={};a.m=null;a.ba=null;b=a.api;for(var d in b)b.hasOwnProperty(d)&&(b[d]=null);b.addEventListener=function(e,f){a.addEventListener(e,f)};
b.removeEventListener=function(e,f){a.removeEventListener(e,f)};
b.destroy=function(){a.dispose()};
b.getLastError=function(){return a.getLastError()};
b.getPlayerType=function(){return a.getPlayerType()};
b.getCurrentVideoConfig=function(){return a.oa};
b.loadNewVideoConfig=function(e){a.loadNewVideoConfig(e)};
b.isReady=function(){return a.isReady()}}
m.isReady=function(){return this.na};
function Pn(a){a.addEventListener("WATCH_LATER_VIDEO_ADDED",function(b){Wg("WATCH_LATER_VIDEO_ADDED",b)});
a.addEventListener("WATCH_LATER_VIDEO_REMOVED",function(b){Wg("WATCH_LATER_VIDEO_REMOVED",b)});
a.addEventListener("onAdAnnounce",function(b){Wg("a11y-announce",b)})}
m.addEventListener=function(a,b){var c=this,d=Un(this,b);d&&(0<=Wa(this.Na,a)||this.i[a]||(b=fo(this,a),this.m&&this.m(a,b)),this.J.subscribe(a,d),"onReady"===a&&this.isReady()&&Pf(function(){d(c.api)},0))};
m.removeEventListener=function(a,b){this.h||(b=Un(this,b))&&Ze(this.J,a,b)};
function Un(a,b){var c=b;if("string"===typeof b){if(a.ga[b])return a.ga[b];c=function(d){for(var e=[],f=0;f<arguments.length;++f)e[f-0]=arguments[f];if(f=A(b))try{f.apply(y,e)}catch(g){Xk(g)}};
a.ga[b]=c}return c?c:null}
function fo(a,b){var c="ytPlayer"+b+a.F;a.i[b]=c;y[c]=function(d){var e=Pf(function(){if(!a.h){a.J.W(b,d);var f=a.C,g=String(e);g in f&&delete f[g]}},0);
hb(a.C,String(e))};
return c}
m.getPlayerType=function(){return this.L||(Wn(this)?"html5":null)};
m.getLastError=function(){return this.lastError};
function Zn(a){a.cancel();On(a);a.L=null;a.config&&(a.config.loaded=!1);var b=Wn(a);b&&(Vn(a)||!bo(a)?a.l=b:(b&&b.destroy&&b.destroy(),a.l=null));if(a.o)for(a=a.o;b=a.firstChild;)a.removeChild(b)}
m.cancel=function(){this.B&&Zm(Xn(this),this.B);Qf(this.Ba);this.K=!1};
m.D=function(){Zn(this);if(this.l&&this.config&&this.l.destroy)try{this.l.destroy()}catch(b){Xk(b)}this.ga=null;for(var a in this.i)this.i.hasOwnProperty(a)&&(y[this.i[a]]=null);this.oa=this.config=this.api=null;delete this.o;delete this.j;J.prototype.D.call(this)};
function bo(a){var b,c;a=null===(c=null===(b=a.config)||void 0===b?void 0:b.args)||void 0===c?void 0:c.fflags;return!!a&&-1!==a.indexOf("player_destroy_old_version=true")}
function Xn(a){return a.webPlayerContextConfig?a.webPlayerContextConfig.jsUrl:(a=a.config.assets)?a.js:""}
function ao(a){return a.webPlayerContextConfig?a.webPlayerContextConfig.cssUrl:(a=a.config.assets)?a.css:""}
function $n(a,b){var c;if(a.webPlayerContextConfig)var d=a.webPlayerContextConfig.serializedExperimentFlags;else if(null===(c=a.config)||void 0===c?0:c.args)d=a.config.args.fflags;return"true"===hg(d||"","&")[b]}
function Tn(a){for(var b={},c=u(Object.keys(a)),d=c.next();!d.done;d=c.next()){d=d.value;var e=a[d];b[d]="object"===typeof e?kb(e):e}return b}
;var go={},ho="player_uid_"+(1E9*Math.random()>>>0);function io(a,b,c){var d="player";c=void 0===c?!0:c;d="string"===typeof d?Gc(d):d;var e=ho+"_"+Ja(d),f=go[e];if(f&&c)return jo(a,b)?f.api.loadVideoByPlayerVars(a.args||null):f.loadNewVideoConfig(a),f.api;f=new Nn(d,e,a,b);go[e]=f;Wg("player-added",f.api);Id(f,function(){delete go[f.getId()]});
return f.api}
function jo(a,b){return b&&b.serializedExperimentFlags?b.serializedExperimentFlags.includes("web_player_remove_playerproxy=true"):a&&a.args&&a.args.fflags?a.args.fflags.includes("web_player_remove_playerproxy=true"):!1}
;var ko=null,lo=null,mo=null;function no(){var a=ko.getVideoData(1);a=a.title?a.title+" - YouTube":"YouTube";document.title!==a&&(document.title=a)}
;function oo(){if(ed())return!0;var a=E("INNERTUBE_CLIENT_NAME");return!a||"WEB"!==a&&"MWEB"!==a?!0:(a=cd.get("CONSENT",void 0))?a.startsWith("YES+"):!0}
;function po(a,b,c){a="ST-"+Zb(a).toString(36);b=b?dc(b):"";c=c||5;O("drop_st_cookie_before_cb")&&!oo()||yh(a,b,c)}
;function qo(a,b,c){b=void 0===b?{}:b;c=void 0===c?!1:c;var d=E("EVENT_ID");d&&(b.ei||(b.ei=d));if(b){d=a;var e=void 0===e?!0:e;var f=E("VALID_SESSION_TEMPDATA_DOMAINS",[]),g=bc(window.location.href);g&&f.push(g);g=bc(d);if(0<=Wa(f,g)||!g&&0==d.lastIndexOf("/",0))if(O("autoescape_tempdata_url")&&(f=document.createElement("a"),Tb(f,d),d=f.href),d){g=d.match($b);d=g[5];f=g[6];g=g[7];var h="";d&&(h+=d);f&&(h+="?"+f);g&&(h+="#"+g);d=h;f=d.indexOf("#");if(d=0>f?d:d.substr(0,f))if(e&&!b.csn&&(b.itct||b.ved)&&
(b=Object.assign({csn:Al()},b)),k){var k=parseInt(k,10);isFinite(k)&&0<k&&po(d,b,k)}else po(d,b)}}if(c)return!1;if((window.ytspf||{}).enabled)spf.navigate(a);else{var l=void 0===l?{}:l;var n=void 0===n?"":n;var p=void 0===p?window:p;c=p.location;a=ec(a,l)+n;a=a instanceof Fb?a:Lb(a);c.href=Hb(a)}return!0}
;z("yt.setConfig",M,void 0);z("yt.config.set",M,void 0);z("yt.setMsg",Bf,void 0);z("yt.msgs.set",Bf,void 0);z("yt.logging.errors.log",Xk,void 0);
z("writeEmbed",function(){var a=E("PLAYER_CONFIG",void 0);if(!a){var b=E("PLAYER_VARS",void 0);b&&(a={args:b})}nl(!0);"gvn"===a.args.ps&&(document.body.style.backgroundColor="transparent");a.attrs||(a.attrs={width:"100%",height:"100%",id:"video-player"});var c=document.referrer;b=E("POST_MESSAGE_ORIGIN");window!==window.top&&c&&c!==document.URL&&(a.args.loaderUrl=c);O("embeds_js_api_set_1p_cookie")&&(c=mg(),c.embedsTokenValue&&(a.args.embedsTokenValue=c.embedsTokenValue));M("FORCE_CSI_ON_GEL",!0);
c=["ol"];jm("").info.actionType="embed";c&&M("TIMING_AFT_KEYS",c);M("TIMING_ACTION","embed");c=E("TIMING_INFO",{});for(var d in c)c.hasOwnProperty(d)&&zm(d,c[d]);zm("is_nav",1);(d=Al())&&zm("csn",d);(d=E("PREVIOUS_ACTION",void 0))&&!um()&&zm("pa",d);d=em();c=E("CLIENT_PROTOCOL");var e=E("CLIENT_TRANSPORT");c&&zm("p",c);e&&zm("t",e);zm("yt_vis",Em());zm("yt_lt","cold");c=am();if(e=cm())Z("srt",c.responseStart),1!==d.prerender&&(zm("yt_sts","n",void 0),Z("_start",e,void 0));d=hm();0<d&&Z("fpt",d);if(!O("log_deltas_killswitch")){var f,
g,h,k;U&&U.timing&&(U.timeOrigin&&U.timing.navigationStart&&Bm("startTimeDelta",Math.floor(U.timeOrigin)-U.timing.navigationStart),(d=null===(k=null===(h=null===(g=null===(f=U.getEntriesByType)||void 0===f?void 0:f.call(U,"navigation"))||void 0===g?void 0:g[0])||void 0===h?void 0:h.toJSON)||void 0===k?void 0:k.call(h))&&d.responseEnd&&U.timing.responseEnd&&Bm("responseEndDelta",bm(d.responseEnd)-U.timing.responseEnd))}f=am();f.isPerformanceNavigationTiming&&zm("pnt",1,void 0);Z("nreqs",f.requestStart,
void 0);Z("nress",f.responseStart,void 0);Z("nrese",f.responseEnd,void 0);0<f.redirectEnd-f.redirectStart&&(Z("nrs",f.redirectStart,void 0),Z("nre",f.redirectEnd,void 0));0<f.domainLookupEnd-f.domainLookupStart&&(Z("ndnss",f.domainLookupStart,void 0),Z("ndnse",f.domainLookupEnd,void 0));0<f.connectEnd-f.connectStart&&(Z("ntcps",f.connectStart,void 0),Z("ntcpe",f.connectEnd,void 0));f.secureConnectionStart>=cm()&&0<f.connectEnd-f.secureConnectionStart&&(Z("nstcps",f.secureConnectionStart,void 0),Z("ntcpe",
f.connectEnd,void 0));U&&U.getEntriesByType&&Gm();f=[];if(document.querySelector&&U&&U.getEntriesByName)for(var l in Yl)Yl.hasOwnProperty(l)&&(g=Yl[l],Fm(l,g)&&f.push(g));f.length&&zm("rc",f.join(","));if(um(void 0)){l={actionType:om[E("TIMING_ACTION",void 0)]||"LATENCY_ACTION_UNKNOWN",previousAction:om[E("PREVIOUS_ACTION",void 0)]||"LATENCY_ACTION_UNKNOWN"};if(f=Al())l.clientScreenNonce=f;f=fm(void 0);mm().info(l,f)}l=em();g=$l();if("cold"===l.yt_lt&&(f=wm(),h=f.gelTicks?f.gelTicks:f.gelTicks={},
f=f.gelInfos?f.gelInfos:f.gelInfos={},um())){for(var n in g)"tick_"+n in h||vm(n,g[n]);n=ym();g=fm();h={};for(var p in l)"info_"+p in f||!(k=xm(p,l[p]))||(Ml(n,k),Ml(h,k));mm().info(h,g)}z("ytglobal.timingready_",!0,void 0);Am();(p=E("WEB_PLAYER_CONTEXT_CONFIGS",void 0))&&"WEB_PLAYER_CONTEXT_CONFIG_ID_EMBEDDED_PLAYER"in p?(p=p.WEB_PLAYER_CONTEXT_CONFIG_ID_EMBEDDED_PLAYER,p.serializedForcedExperimentIds||(n=mg(),n.forced_experiments&&(p.serializedForcedExperimentIds=n.forced_experiments)),ko=io(a,
p,!1)):ko=io(a);ko.addEventListener("onVideoDataChange",no);a=E("POST_MESSAGE_ID","player");E("ENABLE_JS_API")?mo=new yn(ko):E("ENABLE_POST_API")&&"string"===typeof a&&"string"===typeof b&&(lo=new Fn(window.parent,a,b),mo=new Cn(ko,lo.connection));bn();O("networkless_logging_web_embedded")&&nk();O("embeds_enable_ua_ch_polyfill")&&qn()},void 0);
var ro=xf(function(){Cm();var a=Ah.getInstance(),b=!!((Dh("f"+(Math.floor(119/31)+1))||0)&67108864),c=1<window.devicePixelRatio;if(document.body&&Ld(document.body,"exp-invert-logo"))if(c&&!Ld(document.body,"inverted-hdpi")){var d=document.body;if(d.classList)d.classList.add("inverted-hdpi");else if(!Ld(d,"inverted-hdpi")){var e=Jd(d);Kd(d,e+(0<e.length?" inverted-hdpi":"inverted-hdpi"))}}else!c&&Ld(document.body,"inverted-hdpi")&&Md();if(b!=c){b="f"+(Math.floor(119/31)+1);d=Dh(b)||0;d=c?d|67108864:
d&-67108865;0==d?delete zh[b]:(c=d.toString(16),zh[b]=c.toString());c=!0;O("web_secure_pref_cookie_killswitch")&&(c=!1);b=a.h;d=[];for(var f in zh)d.push(f+"="+encodeURIComponent(String(zh[f])));yh(b,d.join("&"),63072E3,a.i,c)}Im.h||(Im.h=new Im);a=Im.h;f=16623;var g=void 0===g?{}:g;Object.values(Zk).includes(f)||(Wk(new ki("createClientScreen() called with a non-page VE",f)),f=83769);g.isHistoryNavigation||a.h.push({rootVe:f,key:g.key||""});a.l=[];a.u=[];g.Fa?Lm(a,f,g):Mm(a,f,g)}),so=xf(function(){ko&&
ko.sendAbandonmentPing&&ko.sendAbandonmentPing();
E("PL_ATT")&&hn.dispose();for(var a=0,b=$m.length;a<b;a++)Xf($m[a]);$m.length=0;Ym("//static.doubleclick.net/instream/ad_status.js");an=!1;M("DCLKSTAT",0);Hd(mo,lo);ko&&(ko.removeEventListener("onVideoDataChange",no),ko.destroy())});
window.addEventListener?(window.addEventListener("load",ro),window.addEventListener("unload",so)):window.attachEvent&&(window.attachEvent("onload",ro),window.attachEvent("onunload",so));Qa("yt.abuse.player.botguardInitialized",A("yt.abuse.player.botguardInitialized")||jn);Qa("yt.abuse.player.invokeBotguard",A("yt.abuse.player.invokeBotguard")||kn);Qa("yt.abuse.dclkstatus.checkDclkStatus",A("yt.abuse.dclkstatus.checkDclkStatus")||cn);
Qa("yt.player.exports.navigate",A("yt.player.exports.navigate")||qo);Qa("yt.util.activity.init",A("yt.util.activity.init")||Zf);Qa("yt.util.activity.getTimeSinceActive",A("yt.util.activity.getTimeSinceActive")||bg);Qa("yt.util.activity.setTimestamp",A("yt.util.activity.setTimestamp")||$f);}).call(this);
