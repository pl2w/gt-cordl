#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/BasicGravityZone.hpp"
#include "GorillaTag/Gravity/zzzz__GravityZoneRule_impl.hpp"
#include "GorillaTag/Gravity/zzzz__GravityZoneScaleFilter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_def.hpp"
#include "GlobalNamespace/zzzz__ICallBack_def.hpp"
#include "GlobalNamespace/zzzz__ICallbackUnique_def.hpp"
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_def.hpp"
#include "GorillaTag/Gravity/zzzz__GravityInfo_def.hpp"
#include "GorillaTag/Gravity/zzzz__GravityZoneRule_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "GorillaTag/zzzz__ListProcessor_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.get_GravityRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::Gravity::GravityZoneRule (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::get_GravityRule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d369c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"get_GravityRule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.get_AuthorityLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::get_AuthorityLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d369cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"get_AuthorityLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.get_RotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::get_RotationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d369d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"get_RotationSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.get_GravityTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>* (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::get_GravityTargets)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d369dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"get_GravityTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.ICallbackUnique_get_Registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::ICallbackUnique_get_Registered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d36a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"ICallbackUnique.get_Registered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.ICallbackUnique_set_Registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(bool)>(&::GorillaTag::Gravity::BasicGravityZone::ICallbackUnique_set_Registered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d36a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"ICallbackUnique.set_Registered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d36a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.CalculateDependentVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::CalculateDependentVars)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d36a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"CalculateDependentVars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::OnEnable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d36b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::OnDisable)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5d36be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.CallBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::CallBack)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d36ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.ProcessRemoveTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::by_ref<::GorillaTag::Gravity::MonkeGravityController*>)>(&::GorillaTag::Gravity::BasicGravityZone::ProcessRemoveTargets)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d36ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"ProcessRemoveTargets", {}, {::i2c::type_of<::by_ref<::GorillaTag::Gravity::MonkeGravityController*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.ProcessGravityTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::by_ref<::GorillaTag::Gravity::MonkeGravityController*>)>(&::GorillaTag::Gravity::BasicGravityZone::ProcessGravityTargets)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5d36f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"ProcessGravityTargets", {}, {::i2c::type_of<::by_ref<::GorillaTag::Gravity::MonkeGravityController*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.GetGravityVectorAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::BasicGravityZone::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>)>(&::GorillaTag::Gravity::BasicGravityZone::GetGravityVectorAtPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d371e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.GetGravityStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Gravity::BasicGravityZone::*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Gravity::BasicGravityZone::GetGravityStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d371f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.GetRotationIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::BasicGravityZone::*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Gravity::BasicGravityZone::GetRotationIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d371fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.GetRotationDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::BasicGravityZone::*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Gravity::BasicGravityZone::GetRotationDirection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d37204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.GetRotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Gravity::BasicGravityZone::*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Gravity::BasicGravityZone::GetRotationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d37230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.GetGravityInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*, ::by_ref<::GorillaTag::Gravity::GravityInfo>)>(&::GorillaTag::Gravity::BasicGravityZone::GetGravityInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d37238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"GetGravityInfo", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>(), ::i2c::type_of<::by_ref<::GorillaTag::Gravity::GravityInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.AddTargetLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::AddTargetLocalPlayer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d372a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"AddTargetLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.RemoveTargetLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::RemoveTargetLocalPlayer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d37368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"RemoveTargetLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.RemoveTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::BasicGravityZone::RemoveTarget)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d37408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"RemoveTarget", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.AddTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::BasicGravityZone::AddTarget)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d37340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"AddTarget", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.RemoveTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*, float_t)>(&::GorillaTag::Gravity::BasicGravityZone::RemoveTarget)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d37830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"RemoveTarget", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.AddTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*, float_t)>(&::GorillaTag::Gravity::BasicGravityZone::AddTarget)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d379e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"AddTarget", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.CancelPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::BasicGravityZone::CancelPending)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d37430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"CancelPending", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.DelayedTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*, float_t, bool)>(&::GorillaTag::Gravity::BasicGravityZone::DelayedTransition)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d37940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"DelayedTransition", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.RemoveTargetImmediate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::BasicGravityZone::RemoveTargetImmediate)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5d374dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"RemoveTargetImmediate", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.AddTargetImmediate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::BasicGravityZone::AddTargetImmediate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5d376a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"AddTargetImmediate", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.OnTargetExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::BasicGravityZone::OnTargetExited)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d37b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.OnTargetFilteredOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::BasicGravityZone::OnTargetFilteredOut)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d37b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.PassesScaleFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::BasicGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::BasicGravityZone::PassesScaleFilter)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d37190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"PassesScaleFilter", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::UnityEngine::Collider*)>(&::GorillaTag::Gravity::BasicGravityZone::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d37b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::UnityEngine::Collider*)>(&::GorillaTag::Gravity::BasicGravityZone::OnTriggerExit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d37cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone.CopyProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings*)>(&::GorillaTag::Gravity::BasicGravityZone::CopyProperties)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d37d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone::*)()>(&::GorillaTag::Gravity::BasicGravityZone::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5d37e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_gravityStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityStrength;
}
constexpr float_t const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_gravityStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityStrength;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_gravityStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityStrength = value;
}
constexpr ::GorillaTag::Gravity::GravityZoneScaleFilter& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_scaleFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleFilter;
}
constexpr ::GorillaTag::Gravity::GravityZoneScaleFilter const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_scaleFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleFilter;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_scaleFilter(::GorillaTag::Gravity::GravityZoneScaleFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleFilter = value;
}
constexpr ::GorillaTag::Gravity::GravityZoneRule& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_gravityRule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gravityRule;
}
constexpr ::GorillaTag::Gravity::GravityZoneRule const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_gravityRule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gravityRule;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_m_gravityRule(::GorillaTag::Gravity::GravityZoneRule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gravityRule = value;
}
constexpr int32_t& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_authorityLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_authorityLevel;
}
constexpr int32_t const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_authorityLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_authorityLevel;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_m_authorityLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_authorityLevel = value;
}
constexpr bool& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_invertRotationDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertRotationDirection;
}
constexpr bool const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_invertRotationDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertRotationDirection;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_invertRotationDirection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertRotationDirection = value;
}
constexpr bool& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_rotateTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateTarget;
}
constexpr bool const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_rotateTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateTarget;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_rotateTarget(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateTarget = value;
}
constexpr bool& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_useRotationSpeedOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useRotationSpeedOverride;
}
constexpr bool const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_useRotationSpeedOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useRotationSpeedOverride;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_m_useRotationSpeedOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_useRotationSpeedOverride = value;
}
constexpr float_t& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_rotationSpeedOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rotationSpeedOverride;
}
constexpr float_t const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_rotationSpeedOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rotationSpeedOverride;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_m_rotationSpeedOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_rotationSpeedOverride = value;
}
constexpr float_t& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rotationSpeed;
}
constexpr float_t const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rotationSpeed;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_m_rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_rotationSpeed = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_onLocalPlayerEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLocalPlayerEntered;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_onLocalPlayerEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLocalPlayerEntered;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_onLocalPlayerEntered(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLocalPlayerEntered = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_onLocalPlayerExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLocalPlayerExited;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_onLocalPlayerExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLocalPlayerExited;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_onLocalPlayerExited(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLocalPlayerExited = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_gravityDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gravityDirection;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_gravityDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gravityDirection;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_m_gravityDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gravityDirection = value;
}
constexpr ::GorillaTag::ListProcessor_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_gravityTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gravityTargets;
}
constexpr ::GorillaTag::ListProcessor_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>* const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_gravityTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gravityTargets;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_m_gravityTargets(::GorillaTag::ListProcessor_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gravityTargets = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::GorillaTag::Gravity::GravityInfo>*& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_targetGravityInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetGravityInfos;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::GorillaTag::Gravity::GravityInfo>* const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_targetGravityInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetGravityInfos;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_m_targetGravityInfos(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::GorillaTag::Gravity::GravityInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_targetGravityInfos = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::UnityEngine::Coroutine*>*& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_pendingTransitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pendingTransitions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::UnityEngine::Coroutine*>* const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get_m_pendingTransitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pendingTransitions;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set_m_pendingTransitions(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::UnityEngine::Coroutine*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pendingTransitions = value;
}
constexpr bool& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get__ICallbackUnique_Registered_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ICallbackUnique_Registered_k__BackingField;
}
constexpr bool const& GorillaTag::Gravity::BasicGravityZone::__cordl_internal_get__ICallbackUnique_Registered_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ICallbackUnique_Registered_k__BackingField;
}
constexpr void GorillaTag::Gravity::BasicGravityZone::__cordl_internal_set__ICallbackUnique_Registered_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ICallbackUnique_Registered_k__BackingField = value;
}
inline ::GorillaTag::Gravity::GravityZoneRule GorillaTag::Gravity::BasicGravityZone::get_GravityRule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"get_GravityRule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::Gravity::GravityZoneRule>(this, ___internal_method);
}
inline int32_t GorillaTag::Gravity::BasicGravityZone::get_AuthorityLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"get_AuthorityLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GorillaTag::Gravity::BasicGravityZone::get_RotationSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"get_RotationSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>* GorillaTag::Gravity::BasicGravityZone::get_GravityTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"get_GravityTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*>(this, ___internal_method);
}
inline bool GorillaTag::Gravity::BasicGravityZone::ICallbackUnique_get_Registered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"ICallbackUnique.get_Registered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Gravity::BasicGravityZone::ICallbackUnique_set_Registered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"ICallbackUnique.set_Registered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Gravity::BasicGravityZone::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::BasicGravityZone::CalculateDependentVars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"CalculateDependentVars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::BasicGravityZone::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::BasicGravityZone::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::BasicGravityZone::CallBack()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::BasicGravityZone::ProcessRemoveTargets(/* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"ProcessRemoveTargets", {}, {::i2c::type_of<::by_ref<::GorillaTag::Gravity::MonkeGravityController*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTag::Gravity::BasicGravityZone::ProcessGravityTargets(/* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  targetController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"ProcessGravityTargets", {}, {::i2c::type_of<::by_ref<::GorillaTag::Gravity::MonkeGravityController*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetController);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::BasicGravityZone::GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldPosition, controller);
}
inline float_t GorillaTag::Gravity::BasicGravityZone::GetGravityStrength(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, offsetFromGravity);
}
inline bool GorillaTag::Gravity::BasicGravityZone::GetRotationIntent(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offsetFromGravity);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::BasicGravityZone::GetRotationDirection(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  gravityDirection)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, gravityDirection);
}
inline float_t GorillaTag::Gravity::BasicGravityZone::GetRotationSpeed(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, offsetFromGravity);
}
inline bool GorillaTag::Gravity::BasicGravityZone::GetGravityInfo(::GorillaTag::Gravity::MonkeGravityController*  target, ::by_ref<::GorillaTag::Gravity::GravityInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"GetGravityInfo", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>(), ::i2c::type_of<::by_ref<::GorillaTag::Gravity::GravityInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target, info);
}
inline void GorillaTag::Gravity::BasicGravityZone::AddTargetLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"AddTargetLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::BasicGravityZone::RemoveTargetLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"RemoveTargetLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::BasicGravityZone::RemoveTarget(::GorillaTag::Gravity::MonkeGravityController*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"RemoveTarget", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTag::Gravity::BasicGravityZone::AddTarget(::GorillaTag::Gravity::MonkeGravityController*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"AddTarget", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTag::Gravity::BasicGravityZone::RemoveTarget(::GorillaTag::Gravity::MonkeGravityController*  target, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"RemoveTarget", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, delay);
}
inline void GorillaTag::Gravity::BasicGravityZone::AddTarget(::GorillaTag::Gravity::MonkeGravityController*  target, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"AddTarget", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, delay);
}
inline void GorillaTag::Gravity::BasicGravityZone::CancelPending(::GorillaTag::Gravity::MonkeGravityController*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"CancelPending", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline ::System::Collections::IEnumerator* GorillaTag::Gravity::BasicGravityZone::DelayedTransition(::GorillaTag::Gravity::MonkeGravityController*  target, float_t  delay, bool  add)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"DelayedTransition", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, target, delay, add);
}
inline void GorillaTag::Gravity::BasicGravityZone::RemoveTargetImmediate(::GorillaTag::Gravity::MonkeGravityController*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"RemoveTargetImmediate", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTag::Gravity::BasicGravityZone::AddTargetImmediate(::GorillaTag::Gravity::MonkeGravityController*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"AddTargetImmediate", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTag::Gravity::BasicGravityZone::OnTargetExited(::GorillaTag::Gravity::MonkeGravityController*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTag::Gravity::BasicGravityZone::OnTargetFilteredOut(::GorillaTag::Gravity::MonkeGravityController*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline bool GorillaTag::Gravity::BasicGravityZone::PassesScaleFilter(::GorillaTag::Gravity::MonkeGravityController*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"PassesScaleFilter", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline void GorillaTag::Gravity::BasicGravityZone::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Gravity::BasicGravityZone::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Gravity::BasicGravityZone::CopyProperties(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GorillaTag::Gravity::BasicGravityZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Gravity::BasicGravityZone* GorillaTag::Gravity::BasicGravityZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Gravity::BasicGravityZone*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICallbackUnique"
constexpr  GorillaTag::Gravity::BasicGravityZone::operator ::GlobalNamespace::ICallbackUnique*() noexcept {
return static_cast<::GlobalNamespace::ICallbackUnique*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICallbackUnique"
constexpr ::GlobalNamespace::ICallbackUnique* GorillaTag::Gravity::BasicGravityZone::i___GlobalNamespace__ICallbackUnique() noexcept {
return static_cast<::GlobalNamespace::ICallbackUnique*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr  GorillaTag::Gravity::BasicGravityZone::operator ::GlobalNamespace::ICallBack*() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* GorillaTag::Gravity::BasicGravityZone::i___GlobalNamespace__ICallBack() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::BasicGravityZone::BasicGravityZone()   {
}
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::*)(int32_t)>(&::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d37af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::*)()>(&::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d37f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::*)()>(&::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::MoveNext)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d37f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::*)()>(&::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d38060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::*)()>(&::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d38068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::*)()>(&::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d380a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone>& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone> const& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_set___4__this(::UnityW<::GorillaTag::Gravity::BasicGravityZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController>& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController> const& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_set_target(::UnityW<::GorillaTag::Gravity::MonkeGravityController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr bool& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get_add()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___add;
}
constexpr bool const& GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_get_add() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___add;
}
constexpr void GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::__cordl_internal_set_add(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___add = value;
}
inline void GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47* GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47::BasicGravityZone__DelayedTransition_d__47()   {
}
