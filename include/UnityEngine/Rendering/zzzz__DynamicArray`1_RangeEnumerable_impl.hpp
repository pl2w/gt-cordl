#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicArray`1_RangeEnumerable.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray`1_RangeEnumerable_RangeIterator_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray`1_RangeEnumerable_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray`1_RangeEnumerable_RangeIterator_def.hpp"
template<typename T>
inline ::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T> GlobalNamespace::DynamicArray_1_RangeEnumerable<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicArray_1_RangeEnumerable<T>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "iterator", ty: "::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::DynamicArray_1_RangeEnumerable<T>::DynamicArray_1_RangeEnumerable(::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>  iterator) noexcept  {
this->iterator = iterator;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::DynamicArray_1_RangeEnumerable<T>::DynamicArray_1_RangeEnumerable()   {
}
