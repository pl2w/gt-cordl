#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/Touch_FingerAndTouchState.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Finger_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_FingerAndTouchState_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Finger_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Touch_FingerAndTouchState.AddFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Touch_FingerAndTouchState::*)(::UnityEngine::InputSystem::Touchscreen*)>(&::GlobalNamespace::Touch_FingerAndTouchState::AddFingers)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xafe8574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Touch_FingerAndTouchState>(),
                        {"AddFingers", {}, {::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Touch_FingerAndTouchState.RemoveFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Touch_FingerAndTouchState::*)(::UnityEngine::InputSystem::Touchscreen*)>(&::GlobalNamespace::Touch_FingerAndTouchState::RemoveFingers)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xafe8688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Touch_FingerAndTouchState>(),
                        {"RemoveFingers", {}, {::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Touch_FingerAndTouchState.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Touch_FingerAndTouchState::*)()>(&::GlobalNamespace::Touch_FingerAndTouchState::Destroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xafe5558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Touch_FingerAndTouchState>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Touch_FingerAndTouchState.UpdateActiveFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Touch_FingerAndTouchState::*)()>(&::GlobalNamespace::Touch_FingerAndTouchState::UpdateActiveFingers)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xafe7a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Touch_FingerAndTouchState>(),
                        {"UpdateActiveFingers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Touch_FingerAndTouchState.UpdateActiveTouches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Touch_FingerAndTouchState::*)()>(&::GlobalNamespace::Touch_FingerAndTouchState::UpdateActiveTouches)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0xafe73a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Touch_FingerAndTouchState>(),
                        {"UpdateActiveTouches", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Touch_FingerAndTouchState::AddFingers(::UnityEngine::InputSystem::Touchscreen*  screen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Touch_FingerAndTouchState>(),
                        {"AddFingers", {}, {::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, screen);
}
inline void GlobalNamespace::Touch_FingerAndTouchState::RemoveFingers(::UnityEngine::InputSystem::Touchscreen*  screen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Touch_FingerAndTouchState>(),
                        {"RemoveFingers", {}, {::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, screen);
}
inline void GlobalNamespace::Touch_FingerAndTouchState::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Touch_FingerAndTouchState>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Touch_FingerAndTouchState::UpdateActiveFingers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Touch_FingerAndTouchState>(),
                        {"UpdateActiveFingers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Touch_FingerAndTouchState::UpdateActiveTouches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Touch_FingerAndTouchState>(),
                        {"UpdateActiveTouches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "updateMask", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fingers", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activeFingers", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activeTouches", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activeFingerCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activeTouchCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "totalFingerCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastId", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "haveBuiltActiveTouches", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "haveActiveTouchesNeedingRefreshNextUpdate", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activeTouchState", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Touch_FingerAndTouchState::Touch_FingerAndTouchState(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateMask, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*>  fingers, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*>  activeFingers, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch>  activeTouches, int32_t  activeFingerCount, int32_t  activeTouchCount, int32_t  totalFingerCount, uint32_t  lastId, bool  haveBuiltActiveTouches, bool  haveActiveTouchesNeedingRefreshNextUpdate, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  activeTouchState) noexcept  {
this->updateMask = updateMask;
this->fingers = fingers;
this->activeFingers = activeFingers;
this->activeTouches = activeTouches;
this->activeFingerCount = activeFingerCount;
this->activeTouchCount = activeTouchCount;
this->totalFingerCount = totalFingerCount;
this->lastId = lastId;
this->haveBuiltActiveTouches = haveBuiltActiveTouches;
this->haveActiveTouchesNeedingRefreshNextUpdate = haveActiveTouchesNeedingRefreshNextUpdate;
this->activeTouchState = activeTouchState;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Touch_FingerAndTouchState::Touch_FingerAndTouchState()   {
}
