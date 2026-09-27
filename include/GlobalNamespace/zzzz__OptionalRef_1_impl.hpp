#pragma once
// IWYU pragma private; include "GlobalNamespace/OptionalRef_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OptionalRef_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename T>
constexpr bool& GlobalNamespace::OptionalRef_1<T>::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
template<typename T>
constexpr bool const& GlobalNamespace::OptionalRef_1<T>::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
template<typename T>
constexpr void GlobalNamespace::OptionalRef_1<T>::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
template<typename T>
constexpr T& GlobalNamespace::OptionalRef_1<T>::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
template<typename T>
constexpr T const& GlobalNamespace::OptionalRef_1<T>::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
template<typename T>
constexpr void GlobalNamespace::OptionalRef_1<T>::__cordl_internal_set__target(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
template<typename T>
inline bool GlobalNamespace::OptionalRef_1<T>::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OptionalRef_1<T>*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::OptionalRef_1<T>::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OptionalRef_1<T>*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T GlobalNamespace::OptionalRef_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OptionalRef_1<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::OptionalRef_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OptionalRef_1<T>*>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline bool GlobalNamespace::OptionalRef_1<T>::op_Implicit_bool(::GlobalNamespace::OptionalRef_1<T>*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OptionalRef_1<T>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::OptionalRef_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, r);
}
template<typename T>
inline T GlobalNamespace::OptionalRef_1<T>::op_Implicit_T(::GlobalNamespace::OptionalRef_1<T>*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OptionalRef_1<T>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::OptionalRef_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, r);
}
template<typename T>
inline ::UnityW<::UnityEngine::Object> GlobalNamespace::OptionalRef_1<T>::op_Implicit___UnityW___UnityEngine__Object_(::GlobalNamespace::OptionalRef_1<T>*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OptionalRef_1<T>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::OptionalRef_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, r);
}
template<typename T>
inline void GlobalNamespace::OptionalRef_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OptionalRef_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::OptionalRef_1<T>* GlobalNamespace::OptionalRef_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OptionalRef_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::OptionalRef_1<T>::OptionalRef_1()   {
}
