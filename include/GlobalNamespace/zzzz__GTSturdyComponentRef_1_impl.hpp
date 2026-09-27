#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSturdyComponentRef_1.hpp"
#include "GlobalNamespace/zzzz__GTSturdyComponentRef_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
template<typename T>
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GTSturdyComponentRef_1<T>::get_BaseXform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyComponentRef_1<T>>(),
                        {"get_BaseXform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTSturdyComponentRef_1<T>::set_BaseXform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyComponentRef_1<T>>(),
                        {"set_BaseXform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline T GlobalNamespace::GTSturdyComponentRef_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyComponentRef_1<T>>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTSturdyComponentRef_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyComponentRef_1<T>>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline T GlobalNamespace::GTSturdyComponentRef_1<T>::op_Implicit_T(::GlobalNamespace::GTSturdyComponentRef_1<T>  sturdyRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyComponentRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::GTSturdyComponentRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, sturdyRef);
}
template<typename T>
inline ::GlobalNamespace::GTSturdyComponentRef_1<T> GlobalNamespace::GTSturdyComponentRef_1<T>::op_Implicit___GlobalNamespace__GTSturdyComponentRef_1_T_(T  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyComponentRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTSturdyComponentRef_1<T>>(nullptr, ___internal_method, component);
}
// Ctor Parameters [CppParam { name: "_value", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_relativePath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_baseXform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::GTSturdyComponentRef_1<T>::GTSturdyComponentRef_1(T  _value, ::StringW  _relativePath, ::UnityW<::UnityEngine::Transform>  _baseXform) noexcept  {
this->_value = _value;
this->_relativePath = _relativePath;
this->_baseXform = _baseXform;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GTSturdyComponentRef_1<T>::GTSturdyComponentRef_1()   {
}
