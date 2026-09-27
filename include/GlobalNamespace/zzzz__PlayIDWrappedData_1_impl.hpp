#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayIDWrappedData_1.hpp"
#include "GlobalNamespace/zzzz__EnterPlayID_impl.hpp"
#include "GlobalNamespace/zzzz__PlayIDWrappedData_1_def.hpp"
template<typename T>
inline void GlobalNamespace::PlayIDWrappedData_1<T>::_ctor(T  initialValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayIDWrappedData_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialValue);
}
template<typename T>
inline T GlobalNamespace::PlayIDWrappedData_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayIDWrappedData_1<T>>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::PlayIDWrappedData_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayIDWrappedData_1<T>>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "currentValue", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "initialValue", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::GlobalNamespace::EnterPlayID", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::PlayIDWrappedData_1<T>::PlayIDWrappedData_1(T  currentValue, T  initialValue, ::GlobalNamespace::EnterPlayID  id) noexcept  {
this->currentValue = currentValue;
this->initialValue = initialValue;
this->id = id;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::PlayIDWrappedData_1<T>::PlayIDWrappedData_1()   {
}
