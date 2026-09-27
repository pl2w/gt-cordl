#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory`1_Enumerator.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory`1_Record_def.hpp"
template<typename TValue>
inline void GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::_ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*  history)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Enumerator<TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, history);
}
template<typename TValue>
inline bool GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Enumerator<TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TValue>
inline void GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Enumerator<TValue>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TValue>
inline ::GlobalNamespace::InputStateHistory_1_Record<TValue> GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Enumerator<TValue>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(*this, ___internal_method);
}
template<typename TValue>
inline ::System::Object* GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Enumerator<TValue>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TValue>
inline void GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Enumerator<TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
template<typename TValue>
constexpr  GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
template<typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>* GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__InputStateHistory_1_Record_TValue__()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TValue>
constexpr  GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TValue>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TValue>
constexpr  GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TValue>
constexpr ::System::IDisposable* GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TValue>
constexpr ::GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::InputStateHistory_1_Enumerator(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*  m_History, int32_t  m_Index) noexcept  {
this->m_History = m_History;
this->m_Index = m_Index;
}
// Ctor Parameters []
template<typename TValue>
constexpr ::GlobalNamespace::InputStateHistory_1_Enumerator<TValue>::InputStateHistory_1_Enumerator()   {
}
