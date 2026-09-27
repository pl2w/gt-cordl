#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRSocketGrabTransformer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__SocketScaleMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRSocketGrabTransformer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__SocketScaleMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__IXRGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRSocketGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.get_canProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_canProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_canProcess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.set_canProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_canProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_canProcess", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.get_socketSnappingRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_socketSnappingRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_socketSnappingRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.set_socketSnappingRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_socketSnappingRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_socketSnappingRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.get_scaleMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_scaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_scaleMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.set_scaleMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_scaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_scaleMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.get_scaleOnlyMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_scaleOnlyMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_scaleOnlyMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.set_scaleOnlyMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_scaleOnlyMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_scaleOnlyMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.get_fixedScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_fixedScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb45e58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_fixedScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.set_fixedScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(::Unity::Mathematics::float3)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_fixedScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb45e598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_fixedScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.get_targetBoundsSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_targetBoundsSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb45e5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_targetBoundsSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.set_targetBoundsSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(::Unity::Mathematics::float3)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_targetBoundsSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb45e5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_targetBoundsSize", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.get_socketInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_socketInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_socketInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.set_socketInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_socketInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_socketInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.OnLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::OnLink)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb45e5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"OnLink", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::OnGrab)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb45e5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"OnGrab", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.OnGrabCountChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::UnityEngine::Pose, ::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::OnGrabCountChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb45e5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"OnGrabCountChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::Process)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb45e880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"Process", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.UpdateTargetWithoutScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, float_t, ::by_ref<::UnityEngine::Pose>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::UpdateTargetWithoutScale)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb45e9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"UpdateTargetWithoutScale", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.UpdateTargetWithScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::UpdateTargetWithScale)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb45ec64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"UpdateTargetWithScale", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.OnUnlink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::OnUnlink)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb45f1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"OnUnlink", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.RegisterInteractableScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, ::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::RegisterInteractableScale)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xb45e5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"RegisterInteractableScale", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.ComputeSocketTargetScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::ComputeSocketTargetScale)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb45eb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"ComputeSocketTargetScale", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.GetTargetPoseForInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::by_ref<::UnityEngine::Pose>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::GetTargetPoseForInteractable)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xb45ee70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"GetTargetPoseForInteractable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.FastCalculateRadiusOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::FastCalculateRadiusOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb45e53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"FastCalculateRadiusOffset", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.FastComputeNewTrackedPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::FastComputeNewTrackedPose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb45e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"FastComputeNewTrackedPose", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.IsWithinRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::IsWithinRadius)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb45e544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"IsWithinRadius", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.CalculateScaleToFit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::CalculateScaleToFit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb45e548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"CalculateScaleToFit", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb45f778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.FastCalculateRadiusOffset$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::FastCalculateRadiusOffset$BurstManaged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb45f83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"FastCalculateRadiusOffset$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.FastComputeNewTrackedPose$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::FastComputeNewTrackedPose$BurstManaged)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb45f930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"FastComputeNewTrackedPose$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.IsWithinRadius$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::IsWithinRadius$BurstManaged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb45fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"IsWithinRadius$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer.CalculateScaleToFit$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::CalculateScaleToFit$BurstManaged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb45fb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"CalculateScaleToFit$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__canProcess_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canProcess_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__canProcess_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canProcess_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_set__canProcess_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canProcess_k__BackingField = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__socketSnappingRadius_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____socketSnappingRadius_k__BackingField;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__socketSnappingRadius_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____socketSnappingRadius_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_set__socketSnappingRadius_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____socketSnappingRadius_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__scaleMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleMode_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__scaleMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleMode_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_set__scaleMode_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleMode_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__scaleOnlyMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleOnlyMode_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__scaleOnlyMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleOnlyMode_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_set__scaleOnlyMode_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleOnlyMode_k__BackingField = value;
}
constexpr ::Unity::Mathematics::float3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__fixedScale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixedScale_k__BackingField;
}
constexpr ::Unity::Mathematics::float3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__fixedScale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixedScale_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_set__fixedScale_k__BackingField(::Unity::Mathematics::float3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fixedScale_k__BackingField = value;
}
constexpr ::Unity::Mathematics::float3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__targetBoundsSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetBoundsSize_k__BackingField;
}
constexpr ::Unity::Mathematics::float3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__targetBoundsSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetBoundsSize_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_set__targetBoundsSize_k__BackingField(::Unity::Mathematics::float3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetBoundsSize_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__socketInteractor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____socketInteractor_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get__socketInteractor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____socketInteractor_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_set__socketInteractor_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____socketInteractor_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get_m_InitialScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialScale;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>* const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get_m_InitialScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_set_m_InitialScale(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitialScale = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get_m_InteractableBoundsSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableBoundsSize;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>* const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_get_m_InteractableBoundsSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableBoundsSize;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::__cordl_internal_set_m_InteractableBoundsSize(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractableBoundsSize = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_canProcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_canProcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_canProcess(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_canProcess", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_socketSnappingRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_socketSnappingRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_socketSnappingRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_socketSnappingRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_scaleMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_scaleMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_scaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_scaleMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_scaleOnlyMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_scaleOnlyMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_scaleOnlyMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_scaleOnlyMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_fixedScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_fixedScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_fixedScale(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_fixedScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_targetBoundsSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_targetBoundsSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_targetBoundsSize(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_targetBoundsSize", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::get_socketInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"get_socketInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::set_socketInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"set_socketInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::OnLink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"OnLink", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::OnGrab(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"OnGrab", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::Pose  targetPose, ::UnityEngine::Vector3  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"OnGrabCountChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::Process(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"Process", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, updatePhase, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::UpdateTargetWithoutScale(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, float_t  snappingRadius, ::by_ref<::UnityEngine::Pose>  targetPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"UpdateTargetWithoutScale", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, grabInteractable, interactor, snappingRadius, targetPose);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::UpdateTargetWithScale(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, float_t  innerRadius, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBounds, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"UpdateTargetWithScale", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, grabInteractable, interactor, innerRadius, initialScale, initialBounds, targetScale, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::OnUnlink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"OnUnlink", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::RegisterInteractableScale(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  targetInteractable, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"RegisterInteractableScale", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetInteractable, scale);
}
inline ::Unity::Mathematics::float3 UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::ComputeSocketTargetScale(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialInteractableScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"ComputeSocketTargetScale", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, interactable, initialInteractableScale);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::GetTargetPoseForInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::UnityEngine::Pose>  targetPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"GetTargetPoseForInteractable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactable, interactor, targetPose);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::FastCalculateRadiusOffset(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBoundsSize, float_t  innerRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"FastCalculateRadiusOffset", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, initialScale, targetScale, initialBoundsSize, innerRadius);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::FastComputeNewTrackedPose(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorAttachPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorAttachRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  positionOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableAttachRot, ::by_ref<::Unity::Mathematics::float3>  targetPos, ::by_ref<::Unity::Mathematics::quaternion>  targetRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"FastComputeNewTrackedPose", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactorAttachPos, interactorAttachRot, positionOffset, interactableRot, interactableAttachRot, targetPos, targetRot);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::IsWithinRadius(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  b, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"IsWithinRadius", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, radius);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::CalculateScaleToFit(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  boundsSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  fixedSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, float_t  epsilon, ::by_ref<::Unity::Mathematics::float3>  newScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"CalculateScaleToFit", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, boundsSize, fixedSize, initialScale, epsilon, newScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::FastCalculateRadiusOffset$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBoundsSize, float_t  innerRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"FastCalculateRadiusOffset$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, initialScale, targetScale, initialBoundsSize, innerRadius);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::FastComputeNewTrackedPose$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorAttachPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorAttachRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  positionOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableAttachRot, ::by_ref<::Unity::Mathematics::float3>  targetPos, ::by_ref<::Unity::Mathematics::quaternion>  targetRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"FastComputeNewTrackedPose$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactorAttachPos, interactorAttachRot, positionOffset, interactableRot, interactableAttachRot, targetPos, targetRot);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::IsWithinRadius$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  b, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"IsWithinRadius$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, radius);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::CalculateScaleToFit$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  boundsSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  fixedSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, float_t  epsilon, ::by_ref<::Unity::Mathematics::float3>  newScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>(),
                        {"CalculateScaleToFit$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, boundsSize, fixedSize, initialScale, epsilon, newScale);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr  UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::operator ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::i___UnityEngine__XR__Interaction__Toolkit__Transformers__IXRGrabTransformer() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer::XRSocketGrabTransformer()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4606ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb46079c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb45f624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  boundsSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  fixedSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, float_t  epsilon, ::by_ref<::Unity::Mathematics::float3>  newScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, boundsSize, fixedSize, initialScale, epsilon, newScale);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4604d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb460588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb46059c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4606a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  boundsSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  fixedSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, float_t  epsilon, ::by_ref<::Unity::Mathematics::float3>  newScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boundsSize, fixedSize, initialScale, epsilon, newScale);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  boundsSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  fixedSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, float_t  epsilon, ::by_ref<::Unity::Mathematics::float3>  newScale, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, boundsSize, fixedSize, initialScale, epsilon, newScale, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4603cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4604bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb45f53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  b, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, radius);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb460214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4602c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb4602dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4603a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  b, float_t  radius)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b, radius);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  b, float_t  radius, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, a, b, radius, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_4);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb46010c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4601fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb45f43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorAttachPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorAttachRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  positionOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableAttachRot, ::by_ref<::Unity::Mathematics::float3>  targetPos, ::by_ref<::Unity::Mathematics::quaternion>  targetRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactorAttachPos, interactorAttachRot, positionOffset, interactableRot, interactableAttachRot, targetPos, targetRot);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb45feec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb45ffa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb45ffb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb460100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorAttachPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorAttachRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  positionOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableAttachRot, ::by_ref<::Unity::Mathematics::float3>  targetPos, ::by_ref<::Unity::Mathematics::quaternion>  targetRot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorAttachPos, interactorAttachRot, positionOffset, interactableRot, interactableAttachRot, targetPos, targetRot);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorAttachPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorAttachRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  positionOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableAttachRot, ::by_ref<::Unity::Mathematics::float3>  targetPos, ::by_ref<::Unity::Mathematics::quaternion>  targetRot, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, interactorAttachPos, interactorAttachRot, positionOffset, interactableRot, interactableAttachRot, targetPos, targetRot, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_8);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb45fde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb45fed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb45f2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBoundsSize, float_t  innerRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, initialScale, targetScale, initialBoundsSize, innerRadius);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb45fc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb45fcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb45fcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb45fdbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBoundsSize, float_t  innerRadius)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, initialScale, targetScale, initialBoundsSize, innerRadius);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBoundsSize, float_t  innerRadius, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, initialScale, targetScale, initialBoundsSize, innerRadius, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_5);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate()   {
}
