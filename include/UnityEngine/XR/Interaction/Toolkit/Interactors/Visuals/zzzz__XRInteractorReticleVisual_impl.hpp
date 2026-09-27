#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/XRInteractorReticleVisual.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__XRInteractorReticleVisual_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.get_maxRaycastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_maxRaycastDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.set_maxRaycastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_maxRaycastDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.get_reticlePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_reticlePrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_reticlePrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.set_reticlePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_reticlePrefab)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb48c5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_reticlePrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.get_prefabScalingFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_prefabScalingFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_prefabScalingFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.set_prefabScalingFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_prefabScalingFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_prefabScalingFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.get_undoDistanceScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_undoDistanceScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_undoDistanceScaling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.set_undoDistanceScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_undoDistanceScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_undoDistanceScaling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.get_alignPrefabWithSurfaceNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_alignPrefabWithSurfaceNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_alignPrefabWithSurfaceNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.set_alignPrefabWithSurfaceNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_alignPrefabWithSurfaceNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_alignPrefabWithSurfaceNormal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.get_endpointSmoothingTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_endpointSmoothingTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_endpointSmoothingTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.set_endpointSmoothingTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_endpointSmoothingTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_endpointSmoothingTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.get_drawWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_drawWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_drawWhileSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.set_drawWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_drawWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_drawWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.get_drawOnNoHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_drawOnNoHit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_drawOnNoHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.set_drawOnNoHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_drawOnNoHit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_drawOnNoHit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.get_raycastMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_raycastMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_raycastMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.set_raycastMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_raycastMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_raycastMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.get_reticleActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_reticleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_reticleActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.set_reticleActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_reticleActive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb48c798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_reticleActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb48c838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48c9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::Update)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb48ca04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::OnDestroy)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb48d51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.FindXROrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::FindXROrigin)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb48c948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"FindXROrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.SetupReticlePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::SetupReticlePrefab)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb48c614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"SetupReticlePrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.FindClosestHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit (*)(::ArrayW<::UnityEngine::RaycastHit>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::FindClosestHit)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb48d63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"FindClosestHit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.TryGetRaycastPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::TryGetRaycastPoint)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb48d720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"TryGetRaycastPoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.UpdateReticleTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::UpdateReticleTarget)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xb48ca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"UpdateReticleTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.ActivateReticleAtTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::ActivateReticleAtTarget)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0xb48cf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"ActivateReticleAtTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::OnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"OnSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb48d860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_MaxRaycastDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxRaycastDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_MaxRaycastDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxRaycastDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_MaxRaycastDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxRaycastDistance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_ReticlePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticlePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_ReticlePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticlePrefab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_ReticlePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReticlePrefab = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_PrefabScalingFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrefabScalingFactor;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_PrefabScalingFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrefabScalingFactor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_PrefabScalingFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrefabScalingFactor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_UndoDistanceScaling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UndoDistanceScaling;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_UndoDistanceScaling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UndoDistanceScaling;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_UndoDistanceScaling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UndoDistanceScaling = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_AlignPrefabWithSurfaceNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlignPrefabWithSurfaceNormal;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_AlignPrefabWithSurfaceNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlignPrefabWithSurfaceNormal;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_AlignPrefabWithSurfaceNormal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlignPrefabWithSurfaceNormal = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_EndpointSmoothingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndpointSmoothingTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_EndpointSmoothingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndpointSmoothingTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_EndpointSmoothingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndpointSmoothingTime = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_DrawWhileSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DrawWhileSelecting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_DrawWhileSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DrawWhileSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_DrawWhileSelecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DrawWhileSelecting = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_DrawOnNoHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DrawOnNoHit;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_DrawOnNoHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DrawOnNoHit;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_DrawOnNoHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DrawOnNoHit = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_RaycastMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_RaycastMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastMask;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_RaycastMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastMask = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_ReticleActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticleActive;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_ReticleActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticleActive;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_ReticleActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReticleActive = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_InteractorLinePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorLinePoints;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_InteractorLinePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorLinePoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_InteractorLinePoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorLinePoints = value;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_XROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_XROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XROrigin = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_ReticleInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticleInstance;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_ReticleInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticleInstance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_ReticleInstance(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReticleInstance = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_Interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactor;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_Interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_Interactor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactor = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_TargetEndPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetEndPoint;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_TargetEndPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetEndPoint;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_TargetEndPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetEndPoint = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_TargetEndNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetEndNormal;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_TargetEndNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetEndNormal;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_TargetEndNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetEndNormal = value;
}
constexpr ::UnityEngine::PhysicsScene& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_LocalPhysicsScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr ::UnityEngine::PhysicsScene const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_LocalPhysicsScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalPhysicsScene = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_HasRaycastHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasRaycastHit;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_HasRaycastHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasRaycastHit;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_HasRaycastHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasRaycastHit = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_RaycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_get_m_RaycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::__cordl_internal_set_m_RaycastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHits = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_maxRaycastDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_maxRaycastDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_maxRaycastDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_maxRaycastDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_reticlePrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_reticlePrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_reticlePrefab(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_reticlePrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_prefabScalingFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_prefabScalingFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_prefabScalingFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_prefabScalingFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_undoDistanceScaling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_undoDistanceScaling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_undoDistanceScaling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_undoDistanceScaling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_alignPrefabWithSurfaceNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_alignPrefabWithSurfaceNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_alignPrefabWithSurfaceNormal(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_alignPrefabWithSurfaceNormal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_endpointSmoothingTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_endpointSmoothingTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_endpointSmoothingTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_endpointSmoothingTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_drawWhileSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_drawWhileSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_drawWhileSelecting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_drawWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_drawOnNoHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_drawOnNoHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_drawOnNoHit(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_drawOnNoHit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_raycastMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_raycastMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_raycastMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_raycastMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::get_reticleActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"get_reticleActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::set_reticleActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"set_reticleActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::FindXROrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"FindXROrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::SetupReticlePrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"SetupReticlePrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::RaycastHit UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::FindClosestHit(::ArrayW<::UnityEngine::RaycastHit>  hits, int32_t  hitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"FindClosestHit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit>(nullptr, ___internal_method, hits, hitCount);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::TryGetRaycastPoint(::by_ref<::UnityEngine::Vector3>  raycastPos, ::by_ref<::UnityEngine::Vector3>  raycastNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"TryGetRaycastPoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, raycastPos, raycastNormal);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::UpdateReticleTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"UpdateReticleTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::ActivateReticleAtTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"ActivateReticleAtTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {"OnSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual::XRInteractorReticleVisual()   {
}
