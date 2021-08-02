#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6b949bcf7ae652c4_43_sort,"haxe.ds.ArraySort","sort",0xa0749d6c,"haxe.ds.ArraySort.sort","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/ds/ArraySort.hx",43,0x47a5719a)
HX_LOCAL_STACK_FRAME(_hx_pos_6b949bcf7ae652c4_46_rec,"haxe.ds.ArraySort","rec",0xd9af5f02,"haxe.ds.ArraySort.rec","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/ds/ArraySort.hx",46,0x47a5719a)
HX_LOCAL_STACK_FRAME(_hx_pos_6b949bcf7ae652c4_68_doMerge,"haxe.ds.ArraySort","doMerge",0x66c5c9df,"haxe.ds.ArraySort.doMerge","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/ds/ArraySort.hx",68,0x47a5719a)
HX_LOCAL_STACK_FRAME(_hx_pos_6b949bcf7ae652c4_94_rotate,"haxe.ds.ArraySort","rotate",0xb7d0dbe9,"haxe.ds.ArraySort.rotate","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/ds/ArraySort.hx",94,0x47a5719a)
HX_LOCAL_STACK_FRAME(_hx_pos_6b949bcf7ae652c4_115_gcd,"haxe.ds.ArraySort","gcd",0xd9a7047a,"haxe.ds.ArraySort.gcd","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/ds/ArraySort.hx",115,0x47a5719a)
HX_LOCAL_STACK_FRAME(_hx_pos_6b949bcf7ae652c4_124_upper,"haxe.ds.ArraySort","upper",0xed09ef94,"haxe.ds.ArraySort.upper","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/ds/ArraySort.hx",124,0x47a5719a)
HX_LOCAL_STACK_FRAME(_hx_pos_6b949bcf7ae652c4_139_lower,"haxe.ds.ArraySort","lower",0xbdcad033,"haxe.ds.ArraySort.lower","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/ds/ArraySort.hx",139,0x47a5719a)
HX_LOCAL_STACK_FRAME(_hx_pos_6b949bcf7ae652c4_153_swap,"haxe.ds.ArraySort","swap",0xa07aa0a1,"haxe.ds.ArraySort.swap","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/ds/ArraySort.hx",153,0x47a5719a)
namespace haxe{
namespace ds{

void ArraySort_obj::__construct() { }

Dynamic ArraySort_obj::__CreateEmpty() { return new ArraySort_obj; }

void *ArraySort_obj::_hx_vtable = 0;

Dynamic ArraySort_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArraySort_obj > _hx_result = new ArraySort_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArraySort_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10719ca2;
}

void ArraySort_obj::sort(::cpp::VirtualArray a, ::Dynamic cmp){
            	HX_STACKFRAME(&_hx_pos_6b949bcf7ae652c4_43_sort)
HXDLIN(  43)		::haxe::ds::ArraySort_obj::rec(a,cmp,0,a->get_length());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArraySort_obj,sort,(void))

void ArraySort_obj::rec(::cpp::VirtualArray a, ::Dynamic cmp,int from,int to){
            	HX_STACKFRAME(&_hx_pos_6b949bcf7ae652c4_46_rec)
HXLINE(  47)		int middle = ((from + to) >> 1);
HXLINE(  48)		if (((to - from) < 12)) {
HXLINE(  49)			if ((to <= from)) {
HXLINE(  50)				return;
            			}
HXLINE(  51)			{
HXLINE(  51)				int _g = (from + 1);
HXDLIN(  51)				int _g1 = to;
HXDLIN(  51)				while((_g < _g1)){
HXLINE(  51)					_g = (_g + 1);
HXDLIN(  51)					int i = (_g - 1);
HXLINE(  52)					int j = i;
HXLINE(  53)					while((j > from)){
HXLINE(  54)						if (::hx::IsLess( cmp(a->__get(j),a->__get((j - 1))),0 )) {
HXLINE(  55)							::haxe::ds::ArraySort_obj::swap(a,(j - 1),j);
            						}
            						else {
HXLINE(  57)							goto _hx_goto_2;
            						}
HXLINE(  58)						j = (j - 1);
            					}
            					_hx_goto_2:;
            				}
            			}
HXLINE(  61)			return;
            		}
HXLINE(  63)		::haxe::ds::ArraySort_obj::rec(a,cmp,from,middle);
HXLINE(  64)		::haxe::ds::ArraySort_obj::rec(a,cmp,middle,to);
HXLINE(  65)		::haxe::ds::ArraySort_obj::doMerge(a,cmp,from,middle,to,(middle - from),(to - middle));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArraySort_obj,rec,(void))

void ArraySort_obj::doMerge(::cpp::VirtualArray a, ::Dynamic cmp,int from,int pivot,int to,int len1,int len2){
            	HX_STACKFRAME(&_hx_pos_6b949bcf7ae652c4_68_doMerge)
HXLINE(  69)		int first_cut;
HXDLIN(  69)		int second_cut;
HXDLIN(  69)		int len11;
HXDLIN(  69)		int len22;
HXLINE(  70)		bool _hx_tmp;
HXDLIN(  70)		if ((len1 != 0)) {
HXLINE(  70)			_hx_tmp = (len2 == 0);
            		}
            		else {
HXLINE(  70)			_hx_tmp = true;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  71)			return;
            		}
HXLINE(  72)		if (((len1 + len2) == 2)) {
HXLINE(  73)			if (::hx::IsLess( cmp(a->__get(pivot),a->__get(from)),0 )) {
HXLINE(  74)				::haxe::ds::ArraySort_obj::swap(a,pivot,from);
            			}
HXLINE(  75)			return;
            		}
HXLINE(  77)		if ((len1 > len2)) {
HXLINE(  78)			len11 = (len1 >> 1);
HXLINE(  79)			first_cut = (from + len11);
HXLINE(  80)			second_cut = ::haxe::ds::ArraySort_obj::lower(a,cmp,pivot,to,first_cut);
HXLINE(  81)			len22 = (second_cut - pivot);
            		}
            		else {
HXLINE(  83)			len22 = (len2 >> 1);
HXLINE(  84)			second_cut = (pivot + len22);
HXLINE(  85)			first_cut = ::haxe::ds::ArraySort_obj::upper(a,cmp,from,pivot,second_cut);
HXLINE(  86)			len11 = (first_cut - from);
            		}
HXLINE(  88)		::haxe::ds::ArraySort_obj::rotate(a,cmp,first_cut,pivot,second_cut);
HXLINE(  69)		int new_mid = (first_cut + len22);
HXLINE(  90)		::haxe::ds::ArraySort_obj::doMerge(a,cmp,from,first_cut,new_mid,len11,len22);
HXLINE(  91)		::haxe::ds::ArraySort_obj::doMerge(a,cmp,new_mid,second_cut,to,(len1 - len11),(len2 - len22));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ArraySort_obj,doMerge,(void))

void ArraySort_obj::rotate(::cpp::VirtualArray a, ::Dynamic cmp,int from,int mid,int to){
            	HX_STACKFRAME(&_hx_pos_6b949bcf7ae652c4_94_rotate)
HXLINE(  96)		bool _hx_tmp;
HXDLIN(  96)		if ((from != mid)) {
HXLINE(  96)			_hx_tmp = (mid == to);
            		}
            		else {
HXLINE(  96)			_hx_tmp = true;
            		}
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  97)			return;
            		}
HXLINE(  95)		int n = ::haxe::ds::ArraySort_obj::gcd((to - from),(mid - from));
HXLINE(  99)		while(true){
HXLINE(  99)			n = (n - 1);
HXDLIN(  99)			if (!(((n + 1) != 0))) {
HXLINE(  99)				goto _hx_goto_5;
            			}
HXLINE( 100)			 ::Dynamic val = a->__get((from + n));
HXLINE( 101)			int shift = (mid - from);
HXLINE( 102)			int p1 = (from + n);
HXDLIN( 102)			int p2 = ((from + n) + shift);
HXLINE( 103)			while((p2 != (from + n))){
HXLINE( 104)				a->set(p1,a->__get(p2));
HXLINE( 105)				p1 = p2;
HXLINE( 106)				if (((to - p2) > shift)) {
HXLINE( 107)					p2 = (p2 + shift);
            				}
            				else {
HXLINE( 109)					p2 = (from + (shift - (to - p2)));
            				}
            			}
HXLINE( 111)			a->set(p1,val);
            		}
            		_hx_goto_5:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArraySort_obj,rotate,(void))

int ArraySort_obj::gcd(int m,int n){
            	HX_STACKFRAME(&_hx_pos_6b949bcf7ae652c4_115_gcd)
HXLINE( 116)		while((n != 0)){
HXLINE( 117)			int t = ::hx::Mod(m,n);
HXLINE( 118)			m = n;
HXLINE( 119)			n = t;
            		}
HXLINE( 121)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArraySort_obj,gcd,return )

int ArraySort_obj::upper(::cpp::VirtualArray a, ::Dynamic cmp,int from,int to,int val){
            	HX_STACKFRAME(&_hx_pos_6b949bcf7ae652c4_124_upper)
HXLINE( 125)		int len = (to - from);
HXDLIN( 125)		int half;
HXDLIN( 125)		int mid;
HXLINE( 126)		while((len > 0)){
HXLINE( 127)			half = (len >> 1);
HXLINE( 128)			mid = (from + half);
HXLINE( 129)			if (::hx::IsLess( cmp(a->__get(val),a->__get(mid)),0 )) {
HXLINE( 130)				len = half;
            			}
            			else {
HXLINE( 132)				from = (mid + 1);
HXLINE( 133)				len = ((len - half) - 1);
            			}
            		}
HXLINE( 136)		return from;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArraySort_obj,upper,return )

int ArraySort_obj::lower(::cpp::VirtualArray a, ::Dynamic cmp,int from,int to,int val){
            	HX_STACKFRAME(&_hx_pos_6b949bcf7ae652c4_139_lower)
HXLINE( 140)		int len = (to - from);
HXDLIN( 140)		int half;
HXDLIN( 140)		int mid;
HXLINE( 141)		while((len > 0)){
HXLINE( 142)			half = (len >> 1);
HXLINE( 143)			mid = (from + half);
HXLINE( 144)			if (::hx::IsLess( cmp(a->__get(mid),a->__get(val)),0 )) {
HXLINE( 145)				from = (mid + 1);
HXLINE( 146)				len = ((len - half) - 1);
            			}
            			else {
HXLINE( 148)				len = half;
            			}
            		}
HXLINE( 150)		return from;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArraySort_obj,lower,return )

void ArraySort_obj::swap(::cpp::VirtualArray a,int i,int j){
            	HX_STACKFRAME(&_hx_pos_6b949bcf7ae652c4_153_swap)
HXLINE( 154)		 ::Dynamic tmp = a->__get(i);
HXLINE( 155)		a->set(i,a->__get(j));
HXLINE( 156)		a->set(j,tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArraySort_obj,swap,(void))


ArraySort_obj::ArraySort_obj()
{
}

bool ArraySort_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rec") ) { outValue = rec_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"gcd") ) { outValue = gcd_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"swap") ) { outValue = swap_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"upper") ) { outValue = upper_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lower") ) { outValue = lower_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { outValue = rotate_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doMerge") ) { outValue = doMerge_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ArraySort_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ArraySort_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ArraySort_obj::__mClass;

static ::String ArraySort_obj_sStaticFields[] = {
	HX_("sort",5e,27,58,4c),
	HX_("rec",50,d9,56,00),
	HX_("doMerge",2d,83,f3,38),
	HX_("rotate",5b,46,20,cb),
	HX_("gcd",c8,7e,4e,00),
	HX_("upper",62,19,3f,a8),
	HX_("lower",01,fa,ff,78),
	HX_("swap",93,2a,5e,4c),
	::String(null())
};

void ArraySort_obj::__register()
{
	ArraySort_obj _hx_dummy;
	ArraySort_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.ArraySort",20,a5,e7,30);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArraySort_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ArraySort_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ArraySort_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArraySort_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArraySort_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
