#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Bindings/Variables/BindableVariable_1.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableBase_1_impl.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T>::_ctor(T  initialValue, bool  checkEquality, ::System::Func_3<T,T,bool>*  equalityMethod, bool  startInitialized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_3<T,T,bool>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialValue, checkEquality, equalityMethod, startInitialized);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T>::ValueEquals(T  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T>* Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T>::New_ctor(T  initialValue, bool  checkEquality, ::System::Func_3<T,T,bool>*  equalityMethod, bool  startInitialized)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T>*>(initialValue, checkEquality, equalityMethod, startInitialized));
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T>::BindableVariable_1()   {
}
