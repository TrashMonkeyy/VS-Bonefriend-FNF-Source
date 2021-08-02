#ifndef INCLUDED_motion_IComponentPath
#define INCLUDED_motion_IComponentPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(motion,IComponentPath)

namespace motion{


class HXCPP_CLASS_ATTRIBUTES IComponentPath_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		Float (::hx::Object :: *_hx_get_start)(); 
		static inline Float get_start( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::IComponentPath_obj *>(_hx_.mPtr->_hx_getInterface(0xe9f30fef)))->_hx_get_start)();
		}
		Float (::hx::Object :: *_hx_set_start)(Float value); 
		static inline Float set_start( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::IComponentPath_obj *>(_hx_.mPtr->_hx_getInterface(0xe9f30fef)))->_hx_set_start)(value);
		}
		Float (::hx::Object :: *_hx_get_end)(); 
		static inline Float get_end( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::IComponentPath_obj *>(_hx_.mPtr->_hx_getInterface(0xe9f30fef)))->_hx_get_end)();
		}
		Float (::hx::Object :: *_hx_calculate)(Float k); 
		static inline Float calculate( ::Dynamic _hx_,Float k) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::IComponentPath_obj *>(_hx_.mPtr->_hx_getInterface(0xe9f30fef)))->_hx_calculate)(k);
		}
};

} // end namespace motion

#endif /* INCLUDED_motion_IComponentPath */ 
