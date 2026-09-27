#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceModel.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_ImplementationData_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIInteractionType_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceEventData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_ImplementationData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIInteractionType_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_implementationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TrackedDeviceModel_ImplementationData (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_implementationData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb438ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_implementationData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_pointerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_pointerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_select)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_select", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_select)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb438ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_select", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_clickOnDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_clickOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_clickOnDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_clickOnDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_clickOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_clickOnDown", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_selectDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_selectDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_selectDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_selectDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_selectDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_selectDelta", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_changedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_changedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_changedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_changedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_changedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_changedThisFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_position)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb436364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_position)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb438bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_positionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::UnityEngine::Vector3>* (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_positionProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_positionProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_positionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::System::Func_1<::UnityEngine::Vector3>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_positionProvider)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb438c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_positionProvider", {}, {::i2c::type_of<::System::Func_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_orientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_orientation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb438cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_orientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_orientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::UnityEngine::Quaternion)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_orientation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb438d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_orientation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_raycastPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_raycastPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_raycastPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_raycastPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_raycastPoints)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb438dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_raycastPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_currentRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::RaycastResult (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_currentRaycast)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb438e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_currentRaycast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_currentRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::UnityEngine::EventSystems::RaycastResult)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_currentRaycast)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb438e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_currentRaycast", {}, {::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_currentRaycastEndpointIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_currentRaycastEndpointIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_currentRaycastEndpointIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_currentRaycastEndpointIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_currentRaycastEndpointIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_currentRaycastEndpointIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_raycastLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_raycastLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_raycastLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_raycastLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_raycastLayerMask)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb438eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_raycastLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_scrollDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_scrollDelta)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb438f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_scrollDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_scrollDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_scrollDelta)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb438f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_scrollDelta", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_pokeDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_pokeDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_pokeDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_pokeDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_pokeDepth)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb438fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_pokeDepth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_interactionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_interactionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_interactionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_interactionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_interactionType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb439060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_interactionType", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4390cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_interactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_interactor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4390d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_interactor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.UpdatePokeSelectState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::UpdatePokeSelectState)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4390e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"UpdatePokeSelectState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_selectableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_selectableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_selectableObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_selectableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_selectableObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb439190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_selectableObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_isScrollable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_isScrollable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4391a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_isScrollable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_isScrollable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_isScrollable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4391a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_isScrollable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_invalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel (*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_invalid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4391b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_invalid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb439210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::Reset)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb4392ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"Reset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.OnFrameFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::OnFrameFinished)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb439628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"OnFrameFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::CopyTo)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb4396b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"CopyTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::CopyFrom)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb439834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.get_maxRaycastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4399bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_maxRaycastDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel.set_maxRaycastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4399c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_maxRaycastDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::setStaticF__invalid_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, "<invalid>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(std::forward<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::getStaticF__invalid_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, "<invalid>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>();
}
inline ::GlobalNamespace::TrackedDeviceModel_ImplementationData UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_implementationData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_implementationData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(*this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_pointerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_pointerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_select()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_select", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_select(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_select", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_clickOnDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_clickOnDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_clickOnDown(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_clickOnDown", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_selectDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_selectDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_selectDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_selectDelta", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_changedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_changedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_changedThisFrame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_changedThisFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_position(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Func_1<::UnityEngine::Vector3>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_positionProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_positionProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::Vector3>*>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_positionProvider(::System::Func_1<::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_positionProvider", {}, {::i2c::type_of<::System::Func_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_orientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_orientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_orientation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_orientation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_raycastPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_raycastPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_raycastPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_raycastPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::RaycastResult UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_currentRaycast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_currentRaycast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_currentRaycast(::UnityEngine::EventSystems::RaycastResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_currentRaycast", {}, {::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_currentRaycastEndpointIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_currentRaycastEndpointIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_currentRaycastEndpointIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_currentRaycastEndpointIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_raycastLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_raycastLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_raycastLayerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_raycastLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_scrollDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_scrollDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_scrollDelta(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_scrollDelta", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_pokeDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_pokeDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_pokeDepth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_pokeDepth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_interactionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_interactionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_interactionType(::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_interactionType", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_interactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_interactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_interactor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_interactor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::UpdatePokeSelectState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"UpdatePokeSelectState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_selectableObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_selectableObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_selectableObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_selectableObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_isScrollable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_isScrollable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_isScrollable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_isScrollable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_invalid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_invalid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::_ctor(int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pointerId);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::Reset(bool  resetImplementation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"Reset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resetImplementation);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::OnFrameFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"OnFrameFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::CopyTo(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"CopyTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::CopyFrom(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::get_maxRaycastDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"get_maxRaycastDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::set_maxRaycastDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(),
                        {"set_maxRaycastDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_ImplementationData", ty: "::GlobalNamespace::TrackedDeviceModel_ImplementationData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pointerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SelectDown", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ClickOnDown", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_selectDelta_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_changedThisFrame_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PositionProvider", ty: "::System::Func_1<::UnityEngine::Vector3>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RaycastPoints", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector3>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_currentRaycast_k__BackingField", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_currentRaycastEndpointIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RaycastLayerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PokeDepth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InteractionType", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_interactor_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_selectableObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_isScrollable_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::TrackedDeviceModel(::GlobalNamespace::TrackedDeviceModel_ImplementationData  m_ImplementationData, int32_t  _pointerId_k__BackingField, bool  m_SelectDown, bool  m_ClickOnDown, ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _selectDelta_k__BackingField, bool  _changedThisFrame_k__BackingField, ::UnityEngine::Vector3  m_Position, ::System::Func_1<::UnityEngine::Vector3>*  m_PositionProvider, ::UnityEngine::Quaternion  m_Orientation, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  m_RaycastPoints, ::UnityEngine::EventSystems::RaycastResult  _currentRaycast_k__BackingField, int32_t  _currentRaycastEndpointIndex_k__BackingField, ::UnityEngine::LayerMask  m_RaycastLayerMask, ::UnityEngine::Vector2  m_ScrollDelta, float_t  m_PokeDepth, ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType  m_InteractionType, ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  _interactor_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _selectableObject_k__BackingField, bool  _isScrollable_k__BackingField) noexcept  {
this->m_ImplementationData = m_ImplementationData;
this->_pointerId_k__BackingField = _pointerId_k__BackingField;
this->m_SelectDown = m_SelectDown;
this->m_ClickOnDown = m_ClickOnDown;
this->_selectDelta_k__BackingField = _selectDelta_k__BackingField;
this->_changedThisFrame_k__BackingField = _changedThisFrame_k__BackingField;
this->m_Position = m_Position;
this->m_PositionProvider = m_PositionProvider;
this->m_Orientation = m_Orientation;
this->m_RaycastPoints = m_RaycastPoints;
this->_currentRaycast_k__BackingField = _currentRaycast_k__BackingField;
this->_currentRaycastEndpointIndex_k__BackingField = _currentRaycastEndpointIndex_k__BackingField;
this->m_RaycastLayerMask = m_RaycastLayerMask;
this->m_ScrollDelta = m_ScrollDelta;
this->m_PokeDepth = m_PokeDepth;
this->m_InteractionType = m_InteractionType;
this->_interactor_k__BackingField = _interactor_k__BackingField;
this->_selectableObject_k__BackingField = _selectableObject_k__BackingField;
this->_isScrollable_k__BackingField = _isScrollable_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel::TrackedDeviceModel()   {
}
