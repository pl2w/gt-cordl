#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlList`1_Enumerator.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
template<typename TControl>
inline void GlobalNamespace::InputControlList_1_Enumerator<TControl>::_ctor(::UnityEngine::InputSystem::InputControlList_1<TControl>  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlList_1_Enumerator<TControl>>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template<typename TControl>
inline bool GlobalNamespace::InputControlList_1_Enumerator<TControl>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlList_1_Enumerator<TControl>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TControl>
inline void GlobalNamespace::InputControlList_1_Enumerator<TControl>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlList_1_Enumerator<TControl>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TControl>
inline TControl GlobalNamespace::InputControlList_1_Enumerator<TControl>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlList_1_Enumerator<TControl>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TControl>(*this, ___internal_method);
}
template<typename TControl>
inline ::System::Object* GlobalNamespace::InputControlList_1_Enumerator<TControl>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlList_1_Enumerator<TControl>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TControl>
inline void GlobalNamespace::InputControlList_1_Enumerator<TControl>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlList_1_Enumerator<TControl>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TControl>"
template<typename TControl>
constexpr  GlobalNamespace::InputControlList_1_Enumerator<TControl>::operator ::System::Collections::Generic::IEnumerator_1<TControl>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TControl>"
template<typename TControl>
constexpr ::System::Collections::Generic::IEnumerator_1<TControl>* GlobalNamespace::InputControlList_1_Enumerator<TControl>::i___System__Collections__Generic__IEnumerator_1_TControl_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TControl>
constexpr  GlobalNamespace::InputControlList_1_Enumerator<TControl>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TControl>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::InputControlList_1_Enumerator<TControl>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TControl>
constexpr  GlobalNamespace::InputControlList_1_Enumerator<TControl>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TControl>
constexpr ::System::IDisposable* GlobalNamespace::InputControlList_1_Enumerator<TControl>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Indices", ty: "uint64_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TControl>
constexpr ::GlobalNamespace::InputControlList_1_Enumerator<TControl>::InputControlList_1_Enumerator(uint64_t*  m_Indices, int32_t  m_Count, int32_t  m_Current) noexcept  {
this->m_Indices = m_Indices;
this->m_Count = m_Count;
this->m_Current = m_Current;
}
// Ctor Parameters []
template<typename TControl>
constexpr ::GlobalNamespace::InputControlList_1_Enumerator<TControl>::InputControlList_1_Enumerator()   {
}
