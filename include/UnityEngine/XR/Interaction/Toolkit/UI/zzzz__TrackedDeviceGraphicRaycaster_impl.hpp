#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceGraphicRaycaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceGraphicRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__BindingsGroup_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IMultiPokeStateDataProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IPokeStateDataProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeStateData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRPokeLogic_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceEventData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceGraphicRaycaster_RaycastHitData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceGraphicRaycaster_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_ignoreReversedGraphics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb434718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_ignoreReversedGraphics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.set_ignoreReversedGraphics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb434720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"set_ignoreReversedGraphics", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_checkFor2DOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_checkFor2DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb434728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_checkFor2DOcclusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.set_checkFor2DOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_checkFor2DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb434730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"set_checkFor2DOcclusion", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_checkFor3DOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_checkFor3DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb434738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_checkFor3DOcclusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.set_checkFor3DOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_checkFor3DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb434740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"set_checkFor3DOcclusion", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_blockingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb434748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_blockingMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.set_blockingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb434750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"set_blockingMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_raycastTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::QueryTriggerInteraction (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb434758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_raycastTriggerInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.set_raycastTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb434760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"set_raycastTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_eventCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb434768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb4348d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_canvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Canvas> (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_canvas)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb434840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_canvas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.IsPokeInteractingWithUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::IsPokeInteractingWithUI)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb4350f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"IsPokeInteractingWithUI", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.EndPokeInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::EndPokeInteraction)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb43529c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"EndPokeInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.TryGetPokeStateDataForInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::TryGetPokeStateDataForInteractor)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xb435490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"TryGetPokeStateDataForInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_pokeStateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_pokeStateData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb435754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_pokeStateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_pokeStateDataDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>* (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_pokeStateDataDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43576c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_pokeStateDataDictionary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.GetPokeStateDataForTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::GetPokeStateDataForTarget)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb435774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"GetPokeStateDataForTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.IsPokeSelectingWithUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::IsPokeSelectingWithUI)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb435898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"IsPokeSelectingWithUI", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.FindClosestHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit (*)(::ArrayW<::UnityEngine::RaycastHit>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::FindClosestHit)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb435970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"FindClosestHit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::Awake)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb435a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::OnDisable)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0xb435d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::OnDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb4362a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.SetupPoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SetupPoke)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb435b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"SetupPoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.PerformRaycasts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformRaycasts)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0xb434970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"PerformRaycasts", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.PerformSpherecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::LayerMask, ::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformSpherecast)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xb436394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"PerformSpherecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.PerformRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::LayerMask, ::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformRaycast)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xb4367fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"PerformRaycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.ProcessSortedHitsResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(::UnityEngine::Ray, float_t, bool, ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::ProcessSortedHitsResults)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xb437008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"ProcessSortedHitsResults", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.SortedSpherecastGraphics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::Vector3, float_t, ::UnityEngine::LayerMask, ::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SortedSpherecastGraphics)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0xb436b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"SortedSpherecastGraphics", {}, {::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.SortedRaycastGraphics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::Ray, float_t, ::UnityEngine::LayerMask, ::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SortedRaycastGraphics)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0xb4374b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"SortedRaycastGraphics", {}, {::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.ShouldTestGraphic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UI::Graphic*, ::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::ShouldTestGraphic)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb437978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"ShouldTestGraphic", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.SphereIntersectsRectTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector4, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SphereIntersectsRectTransform)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb437a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"SphereIntersectsRectTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.RayIntersectsRectTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector4, ::UnityEngine::Ray, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::RayIntersectsRectTransform)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb437c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"RayIntersectsRectTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.RayIntersectsRectTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::UnityEngine::Plane, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::RayIntersectsRectTransform)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xb437f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"RayIntersectsRectTransform", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.GetRectTransformPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Plane (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector4, ::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::GetRectTransformPlane)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb437d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"GetRectTransformPlane", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.GetRectTransformWorldCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector4, ::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::GetRectTransformWorldCorners)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb438254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"GetRectTransformWorldCorners", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4383e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb4383ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster._SetupPoke_b__57_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::_SetupPoke_b__57_0)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xb43879c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"<SetupPoke>b__57_0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_IgnoreReversedGraphics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreReversedGraphics;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_IgnoreReversedGraphics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreReversedGraphics;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_IgnoreReversedGraphics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreReversedGraphics = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_CheckFor2DOcclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CheckFor2DOcclusion;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_CheckFor2DOcclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CheckFor2DOcclusion;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_CheckFor2DOcclusion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CheckFor2DOcclusion = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_CheckFor3DOcclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CheckFor3DOcclusion;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_CheckFor3DOcclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CheckFor3DOcclusion;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_CheckFor3DOcclusion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CheckFor3DOcclusion = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_BlockingMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockingMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_BlockingMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockingMask;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_BlockingMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlockingMask = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_RaycastTriggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastTriggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_RaycastTriggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastTriggerInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastTriggerInteraction = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_Canvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_Canvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Canvas;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Canvas = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_HasWarnedEventCameraNull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasWarnedEventCameraNull;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_HasWarnedEventCameraNull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasWarnedEventCameraNull;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_HasWarnedEventCameraNull(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasWarnedEventCameraNull = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_OcclusionHits3D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OcclusionHits3D;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_OcclusionHits3D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OcclusionHits3D;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_OcclusionHits3D(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OcclusionHits3D = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D>& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_OcclusionHits2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OcclusionHits2D;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D> const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_OcclusionHits2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OcclusionHits2D;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_OcclusionHits2D(::ArrayW<::UnityEngine::RaycastHit2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OcclusionHits2D = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_RaycastResultsCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastResultsCache;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>* const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_RaycastResultsCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastResultsCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_RaycastResultsCache(::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastResultsCache = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_PokeLogic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeLogic;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_PokeLogic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeLogic;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_PokeLogic(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeLogic = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>*& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get__pokeStateDataDictionary_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pokeStateDataDictionary_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>* const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get__pokeStateDataDictionary_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pokeStateDataDictionary_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set__pokeStateDataDictionary_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pokeStateDataDictionary_k__BackingField = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_BindingsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_BindingsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingsGroup = value;
}
constexpr ::UnityEngine::PhysicsScene& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_LocalPhysicsScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr ::UnityEngine::PhysicsScene const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_LocalPhysicsScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalPhysicsScene = value;
}
constexpr ::UnityEngine::PhysicsScene2D& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_LocalPhysicsScene2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene2D;
}
constexpr ::UnityEngine::PhysicsScene2D const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_LocalPhysicsScene2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene2D;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_LocalPhysicsScene2D(::UnityEngine::PhysicsScene2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalPhysicsScene2D = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::setStaticF_s_RaycastHitComparer(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*, "s_RaycastHitComparer", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::getStaticF_s_RaycastHitComparer()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*, "s_RaycastHitComparer", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::setStaticF_s_Corners(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Corners", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::getStaticF_s_Corners()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Corners", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*, "s_SortedGraphics", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::getStaticF_s_SortedGraphics()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*, "s_SortedGraphics", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::setStaticF_s_InteractorHitData(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*, "s_InteractorHitData", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::getStaticF_s_InteractorHitData()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*, "s_InteractorHitData", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::setStaticF_s_InteractorRaycasters(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*, "s_InteractorRaycasters", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::getStaticF_s_InteractorRaycasters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*, "s_InteractorRaycasters", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::setStaticF_s_PokeHoverRaycasters(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>*, "s_PokeHoverRaycasters", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::getStaticF_s_PokeHoverRaycasters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>*, "s_PokeHoverRaycasters", ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>();
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_ignoreReversedGraphics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_ignoreReversedGraphics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_ignoreReversedGraphics(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"set_ignoreReversedGraphics", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_checkFor2DOcclusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_checkFor2DOcclusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_checkFor2DOcclusion(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"set_checkFor2DOcclusion", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_checkFor3DOcclusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_checkFor3DOcclusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_checkFor3DOcclusion(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"set_checkFor3DOcclusion", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_blockingMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_blockingMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_blockingMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"set_blockingMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::QueryTriggerInteraction UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_raycastTriggerInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_raycastTriggerInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"set_raycastTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_eventCamera()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline ::UnityW<::UnityEngine::Canvas> UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_canvas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_canvas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::IsPokeInteractingWithUI(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"IsPokeInteractingWithUI", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::EndPokeInteraction(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"EndPokeInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::TryGetPokeStateDataForInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"TryGetPokeStateDataForInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor, data);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_pokeStateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_pokeStateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_pokeStateDataDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"get_pokeStateDataDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>*>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::GetPokeStateDataForTarget(::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"GetPokeStateDataForTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>(this, ___internal_method, target);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::IsPokeSelectingWithUI(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"IsPokeSelectingWithUI", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor);
}
inline ::UnityEngine::RaycastHit UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::FindClosestHit(::ArrayW<::UnityEngine::RaycastHit>  hits, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"FindClosestHit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit>(nullptr, ___internal_method, hits, count);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SetupPoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"SetupPoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformRaycasts(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"PerformRaycasts", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformSpherecast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::Camera*  currentEventCamera, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"PerformSpherecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, radius, layerMask, currentEventCamera, resultAppendList);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformRaycast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::Camera*  currentEventCamera, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList, ::by_ref<float_t>  existingHitLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"PerformRaycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to, layerMask, currentEventCamera, resultAppendList, existingHitLength);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::ProcessSortedHitsResults(::UnityEngine::Ray  ray, float_t  hitDistance, bool  hitSomething, ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  raycastHitDatums, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"ProcessSortedHitsResults", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hitDistance, hitSomething, raycastHitDatums, resultAppendList);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SortedSpherecastGraphics(::UnityEngine::Canvas*  canvas, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::Camera*  eventCamera, ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"SortedSpherecastGraphics", {}, {::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, canvas, origin, radius, layerMask, eventCamera, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SortedRaycastGraphics(::UnityEngine::Canvas*  canvas, ::UnityEngine::Ray  ray, float_t  maxDistance, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::Camera*  eventCamera, ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"SortedRaycastGraphics", {}, {::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, canvas, ray, maxDistance, layerMask, eventCamera, results);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::ShouldTestGraphic(::UnityEngine::UI::Graphic*  graphic, ::UnityEngine::LayerMask  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"ShouldTestGraphic", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graphic, layerMask);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SphereIntersectsRectTransform(::UnityEngine::RectTransform*  transform, ::UnityEngine::Vector4  raycastPadding, ::UnityEngine::Vector3  from, ::by_ref<::UnityEngine::Vector3>  worldPosition, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"SphereIntersectsRectTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transform, raycastPadding, from, worldPosition, distance);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::RayIntersectsRectTransform(::UnityEngine::RectTransform*  transform, ::UnityEngine::Vector4  raycastPadding, ::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::Vector3>  worldPosition, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"RayIntersectsRectTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transform, raycastPadding, ray, worldPosition, distance);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::RayIntersectsRectTransform(::UnityEngine::Ray  ray, ::UnityEngine::Plane  plane, ::by_ref<::UnityEngine::Vector3>  worldPosition, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"RayIntersectsRectTransform", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, plane, worldPosition, distance);
}
inline ::UnityEngine::Plane UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::GetRectTransformPlane(::UnityEngine::RectTransform*  transform, ::UnityEngine::Vector4  raycastPadding, ::ArrayW<::UnityEngine::Vector3>  fourCornersArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"GetRectTransformPlane", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane>(nullptr, ___internal_method, transform, raycastPadding, fourCornersArray);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::GetRectTransformWorldCorners(::UnityEngine::RectTransform*  transform, ::UnityEngine::Vector4  offset, ::ArrayW<::UnityEngine::Vector3>  fourCornersArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"GetRectTransformWorldCorners", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, offset, fourCornersArray);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::_SetupPoke_b__57_0(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>(),
                        {"<SetupPoke>b__57_0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::i___UnityEngine__XR__Interaction__Toolkit__Filtering__IPokeStateDataProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IMultiPokeStateDataProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IMultiPokeStateDataProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IMultiPokeStateDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IMultiPokeStateDataProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IMultiPokeStateDataProvider* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::i___UnityEngine__XR__Interaction__Toolkit__Filtering__IMultiPokeStateDataProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IMultiPokeStateDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::TrackedDeviceGraphicRaycaster()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer::*)(::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData, ::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer::Compare)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb43674c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>(), ::i2c::type_of<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb438794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer::Compare(::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData  a, ::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>(), ::i2c::type_of<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>"
constexpr  UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer::operator ::System::Collections::Generic::IComparer_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer::i___System__Collections__Generic__IComparer_1___GlobalNamespace__TrackedDeviceGraphicRaycaster_RaycastHitData_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer::TrackedDeviceGraphicRaycaster_RaycastHitComparer()   {
}
