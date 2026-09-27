#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandRootOffset.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__HandRootOffset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandRootOffset::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.get_MirrorOffsetsForLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::get_MirrorOffsetsForLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_MirrorOffsetsForLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.set_MirrorOffsetsForLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(bool)>(&::Oculus::Interaction::HandRootOffset::set_MirrorOffsetsForLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_MirrorOffsetsForLeftHand", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.get_FreezeRotationX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::get_FreezeRotationX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_FreezeRotationX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.set_FreezeRotationX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(bool)>(&::Oculus::Interaction::HandRootOffset::set_FreezeRotationX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_FreezeRotationX", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.get_FreezeRotationY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::get_FreezeRotationY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_FreezeRotationY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.set_FreezeRotationY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(bool)>(&::Oculus::Interaction::HandRootOffset::set_FreezeRotationY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_FreezeRotationY", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.get_FreezeRotationZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::get_FreezeRotationZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_FreezeRotationZ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.set_FreezeRotationZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(bool)>(&::Oculus::Interaction::HandRootOffset::set_FreezeRotationZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_FreezeRotationZ", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.get_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::get_Offset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47f1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_Offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.set_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::HandRootOffset::set_Offset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47f1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_Offset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::get_Rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47f1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.set_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::HandRootOffset::set_Rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47f1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_Rotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.get_MirrorLeftRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::get_MirrorLeftRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_MirrorLeftRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.set_MirrorLeftRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(bool)>(&::Oculus::Interaction::HandRootOffset::set_MirrorLeftRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47f204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_MirrorLeftRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa47f20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa47f264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47f290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47f390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.HandleHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::HandleHandUpdated)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa47f490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.GetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::HandRootOffset::GetOffset)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa47f5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.GetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(::by_ref<::UnityEngine::Pose>, ::Oculus::Interaction::Input::Handedness, float_t)>(&::Oculus::Interaction::HandRootOffset::GetOffset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa47f9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.GetWorldPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::HandRootOffset::GetWorldPose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa47facc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"GetWorldPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.FreezeRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::HandRootOffset::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::HandRootOffset::FreezeRotation)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xa47f6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"FreezeRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.InjectAllHandRootOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandRootOffset::InjectAllHandRootOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa47fb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"InjectAllHandRootOffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandRootOffset::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa47fb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.InjectOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::HandRootOffset::InjectOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47fbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"InjectOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.InjectRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::HandRootOffset::InjectRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47fc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"InjectRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset.InjectAllHandWristOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)(::Oculus::Interaction::Input::IHand*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Oculus::Interaction::HandRootOffset::InjectAllHandWristOffset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa47fc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"InjectAllHandWristOffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRootOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRootOffset::*)()>(&::Oculus::Interaction::HandRootOffset::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa47fc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandRootOffset::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandRootOffset::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::HandRootOffset::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::HandRootOffset::__cordl_internal_get__rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotation;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotation;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotation = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::HandRootOffset::__cordl_internal_get__posOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__posOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__posOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____posOffset = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::HandRootOffset::__cordl_internal_get__rotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotOffset;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__rotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotOffset;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__rotOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotOffset = value;
}
constexpr bool& Oculus::Interaction::HandRootOffset::__cordl_internal_get__mirrorOffsetsForLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrorOffsetsForLeftHand;
}
constexpr bool const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__mirrorOffsetsForLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrorOffsetsForLeftHand;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__mirrorOffsetsForLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mirrorOffsetsForLeftHand = value;
}
constexpr bool& Oculus::Interaction::HandRootOffset::__cordl_internal_get__freezeRotationX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationX;
}
constexpr bool const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__freezeRotationX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationX;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__freezeRotationX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freezeRotationX = value;
}
constexpr bool& Oculus::Interaction::HandRootOffset::__cordl_internal_get__freezeRotationY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationY;
}
constexpr bool const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__freezeRotationY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationY;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__freezeRotationY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freezeRotationY = value;
}
constexpr bool& Oculus::Interaction::HandRootOffset::__cordl_internal_get__freezeRotationZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationZ;
}
constexpr bool const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__freezeRotationZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationZ;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__freezeRotationZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freezeRotationZ = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::HandRootOffset::__cordl_internal_get__cachedPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__cachedPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPose;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__cachedPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedPose = value;
}
constexpr bool& Oculus::Interaction::HandRootOffset::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandRootOffset::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandRootOffset::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::HandRootOffset::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandRootOffset::get_MirrorOffsetsForLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_MirrorOffsetsForLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::set_MirrorOffsetsForLeftHand(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_MirrorOffsetsForLeftHand", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandRootOffset::get_FreezeRotationX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_FreezeRotationX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::set_FreezeRotationX(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_FreezeRotationX", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandRootOffset::get_FreezeRotationY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_FreezeRotationY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::set_FreezeRotationY(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_FreezeRotationY", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandRootOffset::get_FreezeRotationZ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_FreezeRotationZ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::set_FreezeRotationZ(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_FreezeRotationZ", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::HandRootOffset::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_Offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::set_Offset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_Offset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::HandRootOffset::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::set_Rotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_Rotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandRootOffset::get_MirrorLeftRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"get_MirrorLeftRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::set_MirrorLeftRotation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"set_MirrorLeftRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandRootOffset::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::HandleHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRootOffset::GetOffset(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::HandRootOffset::GetOffset(::by_ref<::UnityEngine::Pose>  pose, ::Oculus::Interaction::Input::Handedness  handedness, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose, handedness, scale);
}
inline void Oculus::Interaction::HandRootOffset::GetWorldPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"GetWorldPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::HandRootOffset::FreezeRotation(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"FreezeRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, rotation);
}
inline void Oculus::Interaction::HandRootOffset::InjectAllHandRootOffset(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"InjectAllHandRootOffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandRootOffset::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandRootOffset::InjectOffset(::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"InjectOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline void Oculus::Interaction::HandRootOffset::InjectRotation(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"InjectRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotation);
}
inline void Oculus::Interaction::HandRootOffset::InjectAllHandWristOffset(::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::Vector3  offset, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {"InjectAllHandWristOffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, offset, rotation);
}
inline void Oculus::Interaction::HandRootOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRootOffset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandRootOffset* Oculus::Interaction::HandRootOffset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandRootOffset*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandRootOffset::HandRootOffset()   {
}
