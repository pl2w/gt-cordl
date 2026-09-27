#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicArray`1_Iterator.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray`1_Iterator_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
template<typename T>
inline void GlobalNamespace::DynamicArray_1_Iterator<T>::_ctor(::UnityEngine::Rendering::DynamicArray_1<T>*  setOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicArray_1_Iterator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, setOwner);
}
template<typename T>
inline ::by_ref<T> GlobalNamespace::DynamicArray_1_Iterator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicArray_1_Iterator<T>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::DynamicArray_1_Iterator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicArray_1_Iterator<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::DynamicArray_1_Iterator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicArray_1_Iterator<T>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "owner", ty: "::UnityEngine::Rendering::DynamicArray_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::DynamicArray_1_Iterator<T>::DynamicArray_1_Iterator(::UnityEngine::Rendering::DynamicArray_1<T>*  owner, int32_t  index) noexcept  {
this->owner = owner;
this->index = index;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::DynamicArray_1_Iterator<T>::DynamicArray_1_Iterator()   {
}
