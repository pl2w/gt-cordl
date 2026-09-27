#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugActionState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_DebugActionKeyType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_DebugActionKeyType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.get_runningAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugActionState::*)()>(&::UnityEngine::Rendering::DebugActionState::get_runningAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb134214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"get_runningAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.set_runningAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(bool)>(&::UnityEngine::Rendering::DebugActionState::set_runningAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb13421c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"set_runningAction", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.get_actionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::DebugActionState::*)()>(&::UnityEngine::Rendering::DebugActionState::get_actionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb134224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"get_actionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.set_actionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(float_t)>(&::UnityEngine::Rendering::DebugActionState::set_actionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb13422c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"set_actionState", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(int32_t, float_t)>(&::UnityEngine::Rendering::DebugActionState::Trigger)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb134234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Trigger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.TriggerWithButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(::UnityEngine::InputSystem::InputAction*, float_t)>(&::UnityEngine::Rendering::DebugActionState::TriggerWithButton)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb1300bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"TriggerWithButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)()>(&::UnityEngine::Rendering::DebugActionState::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb1342f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(::UnityEngine::Rendering::DebugActionDesc*)>(&::UnityEngine::Rendering::DebugActionState::Update)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xb130198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugActionDesc*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)()>(&::UnityEngine::Rendering::DebugActionState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb12ff7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DebugActionState_DebugActionKeyType& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr ::GlobalNamespace::DebugActionState_DebugActionKeyType const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_Type(::GlobalNamespace::DebugActionState_DebugActionKeyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Type = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_inputAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_inputAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputAction;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_inputAction(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputAction = value;
}
constexpr ::ArrayW<bool>& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_TriggerPressedUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerPressedUp;
}
constexpr ::ArrayW<bool> const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_TriggerPressedUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerPressedUp;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_TriggerPressedUp(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TriggerPressedUp = value;
}
constexpr float_t& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Timer;
}
constexpr float_t const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Timer;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_Timer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Timer = value;
}
constexpr bool& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__runningAction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningAction_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__runningAction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningAction_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set__runningAction_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runningAction_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__actionState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionState_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__actionState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionState_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set__actionState_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actionState_k__BackingField = value;
}
inline bool UnityEngine::Rendering::DebugActionState::get_runningAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"get_runningAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugActionState::set_runningAction(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"set_runningAction", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::DebugActionState::get_actionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"get_actionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugActionState::set_actionState(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"set_actionState", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugActionState::Trigger(int32_t  triggerCount, float_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Trigger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerCount, state);
}
inline void UnityEngine::Rendering::DebugActionState::TriggerWithButton(::UnityEngine::InputSystem::InputAction*  action, float_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"TriggerWithButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, state);
}
inline void UnityEngine::Rendering::DebugActionState::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugActionState::Update(::UnityEngine::Rendering::DebugActionDesc*  desc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugActionDesc*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::DebugActionState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugActionState* UnityEngine::Rendering::DebugActionState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugActionState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugActionState::DebugActionState()   {
}
