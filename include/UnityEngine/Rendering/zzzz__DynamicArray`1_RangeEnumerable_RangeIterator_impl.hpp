#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicArray`1_RangeEnumerable_RangeIterator.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray`1_RangeEnumerable_RangeIterator_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
template<typename T>
inline void GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>::_ctor(::UnityEngine::Rendering::DynamicArray_1<T>*  setOwner, int32_t  first, int32_t  numItems)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, setOwner, first, numItems);
}
template<typename T>
inline ::by_ref<T> GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "owner", ty: "::UnityEngine::Rendering::DynamicArray_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "first", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "last", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>::RangeEnumerable_DynamicArray_1_RangeIterator(::UnityEngine::Rendering::DynamicArray_1<T>*  owner, int32_t  index, int32_t  first, int32_t  last) noexcept  {
this->owner = owner;
this->index = index;
this->first = first;
this->last = last;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>::RangeEnumerable_DynamicArray_1_RangeIterator()   {
}
