#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_MatchResult.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_Result_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_Enumerator_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_Match_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_Result_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_MatchResult.get_score
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::InputControlScheme_MatchResult::*)()>(&::GlobalNamespace::InputControlScheme_MatchResult::get_score)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf4b1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_score", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_MatchResult.get_isSuccessfulMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlScheme_MatchResult::*)()>(&::GlobalNamespace::InputControlScheme_MatchResult::get_isSuccessfulMatch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf4b1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_isSuccessfulMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_MatchResult.get_hasMissingRequiredDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlScheme_MatchResult::*)()>(&::GlobalNamespace::InputControlScheme_MatchResult::get_hasMissingRequiredDevices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf4b1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_hasMissingRequiredDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_MatchResult.get_hasMissingOptionalDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlScheme_MatchResult::*)()>(&::GlobalNamespace::InputControlScheme_MatchResult::get_hasMissingOptionalDevices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf4b20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_hasMissingOptionalDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_MatchResult.get_devices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> (::GlobalNamespace::InputControlScheme_MatchResult::*)()>(&::GlobalNamespace::InputControlScheme_MatchResult::get_devices)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xaf4b21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_devices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_MatchResult.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MatchResult_InputControlScheme_Match (::GlobalNamespace::InputControlScheme_MatchResult::*)(int32_t)>(&::GlobalNamespace::InputControlScheme_MatchResult::get_Item)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaf4b358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_MatchResult.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>* (::GlobalNamespace::InputControlScheme_MatchResult::*)()>(&::GlobalNamespace::InputControlScheme_MatchResult::GetEnumerator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaf4b41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_MatchResult.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::InputControlScheme_MatchResult::*)()>(&::GlobalNamespace::InputControlScheme_MatchResult::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf4b4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_MatchResult.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlScheme_MatchResult::*)()>(&::GlobalNamespace::InputControlScheme_MatchResult::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaf4b4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::InputControlScheme_MatchResult::get_score()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_score", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::InputControlScheme_MatchResult::get_isSuccessfulMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_isSuccessfulMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::InputControlScheme_MatchResult::get_hasMissingRequiredDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_hasMissingRequiredDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::InputControlScheme_MatchResult::get_hasMissingOptionalDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_hasMissingOptionalDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> GlobalNamespace::InputControlScheme_MatchResult::get_devices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_devices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>(*this, ___internal_method);
}
inline ::GlobalNamespace::MatchResult_InputControlScheme_Match GlobalNamespace::InputControlScheme_MatchResult::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MatchResult_InputControlScheme_Match>(*this, ___internal_method, index);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>* GlobalNamespace::InputControlScheme_MatchResult::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::InputControlScheme_MatchResult::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlScheme_MatchResult::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_MatchResult>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>"
constexpr  GlobalNamespace::InputControlScheme_MatchResult::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>* GlobalNamespace::InputControlScheme_MatchResult::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__MatchResult_InputControlScheme_Match_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::InputControlScheme_MatchResult::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::InputControlScheme_MatchResult::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::InputControlScheme_MatchResult::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::InputControlScheme_MatchResult::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Result", ty: "::GlobalNamespace::MatchResult_InputControlScheme_Result", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Score", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Devices", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlScheme_MatchResult::InputControlScheme_MatchResult(::GlobalNamespace::MatchResult_InputControlScheme_Result  m_Result, float_t  m_Score, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>  m_Devices, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls, ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_Requirements) noexcept  {
this->m_Result = m_Result;
this->m_Score = m_Score;
this->m_Devices = m_Devices;
this->m_Controls = m_Controls;
this->m_Requirements = m_Requirements;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlScheme_MatchResult::InputControlScheme_MatchResult()   {
}
