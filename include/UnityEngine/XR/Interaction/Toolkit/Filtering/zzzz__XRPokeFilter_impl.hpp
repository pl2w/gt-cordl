#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRPokeFilter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRPokeFilter_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IPokeStateDataProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRInteractionStrengthFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRPokeFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRSelectFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeStateData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeThresholdDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRPokeLogic_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.get_pokeInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::get_pokeInteractable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a5a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"get_pokeInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.set_pokeInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::set_pokeInteractable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4a5a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"set_pokeInteractable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.get_pokeCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::get_pokeCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a5c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"get_pokeCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.set_pokeCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::set_pokeCollider)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4a5c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"set_pokeCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.get_pokeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::get_pokeConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a5c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"get_pokeConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.set_pokeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::set_pokeConfiguration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4a5c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"set_pokeConfiguration", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.get_pokeStateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::get_pokeStateData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4a5c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"get_pokeStateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.get_canProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::get_canProcess)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4a5ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a5cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a5cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Awake)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4a5cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Start)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xb4a5edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a611c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a63b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Process)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb4a63b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Process", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Process)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb4a67e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Process", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::OnHoverEntered)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb4a68e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"OnHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::OnHoverExited)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb4a6c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"OnHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.FindPokeInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::FindPokeInteractable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb4a5db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"FindPokeInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.FindPokeCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::FindPokeCollider)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb4a5e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"FindPokeCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Setup)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb4a5a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Subscribe)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xb4a7110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Unsubscribe)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xb4a6120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Unsubscribe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4a738c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_get_m_Interactable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactable;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_get_m_Interactable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_set_m_Interactable(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactable = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_get_m_PokeCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_get_m_PokeCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeCollider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_set_m_PokeCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeCollider = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_get_m_PokeConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeConfiguration;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_get_m_PokeConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeConfiguration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_set_m_PokeConfiguration(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeConfiguration = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_get_m_PokeLogic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeLogic;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_get_m_PokeLogic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeLogic;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_set_m_PokeLogic(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeLogic = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_get_m_SubscribedInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubscribedInteractable;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_get_m_SubscribedInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubscribedInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::__cordl_internal_set_m_SubscribedInteractable(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SubscribedInteractable = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::get_pokeInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"get_pokeInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::set_pokeInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"set_pokeInteractable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::get_pokeCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"get_pokeCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::set_pokeCollider(::UnityEngine::Collider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"set_pokeCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::get_pokeConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"get_pokeConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::set_pokeConfiguration(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"set_pokeConfiguration", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::get_pokeStateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"get_pokeStateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::get_canProcess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Process", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, float_t  interactionStrength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Process", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor, interactable, interactionStrength);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"OnHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"OnHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::FindPokeInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"FindPokeInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::FindPokeCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"FindPokeCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Subscribe(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::Unsubscribe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {"Unsubscribe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter"
constexpr  UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRPokeFilter() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter"
constexpr  UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRSelectFilter() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter"
constexpr  UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRInteractionStrengthFilter() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::i___UnityEngine__XR__Interaction__Toolkit__Filtering__IPokeStateDataProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter::XRPokeFilter()   {
}
