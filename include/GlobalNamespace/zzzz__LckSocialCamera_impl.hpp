#pragma once
// IWYU pragma private; include "GlobalNamespace/LckSocialCamera.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraData_impl.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraState_impl.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraType_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__LCKSocialCameraFollower_def.hpp"
#include "GlobalNamespace/zzzz__LckSocialCameraManager_def.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraData_def.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraState_def.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraType_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRigSerializer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__IGtCameraVisuals_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.get__networkedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::LckSocialCamera_CameraData> (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::get__networkedData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56c9c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get__networkedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.get_VrRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::get_VrRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c9c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get_VrRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.get_SocialCameraFollower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LCKSocialCameraFollower> (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::get_SocialCameraFollower)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c9c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get_SocialCameraFollower", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.set_SocialCameraFollower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)(::GlobalNamespace::LCKSocialCameraFollower*)>(&::GlobalNamespace::LckSocialCamera::set_SocialCameraFollower)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c9c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"set_SocialCameraFollower", {}, {::i2c::type_of<::GlobalNamespace::LCKSocialCameraFollower*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.OnSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::OnSpawned)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x56c9c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                    {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::WriteDataFusion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56ca078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                    {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::ReadDataFusion)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56ca094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                    {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::LckSocialCamera::WriteDataPUN)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x56ca10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                    {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::LckSocialCamera::ReadDataPUN)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56ca184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                    {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.ReadDataShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)(::GlobalNamespace::LckSocialCamera_CameraState)>(&::GlobalNamespace::LckSocialCamera::ReadDataShared)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56ca0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.get_IsOnNeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::get_IsOnNeck)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56ca24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get_IsOnNeck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.set_IsOnNeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)(bool)>(&::GlobalNamespace::LckSocialCamera::set_IsOnNeck)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56c9de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"set_IsOnNeck", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.get_visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::get_visible)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56ca29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get_visible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.set_visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)(bool)>(&::GlobalNamespace::LckSocialCamera::set_visible)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56c9d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"set_visible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.get_recording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::get_recording)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56ca2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get_recording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.set_recording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)(bool)>(&::GlobalNamespace::LckSocialCamera::set_recording)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56c9da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"set_recording", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.ApplyVisualState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)(::GlobalNamespace::LckSocialCamera_CameraState)>(&::GlobalNamespace::LckSocialCamera::ApplyVisualState)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x56c9e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"ApplyVisualState", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.GetFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::LckSocialCamera_CameraState, ::GlobalNamespace::LckSocialCamera_CameraState)>(&::GlobalNamespace::LckSocialCamera::GetFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56ca27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"GetFlag", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>(), ::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.SetFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LckSocialCamera_CameraState (*)(::GlobalNamespace::LckSocialCamera_CameraState, ::GlobalNamespace::LckSocialCamera_CameraState, bool)>(&::GlobalNamespace::LckSocialCamera::SetFlag)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56ca288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"SetFlag", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>(), ::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::Awake)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x56ca3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                    {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::OnDestroy)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x56ca5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.OnSuccesfullSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)(::by_ref<::GlobalNamespace::RigContainer*>, ::by_ref<::GlobalNamespace::PhotonMessageInfoWrapped>)>(&::GlobalNamespace::LckSocialCamera::OnSuccesfullSpawn)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x56ca7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"OnSuccesfullSpawn", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PhotonMessageInfoWrapped>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::SliceUpdate)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x56cada4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::OnEnable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56cafc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::OnDisable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x56cb0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.OnManagerSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)(::GlobalNamespace::LckSocialCameraManager*)>(&::GlobalNamespace::LckSocialCamera::OnManagerSpawned)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x56cb2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"OnManagerSpawned", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCameraManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.TurnOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::TurnOff)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x56cb368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"TurnOff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56cb394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)(bool)>(&::GlobalNamespace::LckSocialCamera::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56cb3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                    {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera::*)()>(&::GlobalNamespace::LckSocialCamera::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56cb3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                    {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LckSocialCamera::__cordl_internal_get__scaleTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LckSocialCamera::__cordl_internal_get__scaleTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleTransform;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set__scaleTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleTransform = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LckSocialCamera::__cordl_internal_get_CameraVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraVisuals;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LckSocialCamera::__cordl_internal_get_CameraVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraVisuals;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set_CameraVisuals(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraVisuals = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::LckSocialCamera::__cordl_internal_get__vrrig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrrig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::LckSocialCamera::__cordl_internal_get__vrrig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrrig;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set__vrrig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vrrig = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRigSerializer>& GlobalNamespace::LckSocialCamera::__cordl_internal_get_m_rigNetworkController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rigNetworkController;
}
constexpr ::UnityW<::GlobalNamespace::VRRigSerializer> const& GlobalNamespace::LckSocialCamera::__cordl_internal_get_m_rigNetworkController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rigNetworkController;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set_m_rigNetworkController(::UnityW<::GlobalNamespace::VRRigSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_rigNetworkController = value;
}
constexpr ::GlobalNamespace::LckSocialCamera_CameraType& GlobalNamespace::LckSocialCamera::__cordl_internal_get_m_cameraType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cameraType;
}
constexpr ::GlobalNamespace::LckSocialCamera_CameraType const& GlobalNamespace::LckSocialCamera::__cordl_internal_get_m_cameraType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cameraType;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set_m_cameraType(::GlobalNamespace::LckSocialCamera_CameraType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cameraType = value;
}
constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>& GlobalNamespace::LckSocialCamera::__cordl_internal_get__SocialCameraFollower_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SocialCameraFollower_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> const& GlobalNamespace::LckSocialCamera::__cordl_internal_get__SocialCameraFollower_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SocialCameraFollower_k__BackingField;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set__SocialCameraFollower_k__BackingField(::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SocialCameraFollower_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LckSocialCamera::__cordl_internal_get_m_isCorrupted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isCorrupted;
}
constexpr bool const& GlobalNamespace::LckSocialCamera::__cordl_internal_get_m_isCorrupted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isCorrupted;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set_m_isCorrupted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_isCorrupted = value;
}
constexpr bool& GlobalNamespace::LckSocialCamera::__cordl_internal_get_m_lckDelegateRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lckDelegateRegistered;
}
constexpr bool const& GlobalNamespace::LckSocialCamera::__cordl_internal_get_m_lckDelegateRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lckDelegateRegistered;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set_m_lckDelegateRegistered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_lckDelegateRegistered = value;
}
constexpr ::Liv::Lck::GorillaTag::IGtCameraVisuals*& GlobalNamespace::LckSocialCamera::__cordl_internal_get_m_CameraVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraVisuals;
}
constexpr ::Liv::Lck::GorillaTag::IGtCameraVisuals* const& GlobalNamespace::LckSocialCamera::__cordl_internal_get_m_CameraVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraVisuals;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set_m_CameraVisuals(::Liv::Lck::GorillaTag::IGtCameraVisuals*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraVisuals = value;
}
constexpr ::GlobalNamespace::LckSocialCamera_CameraState& GlobalNamespace::LckSocialCamera::__cordl_internal_get__localOwnedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localOwnedState;
}
constexpr ::GlobalNamespace::LckSocialCamera_CameraState const& GlobalNamespace::LckSocialCamera::__cordl_internal_get__localOwnedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localOwnedState;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set__localOwnedState(::GlobalNamespace::LckSocialCamera_CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localOwnedState = value;
}
constexpr ::GlobalNamespace::LckSocialCamera_CameraState& GlobalNamespace::LckSocialCamera::__cordl_internal_get__networkOwnedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkOwnedState;
}
constexpr ::GlobalNamespace::LckSocialCamera_CameraState const& GlobalNamespace::LckSocialCamera::__cordl_internal_get__networkOwnedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkOwnedState;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set__networkOwnedState(::GlobalNamespace::LckSocialCamera_CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkOwnedState = value;
}
constexpr ::GlobalNamespace::LckSocialCamera_CameraData& GlobalNamespace::LckSocialCamera::__cordl_internal_get___networkedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____networkedData;
}
constexpr ::GlobalNamespace::LckSocialCamera_CameraData const& GlobalNamespace::LckSocialCamera::__cordl_internal_get___networkedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____networkedData;
}
constexpr void GlobalNamespace::LckSocialCamera::__cordl_internal_set___networkedData(::GlobalNamespace::LckSocialCamera_CameraData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____networkedData = value;
}
inline ::by_ref<::GlobalNamespace::LckSocialCamera_CameraData> GlobalNamespace::LckSocialCamera::get__networkedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get__networkedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::LckSocialCamera_CameraData>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::LckSocialCamera::get_VrRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get_VrRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> GlobalNamespace::LckSocialCamera::get_SocialCameraFollower()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get_SocialCameraFollower", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LCKSocialCameraFollower>>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::set_SocialCameraFollower(::GlobalNamespace::LCKSocialCameraFollower*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"set_SocialCameraFollower", {}, {::i2c::type_of<::GlobalNamespace::LCKSocialCameraFollower*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LckSocialCamera::OnSpawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::LckSocialCamera::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::LckSocialCamera::ReadDataShared(::GlobalNamespace::LckSocialCamera_CameraState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline bool GlobalNamespace::LckSocialCamera::get_IsOnNeck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get_IsOnNeck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::set_IsOnNeck(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"set_IsOnNeck", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LckSocialCamera::get_visible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get_visible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::set_visible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"set_visible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LckSocialCamera::get_recording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"get_recording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::set_recording(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"set_recording", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LckSocialCamera::ApplyVisualState(::GlobalNamespace::LckSocialCamera_CameraState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"ApplyVisualState", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline bool GlobalNamespace::LckSocialCamera::GetFlag(::GlobalNamespace::LckSocialCamera_CameraState  currentState, ::GlobalNamespace::LckSocialCamera_CameraState  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"GetFlag", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>(), ::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentState, flag);
}
inline ::GlobalNamespace::LckSocialCamera_CameraState GlobalNamespace::LckSocialCamera::SetFlag(::GlobalNamespace::LckSocialCamera_CameraState  currentState, ::GlobalNamespace::LckSocialCamera_CameraState  flag, bool  shouldBeSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"SetFlag", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>(), ::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LckSocialCamera_CameraState>(nullptr, ___internal_method, currentState, flag, shouldBeSet);
}
inline void GlobalNamespace::LckSocialCamera::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::OnSuccesfullSpawn(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::RigContainer*>  rig, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::PhotonMessageInfoWrapped>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"OnSuccesfullSpawn", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PhotonMessageInfoWrapped>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, info);
}
inline void GlobalNamespace::LckSocialCamera::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::OnManagerSpawned(::GlobalNamespace::LckSocialCameraManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"OnManagerSpawned", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCameraManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline void GlobalNamespace::LckSocialCamera::TurnOff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {"TurnOff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckSocialCamera::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::LckSocialCamera::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckSocialCamera*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LckSocialCamera* GlobalNamespace::LckSocialCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckSocialCamera*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::LckSocialCamera::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::LckSocialCamera::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckSocialCamera::LckSocialCamera()   {
}
