#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_MatchResult_Enumerator.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_Match_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MatchResult_InputControlScheme_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::*)()>(&::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf4b5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchResult_InputControlScheme_Enumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::*)()>(&::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf4b610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchResult_InputControlScheme_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MatchResult_InputControlScheme_Match (::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::*)()>(&::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaf4b61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchResult_InputControlScheme_Enumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::*)()>(&::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf4b6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchResult_InputControlScheme_Enumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::*)()>(&::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf4b73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::MatchResult_InputControlScheme_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::MatchResult_InputControlScheme_Enumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::GlobalNamespace::MatchResult_InputControlScheme_Match GlobalNamespace::MatchResult_InputControlScheme_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MatchResult_InputControlScheme_Match>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MatchResult_InputControlScheme_Enumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void GlobalNamespace::MatchResult_InputControlScheme_Enumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>"
constexpr  GlobalNamespace::MatchResult_InputControlScheme_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>* GlobalNamespace::MatchResult_InputControlScheme_Enumerator::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__MatchResult_InputControlScheme_Match_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MatchResult_InputControlScheme_Enumerator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MatchResult_InputControlScheme_Enumerator::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MatchResult_InputControlScheme_Enumerator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MatchResult_InputControlScheme_Enumerator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::MatchResult_InputControlScheme_Enumerator(int32_t  m_Index, ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_Requirements, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls) noexcept  {
this->m_Index = m_Index;
this->m_Requirements = m_Requirements;
this->m_Controls = m_Controls;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MatchResult_InputControlScheme_Enumerator::MatchResult_InputControlScheme_Enumerator()   {
}
