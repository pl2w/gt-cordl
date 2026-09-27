#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventBuffer_Enumerator.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputEventBuffer_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputEventBuffer_Enumerator::*)(::UnityEngine::InputSystem::LowLevel::InputEventBuffer)>(&::GlobalNamespace::InputEventBuffer_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaff03f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventBuffer_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputEventBuffer_Enumerator::*)()>(&::GlobalNamespace::InputEventBuffer_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaff05c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventBuffer_Enumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputEventBuffer_Enumerator::*)()>(&::GlobalNamespace::InputEventBuffer_Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaff0630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventBuffer_Enumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputEventBuffer_Enumerator::*)()>(&::GlobalNamespace::InputEventBuffer_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaff063c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventBuffer_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::GlobalNamespace::InputEventBuffer_Enumerator::*)()>(&::GlobalNamespace::InputEventBuffer_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaff0640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventBuffer_Enumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::InputEventBuffer_Enumerator::*)()>(&::GlobalNamespace::InputEventBuffer_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaff0648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InputEventBuffer_Enumerator::_ctor(::UnityEngine::InputSystem::LowLevel::InputEventBuffer  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline bool GlobalNamespace::InputEventBuffer_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::InputEventBuffer_Enumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InputEventBuffer_Enumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr GlobalNamespace::InputEventBuffer_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::InputEventBuffer_Enumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventBuffer_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr  GlobalNamespace::InputEventBuffer_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* GlobalNamespace::InputEventBuffer_Enumerator::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::InputEventBuffer_Enumerator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::InputEventBuffer_Enumerator::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::InputEventBuffer_Enumerator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::InputEventBuffer_Enumerator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputEventBuffer_Enumerator::InputEventBuffer_Enumerator(::UnityEngine::InputSystem::LowLevel::InputEvent*  m_Buffer, int32_t  m_EventCount, ::UnityEngine::InputSystem::LowLevel::InputEvent*  m_CurrentEvent, int32_t  m_CurrentIndex) noexcept  {
this->m_Buffer = m_Buffer;
this->m_EventCount = m_EventCount;
this->m_CurrentEvent = m_CurrentEvent;
this->m_CurrentIndex = m_CurrentIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputEventBuffer_Enumerator::InputEventBuffer_Enumerator()   {
}
