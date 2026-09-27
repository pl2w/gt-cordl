#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/Touch.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_GlobalState_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory`1_Record_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Finger_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__TouchHistory_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_ExtraDataPerTouchState_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_FingerAndTouchState_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_GlobalState_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory`1_Record_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_valid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xafe5b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_finger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::Finger* (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_finger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafe6c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_finger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_phase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::TouchPhase (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_phase)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe6bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_phase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_began
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_began)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xafe6ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_began", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_inProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_inProgress)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xafe6d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_inProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_ended
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_ended)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xafe6da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_ended", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_touchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_touchId)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe6b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_touchId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_pressure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_pressure)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe6e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_pressure", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_radius)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe6e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_startTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_startTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe6ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_startTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_time)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xafe6f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_screen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Touchscreen* (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_screen)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xafe6f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_screen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_screenPosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe5cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_screenPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_startScreenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_startScreenPosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe6fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_startScreenPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_delta)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe7048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_delta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_tapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_tapCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe70a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_tapCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_isTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_isTap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xafe7100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_isTap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_displayIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_displayIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe716c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_displayIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_isInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_isInProgress)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xafe5d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_isInProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_updateStepCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_updateStepCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe5dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_updateStepCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_uniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_uniqueId)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafe6b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_uniqueId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::InputSystem::LowLevel::TouchState> (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_state)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xafe6c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_extraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::Touch_ExtraDataPerTouchState> (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_extraData)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xafe71c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_extraData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_history
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_history)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xafe7210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_history", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_activeTouches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeTouches)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xafe7308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_activeTouches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_fingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_fingers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xafe7964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_fingers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_activeFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeFingers)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xafe79f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_activeFingers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_screens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_screens)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xafe7ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_screens", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.add_onFingerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerDown)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafe7c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"add_onFingerDown", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.remove_onFingerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerDown)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafe7d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"remove_onFingerDown", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.add_onFingerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerUp)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafe7dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"add_onFingerUp", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.remove_onFingerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerUp)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafe7e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"remove_onFingerUp", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.add_onFingerMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerMove)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafe7f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"add_onFingerMove", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.remove_onFingerMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerMove)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafe8010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"remove_onFingerMove", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_maxHistoryLengthPerFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_maxHistoryLengthPerFinger)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xafe6204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_maxHistoryLengthPerFinger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)(::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::GlobalNamespace::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xafe5d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), ::i2c::type_of<::GlobalNamespace::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::ToString)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xafe80d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)(::UnityEngine::InputSystem::EnhancedTouch::Touch)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xafe83e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)(::System::Object*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xafe845c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::GetHashCode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xafe8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.AddTouchscreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Touchscreen*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::AddTouchscreen)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xafe56f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"AddTouchscreen", {}, {::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.RemoveTouchscreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Touchscreen*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::RemoveTouchscreen)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xafe5784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"RemoveTouchscreen", {}, {::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.BeginUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::BeginUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xafe87d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"BeginUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.CreateGlobalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Touch_GlobalState (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::CreateGlobalState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xafe8844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"CreateGlobalState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.SaveAndResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ISavedState* (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::SaveAndResetState)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xafe8864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"SaveAndResetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::setStaticF_s_GlobalState(::GlobalNamespace::Touch_GlobalState  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Touch_GlobalState, "s_GlobalState", ::UnityEngine::InputSystem::EnhancedTouch::Touch>(std::forward<::GlobalNamespace::Touch_GlobalState>(value));
}
inline ::GlobalNamespace::Touch_GlobalState UnityEngine::InputSystem::EnhancedTouch::Touch::getStaticF_s_GlobalState()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Touch_GlobalState, "s_GlobalState", ::UnityEngine::InputSystem::EnhancedTouch::Touch>();
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Finger* UnityEngine::InputSystem::EnhancedTouch::Touch::get_finger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_finger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::TouchPhase UnityEngine::InputSystem::EnhancedTouch::Touch::get_phase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_phase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::TouchPhase>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_began()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_began", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_inProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_inProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_ended()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_ended", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_touchId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_touchId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_pressure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_pressure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_startTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::EnhancedTouch::Touch::get_screen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_screen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Touchscreen*>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_screenPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_screenPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_startScreenPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_startScreenPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_delta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_delta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_tapCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_tapCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_isTap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_isTap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_displayIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_displayIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_isInProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_isInProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_updateStepCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_updateStepCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_uniqueId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_uniqueId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::InputSystem::LowLevel::TouchState> UnityEngine::InputSystem::EnhancedTouch::Touch::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::InputSystem::LowLevel::TouchState>>(*this, ___internal_method);
}
inline ::by_ref<::GlobalNamespace::Touch_ExtraDataPerTouchState> UnityEngine::InputSystem::EnhancedTouch::Touch::get_extraData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_extraData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::Touch_ExtraDataPerTouchState>>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory UnityEngine::InputSystem::EnhancedTouch::Touch::get_history()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_history", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeTouches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_activeTouches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> UnityEngine::InputSystem::EnhancedTouch::Touch::get_fingers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_fingers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeFingers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_activeFingers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* UnityEngine::InputSystem::EnhancedTouch::Touch::get_screens()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_screens", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"add_onFingerDown", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"remove_onFingerDown", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"add_onFingerUp", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"remove_onFingerUp", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"add_onFingerMove", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"remove_onFingerMove", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_maxHistoryLengthPerFinger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"get_maxHistoryLengthPerFinger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::_ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger*  finger, ::GlobalNamespace::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>  touchRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), ::i2c::type_of<::GlobalNamespace::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, finger, touchRecord);
}
inline ::StringW UnityEngine::InputSystem::EnhancedTouch::Touch::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::Equals(::UnityEngine::InputSystem::EnhancedTouch::Touch  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::AddTouchscreen(::UnityEngine::InputSystem::Touchscreen*  screen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"AddTouchscreen", {}, {::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screen);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::RemoveTouchscreen(::UnityEngine::InputSystem::Touchscreen*  screen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"RemoveTouchscreen", {}, {::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screen);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::BeginUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"BeginUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::Touch_GlobalState UnityEngine::InputSystem::EnhancedTouch::Touch::CreateGlobalState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"CreateGlobalState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Touch_GlobalState>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ISavedState* UnityEngine::InputSystem::EnhancedTouch::Touch::SaveAndResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>(),
                        {"SaveAndResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ISavedState*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr  UnityEngine::InputSystem::EnhancedTouch::Touch::operator ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>* UnityEngine::InputSystem::EnhancedTouch::Touch::i___System__IEquatable_1___UnityEngine__InputSystem__EnhancedTouch__Touch_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TouchRecord", ty: "::GlobalNamespace::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch::Touch(::UnityEngine::InputSystem::EnhancedTouch::Finger*  m_Finger, ::GlobalNamespace::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>  m_TouchRecord) noexcept  {
this->m_Finger = m_Finger;
this->m_TouchRecord = m_TouchRecord;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch::Touch()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch___c::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafe8b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch___c._SaveAndResetState_b__80_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch___c::*)(::by_ref<::GlobalNamespace::Touch_GlobalState>)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch___c::_SaveAndResetState_b__80_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xafe8b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>(),
                        {"<SaveAndResetState>b__80_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Touch_GlobalState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch___c._SaveAndResetState_b__80_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch___c::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch___c::_SaveAndResetState_b__80_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xafe8c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>(),
                        {"<SaveAndResetState>b__80_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::setStaticF___9(::UnityEngine::InputSystem::EnhancedTouch::Touch___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*, "<>9", ::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>(std::forward<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>(value));
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch___c* UnityEngine::InputSystem::EnhancedTouch::Touch___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*, "<>9", ::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>();
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::setStaticF___9__80_0(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::Touch_GlobalState>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::Touch_GlobalState>*, "<>9__80_0", ::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>(std::forward<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::Touch_GlobalState>*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::Touch_GlobalState>* UnityEngine::InputSystem::EnhancedTouch::Touch___c::getStaticF___9__80_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::Touch_GlobalState>*, "<>9__80_0", ::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>();
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::setStaticF___9__80_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__80_1", ::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::InputSystem::EnhancedTouch::Touch___c::getStaticF___9__80_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__80_1", ::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>();
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::_SaveAndResetState_b__80_0(::by_ref<::GlobalNamespace::Touch_GlobalState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>(),
                        {"<SaveAndResetState>b__80_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Touch_GlobalState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::_SaveAndResetState_b__80_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>(),
                        {"<SaveAndResetState>b__80_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch___c* UnityEngine::InputSystem::EnhancedTouch::Touch___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch___c::Touch___c()   {
}
