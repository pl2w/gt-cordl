#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/MonkeGravityController.hpp"
#include "GorillaTag/Gravity/zzzz__RotationDirection_impl.hpp"
#include "UnityEngine/zzzz__ForceMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MonkeGravityControllerSettings_def.hpp"
#include "GlobalNamespace/zzzz__ICallBack_def.hpp"
#include "GlobalNamespace/zzzz__ICallbackUnique_def.hpp"
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController___c__DisplayClass61_0_def.hpp"
#include "GorillaTag/Gravity/zzzz__RotationDirection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ForceMode_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_ActivatorCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_ActivatorCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d39398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_ActivatorCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_TargetRigidBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_TargetRigidBody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d393a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_TargetRigidBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_TargetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_TargetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d393a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_TargetTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_Scale)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d393b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_InstantRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_InstantRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d393c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_InstantRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_OverrideForceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_OverrideForceMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d393d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_OverrideForceMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_PreferredRotationDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::Gravity::RotationDirection (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_PreferredRotationDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d393d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_PreferredRotationDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.set_PreferredRotationDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::GorillaTag::Gravity::RotationDirection)>(&::GorillaTag::Gravity::MonkeGravityController::set_PreferredRotationDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d393e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_PreferredRotationDirection", {}, {::i2c::type_of<::GorillaTag::Gravity::RotationDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_Register)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d393e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_GravityUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_GravityUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d393f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_GravityUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.set_GravityUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::UnityEngine::Vector3)>(&::GorillaTag::Gravity::MonkeGravityController::set_GravityUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d393fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_GravityUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_GravityDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_GravityDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d39408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_GravityDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.set_GravityDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::UnityEngine::Vector3)>(&::GorillaTag::Gravity::MonkeGravityController::set_GravityDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d39414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_GravityDown", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_GravityMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_GravityMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d39420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_GravityMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.set_GravityMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(float_t)>(&::GorillaTag::Gravity::MonkeGravityController::set_GravityMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d39428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_GravityMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_PersonalGravityDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_PersonalGravityDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d39430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_PersonalGravityDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.set_PersonalGravityDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::UnityEngine::Vector3)>(&::GorillaTag::Gravity::MonkeGravityController::set_PersonalGravityDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d3943c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_PersonalGravityDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.SetPersonalGravityDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::UnityEngine::Vector3)>(&::GorillaTag::Gravity::MonkeGravityController::SetPersonalGravityDirection)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d39448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"SetPersonalGravityDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.SetPersonalGravityDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::UnityEngine::Transform*)>(&::GorillaTag::Gravity::MonkeGravityController::SetPersonalGravityDirection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d39538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"SetPersonalGravityDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_GravityZonesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_GravityZonesCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d39564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_GravityZonesCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.get_GlobalGravityIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::get_GlobalGravityIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d395ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_GlobalGravityIntent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.set_GlobalGravityIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(bool)>(&::GorillaTag::Gravity::MonkeGravityController::set_GlobalGravityIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d395b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_GlobalGravityIntent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.ICallbackUnique_get_Registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::ICallbackUnique_get_Registered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d395bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"ICallbackUnique.get_Registered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.ICallbackUnique_set_Registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(bool)>(&::GorillaTag::Gravity::MonkeGravityController::ICallbackUnique_set_Registered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d395c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"ICallbackUnique.set_Registered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::Awake)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5d395cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::OnEnable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d39798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d39964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.ProcessGravityZones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,float_t,bool> (::GorillaTag::Gravity::MonkeGravityController::*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Gravity::MonkeGravityController::ProcessGravityZones)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x5d39bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"ProcessGravityZones", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.CallBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::CallBack)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5d3a0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.GetWorldPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::GetWorldPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d3a3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.OnEnteredGravityZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::GorillaTag::Gravity::BasicGravityZone*)>(&::GorillaTag::Gravity::MonkeGravityController::OnEnteredGravityZone)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d3a3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.OnLeftGravityZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::GorillaTag::Gravity::BasicGravityZone*)>(&::GorillaTag::Gravity::MonkeGravityController::OnLeftGravityZone)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5d3a4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.ClearAllGravityZones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::ClearAllGravityZones)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d39aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"ClearAllGravityZones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.ApplyGravityForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::by_ref<::UnityEngine::Vector3>, ::UnityEngine::ForceMode)>(&::GorillaTag::Gravity::MonkeGravityController::ApplyGravityForce)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d3a6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.ClearRotationRecovery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::ClearRotationRecovery)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3a718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"ClearRotationRecovery", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.ApplyGravityUpRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::by_ref<::UnityEngine::Vector3>, float_t)>(&::GorillaTag::Gravity::MonkeGravityController::ApplyGravityUpRotation)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5d3a720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.CopyProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings*, ::GorillaTag::Gravity::BasicGravityZone*)>(&::GorillaTag::Gravity::MonkeGravityController::CopyProperties)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5d3a988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings*>(), ::i2c::type_of<::GorillaTag::Gravity::BasicGravityZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController.AssignReferencesIfMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::UnityEngine::Rigidbody*, ::UnityEngine::Collider*, ::UnityEngine::Transform*)>(&::GorillaTag::Gravity::MonkeGravityController::AssignReferencesIfMissing)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d3ad5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"AssignReferencesIfMissing", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)()>(&::GorillaTag::Gravity::MonkeGravityController::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5d3addc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityController._ProcessGravityZones_g___ProcessGravityInfo_61_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityController::*)(::by_ref<::GorillaTag::Gravity::BasicGravityZone*>, ::by_ref<::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0>)>(&::GorillaTag::Gravity::MonkeGravityController::_ProcessGravityZones_g___ProcessGravityInfo_61_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d3af34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"<ProcessGravityZones>g___ProcessGravityInfo|61_0", {}, {::i2c::type_of<::by_ref<::GorillaTag::Gravity::BasicGravityZone*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_activatorCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_activatorCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_activatorCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_activatorCollider;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_activatorCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_activatorCollider = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_targetRigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetRigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_targetRigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetRigidBody;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_targetRigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_targetRigidBody = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_targetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_targetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetTransform;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_targetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_targetTransform = value;
}
constexpr bool& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_instantRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_instantRotation;
}
constexpr bool const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_instantRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_instantRotation;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_instantRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_instantRotation = value;
}
constexpr bool& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_useRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useRotation;
}
constexpr bool const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_useRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useRotation;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_useRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_useRotation = value;
}
constexpr bool& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_overrideForceMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_overrideForceMode;
}
constexpr bool const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_overrideForceMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_overrideForceMode;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_overrideForceMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_overrideForceMode = value;
}
constexpr ::UnityEngine::ForceMode& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_forceModeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_forceModeOverride;
}
constexpr ::UnityEngine::ForceMode const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_forceModeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_forceModeOverride;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_forceModeOverride(::UnityEngine::ForceMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_forceModeOverride = value;
}
constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone>& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_alwaysInZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alwaysInZone;
}
constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone> const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_alwaysInZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alwaysInZone;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_alwaysInZone(::UnityW<::GorillaTag::Gravity::BasicGravityZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_alwaysInZone = value;
}
constexpr ::GorillaTag::Gravity::RotationDirection& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_preferredRotationDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_preferredRotationDirection;
}
constexpr ::GorillaTag::Gravity::RotationDirection const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_preferredRotationDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_preferredRotationDirection;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_preferredRotationDirection(::GorillaTag::Gravity::RotationDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_preferredRotationDirection = value;
}
constexpr bool& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_register()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_register;
}
constexpr bool const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_register() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_register;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_register(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_register = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_gravityZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gravityZones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>* const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_gravityZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gravityZones;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_gravityZones(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gravityZones = value;
}
constexpr bool& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_needsRotationRecovery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_needsRotationRecovery;
}
constexpr bool const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_needsRotationRecovery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_needsRotationRecovery;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_needsRotationRecovery(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_needsRotationRecovery = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get__GravityUp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityUp_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get__GravityUp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityUp_k__BackingField;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set__GravityUp_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GravityUp_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get__GravityDown_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityDown_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get__GravityDown_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityDown_k__BackingField;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set__GravityDown_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GravityDown_k__BackingField = value;
}
constexpr float_t& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get__GravityMultiplier_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityMultiplier_k__BackingField;
}
constexpr float_t const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get__GravityMultiplier_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityMultiplier_k__BackingField;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set__GravityMultiplier_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GravityMultiplier_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get__PersonalGravityDirection_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PersonalGravityDirection_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get__PersonalGravityDirection_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PersonalGravityDirection_k__BackingField;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set__PersonalGravityDirection_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PersonalGravityDirection_k__BackingField = value;
}
constexpr bool& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_globalGravityIntent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_globalGravityIntent;
}
constexpr bool const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_globalGravityIntent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_globalGravityIntent;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_globalGravityIntent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_globalGravityIntent = value;
}
constexpr int32_t& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_highestAuthorityLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_highestAuthorityLevel;
}
constexpr int32_t const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get_m_highestAuthorityLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_highestAuthorityLevel;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set_m_highestAuthorityLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_highestAuthorityLevel = value;
}
constexpr bool& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get__ICallbackUnique_Registered_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ICallbackUnique_Registered_k__BackingField;
}
constexpr bool const& GorillaTag::Gravity::MonkeGravityController::__cordl_internal_get__ICallbackUnique_Registered_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ICallbackUnique_Registered_k__BackingField;
}
constexpr void GorillaTag::Gravity::MonkeGravityController::__cordl_internal_set__ICallbackUnique_Registered_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ICallbackUnique_Registered_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Collider> GorillaTag::Gravity::MonkeGravityController::get_ActivatorCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_ActivatorCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> GorillaTag::Gravity::MonkeGravityController::get_TargetRigidBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_TargetRigidBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GorillaTag::Gravity::MonkeGravityController::get_TargetTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_TargetTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline float_t GorillaTag::Gravity::MonkeGravityController::get_Scale()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GorillaTag::Gravity::MonkeGravityController::get_InstantRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_InstantRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Gravity::MonkeGravityController::get_OverrideForceMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_OverrideForceMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GorillaTag::Gravity::RotationDirection GorillaTag::Gravity::MonkeGravityController::get_PreferredRotationDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_PreferredRotationDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::Gravity::RotationDirection>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::set_PreferredRotationDirection(::GorillaTag::Gravity::RotationDirection  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_PreferredRotationDirection", {}, {::i2c::type_of<::GorillaTag::Gravity::RotationDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTag::Gravity::MonkeGravityController::get_Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::MonkeGravityController::get_GravityUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_GravityUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::set_GravityUp(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_GravityUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::MonkeGravityController::get_GravityDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_GravityDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::set_GravityDown(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_GravityDown", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GorillaTag::Gravity::MonkeGravityController::get_GravityMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_GravityMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::set_GravityMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_GravityMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::MonkeGravityController::get_PersonalGravityDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_PersonalGravityDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::set_PersonalGravityDirection(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_PersonalGravityDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Gravity::MonkeGravityController::SetPersonalGravityDirection(::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"SetPersonalGravityDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void GorillaTag::Gravity::MonkeGravityController::SetPersonalGravityDirection(::UnityEngine::Transform*  reference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"SetPersonalGravityDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reference);
}
inline int32_t GorillaTag::Gravity::MonkeGravityController::get_GravityZonesCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_GravityZonesCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GorillaTag::Gravity::MonkeGravityController::get_GlobalGravityIntent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"get_GlobalGravityIntent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::set_GlobalGravityIntent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"set_GlobalGravityIntent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTag::Gravity::MonkeGravityController::ICallbackUnique_get_Registered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"ICallbackUnique.get_Registered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::ICallbackUnique_set_Registered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"ICallbackUnique.set_Registered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Gravity::MonkeGravityController::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,float_t,bool> GorillaTag::Gravity::MonkeGravityController::ProcessGravityZones(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"ProcessGravityZones", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,float_t,bool>>(this, ___internal_method, position);
}
inline void GorillaTag::Gravity::MonkeGravityController::CallBack()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::MonkeGravityController::GetWorldPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::OnEnteredGravityZone(::GorillaTag::Gravity::BasicGravityZone*  zone)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone);
}
inline void GorillaTag::Gravity::MonkeGravityController::OnLeftGravityZone(::GorillaTag::Gravity::BasicGravityZone*  zone)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone);
}
inline void GorillaTag::Gravity::MonkeGravityController::ClearAllGravityZones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"ClearAllGravityZones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::ApplyGravityForce(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  force, ::UnityEngine::ForceMode  forceType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force, forceType);
}
inline void GorillaTag::Gravity::MonkeGravityController::ClearRotationRecovery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"ClearRotationRecovery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::ApplyGravityUpRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  upDir, float_t  speed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upDir, speed);
}
inline void GorillaTag::Gravity::MonkeGravityController::CopyProperties(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings*  settings, ::GorillaTag::Gravity::BasicGravityZone*  alwaysInZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings*>(), ::i2c::type_of<::GorillaTag::Gravity::BasicGravityZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, alwaysInZone);
}
inline void GorillaTag::Gravity::MonkeGravityController::AssignReferencesIfMissing(::UnityEngine::Rigidbody*  rb, ::UnityEngine::Collider*  col, ::UnityEngine::Transform*  tr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"AssignReferencesIfMissing", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rb, col, tr);
}
inline void GorillaTag::Gravity::MonkeGravityController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityController::_ProcessGravityZones_g___ProcessGravityInfo_61_0(/* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::BasicGravityZone*>  gZone, ::by_ref<::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityController*>(),
                        {"<ProcessGravityZones>g___ProcessGravityInfo|61_0", {}, {::i2c::type_of<::by_ref<::GorillaTag::Gravity::BasicGravityZone*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gZone, _cordl_fixed_empty_name_whitespace);
}
inline ::GorillaTag::Gravity::MonkeGravityController* GorillaTag::Gravity::MonkeGravityController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Gravity::MonkeGravityController*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICallbackUnique"
constexpr  GorillaTag::Gravity::MonkeGravityController::operator ::GlobalNamespace::ICallbackUnique*() noexcept {
return static_cast<::GlobalNamespace::ICallbackUnique*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICallbackUnique"
constexpr ::GlobalNamespace::ICallbackUnique* GorillaTag::Gravity::MonkeGravityController::i___GlobalNamespace__ICallbackUnique() noexcept {
return static_cast<::GlobalNamespace::ICallbackUnique*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr  GorillaTag::Gravity::MonkeGravityController::operator ::GlobalNamespace::ICallBack*() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* GorillaTag::Gravity::MonkeGravityController::i___GlobalNamespace__ICallBack() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::MonkeGravityController::MonkeGravityController()   {
}
