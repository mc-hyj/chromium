var allDescriptors=[{"skip_compilation":["gonzales-scss.js"],"dependencies":["formatter_worker"],"extensions":[{"className":"WebInspector.SCSSParser","mimeType":"text/x-scss","type":"@WebInspector.FormatterWorkerContentParser"}],"name":"gonzales","scripts":["gonzales_module.js"]},{"skip_compilation":["../acorn/acorn.js","../cm/headlesscodemirror.js","../cm/css.js","../cm/xml.js"],"name":"formatter_worker"}];var applicationDescriptor;var _loadedScripts={};for(var k of[]){}
function loadResourcePromise(url)
{return new Promise(load);function load(fulfill,reject)
{var xhr=new XMLHttpRequest();xhr.open("GET",url,true);xhr.onreadystatechange=onreadystatechange;function onreadystatechange(e)
{if(xhr.readyState!==XMLHttpRequest.DONE)
return;if([0,200,304].indexOf(xhr.status)===-1)
reject(new Error("While loading from url "+url+" server responded with a status of "+xhr.status));else
fulfill(e.target.response);}
xhr.send(null);}}
function normalizePath(path)
{if(path.indexOf("..")===-1&&path.indexOf(".")===-1)
return path;var normalizedSegments=[];var segments=path.split("/");for(var i=0;i<segments.length;i++){var segment=segments[i];if(segment===".")
continue;else if(segment==="..")
normalizedSegments.pop();else if(segment)
normalizedSegments.push(segment);}
var normalizedPath=normalizedSegments.join("/");if(normalizedPath[normalizedPath.length-1]==="/")
return normalizedPath;if(path[0]==="/"&&normalizedPath)
normalizedPath="/"+normalizedPath;if((path[path.length-1]==="/")||(segments[segments.length-1]===".")||(segments[segments.length-1]===".."))
normalizedPath=normalizedPath+"/";return normalizedPath;}
function loadScriptsPromise(scriptNames,base)
{var promises=[];var urls=[];var sources=new Array(scriptNames.length);var scriptToEval=0;for(var i=0;i<scriptNames.length;++i){var scriptName=scriptNames[i];var sourceURL=(base||self._importScriptPathPrefix)+scriptName;var schemaIndex=sourceURL.indexOf("://")+3;var pathIndex=sourceURL.indexOf("/",schemaIndex);if(pathIndex===-1)
pathIndex=sourceURL.length;sourceURL=sourceURL.substring(0,pathIndex)+normalizePath(sourceURL.substring(pathIndex));if(_loadedScripts[sourceURL])
continue;urls.push(sourceURL);promises.push(loadResourcePromise(sourceURL).then(scriptSourceLoaded.bind(null,i),scriptSourceLoaded.bind(null,i,undefined)));}
return Promise.all(promises).then(undefined);function scriptSourceLoaded(scriptNumber,scriptSource)
{sources[scriptNumber]=scriptSource||"";while(typeof sources[scriptToEval]!=="undefined"){evaluateScript(urls[scriptToEval],sources[scriptToEval]);++scriptToEval;}}
function evaluateScript(sourceURL,scriptSource)
{_loadedScripts[sourceURL]=true;if(!scriptSource){console.error("Empty response arrived for script '"+sourceURL+"'");return;}
self.eval(scriptSource+"\n//# sourceURL="+sourceURL);}}
(function(){var baseUrl=self.location?self.location.origin+self.location.pathname:"";self._importScriptPathPrefix=baseUrl.substring(0,baseUrl.lastIndexOf("/")+1);})();function Runtime(descriptors)
{this._modules=[];this._modulesMap={};this._extensions=[];this._cachedTypeClasses={};this._descriptorsMap={};for(var i=0;i<descriptors.length;++i)
this._registerModule(descriptors[i]);}
Runtime._queryParamsObject={__proto__:null};Runtime._instanceSymbol=Symbol("instance");Runtime._extensionSymbol=Symbol("extension");Runtime.cachedResources={__proto__:null};Runtime.loadResourceIntoCache=function(url,appendSourceURL)
{return loadResourcePromise(url).then(cacheResource.bind(this,url),cacheResource.bind(this,url,undefined));function cacheResource(path,content)
{if(!content){console.error("Failed to load resource: "+path);return;}
var sourceURL=appendSourceURL?Runtime.resolveSourceURL(path):"";Runtime.cachedResources[path]=content+sourceURL;}}
Runtime.startApplication=function(appName)
{console.timeStamp("Runtime.startApplication");var allDescriptorsByName={};for(var i=0;i<allDescriptors.length;++i){var d=allDescriptors[i];allDescriptorsByName[d["name"]]=d;}
var applicationPromise;if(applicationDescriptor)
applicationPromise=Promise.resolve(applicationDescriptor);else
applicationPromise=loadResourcePromise(appName+".json").then(JSON.parse.bind(JSON));return applicationPromise.then(parseModuleDescriptors);function parseModuleDescriptors(appDescriptor)
{var configuration=appDescriptor.modules;var moduleJSONPromises=[];var coreModuleNames=[];for(var i=0;i<configuration.length;++i){var descriptor=configuration[i];var name=descriptor["name"];var moduleJSON=allDescriptorsByName[name];if(moduleJSON)
moduleJSONPromises.push(Promise.resolve(moduleJSON));else
moduleJSONPromises.push(loadResourcePromise(name+"/module.json").then(JSON.parse.bind(JSON)));if(descriptor["type"]==="autostart")
coreModuleNames.push(name);}
return Promise.all(moduleJSONPromises).then(instantiateRuntime);function instantiateRuntime(moduleDescriptors)
{for(var i=0;i<moduleDescriptors.length;++i){moduleDescriptors[i].name=configuration[i]["name"];moduleDescriptors[i].condition=configuration[i]["condition"];moduleDescriptors[i].remote=configuration[i]["type"]==="remote";}
self.runtime=new Runtime(moduleDescriptors);if(coreModuleNames)
return(self.runtime._loadAutoStartModules(coreModuleNames));return Promise.resolve();}}}
Runtime.startWorker=function(appName)
{return Runtime.startApplication(appName).then(sendWorkerReady);function sendWorkerReady()
{self.postMessage("workerReady");}}
Runtime._sharedWorkerNewPortCallback=null;Runtime._sharedWorkerConnectedPorts=[];Runtime.startSharedWorker=function(appName)
{var startPromise=Runtime.startApplication(appName);self.onconnect=function(event)
{var newPort=(event.ports[0]);startPromise.then(sendWorkerReadyAndContinue);function sendWorkerReadyAndContinue()
{newPort.postMessage("workerReady");if(Runtime._sharedWorkerNewPortCallback)
Runtime._sharedWorkerNewPortCallback.call(null,newPort);else
Runtime._sharedWorkerConnectedPorts.push(newPort);}}}
Runtime.setSharedWorkerNewPortCallback=function(callback)
{Runtime._sharedWorkerNewPortCallback=callback;while(Runtime._sharedWorkerConnectedPorts.length){var port=Runtime._sharedWorkerConnectedPorts.shift();callback.call(null,port);}}
Runtime.queryParam=function(name)
{return Runtime._queryParamsObject[name]||null;}
Runtime.constructQueryParams=function(banned)
{var params=[];for(var key in Runtime._queryParamsObject){if(!key||banned.indexOf(key)!==-1)
continue;params.push(key+"="+Runtime._queryParamsObject[key]);}
return params.length?"?"+params.join("&"):"";}
Runtime._experimentsSetting=function()
{try{return(JSON.parse(self.localStorage&&self.localStorage["experiments"]?self.localStorage["experiments"]:"{}"));}catch(e){console.error("Failed to parse localStorage['experiments']");return{};}}
Runtime._console=console;Runtime._originalAssert=console.assert;Runtime._assert=function(value,message)
{if(value)
return;Runtime._originalAssert.call(Runtime._console,value,message+" "+new Error().stack);}
Runtime._platform="";Runtime.setPlatform=function(platform)
{Runtime._platform=platform;}
Runtime.prototype={useTestBase:function()
{Runtime._remoteBase="http://localhost:8000/inspector-sources/";},_registerModule:function(descriptor)
{var module=new Runtime.Module(this,descriptor);this._modules.push(module);this._modulesMap[descriptor["name"]]=module;},loadModulePromise:function(moduleName)
{return this._modulesMap[moduleName]._loadPromise();},_loadAutoStartModules:function(moduleNames)
{var promises=[];for(var i=0;i<moduleNames.length;++i)
promises.push(this.loadModulePromise(moduleNames[i]));return Promise.all(promises);},_checkExtensionApplicability:function(extension,predicate)
{if(!predicate)
return false;var contextTypes=(extension.descriptor().contextTypes);if(!contextTypes)
return true;for(var i=0;i<contextTypes.length;++i){var contextType=this._resolve(contextTypes[i]);var isMatching=!!contextType&&predicate(contextType);if(isMatching)
return true;}
return false;},isExtensionApplicableToContext:function(extension,context)
{if(!context)
return true;return this._checkExtensionApplicability(extension,isInstanceOf);function isInstanceOf(targetType)
{return context instanceof targetType;}},isExtensionApplicableToContextTypes:function(extension,currentContextTypes)
{if(!extension.descriptor().contextTypes)
return true;return this._checkExtensionApplicability(extension,currentContextTypes?isContextTypeKnown:null);function isContextTypeKnown(targetType)
{return currentContextTypes.has(targetType);}},extensions:function(type,context,sortByTitle)
{return this._extensions.filter(filter).sort(sortByTitle?titleComparator:orderComparator);function filter(extension)
{if(extension._type!==type&&extension._typeClass()!==type)
return false;if(!extension.enabled())
return false;return!context||extension.isApplicable(context);}
function orderComparator(extension1,extension2)
{var order1=extension1.descriptor()["order"]||0;var order2=extension2.descriptor()["order"]||0;return order1-order2;}
function titleComparator(extension1,extension2)
{var title1=extension1.title()||"";var title2=extension2.title()||"";return title1.localeCompare(title2);}},extension:function(type,context)
{return this.extensions(type,context)[0]||null;},allInstances:function(type,context)
{return Promise.all(this.extensions(type,context).map(extension=>extension.instance()));},_resolve:function(typeName)
{if(!this._cachedTypeClasses[typeName]){var path=typeName.split(".");var object=self;for(var i=0;object&&(i<path.length);++i)
object=object[path[i]];if(object)
this._cachedTypeClasses[typeName]=(object);}
return this._cachedTypeClasses[typeName]||null;},sharedInstance:function(constructorFunction)
{if(Runtime._instanceSymbol in constructorFunction)
return constructorFunction[Runtime._instanceSymbol];var instance=new constructorFunction();constructorFunction[Runtime._instanceSymbol]=instance;return instance;}}
Runtime.ModuleDescriptor=function()
{this.name;this.extensions;this.dependencies;this.scripts;this.condition;this.remote;}
Runtime.ExtensionDescriptor=function()
{this.type;this.className;this.factoryName;this.contextTypes;}
Runtime.Module=function(manager,descriptor)
{this._manager=manager;this._descriptor=descriptor;this._name=descriptor.name;this._extensions=[];this._extensionsByClassName=new Map();var extensions=(descriptor.extensions);for(var i=0;extensions&&i<extensions.length;++i){var extension=new Runtime.Extension(this,extensions[i]);this._manager._extensions.push(extension);this._extensions.push(extension);}
this._loadedForTest=false;}
Runtime.Module.prototype={name:function()
{return this._name;},enabled:function()
{return Runtime._isDescriptorEnabled(this._descriptor);},resource:function(name)
{var fullName=this._name+"/"+name;var content=Runtime.cachedResources[fullName];if(!content)
throw new Error(fullName+" not preloaded. Check module.json");return content;},_loadPromise:function()
{if(!this.enabled())
return Promise.reject(new Error("Module "+this._name+" is not enabled"));if(this._pendingLoadPromise)
return this._pendingLoadPromise;var dependencies=this._descriptor.dependencies;var dependencyPromises=[];for(var i=0;dependencies&&i<dependencies.length;++i)
dependencyPromises.push(this._manager._modulesMap[dependencies[i]]._loadPromise());this._pendingLoadPromise=Promise.all(dependencyPromises).then(this._loadResources.bind(this)).then(this._loadScripts.bind(this)).then(()=>this._loadedForTest=true);return this._pendingLoadPromise;},_loadResources:function()
{var resources=this._descriptor["resources"];if(!resources||!resources.length)
return Promise.resolve();var promises=[];for(var i=0;i<resources.length;++i){var url=this._modularizeURL(resources[i]);promises.push(Runtime.loadResourceIntoCache(url,true));}
return Promise.all(promises).then(undefined);},_loadScripts:function()
{if(!this._descriptor.scripts||!this._descriptor.scripts.length)
return Promise.resolve();return loadScriptsPromise(this._descriptor.scripts.map(this._modularizeURL,this),this._remoteBase());},_modularizeURL:function(resourceName)
{return normalizePath(this._name+"/"+resourceName);},_remoteBase:function()
{return this._descriptor.remote&&Runtime._remoteBase||undefined;},substituteURL:function(value)
{var base=this._remoteBase()||"";return value.replace(/@url\(([^\)]*?)\)/g,convertURL.bind(this));function convertURL(match,url)
{return base+this._modularizeURL(url);}}}
Runtime._isDescriptorEnabled=function(descriptor)
{var activatorExperiment=descriptor["experiment"];if(activatorExperiment==="*")
return Runtime.experiments.supportEnabled();if(activatorExperiment&&activatorExperiment.startsWith("!")&&Runtime.experiments.isEnabled(activatorExperiment.substring(1)))
return false;if(activatorExperiment&&!activatorExperiment.startsWith("!")&&!Runtime.experiments.isEnabled(activatorExperiment))
return false;var condition=descriptor["condition"];if(condition&&!condition.startsWith("!")&&!Runtime.queryParam(condition))
return false;if(condition&&condition.startsWith("!")&&Runtime.queryParam(condition.substring(1)))
return false;return true;}
Runtime.Extension=function(module,descriptor)
{this._module=module;this._descriptor=descriptor;this._type=descriptor.type;this._hasTypeClass=this._type.charAt(0)==="@";this._className=descriptor.className||null;this._factoryName=descriptor.factoryName||null;}
Runtime.Extension.prototype={descriptor:function()
{return this._descriptor;},module:function()
{return this._module;},enabled:function()
{return this._module.enabled()&&Runtime._isDescriptorEnabled(this.descriptor());},_typeClass:function()
{if(!this._hasTypeClass)
return null;return this._module._manager._resolve(this._type.substring(1));},isApplicable:function(context)
{return this._module._manager.isExtensionApplicableToContext(this,context);},instance:function()
{return this._module._loadPromise().then(this._createInstance.bind(this));},_createInstance:function()
{var className=this._className||this._factoryName;if(!className)
throw new Error("Could not instantiate extension with no class");var constructorFunction=self.eval((className));if(!(constructorFunction instanceof Function))
throw new Error("Could not instantiate: "+className);if(this._className)
return this._module._manager.sharedInstance(constructorFunction);return new constructorFunction(this);},title:function()
{return this._descriptor["title-"+Runtime._platform]||this._descriptor["title"];}}
Runtime.ExperimentsSupport=function()
{this._supportEnabled=Runtime.queryParam("experiments")!==null;this._experiments=[];this._experimentNames={};this._enabledTransiently={};}
Runtime.ExperimentsSupport.prototype={allConfigurableExperiments:function()
{var result=[];for(var i=0;i<this._experiments.length;i++){var experiment=this._experiments[i];if(!this._enabledTransiently[experiment.name])
result.push(experiment);}
return result;},supportEnabled:function()
{return this._supportEnabled;},_setExperimentsSetting:function(value)
{if(!self.localStorage)
return;self.localStorage["experiments"]=JSON.stringify(value);},register:function(experimentName,experimentTitle,hidden)
{Runtime._assert(!this._experimentNames[experimentName],"Duplicate registration of experiment "+experimentName);this._experimentNames[experimentName]=true;this._experiments.push(new Runtime.Experiment(this,experimentName,experimentTitle,!!hidden));},isEnabled:function(experimentName)
{this._checkExperiment(experimentName);if(this._enabledTransiently[experimentName])
return true;if(!this.supportEnabled())
return false;return!!Runtime._experimentsSetting()[experimentName];},setEnabled:function(experimentName,enabled)
{this._checkExperiment(experimentName);var experimentsSetting=Runtime._experimentsSetting();experimentsSetting[experimentName]=enabled;this._setExperimentsSetting(experimentsSetting);},setDefaultExperiments:function(experimentNames)
{for(var i=0;i<experimentNames.length;++i){this._checkExperiment(experimentNames[i]);this._enabledTransiently[experimentNames[i]]=true;}},enableForTest:function(experimentName)
{this._checkExperiment(experimentName);this._enabledTransiently[experimentName]=true;},clearForTest:function()
{this._experiments=[];this._experimentNames={};this._enabledTransiently={};},cleanUpStaleExperiments:function()
{var experimentsSetting=Runtime._experimentsSetting();var cleanedUpExperimentSetting={};for(var i=0;i<this._experiments.length;++i){var experimentName=this._experiments[i].name;if(experimentsSetting[experimentName])
cleanedUpExperimentSetting[experimentName]=true;}
this._setExperimentsSetting(cleanedUpExperimentSetting);},_checkExperiment:function(experimentName)
{Runtime._assert(this._experimentNames[experimentName],"Unknown experiment "+experimentName);}}
Runtime.Experiment=function(experiments,name,title,hidden)
{this.name=name;this.title=title;this.hidden=hidden;this._experiments=experiments;}
Runtime.Experiment.prototype={isEnabled:function()
{return this._experiments.isEnabled(this.name);},setEnabled:function(enabled)
{this._experiments.setEnabled(this.name,enabled);}}
{(function parseQueryParameters()
{var queryParams=location.search;if(!queryParams)
return;var params=queryParams.substring(1).split("&");for(var i=0;i<params.length;++i){var pair=params[i].split("=");var name=pair.shift();Runtime._queryParamsObject[name]=pair.join("=");}})();}
Runtime.experiments=new Runtime.ExperimentsSupport();Runtime._remoteBase=Runtime.queryParam("remoteBase");{(function validateRemoteBase()
{var remoteBaseRegexp=/^https:\/\/chrome-devtools-frontend\.appspot\.com\/serve_file\/@[0-9a-zA-Z]+\/?$/;if(Runtime._remoteBase&&!remoteBaseRegexp.test(Runtime._remoteBase))
Runtime._remoteBase=null;})();}
Runtime.resolveSourceURL=function(path)
{var sourceURL=self.location.href;if(self.location.search)
sourceURL=sourceURL.replace(self.location.search,"");sourceURL=sourceURL.substring(0,sourceURL.lastIndexOf("/")+1)+path;return"\n/*# sourceURL="+sourceURL+" */";}
var runtime;console=console;console.__originalAssert=console.assert;console.assert=function(value,message)
{if(value)
return;console.__originalAssert(value,message);}
var ArrayLike;function mod(m,n)
{return((m%n)+n)%n;}
String.prototype.findAll=function(string)
{var matches=[];var i=this.indexOf(string);while(i!==-1){matches.push(i);i=this.indexOf(string,i+string.length);}
return matches;}
String.prototype.replaceControlCharacters=function()
{return this.replace(/[\u0000-\u0008\u000b\u000c\u000e-\u001f\u0080-\u009f]/g,"�");}
String.prototype.isWhitespace=function()
{return/^\s*$/.test(this);}
String.prototype.computeLineEndings=function()
{var endings=this.findAll("\n");endings.push(this.length);return endings;}
String.prototype.escapeCharacters=function(chars)
{var foundChar=false;for(var i=0;i<chars.length;++i){if(this.indexOf(chars.charAt(i))!==-1){foundChar=true;break;}}
if(!foundChar)
return String(this);var result="";for(var i=0;i<this.length;++i){if(chars.indexOf(this.charAt(i))!==-1)
result+="\\";result+=this.charAt(i);}
return result;}
String.regexSpecialCharacters=function()
{return"^[]{}()\\.^$*+?|-,";}
String.prototype.escapeForRegExp=function()
{return this.escapeCharacters(String.regexSpecialCharacters());}
String.prototype.escapeHTML=function()
{return this.replace(/&/g,"&amp;").replace(/</g,"&lt;").replace(/>/g,"&gt;").replace(/"/g,"&quot;");}
String.prototype.unescapeHTML=function()
{return this.replace(/&lt;/g,"<").replace(/&gt;/g,">").replace(/&#58;/g,":").replace(/&quot;/g,"\"").replace(/&#60;/g,"<").replace(/&#62;/g,">").replace(/&amp;/g,"&");}
String.prototype.collapseWhitespace=function()
{return this.replace(/[\s\xA0]+/g," ");}
String.prototype.trimMiddle=function(maxLength)
{if(this.length<=maxLength)
return String(this);var leftHalf=maxLength>>1;var rightHalf=maxLength-leftHalf-1;return this.substr(0,leftHalf)+"\u2026"+this.substr(this.length-rightHalf,rightHalf);}
String.prototype.trimEnd=function(maxLength)
{if(this.length<=maxLength)
return String(this);return this.substr(0,maxLength-1)+"\u2026";}
String.prototype.trimURL=function(baseURLDomain)
{var result=this.replace(/^(https|http|file):\/\//i,"");if(baseURLDomain){if(result.toLowerCase().startsWith(baseURLDomain.toLowerCase()))
result=result.substr(baseURLDomain.length);}
return result;}
String.prototype.toTitleCase=function()
{return this.substring(0,1).toUpperCase()+this.substring(1);}
String.prototype.compareTo=function(other)
{if(this>other)
return 1;if(this<other)
return-1;return 0;}
String.prototype.removeURLFragment=function()
{var fragmentIndex=this.indexOf("#");if(fragmentIndex===-1)
fragmentIndex=this.length;return this.substring(0,fragmentIndex);}
String.hashCode=function(string)
{if(!string)
return 0;var p=((1<<30)*4-5);var z=0x5033d967;var z2=0x59d2f15d;var s=0;var zi=1;for(var i=0;i<string.length;i++){var xi=string.charCodeAt(i)*z2;s=(s+zi*xi)%p;zi=(zi*z)%p;}
s=(s+zi*(p-1))%p;return Math.abs(s|0);}
String.isDigitAt=function(string,index)
{var c=string.charCodeAt(index);return(48<=c&&c<=57);}
String.prototype.toBase64=function()
{function encodeBits(b)
{return b<26?b+65:b<52?b+71:b<62?b-4:b===62?43:b===63?47:65;}
var encoder=new TextEncoder();var data=encoder.encode(this.toString());var n=data.length;var encoded="";if(n===0)
return encoded;var shift;var v=0;for(var i=0;i<n;i++){shift=i%3;v|=data[i]<<(16>>>shift&24);if(shift===2){encoded+=String.fromCharCode(encodeBits(v>>>18&63),encodeBits(v>>>12&63),encodeBits(v>>>6&63),encodeBits(v&63));v=0;}}
if(shift===0)
encoded+=String.fromCharCode(encodeBits(v>>>18&63),encodeBits(v>>>12&63),61,61);else if(shift===1)
encoded+=String.fromCharCode(encodeBits(v>>>18&63),encodeBits(v>>>12&63),encodeBits(v>>>6&63),61);return encoded;}
String.naturalOrderComparator=function(a,b)
{var chunk=/^\d+|^\D+/;var chunka,chunkb,anum,bnum;while(1){if(a){if(!b)
return 1;}else{if(b)
return-1;else
return 0;}
chunka=a.match(chunk)[0];chunkb=b.match(chunk)[0];anum=!isNaN(chunka);bnum=!isNaN(chunkb);if(anum&&!bnum)
return-1;if(bnum&&!anum)
return 1;if(anum&&bnum){var diff=chunka-chunkb;if(diff)
return diff;if(chunka.length!==chunkb.length){if(!+chunka&&!+chunkb)
return chunka.length-chunkb.length;else
return chunkb.length-chunka.length;}}else if(chunka!==chunkb)
return(chunka<chunkb)?-1:1;a=a.substring(chunka.length);b=b.substring(chunkb.length);}}
String.caseInsensetiveComparator=function(a,b)
{a=a.toUpperCase();b=b.toUpperCase();if(a===b)
return 0;return a>b?1:-1;}
Number.constrain=function(num,min,max)
{if(num<min)
num=min;else if(num>max)
num=max;return num;}
Number.gcd=function(a,b)
{if(b===0)
return a;else
return Number.gcd(b,a%b);}
Number.toFixedIfFloating=function(value)
{if(!value||isNaN(value))
return value;var number=Number(value);return number%1?number.toFixed(3):String(number);}
Date.prototype.toISO8601Compact=function()
{function leadZero(x)
{return(x>9?"":"0")+x;}
return this.getFullYear()+
leadZero(this.getMonth()+1)+
leadZero(this.getDate())+"T"+
leadZero(this.getHours())+
leadZero(this.getMinutes())+
leadZero(this.getSeconds());}
Date.prototype.toConsoleTime=function()
{function leadZero2(x)
{return(x>9?"":"0")+x;}
function leadZero3(x)
{return"0".repeat(3-x.toString().length)+x;}
return this.getFullYear()+"-"+
leadZero2(this.getMonth()+1)+"-"+
leadZero2(this.getDate())+" "+
leadZero2(this.getHours())+":"+
leadZero2(this.getMinutes())+":"+
leadZero2(this.getSeconds())+"."+
leadZero3(this.getMilliseconds());}
Object.defineProperty(Array.prototype,"remove",{value:function(value,firstOnly)
{var index=this.indexOf(value);if(index===-1)
return false;if(firstOnly){this.splice(index,1);return true;}
for(var i=index+1,n=this.length;i<n;++i){if(this[i]!==value)
this[index++]=this[i];}
this.length=index;return true;}});Object.defineProperty(Array.prototype,"pushAll",{value:function(array)
{Array.prototype.push.apply(this,array);}});Object.defineProperty(Array.prototype,"rotate",{value:function(index)
{var result=[];for(var i=index;i<index+this.length;++i)
result.push(this[i%this.length]);return result;}});Object.defineProperty(Array.prototype,"sortNumbers",{value:function()
{function numericComparator(a,b)
{return a-b;}
this.sort(numericComparator);}});Object.defineProperty(Uint32Array.prototype,"sort",{value:Array.prototype.sort});(function(){var partition={value:function(comparator,left,right,pivotIndex)
{function swap(array,i1,i2)
{var temp=array[i1];array[i1]=array[i2];array[i2]=temp;}
var pivotValue=this[pivotIndex];swap(this,right,pivotIndex);var storeIndex=left;for(var i=left;i<right;++i){if(comparator(this[i],pivotValue)<0){swap(this,storeIndex,i);++storeIndex;}}
swap(this,right,storeIndex);return storeIndex;}};Object.defineProperty(Array.prototype,"partition",partition);Object.defineProperty(Uint32Array.prototype,"partition",partition);var sortRange={value:function(comparator,leftBound,rightBound,sortWindowLeft,sortWindowRight)
{function quickSortRange(array,comparator,left,right,sortWindowLeft,sortWindowRight)
{if(right<=left)
return;var pivotIndex=Math.floor(Math.random()*(right-left))+left;var pivotNewIndex=array.partition(comparator,left,right,pivotIndex);if(sortWindowLeft<pivotNewIndex)
quickSortRange(array,comparator,left,pivotNewIndex-1,sortWindowLeft,sortWindowRight);if(pivotNewIndex<sortWindowRight)
quickSortRange(array,comparator,pivotNewIndex+1,right,sortWindowLeft,sortWindowRight);}
if(leftBound===0&&rightBound===(this.length-1)&&sortWindowLeft===0&&sortWindowRight>=rightBound)
this.sort(comparator);else
quickSortRange(this,comparator,leftBound,rightBound,sortWindowLeft,sortWindowRight);return this;}}
Object.defineProperty(Array.prototype,"sortRange",sortRange);Object.defineProperty(Uint32Array.prototype,"sortRange",sortRange);})();Object.defineProperty(Array.prototype,"stableSort",{value:function(comparator)
{function defaultComparator(a,b)
{return a<b?-1:(a>b?1:0);}
comparator=comparator||defaultComparator;var indices=new Array(this.length);for(var i=0;i<this.length;++i)
indices[i]=i;var self=this;function indexComparator(a,b)
{var result=comparator(self[a],self[b]);return result?result:a-b;}
indices.sort(indexComparator);for(var i=0;i<this.length;++i){if(indices[i]<0||i===indices[i])
continue;var cyclical=i;var saved=this[i];while(true){var next=indices[cyclical];indices[cyclical]=-1;if(next===i){this[cyclical]=saved;break;}else{this[cyclical]=this[next];cyclical=next;}}}
return this;}});Object.defineProperty(Array.prototype,"qselect",{value:function(k,comparator)
{if(k<0||k>=this.length)
return;if(!comparator)
comparator=function(a,b){return a-b;}
var low=0;var high=this.length-1;for(;;){var pivotPosition=this.partition(comparator,low,high,Math.floor((high+low)/2));if(pivotPosition===k)
return this[k];else if(pivotPosition>k)
high=pivotPosition-1;else
low=pivotPosition+1;}}});Object.defineProperty(Array.prototype,"lowerBound",{value:function(object,comparator,left,right)
{function defaultComparator(a,b)
{return a<b?-1:(a>b?1:0);}
comparator=comparator||defaultComparator;var l=left||0;var r=right!==undefined?right:this.length;while(l<r){var m=(l+r)>>1;if(comparator(object,this[m])>0)
l=m+1;else
r=m;}
return r;}});Object.defineProperty(Array.prototype,"upperBound",{value:function(object,comparator,left,right)
{function defaultComparator(a,b)
{return a<b?-1:(a>b?1:0);}
comparator=comparator||defaultComparator;var l=left||0;var r=right!==undefined?right:this.length;while(l<r){var m=(l+r)>>1;if(comparator(object,this[m])>=0)
l=m+1;else
r=m;}
return r;}});Object.defineProperty(Uint32Array.prototype,"lowerBound",{value:Array.prototype.lowerBound});Object.defineProperty(Uint32Array.prototype,"upperBound",{value:Array.prototype.upperBound});Object.defineProperty(Float64Array.prototype,"lowerBound",{value:Array.prototype.lowerBound});Object.defineProperty(Array.prototype,"binaryIndexOf",{value:function(value,comparator)
{var index=this.lowerBound(value,comparator);return index<this.length&&comparator(value,this[index])===0?index:-1;}});Object.defineProperty(Array.prototype,"select",{value:function(field)
{var result=new Array(this.length);for(var i=0;i<this.length;++i)
result[i]=this[i][field];return result;}});Object.defineProperty(Array.prototype,"peekLast",{value:function()
{return this[this.length-1];}});(function(){function mergeOrIntersect(array1,array2,comparator,mergeNotIntersect)
{var result=[];var i=0;var j=0;while(i<array1.length&&j<array2.length){var compareValue=comparator(array1[i],array2[j]);if(mergeNotIntersect||!compareValue)
result.push(compareValue<=0?array1[i]:array2[j]);if(compareValue<=0)
i++;if(compareValue>=0)
j++;}
if(mergeNotIntersect){while(i<array1.length)
result.push(array1[i++]);while(j<array2.length)
result.push(array2[j++]);}
return result;}
Object.defineProperty(Array.prototype,"intersectOrdered",{value:function(array,comparator)
{return mergeOrIntersect(this,array,comparator,false);}});Object.defineProperty(Array.prototype,"mergeOrdered",{value:function(array,comparator)
{return mergeOrIntersect(this,array,comparator,true);}});})();String.sprintf=function(format,var_arg)
{return String.vsprintf(format,Array.prototype.slice.call(arguments,1));}
String.tokenizeFormatString=function(format,formatters)
{var tokens=[];var substitutionIndex=0;function addStringToken(str)
{if(tokens.length&&tokens[tokens.length-1].type==="string")
tokens[tokens.length-1].value+=str;else
tokens.push({type:"string",value:str});}
function addSpecifierToken(specifier,precision,substitutionIndex)
{tokens.push({type:"specifier",specifier:specifier,precision:precision,substitutionIndex:substitutionIndex});}
var index=0;for(var precentIndex=format.indexOf("%",index);precentIndex!==-1;precentIndex=format.indexOf("%",index)){if(format.length===index)
break;addStringToken(format.substring(index,precentIndex));index=precentIndex+1;if(format[index]==="%"){addStringToken("%");++index;continue;}
if(String.isDigitAt(format,index)){var number=parseInt(format.substring(index),10);while(String.isDigitAt(format,index))
++index;if(number>0&&format[index]==="$"){substitutionIndex=(number-1);++index;}}
var precision=-1;if(format[index]==="."){++index;precision=parseInt(format.substring(index),10);if(isNaN(precision))
precision=0;while(String.isDigitAt(format,index))
++index;}
if(!(format[index]in formatters)){addStringToken(format.substring(precentIndex,index+1));++index;continue;}
addSpecifierToken(format[index],precision,substitutionIndex);++substitutionIndex;++index;}
addStringToken(format.substring(index));return tokens;}
String.standardFormatters={d:function(substitution)
{return!isNaN(substitution)?substitution:0;},f:function(substitution,token)
{if(substitution&&token.precision>-1)
substitution=substitution.toFixed(token.precision);return!isNaN(substitution)?substitution:(token.precision>-1?Number(0).toFixed(token.precision):0);},s:function(substitution)
{return substitution;}}
String.vsprintf=function(format,substitutions)
{return String.format(format,substitutions,String.standardFormatters,"",function(a,b){return a+b;}).formattedResult;}
String.format=function(format,substitutions,formatters,initialValue,append,tokenizedFormat)
{if(!format||!substitutions||!substitutions.length)
return{formattedResult:append(initialValue,format),unusedSubstitutions:substitutions};function prettyFunctionName()
{return"String.format(\""+format+"\", \""+Array.prototype.join.call(substitutions,"\", \"")+"\")";}
function warn(msg)
{console.warn(prettyFunctionName()+": "+msg);}
function error(msg)
{console.error(prettyFunctionName()+": "+msg);}
var result=initialValue;var tokens=tokenizedFormat||String.tokenizeFormatString(format,formatters);var usedSubstitutionIndexes={};for(var i=0;i<tokens.length;++i){var token=tokens[i];if(token.type==="string"){result=append(result,token.value);continue;}
if(token.type!=="specifier"){error("Unknown token type \""+token.type+"\" found.");continue;}
if(token.substitutionIndex>=substitutions.length){error("not enough substitution arguments. Had "+substitutions.length+" but needed "+(token.substitutionIndex+1)+", so substitution was skipped.");result=append(result,"%"+(token.precision>-1?token.precision:"")+token.specifier);continue;}
usedSubstitutionIndexes[token.substitutionIndex]=true;if(!(token.specifier in formatters)){warn("unsupported format character \u201C"+token.specifier+"\u201D. Treating as a string.");result=append(result,substitutions[token.substitutionIndex]);continue;}
result=append(result,formatters[token.specifier](substitutions[token.substitutionIndex],token));}
var unusedSubstitutions=[];for(var i=0;i<substitutions.length;++i){if(i in usedSubstitutionIndexes)
continue;unusedSubstitutions.push(substitutions[i]);}
return{formattedResult:result,unusedSubstitutions:unusedSubstitutions};}
function createSearchRegex(query,caseSensitive,isRegex)
{var regexFlags=caseSensitive?"g":"gi";var regexObject;if(isRegex){try{regexObject=new RegExp(query,regexFlags);}catch(e){}}
if(!regexObject)
regexObject=createPlainTextSearchRegex(query,regexFlags);return regexObject;}
function createPlainTextSearchRegex(query,flags)
{var regexSpecialCharacters=String.regexSpecialCharacters();var regex="";for(var i=0;i<query.length;++i){var c=query.charAt(i);if(regexSpecialCharacters.indexOf(c)!==-1)
regex+="\\";regex+=c;}
return new RegExp(regex,flags||"");}
function countRegexMatches(regex,content)
{var text=content;var result=0;var match;while(text&&(match=regex.exec(text))){if(match[0].length>0)
++result;text=text.substring(match.index+1);}
return result;}
function spacesPadding(spacesCount)
{return"\u00a0".repeat(spacesCount);}
function numberToStringWithSpacesPadding(value,symbolsCount)
{var numberString=value.toString();var paddingLength=Math.max(0,symbolsCount-numberString.length);return spacesPadding(paddingLength)+numberString;}
Set.prototype.valuesArray=function()
{return Array.from(this.values());}
Set.prototype.addAll=function(iterable)
{for(var e of iterable)
this.add(e);}
Set.prototype.containsAll=function(iterable)
{for(var e of iterable){if(!this.has(e))
return false;}
return true;}
Map.prototype.remove=function(key)
{var value=this.get(key);this.delete(key);return value;}
Map.prototype.valuesArray=function()
{return Array.from(this.values());}
Map.prototype.keysArray=function()
{return Array.from(this.keys());}
Map.prototype.inverse=function()
{var result=new Multimap();for(var key of this.keys()){var value=this.get(key);result.set(value,key);}
return result;}
var Multimap=function()
{this._map=new Map();}
Multimap.prototype={set:function(key,value)
{var set=this._map.get(key);if(!set){set=new Set();this._map.set(key,set);}
set.add(value);},get:function(key)
{var result=this._map.get(key);if(!result)
result=new Set();return result;},has:function(key)
{return this._map.has(key);},hasValue:function(key,value)
{var set=this._map.get(key);if(!set)
return false;return set.has(value);},get size()
{return this._map.size;},remove:function(key,value)
{var values=this.get(key);values.delete(value);if(!values.size)
this._map.delete(key);},removeAll:function(key)
{this._map.delete(key);},keysArray:function()
{return this._map.keysArray();},valuesArray:function()
{var result=[];var keys=this.keysArray();for(var i=0;i<keys.length;++i)
result.pushAll(this.get(keys[i]).valuesArray());return result;},clear:function()
{this._map.clear();}}
function loadXHR(url)
{return new Promise(load);function load(successCallback,failureCallback)
{function onReadyStateChanged()
{if(xhr.readyState!==XMLHttpRequest.DONE)
return;if(xhr.status!==200){xhr.onreadystatechange=null;failureCallback(new Error(xhr.status));return;}
xhr.onreadystatechange=null;successCallback(xhr.responseText);}
var xhr=new XMLHttpRequest();xhr.withCredentials=false;xhr.open("GET",url,true);xhr.onreadystatechange=onReadyStateChanged;xhr.send(null);}}
function CallbackBarrier()
{this._pendingIncomingCallbacksCount=0;}
CallbackBarrier.prototype={createCallback:function(userCallback)
{console.assert(!this._outgoingCallback,"CallbackBarrier.createCallback() is called after CallbackBarrier.callWhenDone()");++this._pendingIncomingCallbacksCount;return this._incomingCallback.bind(this,userCallback);},callWhenDone:function(callback)
{console.assert(!this._outgoingCallback,"CallbackBarrier.callWhenDone() is called multiple times");this._outgoingCallback=callback;if(!this._pendingIncomingCallbacksCount)
this._outgoingCallback();},donePromise:function()
{return new Promise(promiseConstructor.bind(this));function promiseConstructor(success)
{this.callWhenDone(success);}},_incomingCallback:function(userCallback)
{console.assert(this._pendingIncomingCallbacksCount>0);if(userCallback){var args=Array.prototype.slice.call(arguments,1);userCallback.apply(null,args);}
if(!--this._pendingIncomingCallbacksCount&&this._outgoingCallback)
this._outgoingCallback();}}
function suppressUnused(value)
{}
self.setImmediate=function(callback)
{Promise.resolve().then(callback);return 0;}
Promise.prototype.spread=function(callback)
{return this.then(spreadPromise);function spreadPromise(arg)
{return callback.apply(null,arg);}}
Promise.prototype.catchException=function(defaultValue){return this.catch(function(error){console.error(error);return defaultValue;});}
Map.prototype.diff=function(other,isEqual)
{var leftKeys=this.keysArray();var rightKeys=other.keysArray();leftKeys.sort((a,b)=>a-b);rightKeys.sort((a,b)=>a-b);var removed=[];var added=[];var equal=[];var leftIndex=0;var rightIndex=0;while(leftIndex<leftKeys.length&&rightIndex<rightKeys.length){var leftKey=leftKeys[leftIndex];var rightKey=rightKeys[rightIndex];if(leftKey===rightKey&&isEqual(this.get(leftKey),other.get(rightKey))){equal.push(this.get(leftKey));++leftIndex;++rightIndex;continue;}
if(leftKey<=rightKey){removed.push(this.get(leftKey));++leftIndex;continue;}
added.push(other.get(rightKey));++rightIndex;}
while(leftIndex<leftKeys.length){var leftKey=leftKeys[leftIndex++];removed.push(this.get(leftKey));}
while(rightIndex<rightKeys.length){var rightKey=rightKeys[rightIndex++];added.push(other.get(rightKey));}
return{added:added,removed:removed,equal:equal}};(function(window){window.CodeMirror={};(function(){"use strict";function splitLines(string){return string.split(/\r?\n|\r/);};function StringStream(string){this.pos=this.start=0;this.string=string;this.lineStart=0;}
StringStream.prototype={eol:function(){return this.pos>=this.string.length;},sol:function(){return this.pos==0;},peek:function(){return this.string.charAt(this.pos)||null;},next:function(){if(this.pos<this.string.length)
return this.string.charAt(this.pos++);},eat:function(match){var ch=this.string.charAt(this.pos);if(typeof match=="string")var ok=ch==match;else var ok=ch&&(match.test?match.test(ch):match(ch));if(ok){++this.pos;return ch;}},eatWhile:function(match){var start=this.pos;while(this.eat(match)){}
return this.pos>start;},eatSpace:function(){var start=this.pos;while(/[\s\u00a0]/.test(this.string.charAt(this.pos)))++this.pos;return this.pos>start;},skipToEnd:function(){this.pos=this.string.length;},skipTo:function(ch){var found=this.string.indexOf(ch,this.pos);if(found>-1){this.pos=found;return true;}},backUp:function(n){this.pos-=n;},column:function(){return this.start-this.lineStart;},indentation:function(){return 0;},match:function(pattern,consume,caseInsensitive){if(typeof pattern=="string"){var cased=function(str){return caseInsensitive?str.toLowerCase():str;};var substr=this.string.substr(this.pos,pattern.length);if(cased(substr)==cased(pattern)){if(consume!==false)this.pos+=pattern.length;return true;}}else{var match=this.string.slice(this.pos).match(pattern);if(match&&match.index>0)return null;if(match&&consume!==false)this.pos+=match[0].length;return match;}},current:function(){return this.string.slice(this.start,this.pos);},hideFirstChars:function(n,inner){this.lineStart+=n;try{return inner();}
finally{this.lineStart-=n;}}};CodeMirror.StringStream=StringStream;CodeMirror.startState=function(mode,a1,a2){return mode.startState?mode.startState(a1,a2):true;};var modes=CodeMirror.modes={},mimeModes=CodeMirror.mimeModes={};CodeMirror.defineMode=function(name,mode){if(arguments.length>2)
mode.dependencies=Array.prototype.slice.call(arguments,2);modes[name]=mode;};CodeMirror.defineMIME=function(mime,spec){mimeModes[mime]=spec;};CodeMirror.resolveMode=function(spec){if(typeof spec=="string"&&mimeModes.hasOwnProperty(spec)){spec=mimeModes[spec];}else if(spec&&typeof spec.name=="string"&&mimeModes.hasOwnProperty(spec.name)){spec=mimeModes[spec.name];}
if(typeof spec=="string")return{name:spec};else return spec||{name:"null"};};CodeMirror.getMode=function(options,spec){spec=CodeMirror.resolveMode(spec);var mfactory=modes[spec.name];if(!mfactory)throw new Error("Unknown mode: "+spec);return mfactory(options,spec);};CodeMirror.registerHelper=CodeMirror.registerGlobalHelper=Math.min;CodeMirror.defineMode("null",function(){return{token:function(stream){stream.skipToEnd();}};});CodeMirror.defineMIME("text/plain","null");CodeMirror.runMode=function(string,modespec,callback,options){var mode=CodeMirror.getMode({indentUnit:2},modespec);if(callback.nodeType==1){var tabSize=(options&&options.tabSize)||4;var node=callback,col=0;node.innerHTML="";callback=function(text,style){if(text=="\n"){node.appendChild(document.createElement("br"));col=0;return;}
var content="";for(var pos=0;;){var idx=text.indexOf("\t",pos);if(idx==-1){content+=text.slice(pos);col+=text.length-pos;break;}else{col+=idx-pos;content+=text.slice(pos,idx);var size=tabSize-col%tabSize;col+=size;for(var i=0;i<size;++i)content+=" ";pos=idx+1;}}
if(style){var sp=node.appendChild(document.createElement("span"));sp.className="cm-"+style.replace(/ +/g," cm-");sp.appendChild(document.createTextNode(content));}else{node.appendChild(document.createTextNode(content));}};}
var lines=splitLines(string),state=(options&&options.state)||CodeMirror.startState(mode);for(var i=0,e=lines.length;i<e;++i){if(i)callback("\n");var stream=new CodeMirror.StringStream(lines[i]);if(!stream.string&&mode.blankLine)mode.blankLine(state);while(!stream.eol()){var style=mode.token(stream,state);callback(stream.current(),style,i,stream.start,state);stream.start=stream.pos;}}};})();}(this));(function(mod){if(typeof exports=="object"&&typeof module=="object")
mod(require("../../lib/codemirror"));else if(typeof define=="function"&&define.amd)
define(["../../lib/codemirror"],mod);else
mod(CodeMirror);})(function(CodeMirror){"use strict";CodeMirror.defineMode("css",function(config,parserConfig){var inline=parserConfig.inline
if(!parserConfig.propertyKeywords)parserConfig=CodeMirror.resolveMode("text/css");var indentUnit=config.indentUnit,tokenHooks=parserConfig.tokenHooks,documentTypes=parserConfig.documentTypes||{},mediaTypes=parserConfig.mediaTypes||{},mediaFeatures=parserConfig.mediaFeatures||{},mediaValueKeywords=parserConfig.mediaValueKeywords||{},propertyKeywords=parserConfig.propertyKeywords||{},nonStandardPropertyKeywords=parserConfig.nonStandardPropertyKeywords||{},fontProperties=parserConfig.fontProperties||{},counterDescriptors=parserConfig.counterDescriptors||{},colorKeywords=parserConfig.colorKeywords||{},valueKeywords=parserConfig.valueKeywords||{},allowNested=parserConfig.allowNested,supportsAtComponent=parserConfig.supportsAtComponent===true;var type,override;function ret(style,tp){type=tp;return style;}
function tokenBase(stream,state){var ch=stream.next();if(tokenHooks[ch]){var result=tokenHooks[ch](stream,state);if(result!==false)return result;}
if(ch=="@"){stream.eatWhile(/[\w\\\-]/);return ret("def",stream.current());}else if(ch=="="||(ch=="~"||ch=="|")&&stream.eat("=")){return ret(null,"compare");}else if(ch=="\""||ch=="'"){state.tokenize=tokenString(ch);return state.tokenize(stream,state);}else if(ch=="#"){stream.eatWhile(/[\w\\\-]/);return ret("atom","hash");}else if(ch=="!"){stream.match(/^\s*\w*/);return ret("keyword","important");}else if(/\d/.test(ch)||ch=="."&&stream.eat(/\d/)){stream.eatWhile(/[\w.%]/);return ret("number","unit");}else if(ch==="-"){if(/[\d.]/.test(stream.peek())){stream.eatWhile(/[\w.%]/);return ret("number","unit");}else if(stream.match(/^-[\w\\\-]+/)){stream.eatWhile(/[\w\\\-]/);if(stream.match(/^\s*:/,false))
return ret("variable-2","variable-definition");return ret("variable-2","variable");}else if(stream.match(/^\w+-/)){return ret("meta","meta");}}else if(/[,+>*\/]/.test(ch)){return ret(null,"select-op");}else if(ch=="."&&stream.match(/^-?[_a-z][_a-z0-9-]*/i)){return ret("qualifier","qualifier");}else if(/[:;{}\[\]\(\)]/.test(ch)){return ret(null,ch);}else if((ch=="u"&&stream.match(/rl(-prefix)?\(/))||(ch=="d"&&stream.match("omain("))||(ch=="r"&&stream.match("egexp("))){stream.backUp(1);state.tokenize=tokenParenthesized;return ret("property","word");}else if(/[\w\\\-]/.test(ch)){stream.eatWhile(/[\w\\\-]/);return ret("property","word");}else{return ret(null,null);}}
function tokenString(quote){return function(stream,state){var escaped=false,ch;while((ch=stream.next())!=null){if(ch==quote&&!escaped){if(quote==")")stream.backUp(1);break;}
escaped=!escaped&&ch=="\\";}
if(ch==quote||!escaped&&quote!=")")state.tokenize=null;return ret("string","string");};}
function tokenParenthesized(stream,state){stream.next();if(!stream.match(/\s*[\"\')]/,false))
state.tokenize=tokenString(")");else
state.tokenize=null;return ret(null,"(");}
function Context(type,indent,prev){this.type=type;this.indent=indent;this.prev=prev;}
function pushContext(state,stream,type,indent){state.context=new Context(type,stream.indentation()+(indent===false?0:indentUnit),state.context);return type;}
function popContext(state){if(state.context.prev)
state.context=state.context.prev;return state.context.type;}
function pass(type,stream,state){return states[state.context.type](type,stream,state);}
function popAndPass(type,stream,state,n){for(var i=n||1;i>0;i--)
state.context=state.context.prev;return pass(type,stream,state);}
function wordAsValue(stream){var word=stream.current().toLowerCase();if(valueKeywords.hasOwnProperty(word))
override="atom";else if(colorKeywords.hasOwnProperty(word))
override="keyword";else
override="variable";}
var states={};states.top=function(type,stream,state){if(type=="{"){return pushContext(state,stream,"block");}else if(type=="}"&&state.context.prev){return popContext(state);}else if(supportsAtComponent&&/@component/.test(type)){return pushContext(state,stream,"atComponentBlock");}else if(/^@(-moz-)?document$/.test(type)){return pushContext(state,stream,"documentTypes");}else if(/^@(media|supports|(-moz-)?document|import)$/.test(type)){return pushContext(state,stream,"atBlock");}else if(/^@(font-face|counter-style)/.test(type)){state.stateArg=type;return"restricted_atBlock_before";}else if(/^@(-(moz|ms|o|webkit)-)?keyframes$/.test(type)){return"keyframes";}else if(type&&type.charAt(0)=="@"){return pushContext(state,stream,"at");}else if(type=="hash"){override="builtin";}else if(type=="word"){override="tag";}else if(type=="variable-definition"){return"maybeprop";}else if(type=="interpolation"){return pushContext(state,stream,"interpolation");}else if(type==":"){return"pseudo";}else if(allowNested&&type=="("){return pushContext(state,stream,"parens");}
return state.context.type;};states.block=function(type,stream,state){if(type=="word"){var word=stream.current().toLowerCase();if(propertyKeywords.hasOwnProperty(word)){override="property";return"maybeprop";}else if(nonStandardPropertyKeywords.hasOwnProperty(word)){override="string-2";return"maybeprop";}else if(allowNested){override=stream.match(/^\s*:(?:\s|$)/,false)?"property":"tag";return"block";}else{override+=" error";return"maybeprop";}}else if(type=="meta"){return"block";}else if(!allowNested&&(type=="hash"||type=="qualifier")){override="error";return"block";}else{return states.top(type,stream,state);}};states.maybeprop=function(type,stream,state){if(type==":")return pushContext(state,stream,"prop");return pass(type,stream,state);};states.prop=function(type,stream,state){if(type==";")return popContext(state);if(type=="{"&&allowNested)return pushContext(state,stream,"propBlock");if(type=="}"||type=="{")return popAndPass(type,stream,state);if(type=="(")return pushContext(state,stream,"parens");if(type=="hash"&&!/^#([0-9a-fA-f]{3,4}|[0-9a-fA-f]{6}|[0-9a-fA-f]{8})$/.test(stream.current())){override+=" error";}else if(type=="word"){wordAsValue(stream);}else if(type=="interpolation"){return pushContext(state,stream,"interpolation");}
return"prop";};states.propBlock=function(type,_stream,state){if(type=="}")return popContext(state);if(type=="word"){override="property";return"maybeprop";}
return state.context.type;};states.parens=function(type,stream,state){if(type=="{"||type=="}")return popAndPass(type,stream,state);if(type==")")return popContext(state);if(type=="(")return pushContext(state,stream,"parens");if(type=="interpolation")return pushContext(state,stream,"interpolation");if(type=="word")wordAsValue(stream);return"parens";};states.pseudo=function(type,stream,state){if(type=="word"){override="variable-3";return state.context.type;}
return pass(type,stream,state);};states.documentTypes=function(type,stream,state){if(type=="word"&&documentTypes.hasOwnProperty(stream.current())){override="tag";return state.context.type;}else{return states.atBlock(type,stream,state);}};states.atBlock=function(type,stream,state){if(type=="(")return pushContext(state,stream,"atBlock_parens");if(type=="}"||type==";")return popAndPass(type,stream,state);if(type=="{")return popContext(state)&&pushContext(state,stream,allowNested?"block":"top");if(type=="interpolation")return pushContext(state,stream,"interpolation");if(type=="word"){var word=stream.current().toLowerCase();if(word=="only"||word=="not"||word=="and"||word=="or")
override="keyword";else if(mediaTypes.hasOwnProperty(word))
override="attribute";else if(mediaFeatures.hasOwnProperty(word))
override="property";else if(mediaValueKeywords.hasOwnProperty(word))
override="keyword";else if(propertyKeywords.hasOwnProperty(word))
override="property";else if(nonStandardPropertyKeywords.hasOwnProperty(word))
override="string-2";else if(valueKeywords.hasOwnProperty(word))
override="atom";else if(colorKeywords.hasOwnProperty(word))
override="keyword";else
override="error";}
return state.context.type;};states.atComponentBlock=function(type,stream,state){if(type=="}")
return popAndPass(type,stream,state);if(type=="{")
return popContext(state)&&pushContext(state,stream,allowNested?"block":"top",false);if(type=="word")
override="error";return state.context.type;};states.atBlock_parens=function(type,stream,state){if(type==")")return popContext(state);if(type=="{"||type=="}")return popAndPass(type,stream,state,2);return states.atBlock(type,stream,state);};states.restricted_atBlock_before=function(type,stream,state){if(type=="{")
return pushContext(state,stream,"restricted_atBlock");if(type=="word"&&state.stateArg=="@counter-style"){override="variable";return"restricted_atBlock_before";}
return pass(type,stream,state);};states.restricted_atBlock=function(type,stream,state){if(type=="}"){state.stateArg=null;return popContext(state);}
if(type=="word"){if((state.stateArg=="@font-face"&&!fontProperties.hasOwnProperty(stream.current().toLowerCase()))||(state.stateArg=="@counter-style"&&!counterDescriptors.hasOwnProperty(stream.current().toLowerCase())))
override="error";else
override="property";return"maybeprop";}
return"restricted_atBlock";};states.keyframes=function(type,stream,state){if(type=="word"){override="variable";return"keyframes";}
if(type=="{")return pushContext(state,stream,"top");return pass(type,stream,state);};states.at=function(type,stream,state){if(type==";")return popContext(state);if(type=="{"||type=="}")return popAndPass(type,stream,state);if(type=="word")override="tag";else if(type=="hash")override="builtin";return"at";};states.interpolation=function(type,stream,state){if(type=="}")return popContext(state);if(type=="{"||type==";")return popAndPass(type,stream,state);if(type=="word")override="variable";else if(type!="variable"&&type!="("&&type!=")")override="error";return"interpolation";};return{startState:function(base){return{tokenize:null,state:inline?"block":"top",stateArg:null,context:new Context(inline?"block":"top",base||0,null)};},token:function(stream,state){if(!state.tokenize&&stream.eatSpace())return null;var style=(state.tokenize||tokenBase)(stream,state);if(style&&typeof style=="object"){type=style[1];style=style[0];}
override=style;state.state=states[state.state](type,stream,state);return override;},indent:function(state,textAfter){var cx=state.context,ch=textAfter&&textAfter.charAt(0);var indent=cx.indent;if(cx.type=="prop"&&(ch=="}"||ch==")"))cx=cx.prev;if(cx.prev){if(ch=="}"&&(cx.type=="block"||cx.type=="top"||cx.type=="interpolation"||cx.type=="restricted_atBlock")){cx=cx.prev;indent=cx.indent;}else if(ch==")"&&(cx.type=="parens"||cx.type=="atBlock_parens")||ch=="{"&&(cx.type=="at"||cx.type=="atBlock")){indent=Math.max(0,cx.indent-indentUnit);cx=cx.prev;}}
return indent;},electricChars:"}",blockCommentStart:"/*",blockCommentEnd:"*/",fold:"brace"};});function keySet(array){var keys={};for(var i=0;i<array.length;++i){keys[array[i]]=true;}
return keys;}
var documentTypes_=["domain","regexp","url","url-prefix"],documentTypes=keySet(documentTypes_);var mediaTypes_=["all","aural","braille","handheld","print","projection","screen","tty","tv","embossed"],mediaTypes=keySet(mediaTypes_);var mediaFeatures_=["width","min-width","max-width","height","min-height","max-height","device-width","min-device-width","max-device-width","device-height","min-device-height","max-device-height","aspect-ratio","min-aspect-ratio","max-aspect-ratio","device-aspect-ratio","min-device-aspect-ratio","max-device-aspect-ratio","color","min-color","max-color","color-index","min-color-index","max-color-index","monochrome","min-monochrome","max-monochrome","resolution","min-resolution","max-resolution","scan","grid","orientation","device-pixel-ratio","min-device-pixel-ratio","max-device-pixel-ratio","pointer","any-pointer","hover","any-hover"],mediaFeatures=keySet(mediaFeatures_);var mediaValueKeywords_=["landscape","portrait","none","coarse","fine","on-demand","hover","interlace","progressive"],mediaValueKeywords=keySet(mediaValueKeywords_);var propertyKeywords_=["align-content","align-items","align-self","alignment-adjust","alignment-baseline","anchor-point","animation","animation-delay","animation-direction","animation-duration","animation-fill-mode","animation-iteration-count","animation-name","animation-play-state","animation-timing-function","appearance","azimuth","backface-visibility","background","background-attachment","background-blend-mode","background-clip","background-color","background-image","background-origin","background-position","background-repeat","background-size","baseline-shift","binding","bleed","bookmark-label","bookmark-level","bookmark-state","bookmark-target","border","border-bottom","border-bottom-color","border-bottom-left-radius","border-bottom-right-radius","border-bottom-style","border-bottom-width","border-collapse","border-color","border-image","border-image-outset","border-image-repeat","border-image-slice","border-image-source","border-image-width","border-left","border-left-color","border-left-style","border-left-width","border-radius","border-right","border-right-color","border-right-style","border-right-width","border-spacing","border-style","border-top","border-top-color","border-top-left-radius","border-top-right-radius","border-top-style","border-top-width","border-width","bottom","box-decoration-break","box-shadow","box-sizing","break-after","break-before","break-inside","caption-side","clear","clip","color","color-profile","column-count","column-fill","column-gap","column-rule","column-rule-color","column-rule-style","column-rule-width","column-span","column-width","columns","content","counter-increment","counter-reset","crop","cue","cue-after","cue-before","cursor","direction","display","dominant-baseline","drop-initial-after-adjust","drop-initial-after-align","drop-initial-before-adjust","drop-initial-before-align","drop-initial-size","drop-initial-value","elevation","empty-cells","fit","fit-position","flex","flex-basis","flex-direction","flex-flow","flex-grow","flex-shrink","flex-wrap","float","float-offset","flow-from","flow-into","font","font-feature-settings","font-family","font-kerning","font-language-override","font-size","font-size-adjust","font-stretch","font-style","font-synthesis","font-variant","font-variant-alternates","font-variant-caps","font-variant-east-asian","font-variant-ligatures","font-variant-numeric","font-variant-position","font-weight","grid","grid-area","grid-auto-columns","grid-auto-flow","grid-auto-rows","grid-column","grid-column-end","grid-column-gap","grid-column-start","grid-gap","grid-row","grid-row-end","grid-row-gap","grid-row-start","grid-template","grid-template-areas","grid-template-columns","grid-template-rows","hanging-punctuation","height","hyphens","icon","image-orientation","image-rendering","image-resolution","inline-box-align","justify-content","left","letter-spacing","line-break","line-height","line-stacking","line-stacking-ruby","line-stacking-shift","line-stacking-strategy","list-style","list-style-image","list-style-position","list-style-type","margin","margin-bottom","margin-left","margin-right","margin-top","marker-offset","marks","marquee-direction","marquee-loop","marquee-play-count","marquee-speed","marquee-style","max-height","max-width","min-height","min-width","move-to","nav-down","nav-index","nav-left","nav-right","nav-up","object-fit","object-position","opacity","order","orphans","outline","outline-color","outline-offset","outline-style","outline-width","overflow","overflow-style","overflow-wrap","overflow-x","overflow-y","padding","padding-bottom","padding-left","padding-right","padding-top","page","page-break-after","page-break-before","page-break-inside","page-policy","pause","pause-after","pause-before","perspective","perspective-origin","pitch","pitch-range","play-during","position","presentation-level","punctuation-trim","quotes","region-break-after","region-break-before","region-break-inside","region-fragment","rendering-intent","resize","rest","rest-after","rest-before","richness","right","rotation","rotation-point","ruby-align","ruby-overhang","ruby-position","ruby-span","shape-image-threshold","shape-inside","shape-margin","shape-outside","size","speak","speak-as","speak-header","speak-numeral","speak-punctuation","speech-rate","stress","string-set","tab-size","table-layout","target","target-name","target-new","target-position","text-align","text-align-last","text-decoration","text-decoration-color","text-decoration-line","text-decoration-skip","text-decoration-style","text-emphasis","text-emphasis-color","text-emphasis-position","text-emphasis-style","text-height","text-indent","text-justify","text-outline","text-overflow","text-shadow","text-size-adjust","text-space-collapse","text-transform","text-underline-position","text-wrap","top","transform","transform-origin","transform-style","transition","transition-delay","transition-duration","transition-property","transition-timing-function","unicode-bidi","vertical-align","visibility","voice-balance","voice-duration","voice-family","voice-pitch","voice-range","voice-rate","voice-stress","voice-volume","volume","white-space","widows","width","word-break","word-spacing","word-wrap","z-index","clip-path","clip-rule","mask","enable-background","filter","flood-color","flood-opacity","lighting-color","stop-color","stop-opacity","pointer-events","color-interpolation","color-interpolation-filters","color-rendering","fill","fill-opacity","fill-rule","image-rendering","marker","marker-end","marker-mid","marker-start","shape-rendering","stroke","stroke-dasharray","stroke-dashoffset","stroke-linecap","stroke-linejoin","stroke-miterlimit","stroke-opacity","stroke-width","text-rendering","baseline-shift","dominant-baseline","glyph-orientation-horizontal","glyph-orientation-vertical","text-anchor","writing-mode"],propertyKeywords=keySet(propertyKeywords_);var nonStandardPropertyKeywords_=["scrollbar-arrow-color","scrollbar-base-color","scrollbar-dark-shadow-color","scrollbar-face-color","scrollbar-highlight-color","scrollbar-shadow-color","scrollbar-3d-light-color","scrollbar-track-color","shape-inside","searchfield-cancel-button","searchfield-decoration","searchfield-results-button","searchfield-results-decoration","zoom"],nonStandardPropertyKeywords=keySet(nonStandardPropertyKeywords_);var fontProperties_=["font-family","src","unicode-range","font-variant","font-feature-settings","font-stretch","font-weight","font-style"],fontProperties=keySet(fontProperties_);var counterDescriptors_=["additive-symbols","fallback","negative","pad","prefix","range","speak-as","suffix","symbols","system"],counterDescriptors=keySet(counterDescriptors_);var colorKeywords_=["aliceblue","antiquewhite","aqua","aquamarine","azure","beige","bisque","black","blanchedalmond","blue","blueviolet","brown","burlywood","cadetblue","chartreuse","chocolate","coral","cornflowerblue","cornsilk","crimson","cyan","darkblue","darkcyan","darkgoldenrod","darkgray","darkgreen","darkkhaki","darkmagenta","darkolivegreen","darkorange","darkorchid","darkred","darksalmon","darkseagreen","darkslateblue","darkslategray","darkturquoise","darkviolet","deeppink","deepskyblue","dimgray","dodgerblue","firebrick","floralwhite","forestgreen","fuchsia","gainsboro","ghostwhite","gold","goldenrod","gray","grey","green","greenyellow","honeydew","hotpink","indianred","indigo","ivory","khaki","lavender","lavenderblush","lawngreen","lemonchiffon","lightblue","lightcoral","lightcyan","lightgoldenrodyellow","lightgray","lightgreen","lightpink","lightsalmon","lightseagreen","lightskyblue","lightslategray","lightsteelblue","lightyellow","lime","limegreen","linen","magenta","maroon","mediumaquamarine","mediumblue","mediumorchid","mediumpurple","mediumseagreen","mediumslateblue","mediumspringgreen","mediumturquoise","mediumvioletred","midnightblue","mintcream","mistyrose","moccasin","navajowhite","navy","oldlace","olive","olivedrab","orange","orangered","orchid","palegoldenrod","palegreen","paleturquoise","palevioletred","papayawhip","peachpuff","peru","pink","plum","powderblue","purple","rebeccapurple","red","rosybrown","royalblue","saddlebrown","salmon","sandybrown","seagreen","seashell","sienna","silver","skyblue","slateblue","slategray","snow","springgreen","steelblue","tan","teal","thistle","tomato","turquoise","violet","wheat","white","whitesmoke","yellow","yellowgreen"],colorKeywords=keySet(colorKeywords_);var valueKeywords_=["above","absolute","activeborder","additive","activecaption","afar","after-white-space","ahead","alias","all","all-scroll","alphabetic","alternate","always","amharic","amharic-abegede","antialiased","appworkspace","arabic-indic","armenian","asterisks","attr","auto","avoid","avoid-column","avoid-page","avoid-region","background","backwards","baseline","below","bidi-override","binary","bengali","blink","block","block-axis","bold","bolder","border","border-box","both","bottom","break","break-all","break-word","bullets","button","button-bevel","buttonface","buttonhighlight","buttonshadow","buttontext","calc","cambodian","capitalize","caps-lock-indicator","caption","captiontext","caret","cell","center","checkbox","circle","cjk-decimal","cjk-earthly-branch","cjk-heavenly-stem","cjk-ideographic","clear","clip","close-quote","col-resize","collapse","color","color-burn","color-dodge","column","column-reverse","compact","condensed","contain","content","content-box","context-menu","continuous","copy","counter","counters","cover","crop","cross","crosshair","currentcolor","cursive","cyclic","darken","dashed","decimal","decimal-leading-zero","default","default-button","dense","destination-atop","destination-in","destination-out","destination-over","devanagari","difference","disc","discard","disclosure-closed","disclosure-open","document","dot-dash","dot-dot-dash","dotted","double","down","e-resize","ease","ease-in","ease-in-out","ease-out","element","ellipse","ellipsis","embed","end","ethiopic","ethiopic-abegede","ethiopic-abegede-am-et","ethiopic-abegede-gez","ethiopic-abegede-ti-er","ethiopic-abegede-ti-et","ethiopic-halehame-aa-er","ethiopic-halehame-aa-et","ethiopic-halehame-am-et","ethiopic-halehame-gez","ethiopic-halehame-om-et","ethiopic-halehame-sid-et","ethiopic-halehame-so-et","ethiopic-halehame-ti-er","ethiopic-halehame-ti-et","ethiopic-halehame-tig","ethiopic-numeric","ew-resize","exclusion","expanded","extends","extra-condensed","extra-expanded","fantasy","fast","fill","fixed","flat","flex","flex-end","flex-start","footnotes","forwards","from","geometricPrecision","georgian","graytext","grid","groove","gujarati","gurmukhi","hand","hangul","hangul-consonant","hard-light","hebrew","help","hidden","hide","higher","highlight","highlighttext","hiragana","hiragana-iroha","horizontal","hsl","hsla","hue","icon","ignore","inactiveborder","inactivecaption","inactivecaptiontext","infinite","infobackground","infotext","inherit","initial","inline","inline-axis","inline-block","inline-flex","inline-grid","inline-table","inset","inside","intrinsic","invert","italic","japanese-formal","japanese-informal","justify","kannada","katakana","katakana-iroha","keep-all","khmer","korean-hangul-formal","korean-hanja-formal","korean-hanja-informal","landscape","lao","large","larger","left","level","lighter","lighten","line-through","linear","linear-gradient","lines","list-item","listbox","listitem","local","logical","loud","lower","lower-alpha","lower-armenian","lower-greek","lower-hexadecimal","lower-latin","lower-norwegian","lower-roman","lowercase","ltr","luminosity","malayalam","match","matrix","matrix3d","media-controls-background","media-current-time-display","media-fullscreen-button","media-mute-button","media-play-button","media-return-to-realtime-button","media-rewind-button","media-seek-back-button","media-seek-forward-button","media-slider","media-sliderthumb","media-time-remaining-display","media-volume-slider","media-volume-slider-container","media-volume-sliderthumb","medium","menu","menulist","menulist-button","menulist-text","menulist-textfield","menutext","message-box","middle","min-intrinsic","mix","mongolian","monospace","move","multiple","multiply","myanmar","n-resize","narrower","ne-resize","nesw-resize","no-close-quote","no-drop","no-open-quote","no-repeat","none","normal","not-allowed","nowrap","ns-resize","numbers","numeric","nw-resize","nwse-resize","oblique","octal","open-quote","optimizeLegibility","optimizeSpeed","oriya","oromo","outset","outside","outside-shape","overlay","overline","padding","padding-box","painted","page","paused","persian","perspective","plus-darker","plus-lighter","pointer","polygon","portrait","pre","pre-line","pre-wrap","preserve-3d","progress","push-button","radial-gradient","radio","read-only","read-write","read-write-plaintext-only","rectangle","region","relative","repeat","repeating-linear-gradient","repeating-radial-gradient","repeat-x","repeat-y","reset","reverse","rgb","rgba","ridge","right","rotate","rotate3d","rotateX","rotateY","rotateZ","round","row","row-resize","row-reverse","rtl","run-in","running","s-resize","sans-serif","saturation","scale","scale3d","scaleX","scaleY","scaleZ","screen","scroll","scrollbar","se-resize","searchfield","searchfield-cancel-button","searchfield-decoration","searchfield-results-button","searchfield-results-decoration","semi-condensed","semi-expanded","separate","serif","show","sidama","simp-chinese-formal","simp-chinese-informal","single","skew","skewX","skewY","skip-white-space","slide","slider-horizontal","slider-vertical","sliderthumb-horizontal","sliderthumb-vertical","slow","small","small-caps","small-caption","smaller","soft-light","solid","somali","source-atop","source-in","source-out","source-over","space","space-around","space-between","spell-out","square","square-button","start","static","status-bar","stretch","stroke","sub","subpixel-antialiased","super","sw-resize","symbolic","symbols","table","table-caption","table-cell","table-column","table-column-group","table-footer-group","table-header-group","table-row","table-row-group","tamil","telugu","text","text-bottom","text-top","textarea","textfield","thai","thick","thin","threeddarkshadow","threedface","threedhighlight","threedlightshadow","threedshadow","tibetan","tigre","tigrinya-er","tigrinya-er-abegede","tigrinya-et","tigrinya-et-abegede","to","top","trad-chinese-formal","trad-chinese-informal","translate","translate3d","translateX","translateY","translateZ","transparent","ultra-condensed","ultra-expanded","underline","up","upper-alpha","upper-armenian","upper-greek","upper-hexadecimal","upper-latin","upper-norwegian","upper-roman","uppercase","urdu","url","var","vertical","vertical-text","visible","visibleFill","visiblePainted","visibleStroke","visual","w-resize","wait","wave","wider","window","windowframe","windowtext","words","wrap","wrap-reverse","x-large","x-small","xor","xx-large","xx-small"],valueKeywords=keySet(valueKeywords_);var allWords=documentTypes_.concat(mediaTypes_).concat(mediaFeatures_).concat(mediaValueKeywords_).concat(propertyKeywords_).concat(nonStandardPropertyKeywords_).concat(colorKeywords_).concat(valueKeywords_);CodeMirror.registerHelper("hintWords","css",allWords);function tokenCComment(stream,state){var maybeEnd=false,ch;while((ch=stream.next())!=null){if(maybeEnd&&ch=="/"){state.tokenize=null;break;}
maybeEnd=(ch=="*");}
return["comment","comment"];}
CodeMirror.defineMIME("text/css",{documentTypes:documentTypes,mediaTypes:mediaTypes,mediaFeatures:mediaFeatures,mediaValueKeywords:mediaValueKeywords,propertyKeywords:propertyKeywords,nonStandardPropertyKeywords:nonStandardPropertyKeywords,fontProperties:fontProperties,counterDescriptors:counterDescriptors,colorKeywords:colorKeywords,valueKeywords:valueKeywords,tokenHooks:{"/":function(stream,state){if(!stream.eat("*"))return false;state.tokenize=tokenCComment;return tokenCComment(stream,state);}},name:"css"});CodeMirror.defineMIME("text/x-scss",{mediaTypes:mediaTypes,mediaFeatures:mediaFeatures,mediaValueKeywords:mediaValueKeywords,propertyKeywords:propertyKeywords,nonStandardPropertyKeywords:nonStandardPropertyKeywords,colorKeywords:colorKeywords,valueKeywords:valueKeywords,fontProperties:fontProperties,allowNested:true,tokenHooks:{"/":function(stream,state){if(stream.eat("/")){stream.skipToEnd();return["comment","comment"];}else if(stream.eat("*")){state.tokenize=tokenCComment;return tokenCComment(stream,state);}else{return["operator","operator"];}},":":function(stream){if(stream.match(/\s*\{/))
return[null,"{"];return false;},"$":function(stream){stream.match(/^[\w-]+/);if(stream.match(/^\s*:/,false))
return["variable-2","variable-definition"];return["variable-2","variable"];},"#":function(stream){if(!stream.eat("{"))return false;return[null,"interpolation"];}},name:"css",helperType:"scss"});CodeMirror.defineMIME("text/x-less",{mediaTypes:mediaTypes,mediaFeatures:mediaFeatures,mediaValueKeywords:mediaValueKeywords,propertyKeywords:propertyKeywords,nonStandardPropertyKeywords:nonStandardPropertyKeywords,colorKeywords:colorKeywords,valueKeywords:valueKeywords,fontProperties:fontProperties,allowNested:true,tokenHooks:{"/":function(stream,state){if(stream.eat("/")){stream.skipToEnd();return["comment","comment"];}else if(stream.eat("*")){state.tokenize=tokenCComment;return tokenCComment(stream,state);}else{return["operator","operator"];}},"@":function(stream){if(stream.eat("{"))return[null,"interpolation"];if(stream.match(/^(charset|document|font-face|import|(-(moz|ms|o|webkit)-)?keyframes|media|namespace|page|supports)\b/,false))return false;stream.eatWhile(/[\w\\\-]/);if(stream.match(/^\s*:/,false))
return["variable-2","variable-definition"];return["variable-2","variable"];},"&":function(){return["atom","atom"];}},name:"css",helperType:"less"});CodeMirror.defineMIME("text/x-gss",{documentTypes:documentTypes,mediaTypes:mediaTypes,mediaFeatures:mediaFeatures,propertyKeywords:propertyKeywords,nonStandardPropertyKeywords:nonStandardPropertyKeywords,fontProperties:fontProperties,counterDescriptors:counterDescriptors,colorKeywords:colorKeywords,valueKeywords:valueKeywords,supportsAtComponent:true,tokenHooks:{"/":function(stream,state){if(!stream.eat("*"))return false;state.tokenize=tokenCComment;return tokenCComment(stream,state);}},name:"css",helperType:"gss"});});;(function(mod){if(typeof exports=="object"&&typeof module=="object")
mod(require("../../lib/codemirror"));else if(typeof define=="function"&&define.amd)
define(["../../lib/codemirror"],mod);else
mod(CodeMirror);})(function(CodeMirror){"use strict";var htmlConfig={autoSelfClosers:{'area':true,'base':true,'br':true,'col':true,'command':true,'embed':true,'frame':true,'hr':true,'img':true,'input':true,'keygen':true,'link':true,'meta':true,'param':true,'source':true,'track':true,'wbr':true,'menuitem':true},implicitlyClosed:{'dd':true,'li':true,'optgroup':true,'option':true,'p':true,'rp':true,'rt':true,'tbody':true,'td':true,'tfoot':true,'th':true,'tr':true},contextGrabbers:{'dd':{'dd':true,'dt':true},'dt':{'dd':true,'dt':true},'li':{'li':true},'option':{'option':true,'optgroup':true},'optgroup':{'optgroup':true},'p':{'address':true,'article':true,'aside':true,'blockquote':true,'dir':true,'div':true,'dl':true,'fieldset':true,'footer':true,'form':true,'h1':true,'h2':true,'h3':true,'h4':true,'h5':true,'h6':true,'header':true,'hgroup':true,'hr':true,'menu':true,'nav':true,'ol':true,'p':true,'pre':true,'section':true,'table':true,'ul':true},'rp':{'rp':true,'rt':true},'rt':{'rp':true,'rt':true},'tbody':{'tbody':true,'tfoot':true},'td':{'td':true,'th':true},'tfoot':{'tbody':true},'th':{'td':true,'th':true},'thead':{'tbody':true,'tfoot':true},'tr':{'tr':true}},doNotIndent:{"pre":true},allowUnquoted:true,allowMissing:true,caseFold:true}
var xmlConfig={autoSelfClosers:{},implicitlyClosed:{},contextGrabbers:{},doNotIndent:{},allowUnquoted:false,allowMissing:false,caseFold:false}
CodeMirror.defineMode("xml",function(editorConf,config_){var indentUnit=editorConf.indentUnit
var config={}
var defaults=config_.htmlMode?htmlConfig:xmlConfig
for(var prop in defaults)config[prop]=defaults[prop]
for(var prop in config_)config[prop]=config_[prop]
var type,setStyle;function inText(stream,state){function chain(parser){state.tokenize=parser;return parser(stream,state);}
var ch=stream.next();if(ch=="<"){if(stream.eat("!")){if(stream.eat("[")){if(stream.match("CDATA["))return chain(inBlock("atom","]]>"));else return null;}else if(stream.match("--")){return chain(inBlock("comment","-->"));}else if(stream.match("DOCTYPE",true,true)){stream.eatWhile(/[\w\._\-]/);return chain(doctype(1));}else{return null;}}else if(stream.eat("?")){stream.eatWhile(/[\w\._\-]/);state.tokenize=inBlock("meta","?>");return"meta";}else{type=stream.eat("/")?"closeTag":"openTag";state.tokenize=inTag;return"tag bracket";}}else if(ch=="&"){var ok;if(stream.eat("#")){if(stream.eat("x")){ok=stream.eatWhile(/[a-fA-F\d]/)&&stream.eat(";");}else{ok=stream.eatWhile(/[\d]/)&&stream.eat(";");}}else{ok=stream.eatWhile(/[\w\.\-:]/)&&stream.eat(";");}
return ok?"atom":"error";}else{stream.eatWhile(/[^&<]/);return null;}}
inText.isInText=true;function inTag(stream,state){var ch=stream.next();if(ch==">"||(ch=="/"&&stream.eat(">"))){state.tokenize=inText;type=ch==">"?"endTag":"selfcloseTag";return"tag bracket";}else if(ch=="="){type="equals";return null;}else if(ch=="<"){state.tokenize=inText;state.state=baseState;state.tagName=state.tagStart=null;var next=state.tokenize(stream,state);return next?next+" tag error":"tag error";}else if(/[\'\"]/.test(ch)){state.tokenize=inAttribute(ch);state.stringStartCol=stream.column();return state.tokenize(stream,state);}else{stream.match(/^[^\s\u00a0=<>\"\']*[^\s\u00a0=<>\"\'\/]/);return"word";}}
function inAttribute(quote){var closure=function(stream,state){while(!stream.eol()){if(stream.next()==quote){state.tokenize=inTag;break;}}
return"string";};closure.isInAttribute=true;return closure;}
function inBlock(style,terminator){return function(stream,state){while(!stream.eol()){if(stream.match(terminator)){state.tokenize=inText;break;}
stream.next();}
return style;};}
function doctype(depth){return function(stream,state){var ch;while((ch=stream.next())!=null){if(ch=="<"){state.tokenize=doctype(depth+1);return state.tokenize(stream,state);}else if(ch==">"){if(depth==1){state.tokenize=inText;break;}else{state.tokenize=doctype(depth-1);return state.tokenize(stream,state);}}}
return"meta";};}
function Context(state,tagName,startOfLine){this.prev=state.context;this.tagName=tagName;this.indent=state.indented;this.startOfLine=startOfLine;if(config.doNotIndent.hasOwnProperty(tagName)||(state.context&&state.context.noIndent))
this.noIndent=true;}
function popContext(state){if(state.context)state.context=state.context.prev;}
function maybePopContext(state,nextTagName){var parentTagName;while(true){if(!state.context){return;}
parentTagName=state.context.tagName;if(!config.contextGrabbers.hasOwnProperty(parentTagName)||!config.contextGrabbers[parentTagName].hasOwnProperty(nextTagName)){return;}
popContext(state);}}
function baseState(type,stream,state){if(type=="openTag"){state.tagStart=stream.column();return tagNameState;}else if(type=="closeTag"){return closeTagNameState;}else{return baseState;}}
function tagNameState(type,stream,state){if(type=="word"){state.tagName=stream.current();setStyle="tag";return attrState;}else{setStyle="error";return tagNameState;}}
function closeTagNameState(type,stream,state){if(type=="word"){var tagName=stream.current();if(state.context&&state.context.tagName!=tagName&&config.implicitlyClosed.hasOwnProperty(state.context.tagName))
popContext(state);if((state.context&&state.context.tagName==tagName)||config.matchClosing===false){setStyle="tag";return closeState;}else{setStyle="tag error";return closeStateErr;}}else{setStyle="error";return closeStateErr;}}
function closeState(type,_stream,state){if(type!="endTag"){setStyle="error";return closeState;}
popContext(state);return baseState;}
function closeStateErr(type,stream,state){setStyle="error";return closeState(type,stream,state);}
function attrState(type,_stream,state){if(type=="word"){setStyle="attribute";return attrEqState;}else if(type=="endTag"||type=="selfcloseTag"){var tagName=state.tagName,tagStart=state.tagStart;state.tagName=state.tagStart=null;if(type=="selfcloseTag"||config.autoSelfClosers.hasOwnProperty(tagName)){maybePopContext(state,tagName);}else{maybePopContext(state,tagName);state.context=new Context(state,tagName,tagStart==state.indented);}
return baseState;}
setStyle="error";return attrState;}
function attrEqState(type,stream,state){if(type=="equals")return attrValueState;if(!config.allowMissing)setStyle="error";return attrState(type,stream,state);}
function attrValueState(type,stream,state){if(type=="string")return attrContinuedState;if(type=="word"&&config.allowUnquoted){setStyle="string";return attrState;}
setStyle="error";return attrState(type,stream,state);}
function attrContinuedState(type,stream,state){if(type=="string")return attrContinuedState;return attrState(type,stream,state);}
return{startState:function(baseIndent){var state={tokenize:inText,state:baseState,indented:baseIndent||0,tagName:null,tagStart:null,context:null}
if(baseIndent!=null)state.baseIndent=baseIndent
return state},token:function(stream,state){if(!state.tagName&&stream.sol())
state.indented=stream.indentation();if(stream.eatSpace())return null;type=null;var style=state.tokenize(stream,state);if((style||type)&&style!="comment"){setStyle=null;state.state=state.state(type||style,stream,state);if(setStyle)
style=setStyle=="error"?style+" error":setStyle;}
return style;},indent:function(state,textAfter,fullLine){var context=state.context;if(state.tokenize.isInAttribute){if(state.tagStart==state.indented)
return state.stringStartCol+1;else
return state.indented+indentUnit;}
if(context&&context.noIndent)return CodeMirror.Pass;if(state.tokenize!=inTag&&state.tokenize!=inText)
return fullLine?fullLine.match(/^(\s*)/)[0].length:0;if(state.tagName){if(config.multilineTagIndentPastTag!==false)
return state.tagStart+state.tagName.length+2;else
return state.tagStart+indentUnit*(config.multilineTagIndentFactor||1);}
if(config.alignCDATA&&/<!\[CDATA\[/.test(textAfter))return 0;var tagAfter=textAfter&&/^<(\/)?([\w_:\.-]*)/.exec(textAfter);if(tagAfter&&tagAfter[1]){while(context){if(context.tagName==tagAfter[2]){context=context.prev;break;}else if(config.implicitlyClosed.hasOwnProperty(context.tagName)){context=context.prev;}else{break;}}}else if(tagAfter){while(context){var grabbers=config.contextGrabbers[context.tagName];if(grabbers&&grabbers.hasOwnProperty(tagAfter[2]))
context=context.prev;else
break;}}
while(context&&context.prev&&!context.startOfLine)
context=context.prev;if(context)return context.indent+indentUnit;else return state.baseIndent||0;},electricInput:/<\/[\s\w:]+>$/,blockCommentStart:"<!--",blockCommentEnd:"-->",configuration:config.htmlMode?"html":"xml",helperType:config.htmlMode?"html":"xml",skipAttribute:function(state){if(state.state==attrValueState)
state.state=attrState}};});CodeMirror.defineMIME("text/xml","xml");CodeMirror.defineMIME("application/xml","xml");if(!CodeMirror.mimeModes.hasOwnProperty("text/html"))
CodeMirror.defineMIME("text/html",{name:"xml",htmlMode:true});});;self.WebInspector={};WebInspector.Text=function(value)
{this._value=value;}
WebInspector.Text.prototype={lineEndings:function()
{if(!this._lineEndings)
this._lineEndings=this._value.computeLineEndings();return this._lineEndings;},value:function()
{return this._value;},lineCount:function()
{var lineEndings=this.lineEndings();return lineEndings.length;},offsetFromPosition:function(lineNumber,columNumber)
{return(lineNumber?this.lineEndings()[lineNumber-1]+1:0)+columNumber;},lineAt:function(lineNumber)
{var lineEndings=this.lineEndings();var lineStart=lineNumber>0?lineEndings[lineNumber-1]+1:0;var lineEnd=lineEndings[lineNumber];var lineContent=this._value.substring(lineStart,lineEnd);if(lineContent.length>0&&lineContent.charAt(lineContent.length-1)==="\r")
lineContent=lineContent.substring(0,lineContent.length-1);return lineContent;},toSourceRange:function(range)
{var start=this.offsetFromPosition(range.startLine,range.startColumn);var end=this.offsetFromPosition(range.endLine,range.endColumn);return new WebInspector.SourceRange(start,end-start);},toTextRange:function(sourceRange)
{var cursor=new WebInspector.TextCursor(this.lineEndings());var result=WebInspector.TextRange.createFromLocation(0,0);cursor.resetTo(sourceRange.offset);result.startLine=cursor.lineNumber();result.startColumn=cursor.columnNumber();cursor.advance(sourceRange.offset+sourceRange.length);result.endLine=cursor.lineNumber();result.endColumn=cursor.columnNumber();return result;},replaceRange:function(range,replacement)
{var sourceRange=this.toSourceRange(range);return this._value.substring(0,sourceRange.offset)+replacement+this._value.substring(sourceRange.offset+sourceRange.length);},extract:function(range)
{var sourceRange=this.toSourceRange(range);return this._value.substr(sourceRange.offset,sourceRange.length);}}
WebInspector.TextCursor=function(lineEndings)
{this._lineEndings=lineEndings;this._offset=0;this._lineNumber=0;this._columnNumber=0;}
WebInspector.TextCursor.prototype={advance:function(offset)
{this._offset=offset;while(this._lineNumber<this._lineEndings.length&&this._lineEndings[this._lineNumber]<this._offset)
++this._lineNumber;this._columnNumber=this._lineNumber?this._offset-this._lineEndings[this._lineNumber-1]-1:this._offset;},offset:function()
{return this._offset;},resetTo:function(offset)
{this._offset=offset;this._lineNumber=this._lineEndings.lowerBound(offset);this._columnNumber=this._lineNumber?this._offset-this._lineEndings[this._lineNumber-1]-1:this._offset;},lineNumber:function()
{return this._lineNumber;},columnNumber:function()
{return this._columnNumber;}};WebInspector.TextRange=function(startLine,startColumn,endLine,endColumn)
{this.startLine=startLine;this.startColumn=startColumn;this.endLine=endLine;this.endColumn=endColumn;}
WebInspector.TextRange.createFromLocation=function(line,column)
{return new WebInspector.TextRange(line,column,line,column);}
WebInspector.TextRange.fromObject=function(serializedTextRange)
{return new WebInspector.TextRange(serializedTextRange.startLine,serializedTextRange.startColumn,serializedTextRange.endLine,serializedTextRange.endColumn);}
WebInspector.TextRange.comparator=function(range1,range2)
{return range1.compareTo(range2);}
WebInspector.TextRange.prototype={isEmpty:function()
{return this.startLine===this.endLine&&this.startColumn===this.endColumn;},immediatelyPrecedes:function(range)
{if(!range)
return false;return this.endLine===range.startLine&&this.endColumn===range.startColumn;},immediatelyFollows:function(range)
{if(!range)
return false;return range.immediatelyPrecedes(this);},follows:function(range)
{return(range.endLine===this.startLine&&range.endColumn<=this.startColumn)||range.endLine<this.startLine;},get linesCount()
{return this.endLine-this.startLine;},collapseToEnd:function()
{return new WebInspector.TextRange(this.endLine,this.endColumn,this.endLine,this.endColumn);},collapseToStart:function()
{return new WebInspector.TextRange(this.startLine,this.startColumn,this.startLine,this.startColumn);},normalize:function()
{if(this.startLine>this.endLine||(this.startLine===this.endLine&&this.startColumn>this.endColumn))
return new WebInspector.TextRange(this.endLine,this.endColumn,this.startLine,this.startColumn);else
return this.clone();},clone:function()
{return new WebInspector.TextRange(this.startLine,this.startColumn,this.endLine,this.endColumn);},serializeToObject:function()
{var serializedTextRange={};serializedTextRange.startLine=this.startLine;serializedTextRange.startColumn=this.startColumn;serializedTextRange.endLine=this.endLine;serializedTextRange.endColumn=this.endColumn;return serializedTextRange;},compareTo:function(other)
{if(this.startLine>other.startLine)
return 1;if(this.startLine<other.startLine)
return-1;if(this.startColumn>other.startColumn)
return 1;if(this.startColumn<other.startColumn)
return-1;return 0;},compareToPosition:function(lineNumber,columnNumber)
{if(lineNumber<this.startLine||(lineNumber===this.startLine&&columnNumber<this.startColumn))
return-1;if(lineNumber>this.endLine||(lineNumber===this.endLine&&columnNumber>this.endColumn))
return 1;return 0;},equal:function(other)
{return this.startLine===other.startLine&&this.endLine===other.endLine&&this.startColumn===other.startColumn&&this.endColumn===other.endColumn;},relativeTo:function(line,column)
{var relative=this.clone();if(this.startLine===line)
relative.startColumn-=column;if(this.endLine===line)
relative.endColumn-=column;relative.startLine-=line;relative.endLine-=line;return relative;},rebaseAfterTextEdit:function(originalRange,editedRange)
{console.assert(originalRange.startLine===editedRange.startLine);console.assert(originalRange.startColumn===editedRange.startColumn);var rebase=this.clone();if(!this.follows(originalRange))
return rebase;var lineDelta=editedRange.endLine-originalRange.endLine;var columnDelta=editedRange.endColumn-originalRange.endColumn;rebase.startLine+=lineDelta;rebase.endLine+=lineDelta;if(rebase.startLine===editedRange.endLine)
rebase.startColumn+=columnDelta;if(rebase.endLine===editedRange.endLine)
rebase.endColumn+=columnDelta;return rebase;},toString:function()
{return JSON.stringify(this);},containsLocation:function(lineNumber,columnNumber)
{if(this.startLine===this.endLine)
return this.startLine===lineNumber&&this.startColumn<=columnNumber&&columnNumber<=this.endColumn;if(this.startLine===lineNumber)
return this.startColumn<=columnNumber;if(this.endLine===lineNumber)
return columnNumber<=this.endColumn;return this.startLine<lineNumber&&lineNumber<this.endLine;}}
WebInspector.TextRange.fromEdit=function(oldRange,newText)
{var endLine=oldRange.startLine;var endColumn=oldRange.startColumn+newText.length;var lineEndings=newText.computeLineEndings();if(lineEndings.length>1){endLine=oldRange.startLine+lineEndings.length-1;var len=lineEndings.length;endColumn=lineEndings[len-1]-lineEndings[len-2]-1;}
return new WebInspector.TextRange(oldRange.startLine,oldRange.startColumn,endLine,endColumn);}
WebInspector.SourceRange=function(offset,length)
{this.offset=offset;this.length=length;}
WebInspector.SourceEdit=function(sourceURL,oldRange,newText)
{this.sourceURL=sourceURL;this.oldRange=oldRange;this.newText=newText;}
WebInspector.SourceEdit.prototype={newRange:function()
{return WebInspector.TextRange.fromEdit(this.oldRange,this.newText);},}
WebInspector.SourceEdit.comparator=function(edit1,edit2)
{return WebInspector.TextRange.comparator(edit1.oldRange,edit2.oldRange);};WebInspector.ESTreeWalker=function(beforeVisit,afterVisit)
{this._beforeVisit=beforeVisit;this._afterVisit=afterVisit||new Function();this._walkNulls=false;}
WebInspector.ESTreeWalker.SkipSubtree={};WebInspector.ESTreeWalker.prototype={setWalkNulls:function(value)
{this._walkNulls=value;},walk:function(ast)
{this._innerWalk(ast,null);},_innerWalk:function(node,parent)
{if(!node&&parent&&this._walkNulls){node=({type:"Literal",raw:"null",value:null});}
if(!node)
return;node.parent=parent;if(this._beforeVisit.call(null,node)===WebInspector.ESTreeWalker.SkipSubtree){this._afterVisit.call(null,node);return;}
var walkOrder=WebInspector.ESTreeWalker._walkOrder[node.type];if(!walkOrder){console.error("Walk order not defined for "+node.type);return;}
if(node.type==="TemplateLiteral"){var templateLiteral=(node);var expressionsLength=templateLiteral.expressions.length;for(var i=0;i<expressionsLength;++i){this._innerWalk(templateLiteral.quasis[i],templateLiteral);this._innerWalk(templateLiteral.expressions[i],templateLiteral);}
this._innerWalk(templateLiteral.quasis[expressionsLength],templateLiteral);}else{for(var i=0;i<walkOrder.length;++i){var entity=node[walkOrder[i]];if(Array.isArray(entity))
this._walkArray(entity,node);else
this._innerWalk(entity,node);}}
this._afterVisit.call(null,node);},_walkArray:function(nodeArray,parentNode)
{for(var i=0;i<nodeArray.length;++i)
this._innerWalk(nodeArray[i],parentNode);},}
WebInspector.ESTreeWalker._walkOrder={"ArrayExpression":["elements"],"ArrowFunctionExpression":["params","body"],"AssignmentExpression":["left","right"],"BinaryExpression":["left","right"],"BlockStatement":["body"],"BreakStatement":["label"],"CallExpression":["callee","arguments"],"CatchClause":["param","body"],"ClassBody":["body"],"ClassDeclaration":["id","superClass","body"],"ClassExpression":["id","superClass","body"],"ConditionalExpression":["test","consequent","alternate"],"ContinueStatement":["label"],"DebuggerStatement":[],"DoWhileStatement":["body","test"],"EmptyStatement":[],"ExpressionStatement":["expression"],"ForInStatement":["left","right","body"],"ForOfStatement":["left","right","body"],"ForStatement":["init","test","update","body"],"FunctionDeclaration":["id","params","body"],"FunctionExpression":["id","params","body"],"Identifier":[],"IfStatement":["test","consequent","alternate"],"LabeledStatement":["label","body"],"Literal":[],"LogicalExpression":["left","right"],"MemberExpression":["object","property"],"MethodDefinition":["key","value"],"NewExpression":["callee","arguments"],"ObjectExpression":["properties"],"Program":["body"],"Property":["key","value"],"ReturnStatement":["argument"],"SequenceExpression":["expressions"],"Super":[],"SwitchCase":["test","consequent"],"SwitchStatement":["discriminant","cases"],"TaggedTemplateExpression":["tag","quasi"],"TemplateElement":[],"TemplateLiteral":["quasis","expressions"],"ThisExpression":[],"ThrowStatement":["argument"],"TryStatement":["block","handler","finalizer"],"UnaryExpression":["argument"],"UpdateExpression":["argument"],"VariableDeclaration":["declarations"],"VariableDeclarator":["id","init"],"WhileStatement":["test","body"],"WithStatement":["object","body"],"YieldExpression":["argument"]};WebInspector.createTokenizer=function(mimeType)
{var mode=CodeMirror.getMode({indentUnit:2},mimeType);var state=CodeMirror.startState(mode);function tokenize(line,callback)
{var stream=new CodeMirror.StringStream(line);while(!stream.eol()){var style=mode.token(stream,state);var value=stream.current();if(callback(value,style,stream.start,stream.start+value.length)===WebInspector.AbortTokenization)
return;stream.start=stream.pos;}}
return tokenize;}
WebInspector.AbortTokenization={};self.onmessage=function(event){var method=(event.data.method);var params=(event.data.params);if(!method)
return;switch(method){case"format":WebInspector.format(params.mimeType,params.content,params.indentString);break;case"parseCSS":WebInspector.parseCSS(params.content);break;case"parseSCSS":WebInspector.FormatterWorkerContentParser.parse(params.content,"text/x-scss");break;case"javaScriptOutline":WebInspector.javaScriptOutline(params.content);break;case"javaScriptIdentifiers":WebInspector.javaScriptIdentifiers(params.content);break;case"evaluatableJavaScriptSubstring":WebInspector.evaluatableJavaScriptSubstring(params.content);break;case"relaxedJSONParser":WebInspector.relaxedJSONParser(params.content);break;default:console.error("Unsupport method name: "+method);}};WebInspector.relaxedJSONParser=function(content)
{postMessage(WebInspector.RelaxedJSONParser.parse(content));}
WebInspector.evaluatableJavaScriptSubstring=function(content)
{var tokenizer=acorn.tokenizer(content,{ecmaVersion:6});var result="";try{var token=tokenizer.getToken();while(token.type!==acorn.tokTypes.eof&&WebInspector.AcornTokenizer.punctuator(token))
token=tokenizer.getToken();var startIndex=token.start;var endIndex=token.end;var openBracketsCounter=0;while(token.type!==acorn.tokTypes.eof){var isIdentifier=WebInspector.AcornTokenizer.identifier(token);var isThis=WebInspector.AcornTokenizer.keyword(token,"this");var isString=token.type===acorn.tokTypes.string;if(!isThis&&!isIdentifier&&!isString)
break;endIndex=token.end;token=tokenizer.getToken();while(WebInspector.AcornTokenizer.punctuator(token,".[]")){if(WebInspector.AcornTokenizer.punctuator(token,"["))
openBracketsCounter++;if(WebInspector.AcornTokenizer.punctuator(token,"]")){endIndex=openBracketsCounter>0?token.end:endIndex;openBracketsCounter--;}
token=tokenizer.getToken();}}
result=content.substring(startIndex,endIndex);}catch(e){console.error(e);}
postMessage(result);}
WebInspector.javaScriptIdentifiers=function(content)
{var root=acorn.parse(content,{ranges:false,ecmaVersion:6});var identifiers=[];var walker=new WebInspector.ESTreeWalker(beforeVisit);function isFunction(node)
{return node.type==="FunctionDeclaration"||node.type==="FunctionExpression"||node.type==="ArrowFunctionExpression";}
function beforeVisit(node)
{if(isFunction(node)){if(node.id)
identifiers.push(node.id);return WebInspector.ESTreeWalker.SkipSubtree;}
if(node.type!=="Identifier")
return;if(node.parent&&node.parent.type==="MemberExpression"&&node.parent.property===node&&!node.parent.computed)
return;identifiers.push(node);}
if(!root||root.type!=="Program"||root.body.length!==1||!isFunction(root.body[0])){postMessage([]);return;}
var functionNode=root.body[0];for(var param of functionNode.params)
walker.walk(param);walker.walk(functionNode.body);var reduced=identifiers.map(id=>({name:id.name,offset:id.start}));postMessage(reduced);}
WebInspector.format=function(mimeType,text,indentString)
{indentString=indentString||"    ";var result={};var builder=new WebInspector.FormattedContentBuilder(indentString);var lineEndings=text.computeLineEndings();try{switch(mimeType){case"text/html":var formatter=new WebInspector.HTMLFormatter(builder);formatter.format(text,lineEndings);break;case"text/css":var formatter=new WebInspector.CSSFormatter(builder);formatter.format(text,lineEndings,0,text.length);break;case"text/javascript":var formatter=new WebInspector.JavaScriptFormatter(builder);formatter.format(text,lineEndings,0,text.length);break;default:var formatter=new WebInspector.IdentityFormatter(builder);formatter.format(text,lineEndings,0,text.length);}
result.mapping=builder.mapping();result.content=builder.content();}catch(e){console.error(e);result.mapping={original:[0],formatted:[0]};result.content=text;}
postMessage(result);}
WebInspector.FormatterWorkerContentParser=function(){}
WebInspector.FormatterWorkerContentParser.prototype={parse:function(content){}}
WebInspector.FormatterWorkerContentParser.parse=function(content,mimeType)
{var extension=self.runtime.extensions(WebInspector.FormatterWorkerContentParser).find(findExtension);console.assert(extension);extension.instance().then(instance=>instance.parse(content)).catchException(null).then(postMessage);function findExtension(extension)
{return extension.descriptor()["mimeType"]===mimeType;}};(function(f){if(typeof exports==="object"&&typeof module!=="undefined"){module.exports=f()}else if(typeof define==="function"&&define.amd){define([],f)}else{var g;if(typeof window!=="undefined"){g=window}else if(typeof global!=="undefined"){g=global}else if(typeof self!=="undefined"){g=self}else{g=this}g.acorn=f()}})(function(){var define,module,exports;return(function e(t,n,r){function s(o,u){if(!n[o]){if(!t[o]){var a=typeof require=="function"&&require;if(!u&&a)return a(o,!0);if(i)return i(o,!0);var f=new Error("Cannot find module '"+o+"'");throw f.code="MODULE_NOT_FOUND",f}var l=n[o]={exports:{}};t[o][0].call(l.exports,function(e){var n=t[o][1][e];return s(n?n:e)},l,l.exports,e,t,n,r)}return n[o].exports}var i=typeof require=="function"&&require;for(var o=0;o<r.length;o++)s(r[o]);return s})({1:[function(_dereq_,module,exports){"use strict";var _tokentype=_dereq_("./tokentype");var _state=_dereq_("./state");var pp=_state.Parser.prototype;pp.checkPropClash=function(prop,propHash){if(this.options.ecmaVersion>=6&&(prop.computed||prop.method||prop.shorthand))return;var key=prop.key;var name=undefined;switch(key.type){case"Identifier":name=key.name;break;case"Literal":name=String(key.value);break;default:return;}
var kind=prop.kind;if(this.options.ecmaVersion>=6){if(name==="__proto__"&&kind==="init"){if(propHash.proto)this.raise(key.start,"Redefinition of __proto__ property");propHash.proto=true;}
return;}
name="$"+name;var other=propHash[name];if(other){var isGetSet=kind!=="init";if((this.strict||isGetSet)&&other[kind]||!(isGetSet^other.init))this.raise(key.start,"Redefinition of property");}else{other=propHash[name]={init:false,get:false,set:false};}
other[kind]=true;};pp.parseExpression=function(noIn,refShorthandDefaultPos){var startPos=this.start,startLoc=this.startLoc;var expr=this.parseMaybeAssign(noIn,refShorthandDefaultPos);if(this.type===_tokentype.types.comma){var node=this.startNodeAt(startPos,startLoc);node.expressions=[expr];while(this.eat(_tokentype.types.comma))node.expressions.push(this.parseMaybeAssign(noIn,refShorthandDefaultPos));return this.finishNode(node,"SequenceExpression");}
return expr;};pp.parseMaybeAssign=function(noIn,refShorthandDefaultPos,afterLeftParse){if(this.type==_tokentype.types._yield&&this.inGenerator)return this.parseYield();var failOnShorthandAssign=undefined;if(!refShorthandDefaultPos){refShorthandDefaultPos={start:0};failOnShorthandAssign=true;}else{failOnShorthandAssign=false;}
var startPos=this.start,startLoc=this.startLoc;if(this.type==_tokentype.types.parenL||this.type==_tokentype.types.name)this.potentialArrowAt=this.start;var left=this.parseMaybeConditional(noIn,refShorthandDefaultPos);if(afterLeftParse)left=afterLeftParse.call(this,left,startPos,startLoc);if(this.type.isAssign){var node=this.startNodeAt(startPos,startLoc);node.operator=this.value;node.left=this.type===_tokentype.types.eq?this.toAssignable(left):left;refShorthandDefaultPos.start=0;this.checkLVal(left);this.next();node.right=this.parseMaybeAssign(noIn);return this.finishNode(node,"AssignmentExpression");}else if(failOnShorthandAssign&&refShorthandDefaultPos.start){this.unexpected(refShorthandDefaultPos.start);}
return left;};pp.parseMaybeConditional=function(noIn,refShorthandDefaultPos){var startPos=this.start,startLoc=this.startLoc;var expr=this.parseExprOps(noIn,refShorthandDefaultPos);if(refShorthandDefaultPos&&refShorthandDefaultPos.start)return expr;if(this.eat(_tokentype.types.question)){var node=this.startNodeAt(startPos,startLoc);node.test=expr;node.consequent=this.parseMaybeAssign();this.expect(_tokentype.types.colon);node.alternate=this.parseMaybeAssign(noIn);return this.finishNode(node,"ConditionalExpression");}
return expr;};pp.parseExprOps=function(noIn,refShorthandDefaultPos){var startPos=this.start,startLoc=this.startLoc;var expr=this.parseMaybeUnary(refShorthandDefaultPos);if(refShorthandDefaultPos&&refShorthandDefaultPos.start)return expr;return this.parseExprOp(expr,startPos,startLoc,-1,noIn);};pp.parseExprOp=function(left,leftStartPos,leftStartLoc,minPrec,noIn){var prec=this.type.binop;if(prec!=null&&(!noIn||this.type!==_tokentype.types._in)){if(prec>minPrec){var node=this.startNodeAt(leftStartPos,leftStartLoc);node.left=left;node.operator=this.value;var op=this.type;this.next();var startPos=this.start,startLoc=this.startLoc;node.right=this.parseExprOp(this.parseMaybeUnary(),startPos,startLoc,prec,noIn);this.finishNode(node,op===_tokentype.types.logicalOR||op===_tokentype.types.logicalAND?"LogicalExpression":"BinaryExpression");return this.parseExprOp(node,leftStartPos,leftStartLoc,minPrec,noIn);}}
return left;};pp.parseMaybeUnary=function(refShorthandDefaultPos){if(this.type.prefix){var node=this.startNode(),update=this.type===_tokentype.types.incDec;node.operator=this.value;node.prefix=true;this.next();node.argument=this.parseMaybeUnary();if(refShorthandDefaultPos&&refShorthandDefaultPos.start)this.unexpected(refShorthandDefaultPos.start);if(update)this.checkLVal(node.argument);else if(this.strict&&node.operator==="delete"&&node.argument.type==="Identifier")this.raise(node.start,"Deleting local variable in strict mode");return this.finishNode(node,update?"UpdateExpression":"UnaryExpression");}
var startPos=this.start,startLoc=this.startLoc;var expr=this.parseExprSubscripts(refShorthandDefaultPos);if(refShorthandDefaultPos&&refShorthandDefaultPos.start)return expr;while(this.type.postfix&&!this.canInsertSemicolon()){var node=this.startNodeAt(startPos,startLoc);node.operator=this.value;node.prefix=false;node.argument=expr;this.checkLVal(expr);this.next();expr=this.finishNode(node,"UpdateExpression");}
return expr;};pp.parseExprSubscripts=function(refShorthandDefaultPos){var startPos=this.start,startLoc=this.startLoc;var expr=this.parseExprAtom(refShorthandDefaultPos);if(refShorthandDefaultPos&&refShorthandDefaultPos.start)return expr;return this.parseSubscripts(expr,startPos,startLoc);};pp.parseSubscripts=function(base,startPos,startLoc,noCalls){for(;;){if(this.eat(_tokentype.types.dot)){var node=this.startNodeAt(startPos,startLoc);node.object=base;node.property=this.parseIdent(true);node.computed=false;base=this.finishNode(node,"MemberExpression");}else if(this.eat(_tokentype.types.bracketL)){var node=this.startNodeAt(startPos,startLoc);node.object=base;node.property=this.parseExpression();node.computed=true;this.expect(_tokentype.types.bracketR);base=this.finishNode(node,"MemberExpression");}else if(!noCalls&&this.eat(_tokentype.types.parenL)){var node=this.startNodeAt(startPos,startLoc);node.callee=base;node.arguments=this.parseExprList(_tokentype.types.parenR,false);base=this.finishNode(node,"CallExpression");}else if(this.type===_tokentype.types.backQuote){var node=this.startNodeAt(startPos,startLoc);node.tag=base;node.quasi=this.parseTemplate();base=this.finishNode(node,"TaggedTemplateExpression");}else{return base;}}};pp.parseExprAtom=function(refShorthandDefaultPos){var node=undefined,canBeArrow=this.potentialArrowAt==this.start;switch(this.type){case _tokentype.types._super:if(!this.inFunction)this.raise(this.start,"'super' outside of function or class");case _tokentype.types._this:var type=this.type===_tokentype.types._this?"ThisExpression":"Super";node=this.startNode();this.next();return this.finishNode(node,type);case _tokentype.types._yield:if(this.inGenerator)this.unexpected();case _tokentype.types.name:var startPos=this.start,startLoc=this.startLoc;var id=this.parseIdent(this.type!==_tokentype.types.name);if(canBeArrow&&!this.canInsertSemicolon()&&this.eat(_tokentype.types.arrow))return this.parseArrowExpression(this.startNodeAt(startPos,startLoc),[id]);return id;case _tokentype.types.regexp:var value=this.value;node=this.parseLiteral(value.value);node.regex={pattern:value.pattern,flags:value.flags};return node;case _tokentype.types.num:case _tokentype.types.string:return this.parseLiteral(this.value);case _tokentype.types._null:case _tokentype.types._true:case _tokentype.types._false:node=this.startNode();node.value=this.type===_tokentype.types._null?null:this.type===_tokentype.types._true;node.raw=this.type.keyword;this.next();return this.finishNode(node,"Literal");case _tokentype.types.parenL:return this.parseParenAndDistinguishExpression(canBeArrow);case _tokentype.types.bracketL:node=this.startNode();this.next();if(this.options.ecmaVersion>=7&&this.type===_tokentype.types._for){return this.parseComprehension(node,false);}
node.elements=this.parseExprList(_tokentype.types.bracketR,true,true,refShorthandDefaultPos);return this.finishNode(node,"ArrayExpression");case _tokentype.types.braceL:return this.parseObj(false,refShorthandDefaultPos);case _tokentype.types._function:node=this.startNode();this.next();return this.parseFunction(node,false);case _tokentype.types._class:return this.parseClass(this.startNode(),false);case _tokentype.types._new:return this.parseNew();case _tokentype.types.backQuote:return this.parseTemplate();default:this.unexpected();}};pp.parseLiteral=function(value){var node=this.startNode();node.value=value;node.raw=this.input.slice(this.start,this.end);this.next();return this.finishNode(node,"Literal");};pp.parseParenExpression=function(){this.expect(_tokentype.types.parenL);var val=this.parseExpression();this.expect(_tokentype.types.parenR);return val;};pp.parseParenAndDistinguishExpression=function(canBeArrow){var startPos=this.start,startLoc=this.startLoc,val=undefined;if(this.options.ecmaVersion>=6){this.next();if(this.options.ecmaVersion>=7&&this.type===_tokentype.types._for){return this.parseComprehension(this.startNodeAt(startPos,startLoc),true);}
var innerStartPos=this.start,innerStartLoc=this.startLoc;var exprList=[],first=true;var refShorthandDefaultPos={start:0},spreadStart=undefined,innerParenStart=undefined;while(this.type!==_tokentype.types.parenR){first?first=false:this.expect(_tokentype.types.comma);if(this.type===_tokentype.types.ellipsis){spreadStart=this.start;exprList.push(this.parseParenItem(this.parseRest()));break;}else{if(this.type===_tokentype.types.parenL&&!innerParenStart){innerParenStart=this.start;}
exprList.push(this.parseMaybeAssign(false,refShorthandDefaultPos,this.parseParenItem));}}
var innerEndPos=this.start,innerEndLoc=this.startLoc;this.expect(_tokentype.types.parenR);if(canBeArrow&&!this.canInsertSemicolon()&&this.eat(_tokentype.types.arrow)){if(innerParenStart)this.unexpected(innerParenStart);return this.parseParenArrowList(startPos,startLoc,exprList);}
if(!exprList.length)this.unexpected(this.lastTokStart);if(spreadStart)this.unexpected(spreadStart);if(refShorthandDefaultPos.start)this.unexpected(refShorthandDefaultPos.start);if(exprList.length>1){val=this.startNodeAt(innerStartPos,innerStartLoc);val.expressions=exprList;this.finishNodeAt(val,"SequenceExpression",innerEndPos,innerEndLoc);}else{val=exprList[0];}}else{val=this.parseParenExpression();}
if(this.options.preserveParens){var par=this.startNodeAt(startPos,startLoc);par.expression=val;return this.finishNode(par,"ParenthesizedExpression");}else{return val;}};pp.parseParenItem=function(item){return item;};pp.parseParenArrowList=function(startPos,startLoc,exprList){return this.parseArrowExpression(this.startNodeAt(startPos,startLoc),exprList);};var empty=[];pp.parseNew=function(){var node=this.startNode();var meta=this.parseIdent(true);if(this.options.ecmaVersion>=6&&this.eat(_tokentype.types.dot)){node.meta=meta;node.property=this.parseIdent(true);if(node.property.name!=="target")this.raise(node.property.start,"The only valid meta property for new is new.target");if(!this.inFunction)this.raise(node.start,"new.target can only be used in functions");return this.finishNode(node,"MetaProperty");}
var startPos=this.start,startLoc=this.startLoc;node.callee=this.parseSubscripts(this.parseExprAtom(),startPos,startLoc,true);if(this.eat(_tokentype.types.parenL))node.arguments=this.parseExprList(_tokentype.types.parenR,false);else node.arguments=empty;return this.finishNode(node,"NewExpression");};pp.parseTemplateElement=function(){var elem=this.startNode();elem.value={raw:this.input.slice(this.start,this.end).replace(/\r\n?/g,'\n'),cooked:this.value};this.next();elem.tail=this.type===_tokentype.types.backQuote;return this.finishNode(elem,"TemplateElement");};pp.parseTemplate=function(){var node=this.startNode();this.next();node.expressions=[];var curElt=this.parseTemplateElement();node.quasis=[curElt];while(!curElt.tail){this.expect(_tokentype.types.dollarBraceL);node.expressions.push(this.parseExpression());this.expect(_tokentype.types.braceR);node.quasis.push(curElt=this.parseTemplateElement());}
this.next();return this.finishNode(node,"TemplateLiteral");};pp.parseObj=function(isPattern,refShorthandDefaultPos){var node=this.startNode(),first=true,propHash={};node.properties=[];this.next();while(!this.eat(_tokentype.types.braceR)){if(!first){this.expect(_tokentype.types.comma);if(this.afterTrailingComma(_tokentype.types.braceR))break;}else first=false;var prop=this.startNode(),isGenerator=undefined,startPos=undefined,startLoc=undefined;if(this.options.ecmaVersion>=6){prop.method=false;prop.shorthand=false;if(isPattern||refShorthandDefaultPos){startPos=this.start;startLoc=this.startLoc;}
if(!isPattern)isGenerator=this.eat(_tokentype.types.star);}
this.parsePropertyName(prop);this.parsePropertyValue(prop,isPattern,isGenerator,startPos,startLoc,refShorthandDefaultPos);this.checkPropClash(prop,propHash);node.properties.push(this.finishNode(prop,"Property"));}
return this.finishNode(node,isPattern?"ObjectPattern":"ObjectExpression");};pp.parsePropertyValue=function(prop,isPattern,isGenerator,startPos,startLoc,refShorthandDefaultPos){if(this.eat(_tokentype.types.colon)){prop.value=isPattern?this.parseMaybeDefault(this.start,this.startLoc):this.parseMaybeAssign(false,refShorthandDefaultPos);prop.kind="init";}else if(this.options.ecmaVersion>=6&&this.type===_tokentype.types.parenL){if(isPattern)this.unexpected();prop.kind="init";prop.method=true;prop.value=this.parseMethod(isGenerator);}else if(this.options.ecmaVersion>=5&&!prop.computed&&prop.key.type==="Identifier"&&(prop.key.name==="get"||prop.key.name==="set")&&(this.type!=_tokentype.types.comma&&this.type!=_tokentype.types.braceR)){if(isGenerator||isPattern)this.unexpected();prop.kind=prop.key.name;this.parsePropertyName(prop);prop.value=this.parseMethod(false);var paramCount=prop.kind==="get"?0:1;if(prop.value.params.length!==paramCount){var start=prop.value.start;if(prop.kind==="get")this.raise(start,"getter should have no params");else this.raise(start,"setter should have exactly one param");}}else if(this.options.ecmaVersion>=6&&!prop.computed&&prop.key.type==="Identifier"){prop.kind="init";if(isPattern){if(this.keywords.test(prop.key.name)||(this.strict?this.reservedWordsStrictBind:this.reservedWords).test(prop.key.name))this.raise(prop.key.start,"Binding "+prop.key.name);prop.value=this.parseMaybeDefault(startPos,startLoc,prop.key);}else if(this.type===_tokentype.types.eq&&refShorthandDefaultPos){if(!refShorthandDefaultPos.start)refShorthandDefaultPos.start=this.start;prop.value=this.parseMaybeDefault(startPos,startLoc,prop.key);}else{prop.value=prop.key;}
prop.shorthand=true;}else this.unexpected();};pp.parsePropertyName=function(prop){if(this.options.ecmaVersion>=6){if(this.eat(_tokentype.types.bracketL)){prop.computed=true;prop.key=this.parseMaybeAssign();this.expect(_tokentype.types.bracketR);return prop.key;}else{prop.computed=false;}}
return prop.key=this.type===_tokentype.types.num||this.type===_tokentype.types.string?this.parseExprAtom():this.parseIdent(true);};pp.initFunction=function(node){node.id=null;if(this.options.ecmaVersion>=6){node.generator=false;node.expression=false;}};pp.parseMethod=function(isGenerator){var node=this.startNode();this.initFunction(node);this.expect(_tokentype.types.parenL);node.params=this.parseBindingList(_tokentype.types.parenR,false,false);if(this.options.ecmaVersion>=6)node.generator=isGenerator;this.parseFunctionBody(node,false);return this.finishNode(node,"FunctionExpression");};pp.parseArrowExpression=function(node,params){this.initFunction(node);node.params=this.toAssignableList(params,true);this.parseFunctionBody(node,true);return this.finishNode(node,"ArrowFunctionExpression");};pp.parseFunctionBody=function(node,isArrowFunction){var isExpression=isArrowFunction&&this.type!==_tokentype.types.braceL;if(isExpression){node.body=this.parseMaybeAssign();node.expression=true;}else{var oldInFunc=this.inFunction,oldInGen=this.inGenerator,oldLabels=this.labels;this.inFunction=true;this.inGenerator=node.generator;this.labels=[];node.body=this.parseBlock(true);node.expression=false;this.inFunction=oldInFunc;this.inGenerator=oldInGen;this.labels=oldLabels;}
if(this.strict||!isExpression&&node.body.body.length&&this.isUseStrict(node.body.body[0])){var oldStrict=this.strict;this.strict=true;if(node.id)this.checkLVal(node.id,true);this.checkParams(node);this.strict=oldStrict;}else if(isArrowFunction){this.checkParams(node);}};pp.checkParams=function(node){var nameHash={};for(var i=0;i<node.params.length;i++){this.checkLVal(node.params[i],true,nameHash);}};pp.parseExprList=function(close,allowTrailingComma,allowEmpty,refShorthandDefaultPos){var elts=[],first=true;while(!this.eat(close)){if(!first){this.expect(_tokentype.types.comma);if(allowTrailingComma&&this.afterTrailingComma(close))break;}else first=false;var elt=undefined;if(allowEmpty&&this.type===_tokentype.types.comma)elt=null;else if(this.type===_tokentype.types.ellipsis)elt=this.parseSpread(refShorthandDefaultPos);else elt=this.parseMaybeAssign(false,refShorthandDefaultPos);elts.push(elt);}
return elts;};pp.parseIdent=function(liberal){var node=this.startNode();if(liberal&&this.options.allowReserved=="never")liberal=false;if(this.type===_tokentype.types.name){if(!liberal&&(this.strict?this.reservedWordsStrict:this.reservedWords).test(this.value)&&(this.options.ecmaVersion>=6||this.input.slice(this.start,this.end).indexOf("\\")==-1))this.raise(this.start,"The keyword '"+this.value+"' is reserved");node.name=this.value;}else if(liberal&&this.type.keyword){node.name=this.type.keyword;}else{this.unexpected();}
this.next();return this.finishNode(node,"Identifier");};pp.parseYield=function(){var node=this.startNode();this.next();if(this.type==_tokentype.types.semi||this.canInsertSemicolon()||this.type!=_tokentype.types.star&&!this.type.startsExpr){node.delegate=false;node.argument=null;}else{node.delegate=this.eat(_tokentype.types.star);node.argument=this.parseMaybeAssign();}
return this.finishNode(node,"YieldExpression");};pp.parseComprehension=function(node,isGenerator){node.blocks=[];while(this.type===_tokentype.types._for){var block=this.startNode();this.next();this.expect(_tokentype.types.parenL);block.left=this.parseBindingAtom();this.checkLVal(block.left,true);this.expectContextual("of");block.right=this.parseExpression();this.expect(_tokentype.types.parenR);node.blocks.push(this.finishNode(block,"ComprehensionBlock"));}
node.filter=this.eat(_tokentype.types._if)?this.parseParenExpression():null;node.body=this.parseExpression();this.expect(isGenerator?_tokentype.types.parenR:_tokentype.types.bracketR);node.generator=isGenerator;return this.finishNode(node,"ComprehensionExpression");};},{"./state":10,"./tokentype":14}],2:[function(_dereq_,module,exports){"use strict";exports.__esModule=true;exports.isIdentifierStart=isIdentifierStart;exports.isIdentifierChar=isIdentifierChar;var reservedWords={3:"abstract boolean byte char class double enum export extends final float goto implements import int interface long native package private protected public short static super synchronized throws transient volatile",5:"class enum extends super const export import",6:"enum",strict:"implements interface let package private protected public static yield",strictBind:"eval arguments"};exports.reservedWords=reservedWords;var ecma5AndLessKeywords="break case catch continue debugger default do else finally for function if return switch throw try var while with null true false instanceof typeof void delete new in this";var keywords={5:ecma5AndLessKeywords,6:ecma5AndLessKeywords+" let const class extends export import yield super"};exports.keywords=keywords;var nonASCIIidentifierStartChars="ªµºÀ-ÖØ-öø-ˁˆ-ˑˠ-ˤˬˮͰ-ʹͶͷͺ-ͽͿΆΈ-ΊΌΎ-ΡΣ-ϵϷ-ҁҊ-ԯԱ-Ֆՙա-ևא-תװ-ײؠ-يٮٯٱ-ۓەۥۦۮۯۺ-ۼۿܐܒ-ܯݍ-ޥޱߊ-ߪߴߵߺࠀ-ࠕࠚࠤࠨࡀ-ࡘࢠ-ࢲऄ-हऽॐक़-ॡॱ-ঀঅ-ঌএঐও-নপ-রলশ-হঽৎড়ঢ়য়-ৡৰৱਅ-ਊਏਐਓ-ਨਪ-ਰਲਲ਼ਵਸ਼ਸਹਖ਼-ੜਫ਼ੲ-ੴઅ-ઍએ-ઑઓ-નપ-રલળવ-હઽૐૠૡଅ-ଌଏଐଓ-ନପ-ରଲଳଵ-ହଽଡ଼ଢ଼ୟ-ୡୱஃஅ-ஊஎ-ஐஒ-கஙசஜஞடணதந-பம-ஹௐఅ-ఌఎ-ఐఒ-నప-హఽౘౙౠౡಅ-ಌಎ-ಐಒ-ನಪ-ಳವ-ಹಽೞೠೡೱೲഅ-ഌഎ-ഐഒ-ഺഽൎൠൡൺ-ൿඅ-ඖක-නඳ-රලව-ෆก-ะาำเ-ๆກຂຄງຈຊຍດ-ທນ-ຟມ-ຣລວສຫອ-ະາຳຽເ-ໄໆໜ-ໟༀཀ-ཇཉ-ཬྈ-ྌက-ဪဿၐ-ၕၚ-ၝၡၥၦၮ-ၰၵ-ႁႎႠ-ჅჇჍა-ჺჼ-ቈቊ-ቍቐ-ቖቘቚ-ቝበ-ኈኊ-ኍነ-ኰኲ-ኵኸ-ኾዀዂ-ዅወ-ዖዘ-ጐጒ-ጕጘ-ፚᎀ-ᎏᎠ-Ᏼᐁ-ᙬᙯ-ᙿᚁ-ᚚᚠ-ᛪᛮ-ᛸᜀ-ᜌᜎ-ᜑᜠ-ᜱᝀ-ᝑᝠ-ᝬᝮ-ᝰក-ឳៗៜᠠ-ᡷᢀ-ᢨᢪᢰ-ᣵᤀ-ᤞᥐ-ᥭᥰ-ᥴᦀ-ᦫᧁ-ᧇᨀ-ᨖᨠ-ᩔᪧᬅ-ᬳᭅ-ᭋᮃ-ᮠᮮᮯᮺ-ᯥᰀ-ᰣᱍ-ᱏᱚ-ᱽᳩ-ᳬᳮ-ᳱᳵᳶᴀ-ᶿḀ-ἕἘ-Ἕἠ-ὅὈ-Ὅὐ-ὗὙὛὝὟ-ώᾀ-ᾴᾶ-ᾼιῂ-ῄῆ-ῌῐ-ΐῖ-Ίῠ-Ῥῲ-ῴῶ-ῼⁱⁿₐ-ₜℂℇℊ-ℓℕ℘-ℝℤΩℨK-ℹℼ-ℿⅅ-ⅉⅎⅠ-ↈⰀ-Ⱞⰰ-ⱞⱠ-ⳤⳫ-ⳮⳲⳳⴀ-ⴥⴧⴭⴰ-ⵧⵯⶀ-ⶖⶠ-ⶦⶨ-ⶮⶰ-ⶶⶸ-ⶾⷀ-ⷆⷈ-ⷎⷐ-ⷖⷘ-ⷞ々-〇〡-〩〱-〵〸-〼ぁ-ゖ゛-ゟァ-ヺー-ヿㄅ-ㄭㄱ-ㆎㆠ-ㆺㇰ-ㇿ㐀-䶵一-鿌ꀀ-ꒌꓐ-ꓽꔀ-ꘌꘐ-ꘟꘪꘫꙀ-ꙮꙿ-ꚝꚠ-ꛯꜗ-ꜟꜢ-ꞈꞋ-ꞎꞐ-ꞭꞰꞱꟷ-ꠁꠃ-ꠅꠇ-ꠊꠌ-ꠢꡀ-ꡳꢂ-ꢳꣲ-ꣷꣻꤊ-ꤥꤰ-ꥆꥠ-ꥼꦄ-ꦲꧏꧠ-ꧤꧦ-ꧯꧺ-ꧾꨀ-ꨨꩀ-ꩂꩄ-ꩋꩠ-ꩶꩺꩾ-ꪯꪱꪵꪶꪹ-ꪽꫀꫂꫛ-ꫝꫠ-ꫪꫲ-ꫴꬁ-ꬆꬉ-ꬎꬑ-ꬖꬠ-ꬦꬨ-ꬮꬰ-ꭚꭜ-ꭟꭤꭥꯀ-ꯢ가-힣ힰ-ퟆퟋ-ퟻ豈-舘並-龎ﬀ-ﬆﬓ-ﬗיִײַ-ﬨשׁ-זּטּ-לּמּנּסּףּפּצּ-ﮱﯓ-ﴽﵐ-ﶏﶒ-ﷇﷰ-ﷻﹰ-ﹴﹶ-ﻼＡ-Ｚａ-ｚｦ-ﾾￂ-ￇￊ-ￏￒ-ￗￚ-ￜ";var nonASCIIidentifierChars="‌‍·̀-ͯ·҃-֑҇-ׇֽֿׁׂׅׄؐ-ًؚ-٩ٰۖ-ۜ۟-۪ۤۧۨ-ۭ۰-۹ܑܰ-݊ަ-ް߀-߉߫-߳ࠖ-࠙ࠛ-ࠣࠥ-ࠧࠩ-࡙࠭-࡛ࣤ-ःऺ-़ा-ॏ॑-ॗॢॣ०-९ঁ-ঃ়া-ৄেৈো-্ৗৢৣ০-৯ਁ-ਃ਼ਾ-ੂੇੈੋ-੍ੑ੦-ੱੵઁ-ઃ઼ા-ૅે-ૉો-્ૢૣ૦-૯ଁ-ଃ଼ା-ୄେୈୋ-୍ୖୗୢୣ୦-୯ஂா-ூெ-ைொ-்ௗ௦-௯ఀ-ఃా-ౄె-ైొ-్ౕౖౢౣ౦-౯ಁ-ಃ಼ಾ-ೄೆ-ೈೊ-್ೕೖೢೣ೦-೯ഁ-ഃാ-ൄെ-ൈൊ-്ൗൢൣ൦-൯ංඃ්ා-ුූෘ-ෟ෦-෯ෲෳัิ-ฺ็-๎๐-๙ັິ-ູົຼ່-ໍ໐-໙༘༙༠-༩༹༵༷༾༿ཱ-྄྆྇ྍ-ྗྙ-ྼ࿆ါ-ှ၀-၉ၖ-ၙၞ-ၠၢ-ၤၧ-ၭၱ-ၴႂ-ႍႏ-ႝ፝-፟፩-፱ᜒ-᜔ᜲ-᜴ᝒᝓᝲᝳ឴-៓៝០-៩᠋-᠍᠐-᠙ᢩᤠ-ᤫᤰ-᤻᥆-᥏ᦰ-ᧀᧈᧉ᧐-᧚ᨗ-ᨛᩕ-ᩞ᩠-᩿᩼-᪉᪐-᪙᪰-᪽ᬀ-ᬄ᬴-᭄᭐-᭙᭫-᭳ᮀ-ᮂᮡ-ᮭ᮰-᮹᯦-᯳ᰤ-᰷᱀-᱉᱐-᱙᳐-᳔᳒-᳨᳭ᳲ-᳴᳸᳹᷀-᷵᷼-᷿‿⁀⁔⃐-⃥⃜⃡-⃰⳯-⵿⳱ⷠ-〪ⷿ-゙゚〯꘠-꘩꙯ꙴ-꙽ꚟ꛰꛱ꠂ꠆ꠋꠣ-ꠧꢀꢁꢴ-꣄꣐-꣙꣠-꣱꤀-꤉ꤦ-꤭ꥇ-꥓ꦀ-ꦃ꦳-꧀꧐-꧙ꧥ꧰-꧹ꨩ-ꨶꩃꩌꩍ꩐-꩙ꩻ-ꩽꪰꪲ-ꪴꪷꪸꪾ꪿꫁ꫫ-ꫯꫵ꫶ꯣ-ꯪ꯬꯭꯰-꯹ﬞ︀-️︠-︭︳︴﹍-﹏０-９＿";var nonASCIIidentifierStart=new RegExp("["+nonASCIIidentifierStartChars+"]");var nonASCIIidentifier=new RegExp("["+nonASCIIidentifierStartChars+nonASCIIidentifierChars+"]");nonASCIIidentifierStartChars=nonASCIIidentifierChars=null;var astralIdentifierStartCodes=[0,11,2,25,2,18,2,1,2,14,3,13,35,122,70,52,268,28,4,48,48,31,17,26,6,37,11,29,3,35,5,7,2,4,43,157,99,39,9,51,157,310,10,21,11,7,153,5,3,0,2,43,2,1,4,0,3,22,11,22,10,30,98,21,11,25,71,55,7,1,65,0,16,3,2,2,2,26,45,28,4,28,36,7,2,27,28,53,11,21,11,18,14,17,111,72,955,52,76,44,33,24,27,35,42,34,4,0,13,47,15,3,22,0,38,17,2,24,133,46,39,7,3,1,3,21,2,6,2,1,2,4,4,0,32,4,287,47,21,1,2,0,185,46,82,47,21,0,60,42,502,63,32,0,449,56,1288,920,104,110,2962,1070,13266,568,8,30,114,29,19,47,17,3,32,20,6,18,881,68,12,0,67,12,16481,1,3071,106,6,12,4,8,8,9,5991,84,2,70,2,1,3,0,3,1,3,3,2,11,2,0,2,6,2,64,2,3,3,7,2,6,2,27,2,3,2,4,2,0,4,6,2,339,3,24,2,24,2,30,2,24,2,30,2,24,2,30,2,24,2,30,2,24,2,7,4149,196,1340,3,2,26,2,1,2,0,3,0,2,9,2,3,2,0,2,0,7,0,5,0,2,0,2,0,2,2,2,1,2,0,3,0,2,0,2,0,2,0,2,0,2,1,2,0,3,3,2,6,2,3,2,3,2,0,2,9,2,16,6,2,2,4,2,16,4421,42710,42,4148,12,221,16355,541];var astralIdentifierCodes=[509,0,227,0,150,4,294,9,1368,2,2,1,6,3,41,2,5,0,166,1,1306,2,54,14,32,9,16,3,46,10,54,9,7,2,37,13,2,9,52,0,13,2,49,13,16,9,83,11,168,11,6,9,8,2,57,0,2,6,3,1,3,2,10,0,11,1,3,6,4,4,316,19,13,9,214,6,3,8,112,16,16,9,82,12,9,9,535,9,20855,9,135,4,60,6,26,9,1016,45,17,3,19723,1,5319,4,4,5,9,7,3,6,31,3,149,2,1418,49,4305,6,792618,239];function isInAstralSet(code,set){var pos=0x10000;for(var i=0;i<set.length;i+=2){pos+=set[i];if(pos>code)return false;pos+=set[i+1];if(pos>=code)return true;}}
function isIdentifierStart(code,astral){if(code<65)return code===36;if(code<91)return true;if(code<97)return code===95;if(code<123)return true;if(code<=0xffff)return code>=0xaa&&nonASCIIidentifierStart.test(String.fromCharCode(code));if(astral===false)return false;return isInAstralSet(code,astralIdentifierStartCodes);}
function isIdentifierChar(code,astral){if(code<48)return code===36;if(code<58)return true;if(code<65)return false;if(code<91)return true;if(code<97)return code===95;if(code<123)return true;if(code<=0xffff)return code>=0xaa&&nonASCIIidentifier.test(String.fromCharCode(code));if(astral===false)return false;return isInAstralSet(code,astralIdentifierStartCodes)||isInAstralSet(code,astralIdentifierCodes);}},{}],3:[function(_dereq_,module,exports){"use strict";exports.__esModule=true;exports.parse=parse;exports.parseExpressionAt=parseExpressionAt;exports.tokenizer=tokenizer;var _state=_dereq_("./state");_dereq_("./parseutil");_dereq_("./statement");_dereq_("./lval");_dereq_("./expression");_dereq_("./location");exports.Parser=_state.Parser;exports.plugins=_state.plugins;var _options=_dereq_("./options");exports.defaultOptions=_options.defaultOptions;var _locutil=_dereq_("./locutil");exports.Position=_locutil.Position;exports.SourceLocation=_locutil.SourceLocation;exports.getLineInfo=_locutil.getLineInfo;var _node=_dereq_("./node");exports.Node=_node.Node;var _tokentype=_dereq_("./tokentype");exports.TokenType=_tokentype.TokenType;exports.tokTypes=_tokentype.types;var _tokencontext=_dereq_("./tokencontext");exports.TokContext=_tokencontext.TokContext;exports.tokContexts=_tokencontext.types;var _identifier=_dereq_("./identifier");exports.isIdentifierChar=_identifier.isIdentifierChar;exports.isIdentifierStart=_identifier.isIdentifierStart;var _tokenize=_dereq_("./tokenize");exports.Token=_tokenize.Token;var _whitespace=_dereq_("./whitespace");exports.isNewLine=_whitespace.isNewLine;exports.lineBreak=_whitespace.lineBreak;exports.lineBreakG=_whitespace.lineBreakG;var version="2.4.1";exports.version=version;function parse(input,options){return new _state.Parser(options,input).parse();}
function parseExpressionAt(input,pos,options){var p=new _state.Parser(options,input,pos);p.nextToken();return p.parseExpression();}
function tokenizer(input,options){return new _state.Parser(options,input);}},{"./expression":1,"./identifier":2,"./location":4,"./locutil":5,"./lval":6,"./node":7,"./options":8,"./parseutil":9,"./state":10,"./statement":11,"./tokencontext":12,"./tokenize":13,"./tokentype":14,"./whitespace":16}],4:[function(_dereq_,module,exports){"use strict";var _state=_dereq_("./state");var _locutil=_dereq_("./locutil");var pp=_state.Parser.prototype;pp.raise=function(pos,message){var loc=_locutil.getLineInfo(this.input,pos);message+=" ("+loc.line+":"+loc.column+")";var err=new SyntaxError(message);err.pos=pos;err.loc=loc;err.raisedAt=this.pos;throw err;};pp.curPosition=function(){if(this.options.locations){return new _locutil.Position(this.curLine,this.pos-this.lineStart);}};},{"./locutil":5,"./state":10}],5:[function(_dereq_,module,exports){"use strict";exports.__esModule=true;exports.getLineInfo=getLineInfo;function _classCallCheck(instance,Constructor){if(!(instance instanceof Constructor)){throw new TypeError("Cannot call a class as a function");}}
var _whitespace=_dereq_("./whitespace");var Position=(function(){function Position(line,col){_classCallCheck(this,Position);this.line=line;this.column=col;}
Position.prototype.offset=function offset(n){return new Position(this.line,this.column+n);};return Position;})();exports.Position=Position;var SourceLocation=function SourceLocation(p,start,end){_classCallCheck(this,SourceLocation);this.start=start;this.end=end;if(p.sourceFile!==null)this.source=p.sourceFile;};exports.SourceLocation=SourceLocation;function getLineInfo(input,offset){for(var line=1,cur=0;;){_whitespace.lineBreakG.lastIndex=cur;var match=_whitespace.lineBreakG.exec(input);if(match&&match.index<offset){++line;cur=match.index+match[0].length;}else{return new Position(line,offset-cur);}}}},{"./whitespace":16}],6:[function(_dereq_,module,exports){"use strict";var _tokentype=_dereq_("./tokentype");var _state=_dereq_("./state");var _util=_dereq_("./util");var pp=_state.Parser.prototype;pp.toAssignable=function(node,isBinding){if(this.options.ecmaVersion>=6&&node){switch(node.type){case"Identifier":case"ObjectPattern":case"ArrayPattern":case"AssignmentPattern":break;case"ObjectExpression":node.type="ObjectPattern";for(var i=0;i<node.properties.length;i++){var prop=node.properties[i];if(prop.kind!=="init")this.raise(prop.key.start,"Object pattern can't contain getter or setter");this.toAssignable(prop.value,isBinding);}
break;case"ArrayExpression":node.type="ArrayPattern";this.toAssignableList(node.elements,isBinding);break;case"AssignmentExpression":if(node.operator==="="){node.type="AssignmentPattern";delete node.operator;}else{this.raise(node.left.end,"Only '=' operator can be used for specifying default value.");}
break;case"ParenthesizedExpression":node.expression=this.toAssignable(node.expression,isBinding);break;case"MemberExpression":if(!isBinding)break;default:this.raise(node.start,"Assigning to rvalue");}}
return node;};pp.toAssignableList=function(exprList,isBinding){var end=exprList.length;if(end){var last=exprList[end-1];if(last&&last.type=="RestElement"){--end;}else if(last&&last.type=="SpreadElement"){last.type="RestElement";var arg=last.argument;this.toAssignable(arg,isBinding);if(arg.type!=="Identifier"&&arg.type!=="MemberExpression"&&arg.type!=="ArrayPattern")this.unexpected(arg.start);--end;}
if(isBinding&&last.type==="RestElement"&&last.argument.type!=="Identifier")this.unexpected(last.argument.start);}
for(var i=0;i<end;i++){var elt=exprList[i];if(elt)this.toAssignable(elt,isBinding);}
return exprList;};pp.parseSpread=function(refShorthandDefaultPos){var node=this.startNode();this.next();node.argument=this.parseMaybeAssign(refShorthandDefaultPos);return this.finishNode(node,"SpreadElement");};pp.parseRest=function(allowNonIdent){var node=this.startNode();this.next();if(allowNonIdent)node.argument=this.type===_tokentype.types.name?this.parseIdent():this.unexpected();else node.argument=this.type===_tokentype.types.name||this.type===_tokentype.types.bracketL?this.parseBindingAtom():this.unexpected();return this.finishNode(node,"RestElement");};pp.parseBindingAtom=function(){if(this.options.ecmaVersion<6)return this.parseIdent();switch(this.type){case _tokentype.types.name:return this.parseIdent();case _tokentype.types.bracketL:var node=this.startNode();this.next();node.elements=this.parseBindingList(_tokentype.types.bracketR,true,true);return this.finishNode(node,"ArrayPattern");case _tokentype.types.braceL:return this.parseObj(true);default:this.unexpected();}};pp.parseBindingList=function(close,allowEmpty,allowTrailingComma,allowNonIdent){var elts=[],first=true;while(!this.eat(close)){if(first)first=false;else this.expect(_tokentype.types.comma);if(allowEmpty&&this.type===_tokentype.types.comma){elts.push(null);}else if(allowTrailingComma&&this.afterTrailingComma(close)){break;}else if(this.type===_tokentype.types.ellipsis){var rest=this.parseRest(allowNonIdent);this.parseBindingListItem(rest);elts.push(rest);this.expect(close);break;}else{var elem=this.parseMaybeDefault(this.start,this.startLoc);this.parseBindingListItem(elem);elts.push(elem);}}
return elts;};pp.parseBindingListItem=function(param){return param;};pp.parseMaybeDefault=function(startPos,startLoc,left){left=left||this.parseBindingAtom();if(this.options.ecmaVersion<6||!this.eat(_tokentype.types.eq))return left;var node=this.startNodeAt(startPos,startLoc);node.left=left;node.right=this.parseMaybeAssign();return this.finishNode(node,"AssignmentPattern");};pp.checkLVal=function(expr,isBinding,checkClashes){switch(expr.type){case"Identifier":if(this.strict&&this.reservedWordsStrictBind.test(expr.name))this.raise(expr.start,(isBinding?"Binding ":"Assigning to ")+expr.name+" in strict mode");if(checkClashes){if(_util.has(checkClashes,expr.name))this.raise(expr.start,"Argument name clash");checkClashes[expr.name]=true;}
break;case"MemberExpression":if(isBinding)this.raise(expr.start,(isBinding?"Binding":"Assigning to")+" member expression");break;case"ObjectPattern":for(var i=0;i<expr.properties.length;i++){this.checkLVal(expr.properties[i].value,isBinding,checkClashes);}break;case"ArrayPattern":for(var i=0;i<expr.elements.length;i++){var elem=expr.elements[i];if(elem)this.checkLVal(elem,isBinding,checkClashes);}
break;case"AssignmentPattern":this.checkLVal(expr.left,isBinding,checkClashes);break;case"RestElement":this.checkLVal(expr.argument,isBinding,checkClashes);break;case"ParenthesizedExpression":this.checkLVal(expr.expression,isBinding,checkClashes);break;default:this.raise(expr.start,(isBinding?"Binding":"Assigning to")+" rvalue");}};},{"./state":10,"./tokentype":14,"./util":15}],7:[function(_dereq_,module,exports){"use strict";exports.__esModule=true;function _classCallCheck(instance,Constructor){if(!(instance instanceof Constructor)){throw new TypeError("Cannot call a class as a function");}}
var _state=_dereq_("./state");var _locutil=_dereq_("./locutil");var Node=function Node(parser,pos,loc){_classCallCheck(this,Node);this.type="";this.start=pos;this.end=0;if(parser.options.locations)this.loc=new _locutil.SourceLocation(parser,loc);if(parser.options.directSourceFile)this.sourceFile=parser.options.directSourceFile;if(parser.options.ranges)this.range=[pos,0];};exports.Node=Node;var pp=_state.Parser.prototype;pp.startNode=function(){return new Node(this,this.start,this.startLoc);};pp.startNodeAt=function(pos,loc){return new Node(this,pos,loc);};function finishNodeAt(node,type,pos,loc){node.type=type;node.end=pos;if(this.options.locations)node.loc.end=loc;if(this.options.ranges)node.range[1]=pos;return node;}
pp.finishNode=function(node,type){return finishNodeAt.call(this,node,type,this.lastTokEnd,this.lastTokEndLoc);};pp.finishNodeAt=function(node,type,pos,loc){return finishNodeAt.call(this,node,type,pos,loc);};},{"./locutil":5,"./state":10}],8:[function(_dereq_,module,exports){"use strict";exports.__esModule=true;exports.getOptions=getOptions;var _util=_dereq_("./util");var _locutil=_dereq_("./locutil");var defaultOptions={ecmaVersion:5,sourceType:"script",onInsertedSemicolon:null,onTrailingComma:null,allowReserved:null,allowReturnOutsideFunction:false,allowImportExportEverywhere:false,allowHashBang:false,locations:false,onToken:null,onComment:null,ranges:false,program:null,sourceFile:null,directSourceFile:null,preserveParens:false,plugins:{}};exports.defaultOptions=defaultOptions;function getOptions(opts){var options={};for(var opt in defaultOptions){options[opt]=opts&&_util.has(opts,opt)?opts[opt]:defaultOptions[opt];}if(options.allowReserved==null)options.allowReserved=options.ecmaVersion>=5;if(_util.isArray(options.onToken)){(function(){var tokens=options.onToken;options.onToken=function(token){return tokens.push(token);};})();}
if(_util.isArray(options.onComment))options.onComment=pushComment(options,options.onComment);return options;}
function pushComment(options,array){return function(block,text,start,end,startLoc,endLoc){var comment={type:block?'Block':'Line',value:text,start:start,end:end};if(options.locations)comment.loc=new _locutil.SourceLocation(this,startLoc,endLoc);if(options.ranges)comment.range=[start,end];array.push(comment);};}},{"./locutil":5,"./util":15}],9:[function(_dereq_,module,exports){"use strict";var _tokentype=_dereq_("./tokentype");var _state=_dereq_("./state");var _whitespace=_dereq_("./whitespace");var pp=_state.Parser.prototype;pp.isUseStrict=function(stmt){return this.options.ecmaVersion>=5&&stmt.type==="ExpressionStatement"&&stmt.expression.type==="Literal"&&stmt.expression.raw.slice(1,-1)==="use strict";};pp.eat=function(type){if(this.type===type){this.next();return true;}else{return false;}};pp.isContextual=function(name){return this.type===_tokentype.types.name&&this.value===name;};pp.eatContextual=function(name){return this.value===name&&this.eat(_tokentype.types.name);};pp.expectContextual=function(name){if(!this.eatContextual(name))this.unexpected();};pp.canInsertSemicolon=function(){return this.type===_tokentype.types.eof||this.type===_tokentype.types.braceR||_whitespace.lineBreak.test(this.input.slice(this.lastTokEnd,this.start));};pp.insertSemicolon=function(){if(this.canInsertSemicolon()){if(this.options.onInsertedSemicolon)this.options.onInsertedSemicolon(this.lastTokEnd,this.lastTokEndLoc);return true;}};pp.semicolon=function(){if(!this.eat(_tokentype.types.semi)&&!this.insertSemicolon())this.unexpected();};pp.afterTrailingComma=function(tokType){if(this.type==tokType){if(this.options.onTrailingComma)this.options.onTrailingComma(this.lastTokStart,this.lastTokStartLoc);this.next();return true;}};pp.expect=function(type){this.eat(type)||this.unexpected();};pp.unexpected=function(pos){this.raise(pos!=null?pos:this.start,"Unexpected token");};},{"./state":10,"./tokentype":14,"./whitespace":16}],10:[function(_dereq_,module,exports){"use strict";exports.__esModule=true;function _classCallCheck(instance,Constructor){if(!(instance instanceof Constructor)){throw new TypeError("Cannot call a class as a function");}}
var _identifier=_dereq_("./identifier");var _tokentype=_dereq_("./tokentype");var _whitespace=_dereq_("./whitespace");var _options=_dereq_("./options");var plugins={};exports.plugins=plugins;function keywordRegexp(words){return new RegExp("^("+words.replace(/ /g,"|")+")$");}
var Parser=(function(){function Parser(options,input,startPos){_classCallCheck(this,Parser);this.options=_options.getOptions(options);this.sourceFile=this.options.sourceFile;this.keywords=keywordRegexp(_identifier.keywords[this.options.ecmaVersion>=6?6:5]);var reserved=this.options.allowReserved?"":_identifier.reservedWords[this.options.ecmaVersion]+(options.sourceType=="module"?" await":"");this.reservedWords=keywordRegexp(reserved);var reservedStrict=(reserved?reserved+" ":"")+_identifier.reservedWords.strict;this.reservedWordsStrict=keywordRegexp(reservedStrict);this.reservedWordsStrictBind=keywordRegexp(reservedStrict+" "+_identifier.reservedWords.strictBind);this.input=String(input);this.containsEsc=false;this.loadPlugins(this.options.plugins);if(startPos){this.pos=startPos;this.lineStart=Math.max(0,this.input.lastIndexOf("\n",startPos));this.curLine=this.input.slice(0,this.lineStart).split(_whitespace.lineBreak).length;}else{this.pos=this.lineStart=0;this.curLine=1;}
this.type=_tokentype.types.eof;this.value=null;this.start=this.end=this.pos;this.startLoc=this.endLoc=this.curPosition();this.lastTokEndLoc=this.lastTokStartLoc=null;this.lastTokStart=this.lastTokEnd=this.pos;this.context=this.initialContext();this.exprAllowed=true;this.strict=this.inModule=this.options.sourceType==="module";this.potentialArrowAt=-1;this.inFunction=this.inGenerator=false;this.labels=[];if(this.pos===0&&this.options.allowHashBang&&this.input.slice(0,2)==='#!')this.skipLineComment(2);}
Parser.prototype.isKeyword=function isKeyword(word){return this.keywords.test(word);};Parser.prototype.isReservedWord=function isReservedWord(word){return this.reservedWords.test(word);};Parser.prototype.extend=function extend(name,f){this[name]=f(this[name]);};Parser.prototype.loadPlugins=function loadPlugins(pluginConfigs){for(var _name in pluginConfigs){var plugin=plugins[_name];if(!plugin)throw new Error("Plugin '"+_name+"' not found");plugin(this,pluginConfigs[_name]);}};Parser.prototype.parse=function parse(){var node=this.options.program||this.startNode();this.nextToken();return this.parseTopLevel(node);};return Parser;})();exports.Parser=Parser;},{"./identifier":2,"./options":8,"./tokentype":14,"./whitespace":16}],11:[function(_dereq_,module,exports){"use strict";var _tokentype=_dereq_("./tokentype");var _state=_dereq_("./state");var _whitespace=_dereq_("./whitespace");var pp=_state.Parser.prototype;pp.parseTopLevel=function(node){var first=true;if(!node.body)node.body=[];while(this.type!==_tokentype.types.eof){var stmt=this.parseStatement(true,true);node.body.push(stmt);if(first){if(this.isUseStrict(stmt))this.setStrict(true);first=false;}}
this.next();if(this.options.ecmaVersion>=6){node.sourceType=this.options.sourceType;}
return this.finishNode(node,"Program");};var loopLabel={kind:"loop"},switchLabel={kind:"switch"};pp.parseStatement=function(declaration,topLevel){var starttype=this.type,node=this.startNode();switch(starttype){case _tokentype.types._break:case _tokentype.types._continue:return this.parseBreakContinueStatement(node,starttype.keyword);case _tokentype.types._debugger:return this.parseDebuggerStatement(node);case _tokentype.types._do:return this.parseDoStatement(node);case _tokentype.types._for:return this.parseForStatement(node);case _tokentype.types._function:if(!declaration&&this.options.ecmaVersion>=6)this.unexpected();return this.parseFunctionStatement(node);case _tokentype.types._class:if(!declaration)this.unexpected();return this.parseClass(node,true);case _tokentype.types._if:return this.parseIfStatement(node);case _tokentype.types._return:return this.parseReturnStatement(node);case _tokentype.types._switch:return this.parseSwitchStatement(node);case _tokentype.types._throw:return this.parseThrowStatement(node);case _tokentype.types._try:return this.parseTryStatement(node);case _tokentype.types._let:case _tokentype.types._const:if(!declaration)this.unexpected();case _tokentype.types._var:return this.parseVarStatement(node,starttype);case _tokentype.types._while:return this.parseWhileStatement(node);case _tokentype.types._with:return this.parseWithStatement(node);case _tokentype.types.braceL:return this.parseBlock();case _tokentype.types.semi:return this.parseEmptyStatement(node);case _tokentype.types._export:case _tokentype.types._import:if(!this.options.allowImportExportEverywhere){if(!topLevel)this.raise(this.start,"'import' and 'export' may only appear at the top level");if(!this.inModule)this.raise(this.start,"'import' and 'export' may appear only with 'sourceType: module'");}
return starttype===_tokentype.types._import?this.parseImport(node):this.parseExport(node);default:var maybeName=this.value,expr=this.parseExpression();if(starttype===_tokentype.types.name&&expr.type==="Identifier"&&this.eat(_tokentype.types.colon))return this.parseLabeledStatement(node,maybeName,expr);else return this.parseExpressionStatement(node,expr);}};pp.parseBreakContinueStatement=function(node,keyword){var isBreak=keyword=="break";this.next();if(this.eat(_tokentype.types.semi)||this.insertSemicolon())node.label=null;else if(this.type!==_tokentype.types.name)this.unexpected();else{node.label=this.parseIdent();this.semicolon();}
for(var i=0;i<this.labels.length;++i){var lab=this.labels[i];if(node.label==null||lab.name===node.label.name){if(lab.kind!=null&&(isBreak||lab.kind==="loop"))break;if(node.label&&isBreak)break;}}
if(i===this.labels.length)this.raise(node.start,"Unsyntactic "+keyword);return this.finishNode(node,isBreak?"BreakStatement":"ContinueStatement");};pp.parseDebuggerStatement=function(node){this.next();this.semicolon();return this.finishNode(node,"DebuggerStatement");};pp.parseDoStatement=function(node){this.next();this.labels.push(loopLabel);node.body=this.parseStatement(false);this.labels.pop();this.expect(_tokentype.types._while);node.test=this.parseParenExpression();if(this.options.ecmaVersion>=6)this.eat(_tokentype.types.semi);else this.semicolon();return this.finishNode(node,"DoWhileStatement");};pp.parseForStatement=function(node){this.next();this.labels.push(loopLabel);this.expect(_tokentype.types.parenL);if(this.type===_tokentype.types.semi)return this.parseFor(node,null);if(this.type===_tokentype.types._var||this.type===_tokentype.types._let||this.type===_tokentype.types._const){var _init=this.startNode(),varKind=this.type;this.next();this.parseVar(_init,true,varKind);this.finishNode(_init,"VariableDeclaration");if((this.type===_tokentype.types._in||this.options.ecmaVersion>=6&&this.isContextual("of"))&&_init.declarations.length===1&&!(varKind!==_tokentype.types._var&&_init.declarations[0].init))return this.parseForIn(node,_init);return this.parseFor(node,_init);}
var refShorthandDefaultPos={start:0};var init=this.parseExpression(true,refShorthandDefaultPos);if(this.type===_tokentype.types._in||this.options.ecmaVersion>=6&&this.isContextual("of")){this.toAssignable(init);this.checkLVal(init);return this.parseForIn(node,init);}else if(refShorthandDefaultPos.start){this.unexpected(refShorthandDefaultPos.start);}
return this.parseFor(node,init);};pp.parseFunctionStatement=function(node){this.next();return this.parseFunction(node,true);};pp.parseIfStatement=function(node){this.next();node.test=this.parseParenExpression();node.consequent=this.parseStatement(false);node.alternate=this.eat(_tokentype.types._else)?this.parseStatement(false):null;return this.finishNode(node,"IfStatement");};pp.parseReturnStatement=function(node){if(!this.inFunction&&!this.options.allowReturnOutsideFunction)this.raise(this.start,"'return' outside of function");this.next();if(this.eat(_tokentype.types.semi)||this.insertSemicolon())node.argument=null;else{node.argument=this.parseExpression();this.semicolon();}
return this.finishNode(node,"ReturnStatement");};pp.parseSwitchStatement=function(node){this.next();node.discriminant=this.parseParenExpression();node.cases=[];this.expect(_tokentype.types.braceL);this.labels.push(switchLabel);for(var cur,sawDefault=false;this.type!=_tokentype.types.braceR;){if(this.type===_tokentype.types._case||this.type===_tokentype.types._default){var isCase=this.type===_tokentype.types._case;if(cur)this.finishNode(cur,"SwitchCase");node.cases.push(cur=this.startNode());cur.consequent=[];this.next();if(isCase){cur.test=this.parseExpression();}else{if(sawDefault)this.raise(this.lastTokStart,"Multiple default clauses");sawDefault=true;cur.test=null;}
this.expect(_tokentype.types.colon);}else{if(!cur)this.unexpected();cur.consequent.push(this.parseStatement(true));}}
if(cur)this.finishNode(cur,"SwitchCase");this.next();this.labels.pop();return this.finishNode(node,"SwitchStatement");};pp.parseThrowStatement=function(node){this.next();if(_whitespace.lineBreak.test(this.input.slice(this.lastTokEnd,this.start)))this.raise(this.lastTokEnd,"Illegal newline after throw");node.argument=this.parseExpression();this.semicolon();return this.finishNode(node,"ThrowStatement");};var empty=[];pp.parseTryStatement=function(node){this.next();node.block=this.parseBlock();node.handler=null;if(this.type===_tokentype.types._catch){var clause=this.startNode();this.next();this.expect(_tokentype.types.parenL);clause.param=this.parseBindingAtom();this.checkLVal(clause.param,true);this.expect(_tokentype.types.parenR);clause.body=this.parseBlock();node.handler=this.finishNode(clause,"CatchClause");}
node.finalizer=this.eat(_tokentype.types._finally)?this.parseBlock():null;if(!node.handler&&!node.finalizer)this.raise(node.start,"Missing catch or finally clause");return this.finishNode(node,"TryStatement");};pp.parseVarStatement=function(node,kind){this.next();this.parseVar(node,false,kind);this.semicolon();return this.finishNode(node,"VariableDeclaration");};pp.parseWhileStatement=function(node){this.next();node.test=this.parseParenExpression();this.labels.push(loopLabel);node.body=this.parseStatement(false);this.labels.pop();return this.finishNode(node,"WhileStatement");};pp.parseWithStatement=function(node){if(this.strict)this.raise(this.start,"'with' in strict mode");this.next();node.object=this.parseParenExpression();node.body=this.parseStatement(false);return this.finishNode(node,"WithStatement");};pp.parseEmptyStatement=function(node){this.next();return this.finishNode(node,"EmptyStatement");};pp.parseLabeledStatement=function(node,maybeName,expr){for(var i=0;i<this.labels.length;++i){if(this.labels[i].name===maybeName)this.raise(expr.start,"Label '"+maybeName+"' is already declared");}var kind=this.type.isLoop?"loop":this.type===_tokentype.types._switch?"switch":null;for(var i=this.labels.length-1;i>=0;i--){var label=this.labels[i];if(label.statementStart==node.start){label.statementStart=this.start;label.kind=kind;}else break;}
this.labels.push({name:maybeName,kind:kind,statementStart:this.start});node.body=this.parseStatement(true);this.labels.pop();node.label=expr;return this.finishNode(node,"LabeledStatement");};pp.parseExpressionStatement=function(node,expr){node.expression=expr;this.semicolon();return this.finishNode(node,"ExpressionStatement");};pp.parseBlock=function(allowStrict){var node=this.startNode(),first=true,oldStrict=undefined;node.body=[];this.expect(_tokentype.types.braceL);while(!this.eat(_tokentype.types.braceR)){var stmt=this.parseStatement(true);node.body.push(stmt);if(first&&allowStrict&&this.isUseStrict(stmt)){oldStrict=this.strict;this.setStrict(this.strict=true);}
first=false;}
if(oldStrict===false)this.setStrict(false);return this.finishNode(node,"BlockStatement");};pp.parseFor=function(node,init){node.init=init;this.expect(_tokentype.types.semi);node.test=this.type===_tokentype.types.semi?null:this.parseExpression();this.expect(_tokentype.types.semi);node.update=this.type===_tokentype.types.parenR?null:this.parseExpression();this.expect(_tokentype.types.parenR);node.body=this.parseStatement(false);this.labels.pop();return this.finishNode(node,"ForStatement");};pp.parseForIn=function(node,init){var type=this.type===_tokentype.types._in?"ForInStatement":"ForOfStatement";this.next();node.left=init;node.right=this.parseExpression();this.expect(_tokentype.types.parenR);node.body=this.parseStatement(false);this.labels.pop();return this.finishNode(node,type);};pp.parseVar=function(node,isFor,kind){node.declarations=[];node.kind=kind.keyword;for(;;){var decl=this.startNode();this.parseVarId(decl);if(this.eat(_tokentype.types.eq)){decl.init=this.parseMaybeAssign(isFor);}else if(kind===_tokentype.types._const&&!(this.type===_tokentype.types._in||this.options.ecmaVersion>=6&&this.isContextual("of"))){this.unexpected();}else if(decl.id.type!="Identifier"&&!(isFor&&(this.type===_tokentype.types._in||this.isContextual("of")))){this.raise(this.lastTokEnd,"Complex binding patterns require an initialization value");}else{decl.init=null;}
node.declarations.push(this.finishNode(decl,"VariableDeclarator"));if(!this.eat(_tokentype.types.comma))break;}
return node;};pp.parseVarId=function(decl){decl.id=this.parseBindingAtom();this.checkLVal(decl.id,true);};pp.parseFunction=function(node,isStatement,allowExpressionBody){this.initFunction(node);if(this.options.ecmaVersion>=6)node.generator=this.eat(_tokentype.types.star);if(isStatement||this.type===_tokentype.types.name)node.id=this.parseIdent();this.parseFunctionParams(node);this.parseFunctionBody(node,allowExpressionBody);return this.finishNode(node,isStatement?"FunctionDeclaration":"FunctionExpression");};pp.parseFunctionParams=function(node){this.expect(_tokentype.types.parenL);node.params=this.parseBindingList(_tokentype.types.parenR,false,false,true);};pp.parseClass=function(node,isStatement){this.next();this.parseClassId(node,isStatement);this.parseClassSuper(node);var classBody=this.startNode();var hadConstructor=false;classBody.body=[];this.expect(_tokentype.types.braceL);while(!this.eat(_tokentype.types.braceR)){if(this.eat(_tokentype.types.semi))continue;var method=this.startNode();var isGenerator=this.eat(_tokentype.types.star);var isMaybeStatic=this.type===_tokentype.types.name&&this.value==="static";this.parsePropertyName(method);method["static"]=isMaybeStatic&&this.type!==_tokentype.types.parenL;if(method["static"]){if(isGenerator)this.unexpected();isGenerator=this.eat(_tokentype.types.star);this.parsePropertyName(method);}
method.kind="method";var isGetSet=false;if(!method.computed){var key=method.key;if(!isGenerator&&key.type==="Identifier"&&this.type!==_tokentype.types.parenL&&(key.name==="get"||key.name==="set")){isGetSet=true;method.kind=key.name;key=this.parsePropertyName(method);}
if(!method["static"]&&(key.type==="Identifier"&&key.name==="constructor"||key.type==="Literal"&&key.value==="constructor")){if(hadConstructor)this.raise(key.start,"Duplicate constructor in the same class");if(isGetSet)this.raise(key.start,"Constructor can't have get/set modifier");if(isGenerator)this.raise(key.start,"Constructor can't be a generator");method.kind="constructor";hadConstructor=true;}}
this.parseClassMethod(classBody,method,isGenerator);if(isGetSet){var paramCount=method.kind==="get"?0:1;if(method.value.params.length!==paramCount){var start=method.value.start;if(method.kind==="get")this.raise(start,"getter should have no params");else this.raise(start,"setter should have exactly one param");}}}
node.body=this.finishNode(classBody,"ClassBody");return this.finishNode(node,isStatement?"ClassDeclaration":"ClassExpression");};pp.parseClassMethod=function(classBody,method,isGenerator){method.value=this.parseMethod(isGenerator);classBody.body.push(this.finishNode(method,"MethodDefinition"));};pp.parseClassId=function(node,isStatement){node.id=this.type===_tokentype.types.name?this.parseIdent():isStatement?this.unexpected():null;};pp.parseClassSuper=function(node){node.superClass=this.eat(_tokentype.types._extends)?this.parseExprSubscripts():null;};pp.parseExport=function(node){this.next();if(this.eat(_tokentype.types.star)){this.expectContextual("from");node.source=this.type===_tokentype.types.string?this.parseExprAtom():this.unexpected();this.semicolon();return this.finishNode(node,"ExportAllDeclaration");}
if(this.eat(_tokentype.types._default)){var expr=this.parseMaybeAssign();var needsSemi=true;if(expr.type=="FunctionExpression"||expr.type=="ClassExpression"){needsSemi=false;if(expr.id){expr.type=expr.type=="FunctionExpression"?"FunctionDeclaration":"ClassDeclaration";}}
node.declaration=expr;if(needsSemi)this.semicolon();return this.finishNode(node,"ExportDefaultDeclaration");}
if(this.shouldParseExportStatement()){node.declaration=this.parseStatement(true);node.specifiers=[];node.source=null;}else{node.declaration=null;node.specifiers=this.parseExportSpecifiers();if(this.eatContextual("from")){node.source=this.type===_tokentype.types.string?this.parseExprAtom():this.unexpected();}else{for(var i=0;i<node.specifiers.length;i++){if(this.keywords.test(node.specifiers[i].local.name)||this.reservedWords.test(node.specifiers[i].local.name)){this.unexpected(node.specifiers[i].local.start);}}
node.source=null;}
this.semicolon();}
return this.finishNode(node,"ExportNamedDeclaration");};pp.shouldParseExportStatement=function(){return this.type.keyword;};pp.parseExportSpecifiers=function(){var nodes=[],first=true;this.expect(_tokentype.types.braceL);while(!this.eat(_tokentype.types.braceR)){if(!first){this.expect(_tokentype.types.comma);if(this.afterTrailingComma(_tokentype.types.braceR))break;}else first=false;var node=this.startNode();node.local=this.parseIdent(this.type===_tokentype.types._default);node.exported=this.eatContextual("as")?this.parseIdent(true):node.local;nodes.push(this.finishNode(node,"ExportSpecifier"));}
return nodes;};pp.parseImport=function(node){this.next();if(this.type===_tokentype.types.string){node.specifiers=empty;node.source=this.parseExprAtom();}else{node.specifiers=this.parseImportSpecifiers();this.expectContextual("from");node.source=this.type===_tokentype.types.string?this.parseExprAtom():this.unexpected();}
this.semicolon();return this.finishNode(node,"ImportDeclaration");};pp.parseImportSpecifiers=function(){var nodes=[],first=true;if(this.type===_tokentype.types.name){var node=this.startNode();node.local=this.parseIdent();this.checkLVal(node.local,true);nodes.push(this.finishNode(node,"ImportDefaultSpecifier"));if(!this.eat(_tokentype.types.comma))return nodes;}
if(this.type===_tokentype.types.star){var node=this.startNode();this.next();this.expectContextual("as");node.local=this.parseIdent();this.checkLVal(node.local,true);nodes.push(this.finishNode(node,"ImportNamespaceSpecifier"));return nodes;}
this.expect(_tokentype.types.braceL);while(!this.eat(_tokentype.types.braceR)){if(!first){this.expect(_tokentype.types.comma);if(this.afterTrailingComma(_tokentype.types.braceR))break;}else first=false;var node=this.startNode();node.imported=this.parseIdent(true);node.local=this.eatContextual("as")?this.parseIdent():node.imported;this.checkLVal(node.local,true);nodes.push(this.finishNode(node,"ImportSpecifier"));}
return nodes;};},{"./state":10,"./tokentype":14,"./whitespace":16}],12:[function(_dereq_,module,exports){"use strict";exports.__esModule=true;function _classCallCheck(instance,Constructor){if(!(instance instanceof Constructor)){throw new TypeError("Cannot call a class as a function");}}
var _state=_dereq_("./state");var _tokentype=_dereq_("./tokentype");var _whitespace=_dereq_("./whitespace");var TokContext=function TokContext(token,isExpr,preserveSpace,override){_classCallCheck(this,TokContext);this.token=token;this.isExpr=!!isExpr;this.preserveSpace=!!preserveSpace;this.override=override;};exports.TokContext=TokContext;var types={b_stat:new TokContext("{",false),b_expr:new TokContext("{",true),b_tmpl:new TokContext("${",true),p_stat:new TokContext("(",false),p_expr:new TokContext("(",true),q_tmpl:new TokContext("`",true,true,function(p){return p.readTmplToken();}),f_expr:new TokContext("function",true)};exports.types=types;var pp=_state.Parser.prototype;pp.initialContext=function(){return[types.b_stat];};pp.braceIsBlock=function(prevType){if(prevType===_tokentype.types.colon){var _parent=this.curContext();if(_parent===types.b_stat||_parent===types.b_expr)return!_parent.isExpr;}
if(prevType===_tokentype.types._return)return _whitespace.lineBreak.test(this.input.slice(this.lastTokEnd,this.start));if(prevType===_tokentype.types._else||prevType===_tokentype.types.semi||prevType===_tokentype.types.eof||prevType===_tokentype.types.parenR)return true;if(prevType==_tokentype.types.braceL)return this.curContext()===types.b_stat;return!this.exprAllowed;};pp.updateContext=function(prevType){var update=undefined,type=this.type;if(type.keyword&&prevType==_tokentype.types.dot)this.exprAllowed=false;else if(update=type.updateContext)update.call(this,prevType);else this.exprAllowed=type.beforeExpr;};_tokentype.types.parenR.updateContext=_tokentype.types.braceR.updateContext=function(){if(this.context.length==1){this.exprAllowed=true;return;}
var out=this.context.pop();if(out===types.b_stat&&this.curContext()===types.f_expr){this.context.pop();this.exprAllowed=false;}else if(out===types.b_tmpl){this.exprAllowed=true;}else{this.exprAllowed=!out.isExpr;}};_tokentype.types.braceL.updateContext=function(prevType){this.context.push(this.braceIsBlock(prevType)?types.b_stat:types.b_expr);this.exprAllowed=true;};_tokentype.types.dollarBraceL.updateContext=function(){this.context.push(types.b_tmpl);this.exprAllowed=true;};_tokentype.types.parenL.updateContext=function(prevType){var statementParens=prevType===_tokentype.types._if||prevType===_tokentype.types._for||prevType===_tokentype.types._with||prevType===_tokentype.types._while;this.context.push(statementParens?types.p_stat:types.p_expr);this.exprAllowed=true;};_tokentype.types.incDec.updateContext=function(){};_tokentype.types._function.updateContext=function(){if(this.curContext()!==types.b_stat)this.context.push(types.f_expr);this.exprAllowed=false;};_tokentype.types.backQuote.updateContext=function(){if(this.curContext()===types.q_tmpl)this.context.pop();else this.context.push(types.q_tmpl);this.exprAllowed=false;};},{"./state":10,"./tokentype":14,"./whitespace":16}],13:[function(_dereq_,module,exports){"use strict";exports.__esModule=true;function _classCallCheck(instance,Constructor){if(!(instance instanceof Constructor)){throw new TypeError("Cannot call a class as a function");}}
var _identifier=_dereq_("./identifier");var _tokentype=_dereq_("./tokentype");var _state=_dereq_("./state");var _locutil=_dereq_("./locutil");var _whitespace=_dereq_("./whitespace");var Token=function Token(p){_classCallCheck(this,Token);this.type=p.type;this.value=p.value;this.start=p.start;this.end=p.end;if(p.options.locations)this.loc=new _locutil.SourceLocation(p,p.startLoc,p.endLoc);if(p.options.ranges)this.range=[p.start,p.end];};exports.Token=Token;var pp=_state.Parser.prototype;var isRhino=typeof Packages=="object"&&Object.prototype.toString.call(Packages)=="[object JavaPackage]";pp.next=function(){if(this.options.onToken)this.options.onToken(new Token(this));this.lastTokEnd=this.end;this.lastTokStart=this.start;this.lastTokEndLoc=this.endLoc;this.lastTokStartLoc=this.startLoc;this.nextToken();};pp.getToken=function(){this.next();return new Token(this);};if(typeof Symbol!=="undefined")pp[Symbol.iterator]=function(){var self=this;return{next:function next(){var token=self.getToken();return{done:token.type===_tokentype.types.eof,value:token};}};};pp.setStrict=function(strict){this.strict=strict;if(this.type!==_tokentype.types.num&&this.type!==_tokentype.types.string)return;this.pos=this.start;if(this.options.locations){while(this.pos<this.lineStart){this.lineStart=this.input.lastIndexOf("\n",this.lineStart-2)+1;--this.curLine;}}
this.nextToken();};pp.curContext=function(){return this.context[this.context.length-1];};pp.nextToken=function(){var curContext=this.curContext();if(!curContext||!curContext.preserveSpace)this.skipSpace();this.start=this.pos;if(this.options.locations)this.startLoc=this.curPosition();if(this.pos>=this.input.length)return this.finishToken(_tokentype.types.eof);if(curContext.override)return curContext.override(this);else this.readToken(this.fullCharCodeAtPos());};pp.readToken=function(code){if(_identifier.isIdentifierStart(code,this.options.ecmaVersion>=6)||code===92)return this.readWord();return this.getTokenFromCode(code);};pp.fullCharCodeAtPos=function(){var code=this.input.charCodeAt(this.pos);if(code<=0xd7ff||code>=0xe000)return code;var next=this.input.charCodeAt(this.pos+1);return(code<<10)+next-0x35fdc00;};pp.skipBlockComment=function(){var startLoc=this.options.onComment&&this.curPosition();var start=this.pos,end=this.input.indexOf("*/",this.pos+=2);if(end===-1)this.raise(this.pos-2,"Unterminated comment");this.pos=end+2;if(this.options.locations){_whitespace.lineBreakG.lastIndex=start;var match=undefined;while((match=_whitespace.lineBreakG.exec(this.input))&&match.index<this.pos){++this.curLine;this.lineStart=match.index+match[0].length;}}
if(this.options.onComment)this.options.onComment(true,this.input.slice(start+2,end),start,this.pos,startLoc,this.curPosition());};pp.skipLineComment=function(startSkip){var start=this.pos;var startLoc=this.options.onComment&&this.curPosition();var ch=this.input.charCodeAt(this.pos+=startSkip);while(this.pos<this.input.length&&ch!==10&&ch!==13&&ch!==8232&&ch!==8233){++this.pos;ch=this.input.charCodeAt(this.pos);}
if(this.options.onComment)this.options.onComment(false,this.input.slice(start+startSkip,this.pos),start,this.pos,startLoc,this.curPosition());};pp.skipSpace=function(){loop:while(this.pos<this.input.length){var ch=this.input.charCodeAt(this.pos);switch(ch){case 32:case 160:++this.pos;break;case 13:if(this.input.charCodeAt(this.pos+1)===10){++this.pos;}
case 10:case 8232:case 8233:++this.pos;if(this.options.locations){++this.curLine;this.lineStart=this.pos;}
break;case 47:switch(this.input.charCodeAt(this.pos+1)){case 42:this.skipBlockComment();break;case 47:this.skipLineComment(2);break;default:break loop;}
break;default:if(ch>8&&ch<14||ch>=5760&&_whitespace.nonASCIIwhitespace.test(String.fromCharCode(ch))){++this.pos;}else{break loop;}}}};pp.finishToken=function(type,val){this.end=this.pos;if(this.options.locations)this.endLoc=this.curPosition();var prevType=this.type;this.type=type;this.value=val;this.updateContext(prevType);};pp.readToken_dot=function(){var next=this.input.charCodeAt(this.pos+1);if(next>=48&&next<=57)return this.readNumber(true);var next2=this.input.charCodeAt(this.pos+2);if(this.options.ecmaVersion>=6&&next===46&&next2===46){this.pos+=3;return this.finishToken(_tokentype.types.ellipsis);}else{++this.pos;return this.finishToken(_tokentype.types.dot);}};pp.readToken_slash=function(){var next=this.input.charCodeAt(this.pos+1);if(this.exprAllowed){++this.pos;return this.readRegexp();}
if(next===61)return this.finishOp(_tokentype.types.assign,2);return this.finishOp(_tokentype.types.slash,1);};pp.readToken_mult_modulo=function(code){var next=this.input.charCodeAt(this.pos+1);if(next===61)return this.finishOp(_tokentype.types.assign,2);return this.finishOp(code===42?_tokentype.types.star:_tokentype.types.modulo,1);};pp.readToken_pipe_amp=function(code){var next=this.input.charCodeAt(this.pos+1);if(next===code)return this.finishOp(code===124?_tokentype.types.logicalOR:_tokentype.types.logicalAND,2);if(next===61)return this.finishOp(_tokentype.types.assign,2);return this.finishOp(code===124?_tokentype.types.bitwiseOR:_tokentype.types.bitwiseAND,1);};pp.readToken_caret=function(){var next=this.input.charCodeAt(this.pos+1);if(next===61)return this.finishOp(_tokentype.types.assign,2);return this.finishOp(_tokentype.types.bitwiseXOR,1);};pp.readToken_plus_min=function(code){var next=this.input.charCodeAt(this.pos+1);if(next===code){if(next==45&&this.input.charCodeAt(this.pos+2)==62&&_whitespace.lineBreak.test(this.input.slice(this.lastTokEnd,this.pos))){this.skipLineComment(3);this.skipSpace();return this.nextToken();}
return this.finishOp(_tokentype.types.incDec,2);}
if(next===61)return this.finishOp(_tokentype.types.assign,2);return this.finishOp(_tokentype.types.plusMin,1);};pp.readToken_lt_gt=function(code){var next=this.input.charCodeAt(this.pos+1);var size=1;if(next===code){size=code===62&&this.input.charCodeAt(this.pos+2)===62?3:2;if(this.input.charCodeAt(this.pos+size)===61)return this.finishOp(_tokentype.types.assign,size+1);return this.finishOp(_tokentype.types.bitShift,size);}
if(next==33&&code==60&&this.input.charCodeAt(this.pos+2)==45&&this.input.charCodeAt(this.pos+3)==45){if(this.inModule)this.unexpected();this.skipLineComment(4);this.skipSpace();return this.nextToken();}
if(next===61)size=this.input.charCodeAt(this.pos+2)===61?3:2;return this.finishOp(_tokentype.types.relational,size);};pp.readToken_eq_excl=function(code){var next=this.input.charCodeAt(this.pos+1);if(next===61)return this.finishOp(_tokentype.types.equality,this.input.charCodeAt(this.pos+2)===61?3:2);if(code===61&&next===62&&this.options.ecmaVersion>=6){this.pos+=2;return this.finishToken(_tokentype.types.arrow);}
return this.finishOp(code===61?_tokentype.types.eq:_tokentype.types.prefix,1);};pp.getTokenFromCode=function(code){switch(code){case 46:return this.readToken_dot();case 40:++this.pos;return this.finishToken(_tokentype.types.parenL);case 41:++this.pos;return this.finishToken(_tokentype.types.parenR);case 59:++this.pos;return this.finishToken(_tokentype.types.semi);case 44:++this.pos;return this.finishToken(_tokentype.types.comma);case 91:++this.pos;return this.finishToken(_tokentype.types.bracketL);case 93:++this.pos;return this.finishToken(_tokentype.types.bracketR);case 123:++this.pos;return this.finishToken(_tokentype.types.braceL);case 125:++this.pos;return this.finishToken(_tokentype.types.braceR);case 58:++this.pos;return this.finishToken(_tokentype.types.colon);case 63:++this.pos;return this.finishToken(_tokentype.types.question);case 96:if(this.options.ecmaVersion<6)break;++this.pos;return this.finishToken(_tokentype.types.backQuote);case 48:var next=this.input.charCodeAt(this.pos+1);if(next===120||next===88)return this.readRadixNumber(16);if(this.options.ecmaVersion>=6){if(next===111||next===79)return this.readRadixNumber(8);if(next===98||next===66)return this.readRadixNumber(2);}
case 49:case 50:case 51:case 52:case 53:case 54:case 55:case 56:case 57:return this.readNumber(false);case 34:case 39:return this.readString(code);case 47:return this.readToken_slash();case 37:case 42:return this.readToken_mult_modulo(code);case 124:case 38:return this.readToken_pipe_amp(code);case 94:return this.readToken_caret();case 43:case 45:return this.readToken_plus_min(code);case 60:case 62:return this.readToken_lt_gt(code);case 61:case 33:return this.readToken_eq_excl(code);case 126:return this.finishOp(_tokentype.types.prefix,1);}
this.raise(this.pos,"Unexpected character '"+codePointToString(code)+"'");};pp.finishOp=function(type,size){var str=this.input.slice(this.pos,this.pos+size);this.pos+=size;return this.finishToken(type,str);};function tryCreateRegexp(src,flags,throwErrorAt,parser){try{return new RegExp(src,flags);}catch(e){if(throwErrorAt!==undefined){if(e instanceof SyntaxError)parser.raise(throwErrorAt,"Error parsing regular expression: "+e.message);throw e;}}}
var regexpUnicodeSupport=!!tryCreateRegexp("￿","u");pp.readRegexp=function(){var _this=this;var escaped=undefined,inClass=undefined,start=this.pos;for(;;){if(this.pos>=this.input.length)this.raise(start,"Unterminated regular expression");var ch=this.input.charAt(this.pos);if(_whitespace.lineBreak.test(ch))this.raise(start,"Unterminated regular expression");if(!escaped){if(ch==="[")inClass=true;else if(ch==="]"&&inClass)inClass=false;else if(ch==="/"&&!inClass)break;escaped=ch==="\\";}else escaped=false;++this.pos;}
var content=this.input.slice(start,this.pos);++this.pos;var mods=this.readWord1();var tmp=content;if(mods){var validFlags=/^[gmsiy]*$/;if(this.options.ecmaVersion>=6)validFlags=/^[gmsiyu]*$/;if(!validFlags.test(mods))this.raise(start,"Invalid regular expression flag");if(mods.indexOf('u')>=0&&!regexpUnicodeSupport){tmp=tmp.replace(/\\u\{([0-9a-fA-F]+)\}/g,function(_match,code,offset){code=Number("0x"+code);if(code>0x10FFFF)_this.raise(start+offset+3,"Code point out of bounds");return"x";});tmp=tmp.replace(/\\u([a-fA-F0-9]{4})|[\uD800-\uDBFF][\uDC00-\uDFFF]/g,"x");}}
var value=null;if(!isRhino){tryCreateRegexp(tmp,undefined,start,this);value=tryCreateRegexp(content,mods);}
return this.finishToken(_tokentype.types.regexp,{pattern:content,flags:mods,value:value});};pp.readInt=function(radix,len){var start=this.pos,total=0;for(var i=0,e=len==null?Infinity:len;i<e;++i){var code=this.input.charCodeAt(this.pos),val=undefined;if(code>=97)val=code-97+10;else if(code>=65)val=code-65+10;else if(code>=48&&code<=57)val=code-48;else val=Infinity;if(val>=radix)break;++this.pos;total=total*radix+val;}
if(this.pos===start||len!=null&&this.pos-start!==len)return null;return total;};pp.readRadixNumber=function(radix){this.pos+=2;var val=this.readInt(radix);if(val==null)this.raise(this.start+2,"Expected number in radix "+radix);if(_identifier.isIdentifierStart(this.fullCharCodeAtPos()))this.raise(this.pos,"Identifier directly after number");return this.finishToken(_tokentype.types.num,val);};pp.readNumber=function(startsWithDot){var start=this.pos,isFloat=false,octal=this.input.charCodeAt(this.pos)===48;if(!startsWithDot&&this.readInt(10)===null)this.raise(start,"Invalid number");var next=this.input.charCodeAt(this.pos);if(next===46){++this.pos;this.readInt(10);isFloat=true;next=this.input.charCodeAt(this.pos);}
if(next===69||next===101){next=this.input.charCodeAt(++this.pos);if(next===43||next===45)++this.pos;if(this.readInt(10)===null)this.raise(start,"Invalid number");isFloat=true;}
if(_identifier.isIdentifierStart(this.fullCharCodeAtPos()))this.raise(this.pos,"Identifier directly after number");var str=this.input.slice(start,this.pos),val=undefined;if(isFloat)val=parseFloat(str);else if(!octal||str.length===1)val=parseInt(str,10);else if(/[89]/.test(str)||this.strict)this.raise(start,"Invalid number");else val=parseInt(str,8);return this.finishToken(_tokentype.types.num,val);};pp.readCodePoint=function(){var ch=this.input.charCodeAt(this.pos),code=undefined;if(ch===123){if(this.options.ecmaVersion<6)this.unexpected();var codePos=++this.pos;code=this.readHexChar(this.input.indexOf('}',this.pos)-this.pos);++this.pos;if(code>0x10FFFF)this.raise(codePos,"Code point out of bounds");}else{code=this.readHexChar(4);}
return code;};function codePointToString(code){if(code<=0xFFFF)return String.fromCharCode(code);code-=0x10000;return String.fromCharCode((code>>10)+0xD800,(code&1023)+0xDC00);}
pp.readString=function(quote){var out="",chunkStart=++this.pos;for(;;){if(this.pos>=this.input.length)this.raise(this.start,"Unterminated string constant");var ch=this.input.charCodeAt(this.pos);if(ch===quote)break;if(ch===92){out+=this.input.slice(chunkStart,this.pos);out+=this.readEscapedChar(false);chunkStart=this.pos;}else{if(_whitespace.isNewLine(ch))this.raise(this.start,"Unterminated string constant");++this.pos;}}
out+=this.input.slice(chunkStart,this.pos++);return this.finishToken(_tokentype.types.string,out);};pp.readTmplToken=function(){var out="",chunkStart=this.pos;for(;;){if(this.pos>=this.input.length)this.raise(this.start,"Unterminated template");var ch=this.input.charCodeAt(this.pos);if(ch===96||ch===36&&this.input.charCodeAt(this.pos+1)===123){if(this.pos===this.start&&this.type===_tokentype.types.template){if(ch===36){this.pos+=2;return this.finishToken(_tokentype.types.dollarBraceL);}else{++this.pos;return this.finishToken(_tokentype.types.backQuote);}}
out+=this.input.slice(chunkStart,this.pos);return this.finishToken(_tokentype.types.template,out);}
if(ch===92){out+=this.input.slice(chunkStart,this.pos);out+=this.readEscapedChar(true);chunkStart=this.pos;}else if(_whitespace.isNewLine(ch)){out+=this.input.slice(chunkStart,this.pos);++this.pos;switch(ch){case 13:if(this.input.charCodeAt(this.pos)===10)++this.pos;case 10:out+="\n";break;default:out+=String.fromCharCode(ch);break;}
if(this.options.locations){++this.curLine;this.lineStart=this.pos;}
chunkStart=this.pos;}else{++this.pos;}}};pp.readEscapedChar=function(inTemplate){var ch=this.input.charCodeAt(++this.pos);++this.pos;switch(ch){case 110:return"\n";case 114:return"\r";case 120:return String.fromCharCode(this.readHexChar(2));case 117:return codePointToString(this.readCodePoint());case 116:return"\t";case 98:return"\b";case 118:return"\u000b";case 102:return"\f";case 13:if(this.input.charCodeAt(this.pos)===10)++this.pos;case 10:if(this.options.locations){this.lineStart=this.pos;++this.curLine;}
return"";default:if(ch>=48&&ch<=55){var octalStr=this.input.substr(this.pos-1,3).match(/^[0-7]+/)[0];var octal=parseInt(octalStr,8);if(octal>255){octalStr=octalStr.slice(0,-1);octal=parseInt(octalStr,8);}
if(octal>0&&(this.strict||inTemplate)){this.raise(this.pos-2,"Octal literal in strict mode");}
this.pos+=octalStr.length-1;return String.fromCharCode(octal);}
return String.fromCharCode(ch);}};pp.readHexChar=function(len){var codePos=this.pos;var n=this.readInt(16,len);if(n===null)this.raise(codePos,"Bad character escape sequence");return n;};pp.readWord1=function(){this.containsEsc=false;var word="",first=true,chunkStart=this.pos;var astral=this.options.ecmaVersion>=6;while(this.pos<this.input.length){var ch=this.fullCharCodeAtPos();if(_identifier.isIdentifierChar(ch,astral)){this.pos+=ch<=0xffff?1:2;}else if(ch===92){this.containsEsc=true;word+=this.input.slice(chunkStart,this.pos);var escStart=this.pos;if(this.input.charCodeAt(++this.pos)!=117)
this.raise(this.pos,"Expecting Unicode escape sequence \\uXXXX");++this.pos;var esc=this.readCodePoint();if(!(first?_identifier.isIdentifierStart:_identifier.isIdentifierChar)(esc,astral))this.raise(escStart,"Invalid Unicode escape");word+=codePointToString(esc);chunkStart=this.pos;}else{break;}
first=false;}
return word+this.input.slice(chunkStart,this.pos);};pp.readWord=function(){var word=this.readWord1();var type=_tokentype.types.name;if((this.options.ecmaVersion>=6||!this.containsEsc)&&this.keywords.test(word))type=_tokentype.keywords[word];return this.finishToken(type,word);};},{"./identifier":2,"./locutil":5,"./state":10,"./tokentype":14,"./whitespace":16}],14:[function(_dereq_,module,exports){"use strict";exports.__esModule=true;function _classCallCheck(instance,Constructor){if(!(instance instanceof Constructor)){throw new TypeError("Cannot call a class as a function");}}
var TokenType=function TokenType(label){var conf=arguments.length<=1||arguments[1]===undefined?{}:arguments[1];_classCallCheck(this,TokenType);this.label=label;this.keyword=conf.keyword;this.beforeExpr=!!conf.beforeExpr;this.startsExpr=!!conf.startsExpr;this.isLoop=!!conf.isLoop;this.isAssign=!!conf.isAssign;this.prefix=!!conf.prefix;this.postfix=!!conf.postfix;this.binop=conf.binop||null;this.updateContext=null;};exports.TokenType=TokenType;function binop(name,prec){return new TokenType(name,{beforeExpr:true,binop:prec});}
var beforeExpr={beforeExpr:true},startsExpr={startsExpr:true};var types={num:new TokenType("num",startsExpr),regexp:new TokenType("regexp",startsExpr),string:new TokenType("string",startsExpr),name:new TokenType("name",startsExpr),eof:new TokenType("eof"),bracketL:new TokenType("[",{beforeExpr:true,startsExpr:true}),bracketR:new TokenType("]"),braceL:new TokenType("{",{beforeExpr:true,startsExpr:true}),braceR:new TokenType("}"),parenL:new TokenType("(",{beforeExpr:true,startsExpr:true}),parenR:new TokenType(")"),comma:new TokenType(",",beforeExpr),semi:new TokenType(";",beforeExpr),colon:new TokenType(":",beforeExpr),dot:new TokenType("."),question:new TokenType("?",beforeExpr),arrow:new TokenType("=>",beforeExpr),template:new TokenType("template"),ellipsis:new TokenType("...",beforeExpr),backQuote:new TokenType("`",startsExpr),dollarBraceL:new TokenType("${",{beforeExpr:true,startsExpr:true}),eq:new TokenType("=",{beforeExpr:true,isAssign:true}),assign:new TokenType("_=",{beforeExpr:true,isAssign:true}),incDec:new TokenType("++/--",{prefix:true,postfix:true,startsExpr:true}),prefix:new TokenType("prefix",{beforeExpr:true,prefix:true,startsExpr:true}),logicalOR:binop("||",1),logicalAND:binop("&&",2),bitwiseOR:binop("|",3),bitwiseXOR:binop("^",4),bitwiseAND:binop("&",5),equality:binop("==/!=",6),relational:binop("</>",7),bitShift:binop("<</>>",8),plusMin:new TokenType("+/-",{beforeExpr:true,binop:9,prefix:true,startsExpr:true}),modulo:binop("%",10),star:binop("*",10),slash:binop("/",10)};exports.types=types;var keywords={};exports.keywords=keywords;function kw(name){var options=arguments.length<=1||arguments[1]===undefined?{}:arguments[1];options.keyword=name;keywords[name]=types["_"+name]=new TokenType(name,options);}
kw("break");kw("case",beforeExpr);kw("catch");kw("continue");kw("debugger");kw("default",beforeExpr);kw("do",{isLoop:true,beforeExpr:true});kw("else",beforeExpr);kw("finally");kw("for",{isLoop:true});kw("function",startsExpr);kw("if");kw("return",beforeExpr);kw("switch");kw("throw",beforeExpr);kw("try");kw("var");kw("let");kw("const");kw("while",{isLoop:true});kw("with");kw("new",{beforeExpr:true,startsExpr:true});kw("this",startsExpr);kw("super",startsExpr);kw("class");kw("extends",beforeExpr);kw("export");kw("import");kw("yield",{beforeExpr:true,startsExpr:true});kw("null",startsExpr);kw("true",startsExpr);kw("false",startsExpr);kw("in",{beforeExpr:true,binop:7});kw("instanceof",{beforeExpr:true,binop:7});kw("typeof",{beforeExpr:true,prefix:true,startsExpr:true});kw("void",{beforeExpr:true,prefix:true,startsExpr:true});kw("delete",{beforeExpr:true,prefix:true,startsExpr:true});},{}],15:[function(_dereq_,module,exports){"use strict";exports.__esModule=true;exports.isArray=isArray;exports.has=has;function isArray(obj){return Object.prototype.toString.call(obj)==="[object Array]";}
function has(obj,propName){return Object.prototype.hasOwnProperty.call(obj,propName);}},{}],16:[function(_dereq_,module,exports){"use strict";exports.__esModule=true;exports.isNewLine=isNewLine;var lineBreak=/\r\n?|\n|\u2028|\u2029/;exports.lineBreak=lineBreak;var lineBreakG=new RegExp(lineBreak.source,"g");exports.lineBreakG=lineBreakG;function isNewLine(code){return code===10||code===13||code===0x2028||code==0x2029;}
var nonASCIIwhitespace=/[\u1680\u180e\u2000-\u200a\u202f\u205f\u3000\ufeff]/;exports.nonASCIIwhitespace=nonASCIIwhitespace;},{}]},{},[3])(3)});;WebInspector.CSSFormatter=function(builder)
{this._builder=builder;}
WebInspector.CSSFormatter.prototype={format:function(text,lineEndings,fromOffset,toOffset)
{this._lineEndings=lineEndings;this._fromOffset=fromOffset;this._toOffset=toOffset;this._lastLine=-1;this._state={};var tokenize=WebInspector.createTokenizer("text/css");var oldEnforce=this._builder.setEnforceSpaceBetweenWords(false);tokenize(text.substring(this._fromOffset,this._toOffset),this._tokenCallback.bind(this));this._builder.setEnforceSpaceBetweenWords(oldEnforce);},_tokenCallback:function(token,type,startPosition)
{startPosition+=this._fromOffset;var startLine=this._lineEndings.lowerBound(startPosition);if(startLine!==this._lastLine)
this._state.eatWhitespace=true;if(/^property/.test(type)&&!this._state.inPropertyValue)
this._state.seenProperty=true;this._lastLine=startLine;var isWhitespace=/^\s+$/.test(token);if(isWhitespace){if(!this._state.eatWhitespace)
this._builder.addSoftSpace();return;}
this._state.eatWhitespace=false;if(token==="\n")
return;if(token!=="}"){if(this._state.afterClosingBrace)
this._builder.addNewLine(true);this._state.afterClosingBrace=false;}
if(token==="}"){if(this._state.inPropertyValue)
this._builder.addNewLine();this._builder.decreaseNestingLevel();this._state.afterClosingBrace=true;this._state.inPropertyValue=false;}else if(token===":"&&!this._state.inPropertyValue&&this._state.seenProperty){this._builder.addToken(token,startPosition);this._builder.addSoftSpace();this._state.eatWhitespace=true;this._state.inPropertyValue=true;this._state.seenProperty=false;return;}else if(token==="{"){this._builder.addSoftSpace();this._builder.addToken(token,startPosition);this._builder.addNewLine();this._builder.increaseNestingLevel();return;}
this._builder.addToken(token,startPosition);if(type==="comment"&&!this._state.inPropertyValue&&!this._state.seenProperty)
this._builder.addNewLine();if(token===";"&&this._state.inPropertyValue){this._state.inPropertyValue=false;this._builder.addNewLine();}else if(token==="}"){this._builder.addNewLine();}}};WebInspector.AcornTokenizer=function(content)
{this._content=content;this._comments=[];this._tokenizer=acorn.tokenizer(this._content,{ecmaVersion:6,onComment:this._comments});this._lineEndings=this._content.computeLineEndings();this._lineNumber=0;this._tokenLineStart=0;this._tokenLineEnd=0;this._nextTokenInternal();}
WebInspector.AcornTokenizer.punctuator=function(token,values)
{return token.type!==acorn.tokTypes.num&&token.type!==acorn.tokTypes.regexp&&token.type!==acorn.tokTypes.string&&token.type!==acorn.tokTypes.name&&!token.type.keyword&&(!values||(token.type.label.length===1&&values.indexOf(token.type.label)!==-1));}
WebInspector.AcornTokenizer.keyword=function(token,keyword)
{return!!token.type.keyword&&token.type!==acorn.tokTypes._true&&token.type!==acorn.tokTypes._false&&(!keyword||token.type.keyword===keyword);}
WebInspector.AcornTokenizer.identifier=function(token,identifier)
{return token.type===acorn.tokTypes.name&&(!identifier||token.value===identifier);}
WebInspector.AcornTokenizer.lineComment=function(token)
{return token.type==="Line";}
WebInspector.AcornTokenizer.blockComment=function(token)
{return token.type==="Block";}
WebInspector.AcornTokenizer.prototype={_nextTokenInternal:function()
{if(this._comments.length)
return this._comments.shift();var token=this._bufferedToken;this._bufferedToken=this._tokenizer.getToken();return token;},_rollLineNumberToPosition:function(position)
{while(this._lineNumber+1<this._lineEndings.length&&position>this._lineEndings[this._lineNumber])
++this._lineNumber;return this._lineNumber;},nextToken:function()
{var token=this._nextTokenInternal();if(token.type===acorn.tokTypes.eof)
return null;this._tokenLineStart=this._rollLineNumberToPosition(token.start);this._tokenLineEnd=this._rollLineNumberToPosition(token.end);this._tokenColumnStart=this._tokenLineStart>0?token.start-this._lineEndings[this._tokenLineStart-1]-1:token.start;return token;},peekToken:function()
{if(this._comments.length)
return this._comments[0];return this._bufferedToken.type!==acorn.tokTypes.eof?this._bufferedToken:null;},tokenLineStart:function()
{return this._tokenLineStart;},tokenLineEnd:function()
{return this._tokenLineEnd;},tokenColumnStart:function()
{return this._tokenColumnStart;}};WebInspector.JavaScriptFormatter=function(builder)
{this._builder=builder;}
WebInspector.JavaScriptFormatter.prototype={format:function(text,lineEndings,fromOffset,toOffset)
{this._fromOffset=fromOffset;this._toOffset=toOffset;this._content=text.substring(this._fromOffset,this._toOffset);this._tokenizer=new WebInspector.AcornTokenizer(this._content);var ast=acorn.parse(this._content,{ranges:false,ecmaVersion:6});var walker=new WebInspector.ESTreeWalker(this._beforeVisit.bind(this),this._afterVisit.bind(this));walker.walk(ast);},_push:function(token,format)
{for(var i=0;i<format.length;++i){if(format[i]==="s")
this._builder.addSoftSpace();else if(format[i]==="S")
this._builder.addHardSpace();else if(format[i]==="n")
this._builder.addNewLine();else if(format[i]===">")
this._builder.increaseNestingLevel();else if(format[i]==="<")
this._builder.decreaseNestingLevel();else if(format[i]==="t")
this._builder.addToken(this._content.substring(token.start,token.end),this._fromOffset+token.start);}},_beforeVisit:function(node)
{if(!node.parent)
return;while(this._tokenizer.peekToken()&&this._tokenizer.peekToken().start<node.start){var token=(this._tokenizer.nextToken());var format=this._formatToken(node.parent,token);this._push(token,format);}},_afterVisit:function(node)
{while(this._tokenizer.peekToken()&&this._tokenizer.peekToken().start<node.end){var token=(this._tokenizer.nextToken());var format=this._formatToken(node,token);this._push(token,format);}
this._push(null,this._finishNode(node));},_inForLoopHeader:function(node)
{var parent=node.parent;if(!parent)
return false;if(parent.type==="ForStatement")
return node===parent.init||node===parent.test||node===parent.update;if(parent.type==="ForInStatement"||parent.type==="ForOfStatement")
return node===parent.left||parent.right;return false;},_formatToken:function(node,token)
{var AT=WebInspector.AcornTokenizer;if(AT.lineComment(token))
return"tn";if(AT.blockComment(token))
return"tn";if(node.type==="ContinueStatement"||node.type==="BreakStatement"){return node.label&&AT.keyword(token)?"ts":"t";}else if(node.type==="Identifier"){return"t";}else if(node.type==="ReturnStatement"){if(AT.punctuator(token,";"))
return"t";return node.argument?"ts":"t";}else if(node.type==="Property"){if(AT.punctuator(token,":"))
return"ts";return"t";}else if(node.type==="ArrayExpression"){if(AT.punctuator(token,","))
return"ts";return"t";}else if(node.type==="LabeledStatement"){if(AT.punctuator(token,":"))
return"ts";}else if(node.type==="LogicalExpression"||node.type==="AssignmentExpression"||node.type==="BinaryExpression"){if(AT.punctuator(token)&&!AT.punctuator(token,"()"))
return"sts";}else if(node.type==="ConditionalExpression"){if(AT.punctuator(token,"?:"))
return"sts";}else if(node.type==="VariableDeclarator"){if(AT.punctuator(token,"="))
return"sts";}else if(node.type==="FunctionDeclaration"){if(AT.punctuator(token,",)"))
return"ts";}else if(node.type==="FunctionExpression"){if(AT.punctuator(token,",)"))
return"ts";if(AT.keyword(token,"function"))
return node.id?"ts":"t";}else if(node.type==="WithStatement"){if(AT.punctuator(token,")"))
return node.body&&node.body.type==="BlockStatement"?"ts":"tn>";}else if(node.type==="SwitchStatement"){if(AT.punctuator(token,"{"))
return"tn>";if(AT.punctuator(token,"}"))
return"n<tn";if(AT.punctuator(token,")"))
return"ts";}else if(node.type==="SwitchCase"){if(AT.keyword(token,"case"))
return"n<ts";if(AT.keyword(token,"default"))
return"n<t";if(AT.punctuator(token,":"))
return"tn>";}else if(node.type==="VariableDeclaration"){if(AT.punctuator(token,",")){var allVariablesInitialized=true;var declarations=(node.declarations);for(var i=0;i<declarations.length;++i)
allVariablesInitialized=allVariablesInitialized&&!!declarations[i].init;return!this._inForLoopHeader(node)&&allVariablesInitialized?"nSSts":"ts";}}else if(node.type==="BlockStatement"){if(AT.punctuator(token,"{"))
return node.body.length?"tn>":"t";if(AT.punctuator(token,"}"))
return node.body.length?"n<t":"t";}else if(node.type==="CatchClause"){if(AT.punctuator(token,")"))
return"ts";}else if(node.type==="ObjectExpression"){if(!node.properties.length)
return"t";if(AT.punctuator(token,"{"))
return"tn>";if(AT.punctuator(token,"}"))
return"n<t";if(AT.punctuator(token,","))
return"tn";}else if(node.type==="IfStatement"){if(AT.punctuator(token,")"))
return node.consequent&&node.consequent.type==="BlockStatement"?"ts":"tn>";if(AT.keyword(token,"else")){var preFormat=node.consequent&&node.consequent.type==="BlockStatement"?"st":"n<t";var postFormat="n>";if(node.alternate&&(node.alternate.type==="BlockStatement"||node.alternate.type==="IfStatement"))
postFormat="s";return preFormat+postFormat;}}else if(node.type==="CallExpression"){if(AT.punctuator(token,","))
return"ts";}else if(node.type==="SequenceExpression"&&AT.punctuator(token,",")){return node.parent&&node.parent.type==="SwitchCase"?"ts":"tn";}else if(node.type==="ForStatement"||node.type==="ForOfStatement"||node.type==="ForInStatement"){if(AT.punctuator(token,";"))
return"ts";if(AT.keyword(token,"in")||AT.identifier(token,"of"))
return"sts";if(AT.punctuator(token,")"))
return node.body&&node.body.type==="BlockStatement"?"ts":"tn>";}else if(node.type==="WhileStatement"){if(AT.punctuator(token,")"))
return node.body&&node.body.type==="BlockStatement"?"ts":"tn>";}else if(node.type==="DoWhileStatement"){var blockBody=node.body&&node.body.type==="BlockStatement";if(AT.keyword(token,"do"))
return blockBody?"ts":"tn>";if(AT.keyword(token,"while"))
return blockBody?"sts":"n<ts";}else if(node.type==="ClassBody"){if(AT.punctuator(token,"{"))
return"stn>";if(AT.punctuator(token,"}"))
return"<ntn";return"t";}else if(node.type==="YieldExpression"){return"t";}else if(node.type==="Super"){return"t";}
return AT.keyword(token)&&!AT.keyword(token,"this")?"ts":"t";},_finishNode:function(node)
{if(node.type==="WithStatement"){if(node.body&&node.body.type!=="BlockStatement")
return"n<";}else if(node.type==="VariableDeclaration"){if(!this._inForLoopHeader(node))
return"n";}else if(node.type==="ForStatement"||node.type==="ForOfStatement"||node.type==="ForInStatement"){if(node.body&&node.body.type!=="BlockStatement")
return"n<";}else if(node.type==="BlockStatement"){if(node.parent&&node.parent.type==="IfStatement"&&node.parent.alternate&&node.parent.consequent===node)
return"";if(node.parent&&node.parent.type==="FunctionExpression"&&node.parent.parent&&node.parent.parent.type==="Property")
return"";if(node.parent&&node.parent.type==="FunctionExpression"&&node.parent.parent&&node.parent.parent.type==="VariableDeclarator")
return"";if(node.parent&&node.parent.type==="FunctionExpression"&&node.parent.parent&&node.parent.parent.type==="CallExpression")
return"";if(node.parent&&node.parent.type==="DoWhileStatement")
return"";if(node.parent&&node.parent.type==="TryStatement"&&node.parent.block===node)
return"s";if(node.parent&&node.parent.type==="CatchClause"&&node.parent.parent.finalizer)
return"s";return"n";}else if(node.type==="WhileStatement"){if(node.body&&node.body.type!=="BlockStatement")
return"n<";}else if(node.type==="IfStatement"){if(node.alternate){if(node.alternate.type!=="BlockStatement"&&node.alternate.type!=="IfStatement")
return"<";}else if(node.consequent){if(node.consequent.type!=="BlockStatement")
return"<";}}else if(node.type==="BreakStatement"||node.type==="ContinueStatement"||node.type==="ThrowStatement"||node.type==="ReturnStatement"||node.type==="ExpressionStatement"){return"n";}
return"";}};WebInspector.FormattedContentBuilder=function(indentString)
{this._lastOriginalPosition=0;this._formattedContent=[];this._formattedContentLength=0;this._lastFormattedPosition=0;this._mapping={original:[0],formatted:[0]};this._nestingLevel=0;this._indentString=indentString;this._cachedIndents=new Map();this._newLines=0;this._softSpace=false;this._hardSpaces=0;this._enforceSpaceBetweenWords=true;}
WebInspector.FormattedContentBuilder.prototype={setEnforceSpaceBetweenWords:function(value)
{var oldValue=this._enforceSpaceBetweenWords;this._enforceSpaceBetweenWords=value;return oldValue;},addToken:function(token,offset)
{var last=this._formattedContent.peekLast();if(this._enforceSpaceBetweenWords&&last&&/\w/.test(last[last.length-1])&&/\w/.test(token))
this.addSoftSpace();this._appendFormatting();this._addMappingIfNeeded(offset);this._addText(token);},addSoftSpace:function()
{if(!this._hardSpaces)
this._softSpace=true;},addHardSpace:function()
{this._softSpace=false;++this._hardSpaces;},addNewLine:function(noSquash)
{if(!this._formattedContentLength)
return;if(noSquash)
++this._newLines;else
this._newLines=this._newLines||1;},increaseNestingLevel:function()
{this._nestingLevel+=1;},decreaseNestingLevel:function()
{if(this._nestingLevel>0)
this._nestingLevel-=1;},_appendFormatting:function()
{if(this._newLines){for(var i=0;i<this._newLines;++i)
this._addText("\n");this._addText(this._indent());}else if(this._softSpace){this._addText(" ");}
if(this._hardSpaces){for(var i=0;i<this._hardSpaces;++i)
this._addText(" ");}
this._newLines=0;this._softSpace=false;this._hardSpaces=0;},content:function()
{return this._formattedContent.join("")+(this._newLines?"\n":"");},mapping:function()
{return this._mapping;},_indent:function()
{var cachedValue=this._cachedIndents.get(this._nestingLevel)
if(cachedValue)
return cachedValue;var fullIndent="";for(var i=0;i<this._nestingLevel;++i)
fullIndent+=this._indentString;if(this._nestingLevel<=20)
this._cachedIndents.set(this._nestingLevel,fullIndent);return fullIndent;},_addText:function(text)
{this._formattedContent.push(text);this._formattedContentLength+=text.length;},_addMappingIfNeeded:function(originalPosition)
{if(originalPosition-this._lastOriginalPosition===this._formattedContentLength-this._lastFormattedPosition)
return;this._mapping.original.push(originalPosition);this._lastOriginalPosition=originalPosition;this._mapping.formatted.push(this._formattedContentLength);this._lastFormattedPosition=this._formattedContentLength;}};WebInspector.CSSParserStates={Initial:"Initial",Selector:"Selector",Style:"Style",PropertyName:"PropertyName",PropertyValue:"PropertyValue",AtRule:"AtRule"};WebInspector.parseCSS=function(text)
{WebInspector._innerParseCSS(text,postMessage);}
WebInspector._innerParseCSS=function(text,chunkCallback)
{var chunkSize=100000;var lines=text.split("\n");var rules=[];var processedChunkCharacters=0;var state=WebInspector.CSSParserStates.Initial;var rule;var property;var UndefTokenType=new Set();var disabledRules=[];function disabledRulesCallback(chunk)
{disabledRules=disabledRules.concat(chunk.chunk);}
function processToken(tokenValue,tokenTypes,column,newColumn)
{var tokenType=tokenTypes?new Set(tokenTypes.split(" ")):UndefTokenType;switch(state){case WebInspector.CSSParserStates.Initial:if(tokenType.has("qualifier")||tokenType.has("builtin")||tokenType.has("tag")){rule={selectorText:tokenValue,lineNumber:lineNumber,columnNumber:column,properties:[],};state=WebInspector.CSSParserStates.Selector;}else if(tokenType.has("def")){rule={atRule:tokenValue,lineNumber:lineNumber,columnNumber:column,};state=WebInspector.CSSParserStates.AtRule;}
break;case WebInspector.CSSParserStates.Selector:if(tokenValue==="{"&&tokenType===UndefTokenType){rule.selectorText=rule.selectorText.trim();rule.styleRange=createRange(lineNumber,newColumn);state=WebInspector.CSSParserStates.Style;}else{rule.selectorText+=tokenValue;}
break;case WebInspector.CSSParserStates.AtRule:if((tokenValue===";"||tokenValue==="{")&&tokenType===UndefTokenType){rule.atRule=rule.atRule.trim();rules.push(rule);state=WebInspector.CSSParserStates.Initial;}else{rule.atRule+=tokenValue;}
break;case WebInspector.CSSParserStates.Style:if(tokenType.has("meta")||tokenType.has("property")){property={name:tokenValue,value:"",range:createRange(lineNumber,column),nameRange:createRange(lineNumber,column)};state=WebInspector.CSSParserStates.PropertyName;}else if(tokenValue==="}"&&tokenType===UndefTokenType){rule.styleRange.endLine=lineNumber;rule.styleRange.endColumn=column;rules.push(rule);state=WebInspector.CSSParserStates.Initial;}else if(tokenType.has("comment")){if(tokenValue.substring(0,2)!=="/*"||tokenValue.substring(tokenValue.length-2)!=="*/")
break;var uncommentedText=tokenValue.substring(2,tokenValue.length-2);var fakeRule="a{\n"+uncommentedText+"}";disabledRules=[];WebInspector._innerParseCSS(fakeRule,disabledRulesCallback);if(disabledRules.length===1&&disabledRules[0].properties.length===1){var disabledProperty=disabledRules[0].properties[0];disabledProperty.disabled=true;disabledProperty.range=createRange(lineNumber,column);disabledProperty.range.endColumn=newColumn;var lineOffset=lineNumber-1;var columnOffset=column+2;disabledProperty.nameRange.startLine+=lineOffset;disabledProperty.nameRange.startColumn+=columnOffset;disabledProperty.nameRange.endLine+=lineOffset;disabledProperty.nameRange.endColumn+=columnOffset;disabledProperty.valueRange.startLine+=lineOffset;disabledProperty.valueRange.startColumn+=columnOffset;disabledProperty.valueRange.endLine+=lineOffset;disabledProperty.valueRange.endColumn+=columnOffset;rule.properties.push(disabledProperty);}}
break;case WebInspector.CSSParserStates.PropertyName:if(tokenValue===":"&&tokenType===UndefTokenType){property.name=property.name;property.nameRange.endLine=lineNumber;property.nameRange.endColumn=column;property.valueRange=createRange(lineNumber,newColumn);state=WebInspector.CSSParserStates.PropertyValue;}else if(tokenType.has("property")){property.name+=tokenValue;}
break;case WebInspector.CSSParserStates.PropertyValue:if((tokenValue===";"||tokenValue==="}")&&tokenType===UndefTokenType){property.value=property.value;property.valueRange.endLine=lineNumber;property.valueRange.endColumn=column;property.range.endLine=lineNumber;property.range.endColumn=tokenValue===";"?newColumn:column;rule.properties.push(property);if(tokenValue==="}"){rule.styleRange.endLine=lineNumber;rule.styleRange.endColumn=column;rules.push(rule);state=WebInspector.CSSParserStates.Initial;}else{state=WebInspector.CSSParserStates.Style;}}else if(!tokenType.has("comment")){property.value+=tokenValue;}
break;default:console.assert(false,"Unknown CSS parser state.");}
processedChunkCharacters+=newColumn-column;if(processedChunkCharacters>chunkSize){chunkCallback({chunk:rules,isLastChunk:false});rules=[];processedChunkCharacters=0;}}
var tokenizer=WebInspector.createTokenizer("text/css");var lineNumber;for(lineNumber=0;lineNumber<lines.length;++lineNumber){var line=lines[lineNumber];tokenizer(line,processToken);processToken("\n",null,line.length,line.length+1);}
chunkCallback({chunk:rules,isLastChunk:true});function createRange(lineNumber,columnNumber)
{return{startLine:lineNumber,startColumn:columnNumber,endLine:lineNumber,endColumn:columnNumber};}};WebInspector.HTMLFormatter=function(builder)
{this._builder=builder;this._jsFormatter=new WebInspector.JavaScriptFormatter(builder);this._cssFormatter=new WebInspector.CSSFormatter(builder);}
WebInspector.HTMLFormatter.SupportedJavaScriptMimeTypes=new Set(["text/javascript","text/ecmascript","application/javascript","application/ecmascript"]);WebInspector.HTMLFormatter.prototype={format:function(text,lineEndings)
{this._text=text;this._lineEndings=lineEndings;this._model=new WebInspector.HTMLModel(text);this._walk(this._model.document());},_formatTokensTill:function(element,offset)
{while(this._model.peekToken()&&this._model.peekToken().startOffset<offset){var token=this._model.nextToken();this._formatToken(element,token);}},_walk:function(element)
{if(element.parent)
this._formatTokensTill(element.parent,element.openTag.startOffset);this._beforeOpenTag(element);this._formatTokensTill(element,element.openTag.endOffset);this._afterOpenTag(element);for(var i=0;i<element.children.length;++i)
this._walk(element.children[i]);this._formatTokensTill(element,element.closeTag.startOffset);this._beforeCloseTag(element);this._formatTokensTill(element,element.closeTag.endOffset);this._afterCloseTag(element);},_beforeOpenTag:function(element)
{if(!element.children.length||element===this._model.document())
return;this._builder.addNewLine();},_afterOpenTag:function(element)
{if(!element.children.length||element===this._model.document())
return;this._builder.increaseNestingLevel();this._builder.addNewLine();},_beforeCloseTag:function(element)
{if(!element.children.length||element===this._model.document())
return;this._builder.decreaseNestingLevel();this._builder.addNewLine();},_afterCloseTag:function(element)
{this._builder.addNewLine();},_formatToken:function(element,token)
{if(token.value.isWhitespace())
return;if(token.type.has("comment")||token.type.has("meta")){this._builder.addNewLine();this._builder.addToken(token.value.trim(),token.startOffset);this._builder.addNewLine();return;}
var isBodyToken=element.openTag.endOffset<=token.startOffset&&token.startOffset<element.closeTag.startOffset;if(isBodyToken&&element.name==="style"){this._builder.addNewLine();this._builder.increaseNestingLevel();this._cssFormatter.format(this._text,this._lineEndings,token.startOffset,token.endOffset);this._builder.decreaseNestingLevel();return;}
if(isBodyToken&&element.name==="script"){this._builder.addNewLine();this._builder.increaseNestingLevel();var mimeType=element.openTag.attributes.has("type")?element.openTag.attributes.get("type").toLowerCase():null;if(!mimeType||WebInspector.HTMLFormatter.SupportedJavaScriptMimeTypes.has(mimeType)){this._jsFormatter.format(this._text,this._lineEndings,token.startOffset,token.endOffset);}else{this._builder.addToken(token.value,token.startOffset);this._builder.addNewLine();}
this._builder.decreaseNestingLevel();return;}
if(!isBodyToken&&token.type.has("attribute"))
this._builder.addSoftSpace();this._builder.addToken(token.value,token.startOffset);}}
WebInspector.HTMLModel=function(text)
{this._state=WebInspector.HTMLModel.ParseState.Initial;this._document=new WebInspector.HTMLModel.Element("document");this._document.openTag=new WebInspector.HTMLModel.Tag("document",0,0,new Map(),true,false);this._document.closeTag=new WebInspector.HTMLModel.Tag("document",text.length,text.length,new Map(),false,false);this._stack=[this._document];this._tokens=[];this._tokenIndex=0;this._build(text);}
WebInspector.HTMLModel.SelfClosingTags=new Set(["area","base","br","col","command","embed","hr","img","input","keygen","link","meta","param","source","track","wbr"]);WebInspector.HTMLModel.AutoClosingTags={"head":new Set(["body"]),"li":new Set(["li"]),"dt":new Set(["dt","dd"]),"dd":new Set(["dt","dd"]),"p":new Set(["address","article","aside","blockquote","div","dl","fieldset","footer","form","h1","h2","h3","h4","h5","h6","header","hgroup","hr","main","nav","ol","p","pre","section","table","ul"]),"rb":new Set(["rb","rt","rtc","rp"]),"rt":new Set(["rb","rt","rtc","rp"]),"rtc":new Set(["rb","rtc","rp"]),"rp":new Set(["rb","rt","rtc","rp"]),"optgroup":new Set(["optgroup"]),"option":new Set(["option","optgroup"]),"colgroup":new Set(["colgroup"]),"thead":new Set(["tbody","tfoot"]),"tbody":new Set(["tbody","tfoot"]),"tfoot":new Set(["tbody"]),"tr":new Set(["tr"]),"td":new Set(["td","th"]),"th":new Set(["td","th"]),};WebInspector.HTMLModel.ParseState={Initial:"Initial",Tag:"Tag",AttributeName:"AttributeName",AttributeValue:"AttributeValue"}
WebInspector.HTMLModel.prototype={_build:function(text)
{var tokenizer=WebInspector.createTokenizer("text/html");var lastOffset=0;var lowerCaseText=text.toLowerCase();while(true){tokenizer(text.substring(lastOffset),processToken.bind(this,lastOffset));if(lastOffset>=text.length)
break;var element=this._stack.peekLast();lastOffset=lowerCaseText.indexOf("</"+element.name,lastOffset);if(lastOffset===-1)
lastOffset=text.length;var tokenStart=element.openTag.endOffset;var tokenEnd=lastOffset;var tokenValue=text.substring(tokenStart,tokenEnd);this._tokens.push(new WebInspector.HTMLModel.Token(tokenValue,new Set(),tokenStart,tokenEnd));}
while(this._stack.length>1){var element=this._stack.peekLast();this._popElement(new WebInspector.HTMLModel.Tag(element.name,text.length,text.length,new Map(),false,false));}
function processToken(baseOffset,tokenValue,type,tokenStart,tokenEnd)
{tokenStart+=baseOffset;tokenEnd+=baseOffset;lastOffset=tokenEnd;var tokenType=type?new Set(type.split(" ")):new Set();var token=new WebInspector.HTMLModel.Token(tokenValue,tokenType,tokenStart,tokenEnd);this._tokens.push(token);this._updateDOM(token);var element=this._stack.peekLast();if(element&&(element.name==="script"||element.name==="style")&&element.openTag.endOffset===lastOffset)
return WebInspector.AbortTokenization;}},_updateDOM:function(token)
{var S=WebInspector.HTMLModel.ParseState;var value=token.value;var type=token.type;switch(this._state){case S.Initial:if(type.has("bracket")&&(value==="<"||value==="</")){this._onStartTag(token);this._state=S.Tag;}
return;case S.Tag:if(type.has("tag")&&!type.has("bracket")){this._tagName=value.trim().toLowerCase();}else if(type.has("attribute")){this._attributeName=value.trim().toLowerCase();this._attributes.set(this._attributeName,"");this._state=S.AttributeName;}else if(type.has("bracket")&&(value===">"||value==="/>")){this._onEndTag(token);this._state=S.Initial;}
return;case S.AttributeName:if(!type.size&&value==="="){this._state=S.AttributeValue;}else if(type.has("bracket")&&(value===">"||value==="/>")){this._onEndTag(token);this._state=S.Initial;}
return;case S.AttributeValue:if(type.has("string")){this._attributes.set(this._attributeName,value);this._state=S.Tag;}else if(type.has("bracket")&&(value===">"||value==="/>")){this._onEndTag(token);this._state=S.Initial;}
return;}},_onStartTag:function(token)
{this._tagName="";this._tagStartOffset=token.startOffset;this._tagEndOffset=null;this._attributes=new Map();this._attributeName="";this._isOpenTag=token.value==="<";},_onEndTag:function(token)
{this._tagEndOffset=token.endOffset;var selfClosingTag=token.value==="/>"||WebInspector.HTMLModel.SelfClosingTags.has(this._tagName);var tag=new WebInspector.HTMLModel.Tag(this._tagName,this._tagStartOffset,this._tagEndOffset,this._attributes,this._isOpenTag,selfClosingTag);this._onTagComplete(tag);},_onTagComplete:function(tag)
{if(tag.isOpenTag){var topElement=this._stack.peekLast();if(topElement!==this._document&&topElement.openTag.selfClosingTag)
this._popElement(autocloseTag(topElement,topElement.openTag.endOffset));else if((topElement.name in WebInspector.HTMLModel.AutoClosingTags)&&WebInspector.HTMLModel.AutoClosingTags[topElement.name].has(tag.name))
this._popElement(autocloseTag(topElement,tag.startOffset));this._pushElement(tag);return;}
while(this._stack.length>1&&this._stack.peekLast().name!==tag.name)
this._popElement(autocloseTag(this._stack.peekLast(),tag.startOffset));if(this._stack.length===1)
return;this._popElement(tag);function autocloseTag(element,offset)
{return new WebInspector.HTMLModel.Tag(element.name,offset,offset,new Map(),false,false);}},_popElement:function(closeTag)
{var element=this._stack.pop();element.closeTag=closeTag;},_pushElement:function(openTag)
{var topElement=this._stack.peekLast();var newElement=new WebInspector.HTMLModel.Element(openTag.name);newElement.parent=topElement;topElement.children.push(newElement);newElement.openTag=openTag;this._stack.push(newElement);},peekToken:function()
{return this._tokenIndex<this._tokens.length?this._tokens[this._tokenIndex]:null;},nextToken:function()
{return this._tokens[this._tokenIndex++];},document:function()
{return this._document;}}
WebInspector.HTMLModel.Token=function(value,type,startOffset,endOffset)
{this.value=value;this.type=type;this.startOffset=startOffset;this.endOffset=endOffset;}
WebInspector.HTMLModel.Tag=function(name,startOffset,endOffset,attributes,isOpenTag,selfClosingTag)
{this.name=name;this.startOffset=startOffset;this.endOffset=endOffset;this.attributes=attributes;this.isOpenTag=isOpenTag;this.selfClosingTag=selfClosingTag;}
WebInspector.HTMLModel.Element=function(name)
{this.name=name;this.children=[];this.parent=null;this.openTag=null;this.closeTag=null;};WebInspector.IdentityFormatter=function(builder)
{this._builder=builder;}
WebInspector.IdentityFormatter.prototype={format:function(text,lineEndings,fromOffset,toOffset)
{var content=text.substring(fromOffset,toOffset);this._builder.addToken(content,fromOffset);}};WebInspector.javaScriptOutline=function(content)
{var chunkSize=100000;var outlineChunk=[];var previousIdentifier=null;var previousToken=null;var processedChunkCharacters=0;var addedFunction=false;var isReadingArguments=false;var argumentsText="";var currentFunction=null;var tokenizer=new WebInspector.AcornTokenizer(content);var AT=WebInspector.AcornTokenizer;while(tokenizer.peekToken()){var token=(tokenizer.nextToken());if(AT.lineComment(token)||AT.blockComment(token))
continue;var tokenValue=content.substring(token.start,token.end);if(AT.identifier(token)&&previousToken&&(AT.identifier(previousToken,"get")||AT.identifier(previousToken,"set"))){currentFunction={line:tokenizer.tokenLineStart(),column:tokenizer.tokenColumnStart(),name:previousToken.value+" "+tokenValue};addedFunction=true;previousIdentifier=null;}else if(AT.identifier(token)){previousIdentifier=tokenValue;if(tokenValue&&previousToken&&AT.keyword(previousToken,"function")){currentFunction={line:tokenizer.tokenLineStart(),column:tokenizer.tokenColumnStart(),name:tokenValue};addedFunction=true;previousIdentifier=null;}}else if(AT.keyword(token,"function")&&previousIdentifier&&previousToken&&AT.punctuator(previousToken,":=")){currentFunction={line:tokenizer.tokenLineStart(),column:tokenizer.tokenColumnStart(),name:previousIdentifier};addedFunction=true;previousIdentifier=null;}else if(AT.punctuator(token,".")&&previousToken&&AT.identifier(previousToken))
previousIdentifier+=".";else if(AT.punctuator(token,"(")&&addedFunction)
isReadingArguments=true;if(isReadingArguments&&tokenValue)
argumentsText+=tokenValue;if(AT.punctuator(token,")")&&isReadingArguments){addedFunction=false;isReadingArguments=false;currentFunction.arguments=argumentsText.replace(/,[\r\n\s]*/g,", ").replace(/([^,])[\r\n\s]+/g,"$1");argumentsText="";outlineChunk.push(currentFunction);}
previousToken=token;processedChunkCharacters+=token.end-token.start;if(processedChunkCharacters>=chunkSize){postMessage({chunk:outlineChunk,isLastChunk:false});outlineChunk=[];processedChunkCharacters=0;}}
postMessage({chunk:outlineChunk,isLastChunk:true});};WebInspector.RelaxedJSONParser={};WebInspector.RelaxedJSONParser.States={ExpectKey:"ExpectKey",ExpectValue:"ExpectValue"};WebInspector.RelaxedJSONParser.Keywords={"NaN":NaN,"true":true,"false":false,"Infinity":Infinity,"undefined":undefined,"null":null};WebInspector.RelaxedJSONParser.parse=function(content)
{var Keywords=WebInspector.RelaxedJSONParser.Keywords;var States=WebInspector.RelaxedJSONParser.States;content="("+content+")";try{var root=acorn.parse(content,{});}catch(e){return null;}
var walker=new WebInspector.ESTreeWalker(beforeVisit,afterVisit);var rootTip=[];var stack=[];var stackData=({key:0,tip:rootTip,state:States.ExpectValue,parentIsArray:true});walker.setWalkNulls(true);var hasExpression=false;walker.walk(root);if(hasExpression)
return null;return rootTip.length?rootTip[0]:null;function pushStack(newStack)
{stack.push(stackData);stackData=newStack;}
function popStack()
{stackData=stack.pop();}
function applyValue(value)
{stackData.tip[stackData.key]=value;if(stackData.parentIsArray)
stackData.key++;else
stackData.state=null;}
function beforeVisit(node)
{switch(node.type){case"ObjectExpression":var newTip={};applyValue(newTip);pushStack(({key:null,tip:newTip,state:null,parentIsArray:false}));break;case"ArrayExpression":var newTip=[];applyValue(newTip);pushStack(({key:0,tip:newTip,state:States.ExpectValue,parentIsArray:true}));break;case"Property":stackData.state=States.ExpectKey;break;case"Literal":if(stackData.state===States.ExpectKey){stackData.key=node.value;stackData.state=States.ExpectValue;}else if(stackData.state===States.ExpectValue){applyValue(extractValue(node));return WebInspector.ESTreeWalker.SkipSubtree;}
break;case"Identifier":if(stackData.state===States.ExpectKey){stackData.key=(node.name);stackData.state=States.ExpectValue;}else if(stackData.state===States.ExpectValue){applyValue(extractValue(node));return WebInspector.ESTreeWalker.SkipSubtree;}
break;case"UnaryExpression":if(stackData.state===States.ExpectValue){applyValue(extractValue(node));return WebInspector.ESTreeWalker.SkipSubtree;}
break;case"Program":case"ExpressionStatement":break;default:if(stackData.state===States.ExpectValue)
applyValue(extractValue(node));return WebInspector.ESTreeWalker.SkipSubtree;}}
function afterVisit(node)
{if(node.type==="ObjectExpression"||node.type==="ArrayExpression")
popStack();}
function extractValue(node)
{var isNegative=false;var originalNode=node;var value;if(node.type==="UnaryExpression"&&(node.operator==="-"||node.operator==="+")){if(node.operator==="-")
isNegative=true;node=(node.argument);}
if(node.type==="Literal"){value=node.value;}else if(node.type==="Identifier"&&Keywords.hasOwnProperty(node.name)){value=Keywords[node.name];}else{hasExpression=true;return content.substring(originalNode.start,originalNode.end);}
if(isNegative){if(typeof value!=="number"){hasExpression=true;return content.substring(originalNode.start,originalNode.end);}
value=-(value);}
return value;}}
WebInspector.RelaxedJSONParser.Context;;applicationDescriptor={"has_html":false,"modules":[{"type":"remote","name":"gonzales"},{"type":"autostart","name":"formatter_worker"}]};if(!self.Runtime)
self.importScripts("Runtime.js");Runtime.startWorker("formatter_worker");