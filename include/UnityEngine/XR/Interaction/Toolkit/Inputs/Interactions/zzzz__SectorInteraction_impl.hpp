#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/SectorInteraction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_Directions_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_State_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_SweepBehavior_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_Directions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_State_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_SweepBehavior_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__Cardinal_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.get_pressPointOrDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::get_pressPointOrDefault)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4ca96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"get_pressPointOrDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.get_defaultPressPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::get_defaultPressPoint)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4caa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"get_defaultPressPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.set_defaultPressPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::set_defaultPressPoint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb4caa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"set_defaultPressPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::*)(::by_ref<::ValueW<80, "UnityEngine.InputSystem", "InputInteractionContext">>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Process)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb4caac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"Process", {}, {::i2c::type_of<::by_ref<::ValueW<80, "UnityEngine.InputSystem", "InputInteractionContext">>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.IsValidDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::*)(::by_ref<::ValueW<80, "UnityEngine.InputSystem", "InputInteractionContext">>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::IsValidDirection)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4cabdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"IsValidDirection", {}, {::i2c::type_of<::by_ref<::ValueW<80, "UnityEngine.InputSystem", "InputInteractionContext">>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.GetNearestDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SectorInteraction_Directions (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::GetNearestDirection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4cac90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"GetNearestDirection", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4cacb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4cad40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4cad44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SectorInteraction_Directions& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_directions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directions;
}
constexpr ::GlobalNamespace::SectorInteraction_Directions const& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_directions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_set_directions(::GlobalNamespace::SectorInteraction_Directions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directions = value;
}
constexpr ::GlobalNamespace::SectorInteraction_SweepBehavior& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_sweepBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sweepBehavior;
}
constexpr ::GlobalNamespace::SectorInteraction_SweepBehavior const& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_sweepBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sweepBehavior;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_set_sweepBehavior(::GlobalNamespace::SectorInteraction_SweepBehavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sweepBehavior = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_pressPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressPoint;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_pressPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressPoint;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_set_pressPoint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressPoint = value;
}
constexpr ::GlobalNamespace::SectorInteraction_State& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_m_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr ::GlobalNamespace::SectorInteraction_State const& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_m_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_set_m_State(::GlobalNamespace::SectorInteraction_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_State = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_m_WasValidDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasValidDirection;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_m_WasValidDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasValidDirection;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_set_m_WasValidDirection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WasValidDirection = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::setStaticF__defaultPressPoint_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<defaultPressPoint>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::getStaticF__defaultPressPoint_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<defaultPressPoint>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>();
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::get_pressPointOrDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"get_pressPointOrDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::get_defaultPressPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"get_defaultPressPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::set_defaultPressPoint(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"set_defaultPressPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Process(::by_ref<::ValueW<80, "UnityEngine.InputSystem", "InputInteractionContext">>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"Process", {}, {::i2c::type_of<::by_ref<::ValueW<80, "UnityEngine.InputSystem", "InputInteractionContext">>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::IsValidDirection(::by_ref<::ValueW<80, "UnityEngine.InputSystem", "InputInteractionContext">>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"IsValidDirection", {}, {::i2c::type_of<::by_ref<::ValueW<80, "UnityEngine.InputSystem", "InputInteractionContext">>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::GlobalNamespace::SectorInteraction_Directions UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::GetNearestDirection(::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"GetNearestDirection", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SectorInteraction_Directions>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction* UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>"
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::operator ::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>*() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>"
constexpr ::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::i___UnityEngine__InputSystem__IInputInteraction_1___UnityEngine__Vector2_() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "Il2CppObject"
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::operator Il2CppObject*() noexcept {
return static_cast<Il2CppObject*>(static_cast<void*>(this));
}
/// @brief Convert to "Il2CppObject"
constexpr Il2CppObject* UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::i_Il2CppObject() noexcept {
return static_cast<Il2CppObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::SectorInteraction()   {
}
