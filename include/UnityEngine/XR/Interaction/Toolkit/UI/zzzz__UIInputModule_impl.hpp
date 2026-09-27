#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/UIInputModule.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIInputModule_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__NavigationModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceEventData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.get_clickSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_clickSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_clickSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.set_clickSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_clickSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_clickSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.get_moveDeadzone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_moveDeadzone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_moveDeadzone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.set_moveDeadzone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_moveDeadzone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_moveDeadzone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.get_repeatDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_repeatDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.set_repeatDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_repeatDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.get_repeatRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_repeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_repeatRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.set_repeatRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_repeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_repeatRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.get_trackedDeviceDragThresholdMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_trackedDeviceDragThresholdMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_trackedDeviceDragThresholdMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.set_trackedDeviceDragThresholdMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_trackedDeviceDragThresholdMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_trackedDeviceDragThresholdMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.get_trackedScrollDeltaMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_trackedScrollDeltaMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_trackedScrollDeltaMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.set_trackedScrollDeltaMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_trackedScrollDeltaMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_trackedScrollDeltaMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.get_bypassUIToolkitEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_bypassUIToolkitEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_bypassUIToolkitEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.set_bypassUIToolkitEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_bypassUIToolkitEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_bypassUIToolkitEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.get_uiCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_uiCamera)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb43aa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_uiCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.set_uiCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::Camera*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_uiCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43aad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_uiCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::Update)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb43aadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.DoProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::DoProcess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb43abe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::Process)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb43ad40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.SendUpdateEventToSelectedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::SendUpdateEventToSelectedObject)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb43abe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"SendUpdateEventToSelectedObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.ActivateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ActivateModule)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb43ad44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.GetCurrentGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetCurrentGameObject)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xb433a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"GetCurrentGameObject", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.IsPointerOverGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb43ae3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.PerformRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::RaycastResult (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::PerformRaycast)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb43aeb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"PerformRaycast", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.ProcessPointerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessPointerState)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xb43afdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessPointerState", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.ProcessPointerMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessPointerMovement)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0xb43bab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessPointerMovement", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.ProcessPointerButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState, ::UnityEngine::EventSystems::PointerEventData*, bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessPointerButton)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0xb43b334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessPointerButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.ProcessPointerButtonDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::InputSystem::UI::UIPointerType, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessPointerButtonDrag)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0xb43c484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessPointerButtonDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::InputSystem::UI::UIPointerType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.ProcessScrollWheel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessScrollWheel)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb43c2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessScrollWheel", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.ProcessTrackedDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>, bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessTrackedDevice)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0xb43cb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessTrackedDevice", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.TryGetCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::by_ref<::UnityEngine::Camera*>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::TryGetCamera)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb43d100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"TryGetCamera", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.ProcessNavigationState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessNavigationState)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0xb43d224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessNavigationState", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.RemovePointerEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::RemovePointerEventData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb43d70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"RemovePointerEventData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.GetOrCreateCachedPointerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedPointerEvent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb43b260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"GetOrCreateCachedPointerEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.GetOrCreateCachedTrackedDeviceEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedTrackedDeviceEvent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb43d02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"GetOrCreateCachedTrackedDeviceEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.GetOrCreateCachedAxisEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::AxisEventData* (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedAxisEvent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb43d688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"GetOrCreateCachedAxisEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.CanTargetClickOnDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::CanTargetClickOnDown)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xb43c7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"CanTargetClickOnDown", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_finalizeRaycastResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_finalizeRaycastResults)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43d79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_finalizeRaycastResults", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_finalizeRaycastResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_finalizeRaycastResults)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43d84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_finalizeRaycastResults", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_pointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerEnter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43d8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerEnter", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_pointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerEnter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43d9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerEnter", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_pointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerExit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43da5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerExit", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_pointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerExit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43db0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerExit", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_pointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerDown)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43dbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerDown", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_pointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerDown)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43dc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerDown", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_pointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerUp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43dd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerUp", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_pointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerUp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43ddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerUp", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_pointerClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerClick)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43de7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerClick", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_pointerClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerClick)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43df2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerClick", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_pointerMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerMove)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43dfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerMove", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_pointerMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerMove)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerMove", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_initializePotentialDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_initializePotentialDrag)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_initializePotentialDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_initializePotentialDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_initializePotentialDrag)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_initializePotentialDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_beginDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_beginDrag)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_beginDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_beginDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_beginDrag)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_beginDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_drag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_drag)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_drag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_drag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_drag)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_drag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_endDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_endDrag)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_endDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_endDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_endDrag)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_endDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_drop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_drop)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_drop", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_drop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_drop)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_drop", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_scroll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_scroll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_scroll", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_scroll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_scroll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_scroll", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_updateSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_updateSelected)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43e97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_updateSelected", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_updateSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_updateSelected)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43ea2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_updateSelected", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_move)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43eadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_move", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_move)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43eb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_move", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_submit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_submit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43ec3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_submit", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_submit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_submit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43ecec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_submit", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.add_cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_cancel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43ed9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_cancel", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule.remove_cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_cancel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43ee4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_cancel", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb43eefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_ClickSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_ClickSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_ClickSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClickSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_MoveDeadzone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveDeadzone;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_MoveDeadzone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveDeadzone;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_MoveDeadzone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MoveDeadzone = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_RepeatDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RepeatDelay;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_RepeatDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RepeatDelay;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_RepeatDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RepeatDelay = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_RepeatRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RepeatRate;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_RepeatRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RepeatRate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_RepeatRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RepeatRate = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedDeviceDragThresholdMultiplier;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedDeviceDragThresholdMultiplier;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_TrackedDeviceDragThresholdMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackedDeviceDragThresholdMultiplier = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_TrackedScrollDeltaMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedScrollDeltaMultiplier;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_TrackedScrollDeltaMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedScrollDeltaMultiplier;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_TrackedScrollDeltaMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackedScrollDeltaMultiplier = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_BypassUIToolkitEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BypassUIToolkitEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_BypassUIToolkitEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BypassUIToolkitEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_BypassUIToolkitEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BypassUIToolkitEvents = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_UICamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UICamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_UICamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UICamera;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_UICamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UICamera = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_MainCameraCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MainCameraCache;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_MainCameraCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MainCameraCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_MainCameraCache(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MainCameraCache = value;
}
constexpr ::UnityEngine::EventSystems::AxisEventData*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_CachedAxisEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedAxisEvent;
}
constexpr ::UnityEngine::EventSystems::AxisEventData* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_CachedAxisEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedAxisEvent;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_CachedAxisEvent(::UnityEngine::EventSystems::AxisEventData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedAxisEvent = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_PointerEventByPointerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerEventByPointerId;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_PointerEventByPointerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerEventByPointerId;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_PointerEventByPointerId(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PointerEventByPointerId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_TrackedDeviceEventByPointerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedDeviceEventByPointerId;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_m_TrackedDeviceEventByPointerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedDeviceEventByPointerId;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_m_TrackedDeviceEventByPointerId(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackedDeviceEventByPointerId = value;
}
constexpr ::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_finalizeRaycastResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalizeRaycastResults;
}
constexpr ::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_finalizeRaycastResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalizeRaycastResults;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_finalizeRaycastResults(::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalizeRaycastResults = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerEnter;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerEnter;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_pointerEnter(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointerEnter = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerExit;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerExit;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_pointerExit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointerExit = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerDown;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerDown;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_pointerDown(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointerDown = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerUp;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerUp;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_pointerUp(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointerUp = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerClick;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerClick;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_pointerClick(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointerClick = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerMove;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_pointerMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerMove;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_pointerMove(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointerMove = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_initializePotentialDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializePotentialDrag;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_initializePotentialDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializePotentialDrag;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_initializePotentialDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initializePotentialDrag = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_beginDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginDrag;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_beginDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginDrag;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_beginDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beginDrag = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_drag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_endDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endDrag;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_endDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endDrag;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_endDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endDrag = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_drop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drop;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_drop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drop;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_drop(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drop = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_scroll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scroll;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_scroll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scroll;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_scroll(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scroll = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_updateSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateSelected;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_updateSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateSelected;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_updateSelected(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateSelected = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___move;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___move;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_move(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___move = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_submit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submit;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_submit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submit;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_submit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submit = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_cancel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancel;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>* const& UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_get_cancel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancel;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::__cordl_internal_set_cancel(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancel = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_clickSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_clickSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_clickSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_clickSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_moveDeadzone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_moveDeadzone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_moveDeadzone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_moveDeadzone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_repeatDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_repeatDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_repeatDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_repeatDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_repeatRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_repeatRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_repeatRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_repeatRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_trackedDeviceDragThresholdMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_trackedDeviceDragThresholdMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_trackedDeviceDragThresholdMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_trackedDeviceDragThresholdMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_trackedScrollDeltaMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_trackedScrollDeltaMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_trackedScrollDeltaMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_trackedScrollDeltaMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_bypassUIToolkitEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_bypassUIToolkitEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_bypassUIToolkitEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_bypassUIToolkitEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_uiCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"get_uiCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_uiCamera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"set_uiCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::DoProcess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::Process()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::SendUpdateEventToSelectedObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"SendUpdateEventToSelectedObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ActivateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetCurrentGameObject(int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"GetCurrentGameObject", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, pointerId);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::IsPointerOverGameObject(int32_t  pointerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerId);
}
inline ::UnityEngine::EventSystems::RaycastResult UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::PerformRaycast(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"PerformRaycast", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult>(this, ___internal_method, eventData);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessPointerState(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>  pointerState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessPointerState", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessPointerMovement(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessPointerMovement", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessPointerButton(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  mouseButtonChanges, ::UnityEngine::EventSystems::PointerEventData*  eventData, bool  clickOnDown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessPointerButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mouseButtonChanges, eventData, clickOnDown);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessPointerButtonDrag(::UnityEngine::EventSystems::PointerEventData*  eventData, ::UnityEngine::InputSystem::UI::UIPointerType  pointerType, float_t  pixelDragThresholdMultiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessPointerButtonDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::InputSystem::UI::UIPointerType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, pointerType, pixelDragThresholdMultiplier);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessScrollWheel(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessScrollWheel", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessTrackedDevice(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  deviceState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessTrackedDevice", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceState, force);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::TryGetCamera(::UnityEngine::EventSystems::PointerEventData*  eventData, ::by_ref<::UnityEngine::Camera*>  screenPointCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"TryGetCamera", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventData, screenPointCamera);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessNavigationState(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel>  navigationState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"ProcessNavigationState", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, navigationState);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::RemovePointerEventData(int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"RemovePointerEventData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerId);
}
inline ::UnityEngine::EventSystems::PointerEventData* UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedPointerEvent(int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"GetOrCreateCachedPointerEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, pointerId);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedTrackedDeviceEvent(int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"GetOrCreateCachedTrackedDeviceEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(this, ___internal_method, pointerId);
}
inline ::UnityEngine::EventSystems::AxisEventData* UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedAxisEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"GetOrCreateCachedAxisEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::AxisEventData*>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::CanTargetClickOnDown(::UnityEngine::GameObject*  clickOnDownTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"CanTargetClickOnDown", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clickOnDownTarget);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_finalizeRaycastResults(::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_finalizeRaycastResults", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_finalizeRaycastResults(::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_finalizeRaycastResults", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerEnter(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerEnter", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerEnter(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerEnter", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerExit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerExit", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerExit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerExit", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerDown(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerDown", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerDown(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerDown", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerUp(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerUp", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerUp(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerUp", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerClick(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerClick", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerClick(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerClick", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_pointerMove(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_pointerMove", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_pointerMove(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_pointerMove", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_initializePotentialDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_initializePotentialDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_initializePotentialDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_initializePotentialDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_beginDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_beginDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_beginDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_beginDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_drag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_drag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_drag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_drag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_endDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_endDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_endDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_endDrag", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_drop(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_drop", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_drop(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_drop", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_scroll(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_scroll", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_scroll(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_scroll", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_updateSelected(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_updateSelected", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_updateSelected(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_updateSelected", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_move(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_move", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_move(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_move", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_submit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_submit", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_submit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_submit", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::add_cancel(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"add_cancel", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::remove_cancel(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {"remove_cancel", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule* UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::UIInputModule()   {
}
