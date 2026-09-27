#pragma once
// IWYU pragma private; include "GlobalNamespace/CallLimitType_1.hpp"
#include "GlobalNamespace/zzzz__FXType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CallLimitType_1_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
template<typename T>
constexpr ::GlobalNamespace::FXType& GlobalNamespace::CallLimitType_1<T>::__cordl_internal_get_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
template<typename T>
constexpr ::GlobalNamespace::FXType const& GlobalNamespace::CallLimitType_1<T>::__cordl_internal_get_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
template<typename T>
constexpr void GlobalNamespace::CallLimitType_1<T>::__cordl_internal_set_Key(::GlobalNamespace::FXType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Key = value;
}
template<typename T>
constexpr bool& GlobalNamespace::CallLimitType_1<T>::__cordl_internal_get_UseNetWorkTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNetWorkTime;
}
template<typename T>
constexpr bool const& GlobalNamespace::CallLimitType_1<T>::__cordl_internal_get_UseNetWorkTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNetWorkTime;
}
template<typename T>
constexpr void GlobalNamespace::CallLimitType_1<T>::__cordl_internal_set_UseNetWorkTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseNetWorkTime = value;
}
template<typename T>
constexpr T& GlobalNamespace::CallLimitType_1<T>::__cordl_internal_get_CallLimitSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CallLimitSettings;
}
template<typename T>
constexpr T const& GlobalNamespace::CallLimitType_1<T>::__cordl_internal_get_CallLimitSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CallLimitSettings;
}
template<typename T>
constexpr void GlobalNamespace::CallLimitType_1<T>::__cordl_internal_set_CallLimitSettings(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CallLimitSettings = value;
}
template<typename T>
inline ::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*>* GlobalNamespace::CallLimitType_1<T>::op_Implicit___GlobalNamespace__CallLimitType_1___GlobalNamespace__CallLimiter___(::GlobalNamespace::CallLimitType_1<T>*  clt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimitType_1<T>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::CallLimitType_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*>*>(nullptr, ___internal_method, clt);
}
template<typename T>
inline void GlobalNamespace::CallLimitType_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimitType_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::CallLimitType_1<T>* GlobalNamespace::CallLimitType_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CallLimitType_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::CallLimitType_1<T>::CallLimitType_1()   {
}
