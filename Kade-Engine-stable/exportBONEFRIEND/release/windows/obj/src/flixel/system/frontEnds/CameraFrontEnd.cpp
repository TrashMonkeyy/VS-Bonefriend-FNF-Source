#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_12_new,"flixel.system.frontEnds.CameraFrontEnd","new",0xc6f5a1a3,"flixel.system.frontEnds.CameraFrontEnd.new","flixel/system/frontEnds/CameraFrontEnd.hx",12,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_63_add,"flixel.system.frontEnds.CameraFrontEnd","add",0xc6ebc364,"flixel.system.frontEnds.CameraFrontEnd.add","flixel/system/frontEnds/CameraFrontEnd.hx",63,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_82_remove,"flixel.system.frontEnds.CameraFrontEnd","remove",0xaa68b6e1,"flixel.system.frontEnds.CameraFrontEnd.remove","flixel/system/frontEnds/CameraFrontEnd.hx",82,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_120_setDefaultDrawTarget,"flixel.system.frontEnds.CameraFrontEnd","setDefaultDrawTarget",0xada9a7f1,"flixel.system.frontEnds.CameraFrontEnd.setDefaultDrawTarget","flixel/system/frontEnds/CameraFrontEnd.hx",120,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_142_reset,"flixel.system.frontEnds.CameraFrontEnd","reset",0xf67331d2,"flixel.system.frontEnds.CameraFrontEnd.reset","flixel/system/frontEnds/CameraFrontEnd.hx",142,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_165_flash,"flixel.system.frontEnds.CameraFrontEnd","flash",0x12371db3,"flixel.system.frontEnds.CameraFrontEnd.flash","flixel/system/frontEnds/CameraFrontEnd.hx",165,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_182_fade,"flixel.system.frontEnds.CameraFrontEnd","fade",0x4aaafed9,"flixel.system.frontEnds.CameraFrontEnd.fade","flixel/system/frontEnds/CameraFrontEnd.hx",182,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_199_shake,"flixel.system.frontEnds.CameraFrontEnd","shake",0x8bc7c6c9,"flixel.system.frontEnds.CameraFrontEnd.shake","flixel/system/frontEnds/CameraFrontEnd.hx",199,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_217_lock,"flixel.system.frontEnds.CameraFrontEnd","lock",0x4eace548,"flixel.system.frontEnds.CameraFrontEnd.lock","flixel/system/frontEnds/CameraFrontEnd.hx",217,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_259_render,"flixel.system.frontEnds.CameraFrontEnd","render",0xab0985f3,"flixel.system.frontEnds.CameraFrontEnd.render","flixel/system/frontEnds/CameraFrontEnd.hx",259,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_277_unlock,"flixel.system.frontEnds.CameraFrontEnd","unlock",0x0b6cbd61,"flixel.system.frontEnds.CameraFrontEnd.unlock","flixel/system/frontEnds/CameraFrontEnd.hx",277,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_304_update,"flixel.system.frontEnds.CameraFrontEnd","update",0x2ce5a0a6,"flixel.system.frontEnds.CameraFrontEnd.update","flixel/system/frontEnds/CameraFrontEnd.hx",304,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_319_resize,"flixel.system.frontEnds.CameraFrontEnd","resize",0xae5b7491,"flixel.system.frontEnds.CameraFrontEnd.resize","flixel/system/frontEnds/CameraFrontEnd.hx",319,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_327_get_bgColor,"flixel.system.frontEnds.CameraFrontEnd","get_bgColor",0x99072db8,"flixel.system.frontEnds.CameraFrontEnd.get_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",327,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_331_set_bgColor,"flixel.system.frontEnds.CameraFrontEnd","set_bgColor",0xa37434c4,"flixel.system.frontEnds.CameraFrontEnd.set_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",331,0x7a57d3ec)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void CameraFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_12_new)
HXLINE(  50)		this->_cameraRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  45)		this->useBufferLocking = false;
HXLINE(  39)		this->cameraResized =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  36)		this->cameraRemoved =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  33)		this->cameraAdded =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  25)		this->defaults = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  19)		this->list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 208)		::flixel::FlxCamera_obj::_defaultCameras = this->defaults;
            	}

Dynamic CameraFrontEnd_obj::__CreateEmpty() { return new CameraFrontEnd_obj; }

void *CameraFrontEnd_obj::_hx_vtable = 0;

Dynamic CameraFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CameraFrontEnd_obj > _hx_result = new CameraFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CameraFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x683a772d;
}

 ::Dynamic CameraFrontEnd_obj::add( ::Dynamic NewCamera,::hx::Null< bool >  __o_DefaultDrawTarget){
            		bool DefaultDrawTarget = __o_DefaultDrawTarget.Default(true);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_63_add)
HXLINE(  64)		 ::flixel::FlxGame _hx_tmp = ::flixel::FlxG_obj::game;
HXDLIN(  64)		 ::openfl::display::Sprite NewCamera1 = ( ( ::flixel::FlxCamera)(NewCamera) )->flashSprite;
HXDLIN(  64)		_hx_tmp->addChildAt(NewCamera1,::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->_inputContainer));
HXLINE(  66)		this->list->push(NewCamera);
HXLINE(  67)		if (DefaultDrawTarget) {
HXLINE(  68)			this->defaults->push(NewCamera);
            		}
HXLINE(  70)		( ( ::flixel::FlxBasic)(NewCamera) )->ID = (this->list->length - 1);
HXLINE(  71)		this->cameraAdded->dispatch(( ( ::flixel::FlxCamera)(NewCamera) ));
HXLINE(  72)		return NewCamera;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,add,return )

void CameraFrontEnd_obj::remove( ::flixel::FlxCamera Camera,::hx::Null< bool >  __o_Destroy){
            		bool Destroy = __o_Destroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_82_remove)
HXLINE(  83)		int index = this->list->indexOf(Camera,null());
HXLINE(  84)		bool _hx_tmp;
HXDLIN(  84)		if (::hx::IsNotNull( Camera )) {
HXLINE(  84)			_hx_tmp = (index != -1);
            		}
            		else {
HXLINE(  84)			_hx_tmp = false;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  86)			::flixel::FlxG_obj::game->removeChild(Camera->flashSprite);
HXLINE(  87)			this->list->removeRange(index,1);
HXLINE(  88)			this->defaults->remove(Camera);
            		}
            		else {
HXLINE(  93)			return;
            		}
HXLINE(  96)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(  98)			int _g = 0;
HXDLIN(  98)			int _g1 = this->list->length;
HXDLIN(  98)			while((_g < _g1)){
HXLINE(  98)				_g = (_g + 1);
HXDLIN(  98)				int i = (_g - 1);
HXLINE( 100)				this->list->__get(i).StaticCast<  ::flixel::FlxCamera >()->ID = i;
            			}
            		}
HXLINE( 104)		if (Destroy) {
HXLINE( 105)			Camera->destroy();
            		}
HXLINE( 107)		this->cameraRemoved->dispatch(Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,remove,(void))

void CameraFrontEnd_obj::setDefaultDrawTarget( ::flixel::FlxCamera camera,bool value){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_120_setDefaultDrawTarget)
HXLINE( 121)		if (!(this->list->contains(camera))) {
HXLINE( 124)			return;
            		}
HXLINE( 127)		int index = this->defaults->indexOf(camera,null());
HXLINE( 129)		bool _hx_tmp;
HXDLIN( 129)		if (value) {
HXLINE( 129)			_hx_tmp = (index == -1);
            		}
            		else {
HXLINE( 129)			_hx_tmp = false;
            		}
HXDLIN( 129)		if (_hx_tmp) {
HXLINE( 130)			this->defaults->push(camera);
            		}
            		else {
HXLINE( 131)			if (!(value)) {
HXLINE( 132)				this->defaults->removeRange(index,1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,setDefaultDrawTarget,(void))

void CameraFrontEnd_obj::reset( ::flixel::FlxCamera NewCamera){
            	HX_GC_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_142_reset)
HXLINE( 143)		while((this->list->length > 0)){
HXLINE( 144)			this->remove(this->list->__get(0).StaticCast<  ::flixel::FlxCamera >(),null());
            		}
HXLINE( 146)		if (::hx::IsNull( NewCamera )) {
HXLINE( 147)			NewCamera =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,null());
            		}
HXLINE( 149)		::flixel::FlxG_obj::camera = ( ( ::flixel::FlxCamera)(this->add(NewCamera,null())) );
HXLINE( 150)		NewCamera->ID = 0;
HXLINE( 152)		::flixel::FlxCamera_obj::_defaultCameras = this->defaults;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,reset,(void))

void CameraFrontEnd_obj::flash(::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force){
            		int Color = __o_Color.Default(-1);
            		Float Duration = __o_Duration.Default(1);
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_165_flash)
HXDLIN( 165)		int _g = 0;
HXDLIN( 165)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 165)		while((_g < _g1->length)){
HXDLIN( 165)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 165)			_g = (_g + 1);
HXLINE( 167)			camera->flash(Color,Duration,OnComplete,Force);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(CameraFrontEnd_obj,flash,(void))

void CameraFrontEnd_obj::fade(::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration,::hx::Null< bool >  __o_FadeIn, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force){
            		int Color = __o_Color.Default(-16777216);
            		Float Duration = __o_Duration.Default(1);
            		bool FadeIn = __o_FadeIn.Default(false);
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_182_fade)
HXDLIN( 182)		int _g = 0;
HXDLIN( 182)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 182)		while((_g < _g1->length)){
HXDLIN( 182)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 182)			_g = (_g + 1);
HXLINE( 184)			camera->fade(Color,Duration,FadeIn,OnComplete,Force);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,fade,(void))

void CameraFrontEnd_obj::shake(::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force, ::flixel::util::FlxAxes Axes){
            		Float Intensity = __o_Intensity.Default(((Float)0.05));
            		Float Duration = __o_Duration.Default(((Float)0.5));
            		bool Force = __o_Force.Default(true);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_199_shake)
HXDLIN( 199)		int _g = 0;
HXDLIN( 199)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 199)		while((_g < _g1->length)){
HXDLIN( 199)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 199)			_g = (_g + 1);
HXLINE( 201)			camera->shake(Intensity,Duration,OnComplete,Force,Axes);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,shake,(void))

void CameraFrontEnd_obj::lock(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_217_lock)
HXDLIN( 217)		int _g = 0;
HXDLIN( 217)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 217)		while((_g < _g1->length)){
HXDLIN( 217)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 217)			_g = (_g + 1);
HXLINE( 219)			bool _hx_tmp;
HXDLIN( 219)			bool _hx_tmp1;
HXDLIN( 219)			if (::hx::IsNotNull( camera )) {
HXLINE( 219)				_hx_tmp1 = !(camera->exists);
            			}
            			else {
HXLINE( 219)				_hx_tmp1 = true;
            			}
HXDLIN( 219)			if (!(_hx_tmp1)) {
HXLINE( 219)				_hx_tmp = !(camera->visible);
            			}
            			else {
HXLINE( 219)				_hx_tmp = true;
            			}
HXDLIN( 219)			if (_hx_tmp) {
HXLINE( 221)				continue;
            			}
HXLINE( 224)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 226)				camera->checkResize();
HXLINE( 228)				if (this->useBufferLocking) {
HXLINE( 230)					camera->buffer->lock();
            				}
            			}
HXLINE( 234)			if (::flixel::FlxG_obj::renderTile) {
HXLINE( 236)				camera->clearDrawStack();
HXLINE( 237)				camera->canvas->get_graphics()->clear();
            			}
HXLINE( 244)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 246)				camera->fill(camera->bgColor,camera->useBgAlphaBlending,null(),null());
HXLINE( 247)				camera->screen->dirty = true;
            			}
            			else {
HXLINE( 251)				camera->fill((camera->bgColor & 16777215),camera->useBgAlphaBlending,(( (Float)(((camera->bgColor >> 24) & 255)) ) / ( (Float)(255) )),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,lock,(void))

void CameraFrontEnd_obj::render(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_259_render)
HXDLIN( 259)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 261)			int _g = 0;
HXDLIN( 261)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 261)			while((_g < _g1->length)){
HXLINE( 261)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 261)				_g = (_g + 1);
HXLINE( 263)				bool _hx_tmp;
HXDLIN( 263)				bool _hx_tmp1;
HXDLIN( 263)				if (::hx::IsNotNull( camera )) {
HXLINE( 263)					_hx_tmp1 = camera->exists;
            				}
            				else {
HXLINE( 263)					_hx_tmp1 = false;
            				}
HXDLIN( 263)				if (_hx_tmp1) {
HXLINE( 263)					_hx_tmp = camera->visible;
            				}
            				else {
HXLINE( 263)					_hx_tmp = false;
            				}
HXDLIN( 263)				if (_hx_tmp) {
HXLINE( 265)					camera->render();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,render,(void))

void CameraFrontEnd_obj::unlock(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_277_unlock)
HXDLIN( 277)		int _g = 0;
HXDLIN( 277)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 277)		while((_g < _g1->length)){
HXDLIN( 277)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 277)			_g = (_g + 1);
HXLINE( 279)			bool _hx_tmp;
HXDLIN( 279)			bool _hx_tmp1;
HXDLIN( 279)			if (::hx::IsNotNull( camera )) {
HXLINE( 279)				_hx_tmp1 = !(camera->exists);
            			}
            			else {
HXLINE( 279)				_hx_tmp1 = true;
            			}
HXDLIN( 279)			if (!(_hx_tmp1)) {
HXLINE( 279)				_hx_tmp = !(camera->visible);
            			}
            			else {
HXLINE( 279)				_hx_tmp = true;
            			}
HXDLIN( 279)			if (_hx_tmp) {
HXLINE( 281)				continue;
            			}
HXLINE( 284)			camera->drawFX();
HXLINE( 286)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 288)				if (this->useBufferLocking) {
HXLINE( 290)					camera->buffer->unlock(null());
            				}
HXLINE( 293)				camera->screen->dirty = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,unlock,(void))

void CameraFrontEnd_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_304_update)
HXDLIN( 304)		int _g = 0;
HXDLIN( 304)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 304)		while((_g < _g1->length)){
HXDLIN( 304)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 304)			_g = (_g + 1);
HXLINE( 306)			bool _hx_tmp;
HXDLIN( 306)			bool _hx_tmp1;
HXDLIN( 306)			if (::hx::IsNotNull( camera )) {
HXLINE( 306)				_hx_tmp1 = camera->exists;
            			}
            			else {
HXLINE( 306)				_hx_tmp1 = false;
            			}
HXDLIN( 306)			if (_hx_tmp1) {
HXLINE( 306)				_hx_tmp = camera->active;
            			}
            			else {
HXLINE( 306)				_hx_tmp = false;
            			}
HXDLIN( 306)			if (_hx_tmp) {
HXLINE( 308)				camera->update(elapsed);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,update,(void))

void CameraFrontEnd_obj::resize(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_319_resize)
HXDLIN( 319)		int _g = 0;
HXDLIN( 319)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 319)		while((_g < _g1->length)){
HXDLIN( 319)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 319)			_g = (_g + 1);
HXLINE( 321)			camera->onResize();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,resize,(void))

int CameraFrontEnd_obj::get_bgColor(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_327_get_bgColor)
HXDLIN( 327)		if (::hx::IsNull( ::flixel::FlxG_obj::camera )) {
HXDLIN( 327)			return -16777216;
            		}
            		else {
HXDLIN( 327)			return ::flixel::FlxG_obj::camera->bgColor;
            		}
HXDLIN( 327)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,get_bgColor,return )

int CameraFrontEnd_obj::set_bgColor(int Color){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_331_set_bgColor)
HXLINE( 332)		{
HXLINE( 332)			int _g = 0;
HXDLIN( 332)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 332)			while((_g < _g1->length)){
HXLINE( 332)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 332)				_g = (_g + 1);
HXLINE( 334)				camera->bgColor = Color;
            			}
            		}
HXLINE( 337)		return Color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,set_bgColor,return )


::hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__new() {
	::hx::ObjectPtr< CameraFrontEnd_obj > __this = new CameraFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CameraFrontEnd_obj *__this = (CameraFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CameraFrontEnd_obj), true, "flixel.system.frontEnds.CameraFrontEnd"));
	*(void **)__this = CameraFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CameraFrontEnd_obj::CameraFrontEnd_obj()
{
}

void CameraFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(defaults,"defaults");
	HX_MARK_MEMBER_NAME(cameraAdded,"cameraAdded");
	HX_MARK_MEMBER_NAME(cameraRemoved,"cameraRemoved");
	HX_MARK_MEMBER_NAME(cameraResized,"cameraResized");
	HX_MARK_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_MARK_END_CLASS();
}

void CameraFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(defaults,"defaults");
	HX_VISIT_MEMBER_NAME(cameraAdded,"cameraAdded");
	HX_VISIT_MEMBER_NAME(cameraRemoved,"cameraRemoved");
	HX_VISIT_MEMBER_NAME(cameraResized,"cameraResized");
	HX_VISIT_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(_cameraRect,"_cameraRect");
}

::hx::Val CameraFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		if (HX_FIELD_EQ(inName,"fade") ) { return ::hx::Val( fade_dyn() ); }
		if (HX_FIELD_EQ(inName,"lock") ) { return ::hx::Val( lock_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"flash") ) { return ::hx::Val( flash_dyn() ); }
		if (HX_FIELD_EQ(inName,"shake") ) { return ::hx::Val( shake_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return ::hx::Val( unlock_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bgColor() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { return ::hx::Val( defaults ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraAdded") ) { return ::hx::Val( cameraAdded ); }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return ::hx::Val( _cameraRect ); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return ::hx::Val( get_bgColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return ::hx::Val( set_bgColor_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cameraRemoved") ) { return ::hx::Val( cameraRemoved ); }
		if (HX_FIELD_EQ(inName,"cameraResized") ) { return ::hx::Val( cameraResized ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return ::hx::Val( useBufferLocking ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setDefaultDrawTarget") ) { return ::hx::Val( setDefaultDrawTarget_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CameraFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bgColor(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { defaults=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraAdded") ) { cameraAdded=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cameraRemoved") ) { cameraRemoved=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraResized") ) { cameraResized=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("defaults",92,d0,99,af));
	outFields->push(HX_("bgColor",5e,81,83,f7));
	outFields->push(HX_("cameraAdded",db,c7,89,10));
	outFields->push(HX_("cameraRemoved",7b,4f,fd,fa));
	outFields->push(HX_("cameraResized",cb,8b,70,6b));
	outFields->push(HX_("useBufferLocking",f0,43,3c,76));
	outFields->push(HX_("_cameraRect",88,43,4f,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CameraFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CameraFrontEnd_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CameraFrontEnd_obj,defaults),HX_("defaults",92,d0,99,af)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(CameraFrontEnd_obj,cameraAdded),HX_("cameraAdded",db,c7,89,10)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(CameraFrontEnd_obj,cameraRemoved),HX_("cameraRemoved",7b,4f,fd,fa)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(CameraFrontEnd_obj,cameraResized),HX_("cameraResized",cb,8b,70,6b)},
	{::hx::fsBool,(int)offsetof(CameraFrontEnd_obj,useBufferLocking),HX_("useBufferLocking",f0,43,3c,76)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(CameraFrontEnd_obj,_cameraRect),HX_("_cameraRect",88,43,4f,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CameraFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String CameraFrontEnd_obj_sMemberFields[] = {
	HX_("list",5e,1c,b3,47),
	HX_("defaults",92,d0,99,af),
	HX_("cameraAdded",db,c7,89,10),
	HX_("cameraRemoved",7b,4f,fd,fa),
	HX_("cameraResized",cb,8b,70,6b),
	HX_("useBufferLocking",f0,43,3c,76),
	HX_("_cameraRect",88,43,4f,84),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("setDefaultDrawTarget",94,14,3f,93),
	HX_("reset",cf,49,c8,e6),
	HX_("flash",b0,35,8c,02),
	HX_("fade",7c,b5,b5,43),
	HX_("shake",c6,de,1c,7c),
	HX_("lock",eb,9b,b7,47),
	HX_("render",56,6b,29,05),
	HX_("unlock",c4,a2,8c,65),
	HX_("update",09,86,05,87),
	HX_("resize",f4,59,7b,08),
	HX_("get_bgColor",75,e1,7d,7d),
	HX_("set_bgColor",81,e8,ea,87),
	::String(null()) };

::hx::Class CameraFrontEnd_obj::__mClass;

void CameraFrontEnd_obj::__register()
{
	CameraFrontEnd_obj _hx_dummy;
	CameraFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.CameraFrontEnd",31,94,3d,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CameraFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CameraFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CameraFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CameraFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
