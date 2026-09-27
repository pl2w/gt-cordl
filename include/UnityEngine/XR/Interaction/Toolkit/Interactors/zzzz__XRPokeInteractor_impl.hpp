#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRPokeInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__QueryUIDocumentInteraction_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRPokeInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IAttachPointVelocityProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IAttachPointVelocityTracker_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IPokeStateDataProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRPokeFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRSelectFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeStateData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRPokeInteractor_PokeCollision_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__QueryUIDocumentInteraction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__RegisteredUIInteractorCache_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverEnterEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverExitEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIToolkitPokeHandler_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_pokeDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_pokeDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_pokeDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_pokeDepth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_pokeWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_pokeWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_pokeWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_pokeWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_pokeSelectWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeSelectWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeSelectWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_pokeSelectWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_pokeSelectWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_pokeSelectWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_pokeHoverRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeHoverRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeHoverRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_pokeHoverRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_pokeHoverRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_pokeHoverRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_pokeInteractionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeInteractionOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeInteractionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_pokeInteractionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_pokeInteractionOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_pokeInteractionOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_physicsLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_physicsLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_physicsLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_physicsLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_physicsLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_physicsLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_physicsTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::QueryTriggerInteraction (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_physicsTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_physicsTriggerInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_physicsTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_physicsTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_physicsTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_uiDocumentTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_uiDocumentTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_uiDocumentTriggerInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_uiDocumentTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_uiDocumentTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_uiDocumentTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_requirePokeFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_requirePokeFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_requirePokeFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_requirePokeFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_requirePokeFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_requirePokeFilter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_enableUIInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_enableUIInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_enableUIInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_enableUIInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_enableUIInteraction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb474b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_enableUIInteraction", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_clickUIOnDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_clickUIOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_clickUIOnDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_clickUIOnDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_clickUIOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_clickUIOnDown", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_debugVisualizationsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_debugVisualizationsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_debugVisualizationsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_debugVisualizationsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_debugVisualizationsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_debugVisualizationsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_uiHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_uiHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_uiHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_uiHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_uiHoverEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb474b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_uiHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_uiHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_uiHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_uiHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_uiHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_uiHoverExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb474bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_uiHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_pokeStateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeStateData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeStateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_attachPointVelocityTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_attachPointVelocityTracker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_attachPointVelocityTracker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_attachPointVelocityTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_attachPointVelocityTracker)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb474bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_attachPointVelocityTracker", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.UpdateUIRegistration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::UpdateUIRegistration)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb474bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 105}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_canProcessUIToolkit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_canProcessUIToolkit)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb474ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_canProcessUIToolkit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.get_enableMultiPick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_enableMultiPick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_enableMultiPick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.set_enableMultiPick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_enableMultiPick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb474d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_enableMultiPick", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::Awake)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb474d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnEnable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb474e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4751c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb475258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.PreprocessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::PreprocessInteractor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb475280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.ProcessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::ProcessInteractor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb475c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.RegisterValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::RegisterValidTargets)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0xb475400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"RegisterValidTargets", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.ProcessPokeStateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::ProcessPokeStateData)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb4759e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"ProcessPokeStateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.GetValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::GetValidTargets)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb47606c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.EvaluateSphereOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::EvaluateSphereOverlap)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xb475ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"EvaluateSphereOverlap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.FindPokeTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::Collider*, ::by_ref<::GlobalNamespace::XRPokeInteractor_PokeCollision>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::FindPokeTarget)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb47619c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"FindPokeTarget", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::XRPokeInteractor_PokeCollision>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.TryGetPokeFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::TryGetPokeFilter)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xb476288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"TryGetPokeFilter", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.ProcessValidInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::Collider*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::ProcessValidInteraction)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb476570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"ProcessValidInteraction", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.SetDebugObjectVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::SetDebugObjectVisibility)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xb474f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"SetDebugObjectVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.UpdateDebugVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::UpdateDebugVisuals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb475c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"UpdateDebugVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.UpdateUIModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::UpdateUIModel)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xb476668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 106}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.GetPokePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::GetPokePosition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb476958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"GetPokePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.TryGetUIModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::TryGetUIModel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb476984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"TryGetUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb476a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb476a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.OnUIHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnUIHoverEntered)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb476a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 107}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.OnUIHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnUIHoverExited)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb476ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 108}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnHoverExited)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb476b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.OnHoverEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnHoverEntering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb476c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.GetAttachPointVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::GetAttachPointVelocity)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb476c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"GetAttachPointVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor.GetAttachPointAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::GetAttachPointAngularVelocity)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb476d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"GetAttachPointAngularVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::_ctor)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xb476e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeDepth;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeDepth;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_PokeDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeDepth = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeWidth;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeWidth;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_PokeWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeWidth = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeSelectWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeSelectWidth;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeSelectWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeSelectWidth;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_PokeSelectWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeSelectWidth = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeHoverRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeHoverRadius;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeHoverRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeHoverRadius;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_PokeHoverRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeHoverRadius = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeInteractionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeInteractionOffset;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeInteractionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeInteractionOffset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_PokeInteractionOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeInteractionOffset = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PhysicsLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PhysicsLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PhysicsLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PhysicsLayerMask;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_PhysicsLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PhysicsLayerMask = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PhysicsTriggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PhysicsTriggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PhysicsTriggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PhysicsTriggerInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_PhysicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PhysicsTriggerInteraction = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_UIDocumentTriggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIDocumentTriggerInteraction;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_UIDocumentTriggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIDocumentTriggerInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_UIDocumentTriggerInteraction(::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIDocumentTriggerInteraction = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_RequirePokeFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequirePokeFilter;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_RequirePokeFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequirePokeFilter;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_RequirePokeFilter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RequirePokeFilter = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_EnableUIInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableUIInteraction;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_EnableUIInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableUIInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_EnableUIInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableUIInteraction = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_ClickUIOnDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickUIOnDown;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_ClickUIOnDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickUIOnDown;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_ClickUIOnDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClickUIOnDown = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_DebugVisualizationsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugVisualizationsEnabled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_DebugVisualizationsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugVisualizationsEnabled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_DebugVisualizationsEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DebugVisualizationsEnabled = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_UIHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverEntered;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_UIHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_UIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIHoverEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_UIHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverExited;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_UIHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_UIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIHoverExited = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeStateData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeStateData;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeStateData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeStateData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_PokeStateData(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeStateData = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get__attachPointVelocityTracker_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachPointVelocityTracker_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get__attachPointVelocityTracker_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachPointVelocityTracker_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set__attachPointVelocityTracker_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachPointVelocityTracker_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_HoverDebugSphere()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverDebugSphere;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_HoverDebugSphere() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverDebugSphere;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_HoverDebugSphere(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverDebugSphere = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_HoverDebugRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverDebugRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_HoverDebugRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverDebugRenderer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_HoverDebugRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverDebugRenderer = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_LastPokeInteractionPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPokeInteractionPoint;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_LastPokeInteractionPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPokeInteractionPoint;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_LastPokeInteractionPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastPokeInteractionPoint = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_FirstFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_FirstFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_FirstFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FirstFrame = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_CurrentPokeTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentPokeTarget;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_CurrentPokeTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentPokeTarget;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_CurrentPokeTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentPokeTarget = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_CurrentPokeFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentPokeFilter;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_CurrentPokeFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentPokeFilter;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_CurrentPokeFilter(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentPokeFilter = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_SphereCastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_SphereCastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_SphereCastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SphereCastHits = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_OverlapSphereHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverlapSphereHits;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_OverlapSphereHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverlapSphereHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_OverlapSphereHits(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverlapSphereHits = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRPokeInteractor_PokeCollision>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeTargets;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRPokeInteractor_PokeCollision>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PokeTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_PokeTargets(::System::Collections::Generic::List_1<::GlobalNamespace::XRPokeInteractor_PokeCollision>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeTargets = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_InteractableSelectFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableSelectFilters;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_InteractableSelectFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableSelectFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_InteractableSelectFilters(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractableSelectFilters = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_ValidTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidTargets;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_ValidTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValidTargets = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_RegisteredUIInteractorCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredUIInteractorCache;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_RegisteredUIInteractorCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredUIInteractorCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_RegisteredUIInteractorCache(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisteredUIInteractorCache = value;
}
constexpr ::UnityEngine::PhysicsScene& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_LocalPhysicsScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr ::UnityEngine::PhysicsScene const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_LocalPhysicsScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalPhysicsScene = value;
}
constexpr ::System::Func_1<::UnityEngine::Vector3>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PositionProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionProvider;
}
constexpr ::System::Func_1<::UnityEngine::Vector3>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_PositionProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_PositionProvider(::System::Func_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PositionProvider = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_UIToolkitPokeHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIToolkitPokeHandler;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_UIToolkitPokeHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIToolkitPokeHandler;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_UIToolkitPokeHandler(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIToolkitPokeHandler = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_EnableMultiPick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableMultiPick;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_get_m_EnableMultiPick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableMultiPick;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::__cordl_internal_set_m_EnableMultiPick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableMultiPick = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::setStaticF_s_Results(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, "s_Results", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::getStaticF_s_Results()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, "s_Results", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::setStaticF_s_ValidTargetsScratchMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>*, "s_ValidTargetsScratchMap", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::getStaticF_s_ValidTargetsScratchMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>*, "s_ValidTargetsScratchMap", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>();
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_pokeDepth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_pokeDepth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_pokeWidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_pokeWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeSelectWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeSelectWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_pokeSelectWidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_pokeSelectWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeHoverRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeHoverRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_pokeHoverRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_pokeHoverRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeInteractionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeInteractionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_pokeInteractionOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_pokeInteractionOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_physicsLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_physicsLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_physicsLayerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_physicsLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::QueryTriggerInteraction UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_physicsTriggerInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_physicsTriggerInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_physicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_physicsTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_uiDocumentTriggerInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_uiDocumentTriggerInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_uiDocumentTriggerInteraction(::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_uiDocumentTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_requirePokeFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_requirePokeFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_requirePokeFilter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_requirePokeFilter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_enableUIInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_enableUIInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_enableUIInteraction(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_enableUIInteraction", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_clickUIOnDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_clickUIOnDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_clickUIOnDown(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_clickUIOnDown", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_debugVisualizationsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_debugVisualizationsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_debugVisualizationsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_debugVisualizationsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_uiHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_uiHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_uiHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_uiHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_uiHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_uiHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_uiHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_uiHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_pokeStateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_pokeStateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker* UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_attachPointVelocityTracker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_attachPointVelocityTracker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_attachPointVelocityTracker(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_attachPointVelocityTracker", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::UpdateUIRegistration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 105}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_canProcessUIToolkit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_canProcessUIToolkit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::get_enableMultiPick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"get_enableMultiPick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::set_enableMultiPick(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"set_enableMultiPick", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::RegisterValidTargets(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>  currentTarget, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>  pokeFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"RegisterValidTargets", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentTarget, pokeFilter);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::ProcessPokeStateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"ProcessPokeStateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::EvaluateSphereOverlap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"EvaluateSphereOverlap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::FindPokeTarget(::UnityEngine::Collider*  hitCollider, ::by_ref<::GlobalNamespace::XRPokeInteractor_PokeCollision>  newPokeCollision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"FindPokeTarget", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::XRPokeInteractor_PokeCollision>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hitCollider, newPokeCollision);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::TryGetPokeFilter(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>  pokeFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"TryGetPokeFilter", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable, pokeFilter);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::ProcessValidInteraction(::UnityEngine::Collider*  hitCollider, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  pokeFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"ProcessValidInteraction", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitCollider, interactable, pokeFilter);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::SetDebugObjectVisibility(bool  isVisible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"SetDebugObjectVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isVisible);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::UpdateDebugVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"UpdateDebugVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::GetOrAddComponent(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                    {"GetOrAddComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, go);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 106}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, model);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::GetPokePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"GetPokePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::TryGetUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"TryGetUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, model);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 107}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 108}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::GetAttachPointVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"GetAttachPointVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::GetAttachPointAngularVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {"GetAttachPointAngularVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::i___UnityEngine__XR__Interaction__Toolkit__UI__IUIHoverInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::i___UnityEngine__XR__Interaction__Toolkit__UI__IUIInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider* UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::i___UnityEngine__XR__Interaction__Toolkit__Filtering__IPokeStateDataProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider* UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::i___UnityEngine__XR__Interaction__Toolkit__Attachment__IAttachPointVelocityProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor::XRPokeInteractor()   {
}
