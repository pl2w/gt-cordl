#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_MatchResult_Match.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_Match_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MatchResult_InputControlScheme_Match.get_control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::GlobalNamespace::MatchResult_InputControlScheme_Match::*)()>(&::GlobalNamespace::MatchResult_InputControlScheme_Match::get_control)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaf4b524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Match>(),
                        {"get_control", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchResult_InputControlScheme_Match.get_device
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::GlobalNamespace::MatchResult_InputControlScheme_Match::*)()>(&::GlobalNamespace::MatchResult_InputControlScheme_Match::get_device)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaf4b570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Match>(),
                        {"get_device", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchResult_InputControlScheme_Match.get_requirementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MatchResult_InputControlScheme_Match::*)()>(&::GlobalNamespace::MatchResult_InputControlScheme_Match::get_requirementIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf4b588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Match>(),
                        {"get_requirementIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchResult_InputControlScheme_Match.get_requirement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlScheme_DeviceRequirement (::GlobalNamespace::MatchResult_InputControlScheme_Match::*)()>(&::GlobalNamespace::MatchResult_InputControlScheme_Match::get_requirement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf4b590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Match>(),
                        {"get_requirement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchResult_InputControlScheme_Match.get_isOptional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MatchResult_InputControlScheme_Match::*)()>(&::GlobalNamespace::MatchResult_InputControlScheme_Match::get_isOptional)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaf4b5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Match>(),
                        {"get_isOptional", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputControl* GlobalNamespace::MatchResult_InputControlScheme_Match::get_control()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Match>(),
                        {"get_control", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputDevice* GlobalNamespace::MatchResult_InputControlScheme_Match::get_device()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Match>(),
                        {"get_device", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::MatchResult_InputControlScheme_Match::get_requirementIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Match>(),
                        {"get_requirementIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::InputControlScheme_DeviceRequirement GlobalNamespace::MatchResult_InputControlScheme_Match::get_requirement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Match>(),
                        {"get_requirement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlScheme_DeviceRequirement>(*this, ___internal_method);
}
inline bool GlobalNamespace::MatchResult_InputControlScheme_Match::get_isOptional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchResult_InputControlScheme_Match>(),
                        {"get_isOptional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_RequirementIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MatchResult_InputControlScheme_Match::MatchResult_InputControlScheme_Match(int32_t  m_RequirementIndex, ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_Requirements, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls) noexcept  {
this->m_RequirementIndex = m_RequirementIndex;
this->m_Requirements = m_Requirements;
this->m_Controls = m_Controls;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MatchResult_InputControlScheme_Match::MatchResult_InputControlScheme_Match()   {
}
