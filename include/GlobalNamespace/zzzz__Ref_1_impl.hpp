#pragma once
// IWYU pragma private; include "GlobalNamespace/Ref_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Ref_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename T>
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::Ref_1<T>::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
template<typename T>
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::Ref_1<T>::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
template<typename T>
constexpr void GlobalNamespace::Ref_1<T>::__cordl_internal_set__target(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
template<typename T>
inline T GlobalNamespace::Ref_1<T>::get_AsT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ref_1<T>*>(),
                        {"get_AsT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::Ref_1<T>::set_AsT(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ref_1<T>*>(),
                        {"set_AsT", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline bool GlobalNamespace::Ref_1<T>::op_Implicit_bool(::GlobalNamespace::Ref_1<T>*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ref_1<T>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Ref_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, r);
}
template<typename T>
inline T GlobalNamespace::Ref_1<T>::op_Implicit_T(::GlobalNamespace::Ref_1<T>*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ref_1<T>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Ref_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, r);
}
template<typename T>
inline ::UnityW<::UnityEngine::Object> GlobalNamespace::Ref_1<T>::op_Implicit___UnityW___UnityEngine__Object_(::GlobalNamespace::Ref_1<T>*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ref_1<T>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Ref_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, r);
}
template<typename T>
inline void GlobalNamespace::Ref_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ref_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::Ref_1<T>* GlobalNamespace::Ref_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Ref_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Ref_1<T>::Ref_1()   {
}
