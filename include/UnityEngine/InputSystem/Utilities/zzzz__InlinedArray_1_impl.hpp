#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/InlinedArray_1.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray`1_Enumerator_def.hpp"
template<typename TValue>
inline int32_t UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::_ctor(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {".ctor", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::_ctor(TValue  firstValue, /* [ParamArray] */ ::ArrayW<TValue>  additionalValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {".ctor", {}, {::i2c::type_of<TValue>(), ::i2c::type_of<::ArrayW<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, firstValue, additionalValues);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::_ctor(::System::Collections::Generic::IEnumerable_1<TValue>*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, values);
}
template<typename TValue>
inline TValue UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method, index);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::set_Item(int32_t  index, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::ClearWithCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"ClearWithCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TValue>
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(*this, ___internal_method);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::SetLength(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"SetLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size);
}
template<typename TValue>
inline ::ArrayW<TValue> UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TValue>>(*this, ___internal_method);
}
template<typename TValue>
template<typename TOther>
inline ::ArrayW<TOther> UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::ToArray(::System::Func_2<TValue,TOther>*  mapFunction)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                    {"ToArray", {::i2c::class_of<TOther>()}, {::i2c::type_of<::System::Func_2<TValue,TOther>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOther>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TOther>>(*this, ___internal_method, mapFunction);
}
template<typename TValue>
inline int32_t UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::IndexOf(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"IndexOf", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
template<typename TValue>
inline int32_t UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Append(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"Append", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
template<typename TValue>
inline int32_t UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::AppendWithCapacity(TValue  value, int32_t  capacityIncrement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"AppendWithCapacity", {}, {::i2c::type_of<TValue>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value, capacityIncrement);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"AssignWithCapacity", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, values);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Append(::System::Collections::Generic::IEnumerable_1<TValue>*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"Append", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, values);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Remove(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"Remove", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::RemoveAtWithCapacity(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"RemoveAtWithCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::RemoveAtByMovingTailWithCapacity(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"RemoveAtByMovingTailWithCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template<typename TValue>
inline bool UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::RemoveByMovingTailWithCapacity(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"RemoveByMovingTailWithCapacity", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
template<typename TValue>
inline bool UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Contains(TValue  value, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"Contains", {}, {::i2c::type_of<TValue>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, comparer);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"Merge", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
template<typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>* UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*>(*this, ___internal_method);
}
template<typename TValue>
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template<typename TValue>
constexpr  UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
template<typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::i___System__Collections__Generic__IEnumerable_1_TValue_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TValue>
constexpr  UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TValue>
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstValue", ty: "TValue", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "additionalValues", ty: "::ArrayW<TValue>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::InlinedArray_1(int32_t  length, TValue  firstValue, ::ArrayW<TValue>  additionalValues) noexcept  {
this->length = length;
this->firstValue = firstValue;
this->additionalValues = additionalValues;
}
// Ctor Parameters []
template<typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::InlinedArray_1()   {
}
