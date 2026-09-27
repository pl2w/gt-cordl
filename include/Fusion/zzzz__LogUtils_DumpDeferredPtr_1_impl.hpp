#pragma once
// IWYU pragma private; include "Fusion/LogUtils_DumpDeferredPtr_1.hpp"
#include "Fusion/zzzz__LogUtils_DumpDeferredPtr_1_def.hpp"
template<typename T>
inline void GlobalNamespace::LogUtils_DumpDeferredPtr_1<T>::_ctor(T*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogUtils_DumpDeferredPtr_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr);
}
template<typename T>
inline ::StringW GlobalNamespace::LogUtils_DumpDeferredPtr_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LogUtils_DumpDeferredPtr_1<T>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_ptr_P", ty: "T*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::LogUtils_DumpDeferredPtr_1<T>::LogUtils_DumpDeferredPtr_1(T*  _ptr_P) noexcept  {
this->_ptr_P = _ptr_P;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::LogUtils_DumpDeferredPtr_1<T>::LogUtils_DumpDeferredPtr_1()   {
}
