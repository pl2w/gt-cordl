#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/ReadOnlyArray`1_Enumerator.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TValue>
inline void GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::_ctor(::ArrayW<TValue>  array, int32_t  index, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, index, length);
}
template<typename TValue>
inline void GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TValue>
inline bool GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TValue>
inline void GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TValue>
inline TValue GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method);
}
template<typename TValue>
inline ::System::Object* GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template<typename TValue>
constexpr  GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
template<typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::i___System__Collections__Generic__IEnumerator_1_TValue_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TValue>
constexpr  GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TValue>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TValue>
constexpr  GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TValue>
constexpr ::System::IDisposable* GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<TValue>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TValue>
constexpr ::GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::ReadOnlyArray_1_Enumerator(::ArrayW<TValue>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept  {
this->m_Array = m_Array;
this->m_IndexStart = m_IndexStart;
this->m_IndexEnd = m_IndexEnd;
this->m_Index = m_Index;
}
// Ctor Parameters []
template<typename TValue>
constexpr ::GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>::ReadOnlyArray_1_Enumerator()   {
}
