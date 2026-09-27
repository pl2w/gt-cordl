#pragma once
// IWYU pragma private; include "GlobalNamespace/GTOption_1.hpp"
#include "GlobalNamespace/zzzz__GTOption_1_def.hpp"
template<typename T>
inline T GlobalNamespace::GTOption_1<T>::get_ResolvedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTOption_1<T>>(),
                        {"get_ResolvedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTOption_1<T>::_ctor(T  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTOption_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, defaultValue);
}
template<typename T>
inline void GlobalNamespace::GTOption_1<T>::ResetValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTOption_1<T>>(),
                        {"ResetValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "defaultValue", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::GTOption_1<T>::GTOption_1(bool  enabled, T  value, T  defaultValue) noexcept  {
this->enabled = enabled;
this->value = value;
this->defaultValue = defaultValue;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GTOption_1<T>::GTOption_1()   {
}
