#include <hxcpp.h>

#ifndef INCLUDED_GlobalVideo
#include <GlobalVideo.h>
#endif
#ifndef INCLUDED_WebmHandler
#include <WebmHandler.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_webm_WebmIo
#include <webm/WebmIo.h>
#endif
#ifndef INCLUDED_webm_WebmIoFile
#include <webm/WebmIoFile.h>
#endif
#ifndef INCLUDED_webm_WebmPlayer
#include <webm/WebmPlayer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_9_new,"WebmHandler","new",0xe7cf7cc3,"WebmHandler.new","WebmHandler.hx",9,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_23_source,"WebmHandler","source",0xdbb9a458,"WebmHandler.source","WebmHandler.hx",23,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_35_makePlayer,"WebmHandler","makePlayer",0x5a9cb5ec,"WebmHandler.makePlayer","WebmHandler.hx",35,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_38_makePlayer,"WebmHandler","makePlayer",0x5a9cb5ec,"WebmHandler.makePlayer","WebmHandler.hx",38,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_41_makePlayer,"WebmHandler","makePlayer",0x5a9cb5ec,"WebmHandler.makePlayer","WebmHandler.hx",41,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_44_makePlayer,"WebmHandler","makePlayer",0x5a9cb5ec,"WebmHandler.makePlayer","WebmHandler.hx",44,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_30_makePlayer,"WebmHandler","makePlayer",0x5a9cb5ec,"WebmHandler.makePlayer","WebmHandler.hx",30,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_51_updatePlayer,"WebmHandler","updatePlayer",0x6df7c187,"WebmHandler.updatePlayer","WebmHandler.hx",51,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_58_play,"WebmHandler","play",0xef155831,"WebmHandler.play","WebmHandler.hx",58,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_66_stop,"WebmHandler","stop",0xf1171a3f,"WebmHandler.stop","WebmHandler.hx",66,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_74_restart,"WebmHandler","restart",0x1812e1b2,"WebmHandler.restart","WebmHandler.hx",74,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_81_update,"WebmHandler","update",0x308d7986,"WebmHandler.update","WebmHandler.hx",81,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_95_pause,"WebmHandler","pause",0x3c61a219,"WebmHandler.pause","WebmHandler.hx",95,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_101_resume,"WebmHandler","resume",0xb20c5d2a,"WebmHandler.resume","WebmHandler.hx",101,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_108_togglePause,"WebmHandler","togglePause",0x0581d625,"WebmHandler.togglePause","WebmHandler.hx",108,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_117_clearPause,"WebmHandler","clearPause",0x63760c26,"WebmHandler.clearPause","WebmHandler.hx",117,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_124_onStop,"WebmHandler","onStop",0x986dec3e,"WebmHandler.onStop","WebmHandler.hx",124,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_129_onRestart,"WebmHandler","onRestart",0xf8a21913,"WebmHandler.onRestart","WebmHandler.hx",129,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_134_onPlay,"WebmHandler","onPlay",0x966c2a30,"WebmHandler.onPlay","WebmHandler.hx",134,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_138_onEnd,"WebmHandler","onEnd",0xb16e631f,"WebmHandler.onEnd","WebmHandler.hx",138,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_145_alpha,"WebmHandler","alpha",0xa0a07281,"WebmHandler.alpha","WebmHandler.hx",145,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_150_unalpha,"WebmHandler","unalpha",0xcb94b848,"WebmHandler.unalpha","WebmHandler.hx",150,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_155_hide,"WebmHandler","hide",0xe9c95eff,"WebmHandler.hide","WebmHandler.hx",155,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_160_show,"WebmHandler","show",0xf10dff3a,"WebmHandler.show","WebmHandler.hx",160,0x2dcf8c0d)

void WebmHandler_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_9_new)
HXLINE(  92)		this->paused = false;
HXLINE(  91)		this->ended = false;
HXLINE(  90)		this->played = false;
HXLINE(  89)		this->restarted = false;
HXLINE(  88)		this->stopped = false;
HXLINE(  15)		this->initialized = false;
HXLINE(  13)		this->vidPath = HX_("",00,00,00,00);
            	}

Dynamic WebmHandler_obj::__CreateEmpty() { return new WebmHandler_obj; }

void *WebmHandler_obj::_hx_vtable = 0;

Dynamic WebmHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WebmHandler_obj > _hx_result = new WebmHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WebmHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ac0e0c5;
}

void WebmHandler_obj::source(::String vPath){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_23_source)
HXDLIN(  23)		bool _hx_tmp;
HXDLIN(  23)		if (::hx::IsNotNull( vPath )) {
HXDLIN(  23)			_hx_tmp = (vPath.length > 0);
            		}
            		else {
HXDLIN(  23)			_hx_tmp = false;
            		}
HXDLIN(  23)		if (_hx_tmp) {
HXLINE(  25)			this->vidPath = vPath;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(WebmHandler_obj,source,(void))

void WebmHandler_obj::makePlayer(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::WebmHandler,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_35_makePlayer)
HXLINE(  35)			_gthis->onPlay();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::WebmHandler,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_38_makePlayer)
HXLINE(  38)			_gthis->onEnd();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::WebmHandler,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_41_makePlayer)
HXLINE(  41)			_gthis->onStop();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::WebmHandler,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_44_makePlayer)
HXLINE(  44)			_gthis->onRestart();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_30_makePlayer)
HXDLIN(  30)		 ::WebmHandler _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  31)		this->io =  ::webm::WebmIoFile_obj::__alloc( HX_CTX ,this->vidPath);
HXLINE(  32)		this->webm =  ::webm::WebmPlayer_obj::__alloc( HX_CTX );
HXLINE(  33)		this->webm->fuck(this->io,false);
HXLINE(  34)		this->webm->addEventListener(HX_("play",f4,2d,5a,4a), ::Dynamic(new _hx_Closure_0(_gthis)),null(),null(),null());
HXLINE(  37)		this->webm->addEventListener(HX_("complete",b9,00,c8,7f), ::Dynamic(new _hx_Closure_1(_gthis)),null(),null(),null());
HXLINE(  40)		this->webm->addEventListener(HX_("stop",02,f0,5b,4c), ::Dynamic(new _hx_Closure_2(_gthis)),null(),null(),null());
HXLINE(  43)		this->webm->addEventListener(HX_("restart",cf,c7,a5,6a), ::Dynamic(new _hx_Closure_3(_gthis)),null(),null(),null());
HXLINE(  46)		this->webm->set_visible(false);
HXLINE(  47)		this->initialized = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,makePlayer,(void))

void WebmHandler_obj::updatePlayer(){
            	HX_GC_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_51_updatePlayer)
HXLINE(  52)		this->io =  ::webm::WebmIoFile_obj::__alloc( HX_CTX ,this->vidPath);
HXLINE(  53)		this->webm->fuck(this->io,false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,updatePlayer,(void))

void WebmHandler_obj::play(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_58_play)
HXDLIN(  58)		if (this->initialized) {
HXLINE(  60)			this->webm->play();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,play,(void))

void WebmHandler_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_66_stop)
HXDLIN(  66)		if (this->initialized) {
HXLINE(  68)			this->webm->stop(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,stop,(void))

void WebmHandler_obj::restart(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_74_restart)
HXDLIN(  74)		if (this->initialized) {
HXLINE(  76)			this->webm->restart();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,restart,(void))

void WebmHandler_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_81_update)
HXLINE(  82)		 ::webm::WebmPlayer _hx_tmp = this->webm;
HXDLIN(  82)		_hx_tmp->set_x(( (Float)(::GlobalVideo_obj::calc(0)) ));
HXLINE(  83)		 ::webm::WebmPlayer _hx_tmp1 = this->webm;
HXDLIN(  83)		_hx_tmp1->set_y(( (Float)(::GlobalVideo_obj::calc(1)) ));
HXLINE(  84)		 ::webm::WebmPlayer _hx_tmp2 = this->webm;
HXDLIN(  84)		_hx_tmp2->set_width(( (Float)(::GlobalVideo_obj::calc(2)) ));
HXLINE(  85)		 ::webm::WebmPlayer _hx_tmp3 = this->webm;
HXDLIN(  85)		_hx_tmp3->set_height(( (Float)(::GlobalVideo_obj::calc(3)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(WebmHandler_obj,update,(void))

void WebmHandler_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_95_pause)
HXLINE(  96)		this->webm->changePlaying(false);
HXLINE(  97)		this->paused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,pause,(void))

void WebmHandler_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_101_resume)
HXLINE( 102)		this->webm->changePlaying(true);
HXLINE( 103)		this->paused = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,resume,(void))

void WebmHandler_obj::togglePause(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_108_togglePause)
HXDLIN( 108)		if (this->paused) {
HXLINE( 110)			this->resume();
            		}
            		else {
HXLINE( 112)			this->pause();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,togglePause,(void))

void WebmHandler_obj::clearPause(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_117_clearPause)
HXLINE( 118)		this->paused = false;
HXLINE( 119)		this->webm->removePause();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,clearPause,(void))

void WebmHandler_obj::onStop(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_124_onStop)
HXDLIN( 124)		this->stopped = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,onStop,(void))

void WebmHandler_obj::onRestart(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_129_onRestart)
HXDLIN( 129)		this->restarted = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,onRestart,(void))

void WebmHandler_obj::onPlay(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_134_onPlay)
HXDLIN( 134)		this->played = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,onPlay,(void))

void WebmHandler_obj::onEnd(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_138_onEnd)
HXLINE( 139)		::haxe::Log_obj::trace(HX_("IT ENDED!",9c,79,1b,cb),::hx::SourceInfo(HX_("source_bonefriend/WebmHandler.hx",76,a2,a9,4a),139,HX_("WebmHandler",51,5f,03,d7),HX_("onEnd",fc,97,64,32)));
HXLINE( 140)		this->ended = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,onEnd,(void))

void WebmHandler_obj::alpha(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_145_alpha)
HXDLIN( 145)		this->webm->set_alpha(::GlobalVideo_obj::daAlpha1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,alpha,(void))

void WebmHandler_obj::unalpha(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_150_unalpha)
HXDLIN( 150)		this->webm->set_alpha(::GlobalVideo_obj::daAlpha2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,unalpha,(void))

void WebmHandler_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_155_hide)
HXDLIN( 155)		this->webm->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,hide,(void))

void WebmHandler_obj::show(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_160_show)
HXDLIN( 160)		this->webm->set_visible(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,show,(void))


::hx::ObjectPtr< WebmHandler_obj > WebmHandler_obj::__new() {
	::hx::ObjectPtr< WebmHandler_obj > __this = new WebmHandler_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< WebmHandler_obj > WebmHandler_obj::__alloc(::hx::Ctx *_hx_ctx) {
	WebmHandler_obj *__this = (WebmHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebmHandler_obj), true, "WebmHandler"));
	*(void **)__this = WebmHandler_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

WebmHandler_obj::WebmHandler_obj()
{
}

void WebmHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WebmHandler);
	HX_MARK_MEMBER_NAME(webm,"webm");
	HX_MARK_MEMBER_NAME(vidPath,"vidPath");
	HX_MARK_MEMBER_NAME(io,"io");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(stopped,"stopped");
	HX_MARK_MEMBER_NAME(restarted,"restarted");
	HX_MARK_MEMBER_NAME(played,"played");
	HX_MARK_MEMBER_NAME(ended,"ended");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_END_CLASS();
}

void WebmHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(webm,"webm");
	HX_VISIT_MEMBER_NAME(vidPath,"vidPath");
	HX_VISIT_MEMBER_NAME(io,"io");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(stopped,"stopped");
	HX_VISIT_MEMBER_NAME(restarted,"restarted");
	HX_VISIT_MEMBER_NAME(played,"played");
	HX_VISIT_MEMBER_NAME(ended,"ended");
	HX_VISIT_MEMBER_NAME(paused,"paused");
}

::hx::Val WebmHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { return ::hx::Val( io ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"webm") ) { return ::hx::Val( webm ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ended") ) { return ::hx::Val( ended ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return ::hx::Val( onEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return ::hx::Val( source_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"played") ) { return ::hx::Val( played ); }
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"onStop") ) { return ::hx::Val( onStop_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPlay") ) { return ::hx::Val( onPlay_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vidPath") ) { return ::hx::Val( vidPath ); }
		if (HX_FIELD_EQ(inName,"restart") ) { return ::hx::Val( restart_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopped") ) { return ::hx::Val( stopped ); }
		if (HX_FIELD_EQ(inName,"unalpha") ) { return ::hx::Val( unalpha_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"restarted") ) { return ::hx::Val( restarted ); }
		if (HX_FIELD_EQ(inName,"onRestart") ) { return ::hx::Val( onRestart_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"makePlayer") ) { return ::hx::Val( makePlayer_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearPause") ) { return ::hx::Val( clearPause_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return ::hx::Val( initialized ); }
		if (HX_FIELD_EQ(inName,"togglePause") ) { return ::hx::Val( togglePause_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updatePlayer") ) { return ::hx::Val( updatePlayer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WebmHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { io=inValue.Cast<  ::webm::WebmIo >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"webm") ) { webm=inValue.Cast<  ::webm::WebmPlayer >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ended") ) { ended=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"played") ) { played=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vidPath") ) { vidPath=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stopped") ) { stopped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"restarted") ) { restarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WebmHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("webm",59,5d,f5,4e));
	outFields->push(HX_("vidPath",16,b4,9a,ef));
	outFields->push(HX_("io",e6,5b,00,00));
	outFields->push(HX_("initialized",14,f5,0f,37));
	outFields->push(HX_("stopped",0d,d2,61,43));
	outFields->push(HX_("restarted",ee,f1,82,b5));
	outFields->push(HX_("played",53,eb,b8,37));
	outFields->push(HX_("ended",fa,48,7a,70));
	outFields->push(HX_("paused",ae,40,84,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WebmHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::webm::WebmPlayer */ ,(int)offsetof(WebmHandler_obj,webm),HX_("webm",59,5d,f5,4e)},
	{::hx::fsString,(int)offsetof(WebmHandler_obj,vidPath),HX_("vidPath",16,b4,9a,ef)},
	{::hx::fsObject /*  ::webm::WebmIo */ ,(int)offsetof(WebmHandler_obj,io),HX_("io",e6,5b,00,00)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,initialized),HX_("initialized",14,f5,0f,37)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,stopped),HX_("stopped",0d,d2,61,43)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,restarted),HX_("restarted",ee,f1,82,b5)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,played),HX_("played",53,eb,b8,37)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,ended),HX_("ended",fa,48,7a,70)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,paused),HX_("paused",ae,40,84,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WebmHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String WebmHandler_obj_sMemberFields[] = {
	HX_("webm",59,5d,f5,4e),
	HX_("vidPath",16,b4,9a,ef),
	HX_("io",e6,5b,00,00),
	HX_("initialized",14,f5,0f,37),
	HX_("source",db,b0,31,32),
	HX_("makePlayer",ef,bf,88,89),
	HX_("updatePlayer",4a,92,7c,37),
	HX_("play",f4,2d,5a,4a),
	HX_("stop",02,f0,5b,4c),
	HX_("restart",cf,c7,a5,6a),
	HX_("update",09,86,05,87),
	HX_("stopped",0d,d2,61,43),
	HX_("restarted",ee,f1,82,b5),
	HX_("played",53,eb,b8,37),
	HX_("ended",fa,48,7a,70),
	HX_("paused",ae,40,84,ef),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("togglePause",c2,8e,1e,e5),
	HX_("clearPause",29,16,62,92),
	HX_("onStop",c1,f8,e5,ee),
	HX_("onRestart",70,80,50,42),
	HX_("onPlay",b3,36,e4,ec),
	HX_("onEnd",fc,97,64,32),
	HX_("alpha",5e,a7,96,21),
	HX_("unalpha",65,9e,27,1e),
	HX_("hide",c2,34,0e,45),
	HX_("show",fd,d4,52,4c),
	::String(null()) };

::hx::Class WebmHandler_obj::__mClass;

void WebmHandler_obj::__register()
{
	WebmHandler_obj _hx_dummy;
	WebmHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WebmHandler",51,5f,03,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WebmHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WebmHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WebmHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WebmHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

