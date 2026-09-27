#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIK.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaIK_def.hpp"
#include "GlobalNamespace/zzzz__GorillaIK_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__VRRigAnchorOverrides_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5913940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::OnEnable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5913b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5913d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.ResetIKData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::ResetIKData)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x59139f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"ResetIKData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.CanUpdateIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::CanUpdateIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5913f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CanUpdateIK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.DelayedUpdateIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)(bool)>(&::GlobalNamespace::GorillaIK::DelayedUpdateIK)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5913f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"DelayedUpdateIK", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.DoDelayedUpdateIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaIK::*)(bool)>(&::GlobalNamespace::GorillaIK::DoDelayedUpdateIK)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5913f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"DoDelayedUpdateIK", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5914004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)(bool)>(&::GlobalNamespace::GorillaIK::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591400c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.OverrideTargetPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)(bool, ::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaIK::OverrideTargetPos)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5914014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"OverrideTargetPos", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.GetShoulderLocalTargetPos_Left
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GorillaIK::*)(bool)>(&::GlobalNamespace::GorillaIK::GetShoulderLocalTargetPos_Left)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5914048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"GetShoulderLocalTargetPos_Left", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.GetShoulderLocalTargetPos_Right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GorillaIK::*)(bool)>(&::GlobalNamespace::GorillaIK::GetShoulderLocalTargetPos_Right)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5914144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"GetShoulderLocalTargetPos_Right", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.ClearOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::ClearOverrides)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5914240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"ClearOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.SkeletonUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::SkeletonUpdate)> {
  constexpr static std::size_t size = 0x8d0;
  constexpr static std::size_t addrs = 0x591424c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"SkeletonUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.CalibrateLeanOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::CalibrateLeanOffset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5914b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CalibrateLeanOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.CalibrateLeanOffsetCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::CalibrateLeanOffsetCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5914b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CalibrateLeanOffsetCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.ResetLeanOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::ResetLeanOffset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5914bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"ResetLeanOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.LoadLeanOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::LoadLeanOffset)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5914d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"LoadLeanOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.SaveLeanOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::SaveLeanOffset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5914c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"SaveLeanOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.CalculateAverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GorillaIK::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::GorillaIK::CalculateAverage)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5914e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CalculateAverage", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.CalculateAverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::GorillaIK::*)(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*, int32_t)>(&::GlobalNamespace::GorillaIK::CalculateAverage)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5914f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CalculateAverage", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.CheckPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::CheckPermissions)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5915038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CheckPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK.PermissionGranted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)(::StringW)>(&::GlobalNamespace::GorillaIK::PermissionGranted)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5915140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"PermissionGranted", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK::*)()>(&::GlobalNamespace::GorillaIK::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5915240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_headBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_headBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headBone;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_headBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headBone = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_bodyBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_bodyBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyBone;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_bodyBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyBone = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_leftUpperArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftUpperArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_leftUpperArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftUpperArm;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_leftUpperArm(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftUpperArm = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_leftLowerArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftLowerArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_leftLowerArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftLowerArm;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_leftLowerArm(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftLowerArm = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_rightUpperArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightUpperArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_rightUpperArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightUpperArm;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_rightUpperArm(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightUpperArm = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_rightLowerArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightLowerArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_rightLowerArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightLowerArm;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_rightLowerArm(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightLowerArm = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_targetLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_targetLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetLeft;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_targetLeft(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetLeft = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_targetRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_targetRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRight;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_targetRight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRight = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_targetHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetHead;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_targetHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetHead;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_targetHead(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetHead = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaIK::__cordl_internal_get_initialUpperLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialUpperLeft;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaIK::__cordl_internal_get_initialUpperLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialUpperLeft;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_initialUpperLeft(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialUpperLeft = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaIK::__cordl_internal_get_initialLowerLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLowerLeft;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaIK::__cordl_internal_get_initialLowerLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLowerLeft;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_initialLowerLeft(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialLowerLeft = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaIK::__cordl_internal_get_initialUpperRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialUpperRight;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaIK::__cordl_internal_get_initialUpperRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialUpperRight;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_initialUpperRight(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialUpperRight = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaIK::__cordl_internal_get_initialLowerRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLowerRight;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaIK::__cordl_internal_get_initialLowerRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLowerRight;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_initialLowerRight(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialLowerRight = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaIK::__cordl_internal_get_targetBodyRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetBodyRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaIK::__cordl_internal_get_targetBodyRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetBodyRot;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_targetBodyRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetBodyRot = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaIK::__cordl_internal_get_lerpBodyRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpBodyRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaIK::__cordl_internal_get_lerpBodyRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpBodyRot;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_lerpBodyRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpBodyRot = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaIK::__cordl_internal_get_leftElbowDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftElbowDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaIK::__cordl_internal_get_leftElbowDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftElbowDirection;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_leftElbowDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftElbowDirection = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaIK::__cordl_internal_get_lerpLeftElbowDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpLeftElbowDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaIK::__cordl_internal_get_lerpLeftElbowDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpLeftElbowDirection;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_lerpLeftElbowDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpLeftElbowDirection = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaIK::__cordl_internal_get_rightElbowDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightElbowDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaIK::__cordl_internal_get_rightElbowDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightElbowDirection;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_rightElbowDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightElbowDirection = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaIK::__cordl_internal_get_lerpRightElbowDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpRightElbowDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaIK::__cordl_internal_get_lerpRightElbowDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpRightElbowDirection;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_lerpRightElbowDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpRightElbowDirection = value;
}
constexpr bool& GlobalNamespace::GorillaIK::__cordl_internal_get_usingUpdatedIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingUpdatedIK;
}
constexpr bool const& GlobalNamespace::GorillaIK::__cordl_internal_get_usingUpdatedIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingUpdatedIK;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_usingUpdatedIK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usingUpdatedIK = value;
}
constexpr bool& GlobalNamespace::GorillaIK::__cordl_internal_get_canUseUpdatedIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canUseUpdatedIK;
}
constexpr bool const& GlobalNamespace::GorillaIK::__cordl_internal_get_canUseUpdatedIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canUseUpdatedIK;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_canUseUpdatedIK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canUseUpdatedIK = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GorillaIK::__cordl_internal_get_useUpdatedIKCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useUpdatedIKCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GorillaIK::__cordl_internal_get_useUpdatedIKCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useUpdatedIKCoroutine;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_useUpdatedIKCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useUpdatedIKCoroutine = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaIK::__cordl_internal_get_bodyOffsetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyOffsetRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaIK::__cordl_internal_get_bodyOffsetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyOffsetRotation;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_bodyOffsetRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyOffsetRotation = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaIK::__cordl_internal_get_leanOffsetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leanOffsetRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaIK::__cordl_internal_get_leanOffsetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leanOffsetRotation;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_leanOffsetRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leanOffsetRotation = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& GlobalNamespace::GorillaIK::__cordl_internal_get_skeleton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skeleton;
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& GlobalNamespace::GorillaIK::__cordl_internal_get_skeleton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skeleton;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_skeleton(::UnityW<::GlobalNamespace::OVRSkeleton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skeleton = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::GorillaIK::__cordl_internal_get_boneXforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneXforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::GorillaIK::__cordl_internal_get_boneXforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneXforms;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_boneXforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneXforms = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaIK::__cordl_internal_get_bodyInitialRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyInitialRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaIK::__cordl_internal_get_bodyInitialRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyInitialRot;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_bodyInitialRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyInitialRot = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_projectedBodyRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectedBodyRotation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_projectedBodyRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectedBodyRotation;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_projectedBodyRotation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectedBodyRotation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_projectedLeftShoulderPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectedLeftShoulderPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_projectedLeftShoulderPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectedLeftShoulderPosition;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_projectedLeftShoulderPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectedLeftShoulderPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_projectedRightShoulderPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectedRightShoulderPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_projectedRightShoulderPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectedRightShoulderPosition;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_projectedRightShoulderPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectedRightShoulderPosition = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaIK::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaIK::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr float_t& GlobalNamespace::GorillaIK::__cordl_internal_get_biasDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biasDistance;
}
constexpr float_t const& GlobalNamespace::GorillaIK::__cordl_internal_get_biasDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biasDistance;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_biasDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___biasDistance = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>& GlobalNamespace::GorillaIK::__cordl_internal_get_anchorOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorOverrides;
}
constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides> const& GlobalNamespace::GorillaIK::__cordl_internal_get_anchorOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorOverrides;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_anchorOverrides(::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorOverrides = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GorillaIK::__cordl_internal_get_calibrateCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calibrateCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GorillaIK::__cordl_internal_get_calibrateCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calibrateCoroutine;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_calibrateCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calibrateCoroutine = value;
}
constexpr bool& GlobalNamespace::GorillaIK::__cordl_internal_get_calibrating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calibrating;
}
constexpr bool const& GlobalNamespace::GorillaIK::__cordl_internal_get_calibrating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calibrating;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_calibrating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calibrating = value;
}
constexpr bool& GlobalNamespace::GorillaIK::__cordl_internal_get_hasLeftOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLeftOverride;
}
constexpr bool const& GlobalNamespace::GorillaIK::__cordl_internal_get_hasLeftOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLeftOverride;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_hasLeftOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasLeftOverride = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaIK::__cordl_internal_get_leftOverrideWorldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftOverrideWorldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaIK::__cordl_internal_get_leftOverrideWorldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftOverrideWorldPos;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_leftOverrideWorldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftOverrideWorldPos = value;
}
constexpr bool& GlobalNamespace::GorillaIK::__cordl_internal_get_hasRightOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRightOverride;
}
constexpr bool const& GlobalNamespace::GorillaIK::__cordl_internal_get_hasRightOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRightOverride;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_hasRightOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasRightOverride = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaIK::__cordl_internal_get_rightOverrideWorldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightOverrideWorldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaIK::__cordl_internal_get_rightOverrideWorldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightOverrideWorldPos;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_rightOverrideWorldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightOverrideWorldPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaIK::__cordl_internal_get_renderDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDisplacement;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaIK::__cordl_internal_get_renderDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDisplacement;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_renderDisplacement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderDisplacement = value;
}
constexpr bool& GlobalNamespace::GorillaIK::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::GorillaIK::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___body;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___body;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_body(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___body = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_leftArmUpper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmUpper;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_leftArmUpper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmUpper;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_leftArmUpper(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmUpper = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_leftArmLower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmLower;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_leftArmLower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmLower;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_leftArmLower(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmLower = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_rightArmUpper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmUpper;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_rightArmUpper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmUpper;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_rightArmUpper(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmUpper = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaIK::__cordl_internal_get_rightArmLower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmLower;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaIK::__cordl_internal_get_rightArmLower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmLower;
}
constexpr void GlobalNamespace::GorillaIK::__cordl_internal_set_rightArmLower(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmLower = value;
}
inline void GlobalNamespace::GorillaIK::setStaticF_playerIK(::UnityW<::GlobalNamespace::GorillaIK>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaIK>, "playerIK", ::GlobalNamespace::GorillaIK*>(std::forward<::UnityW<::GlobalNamespace::GorillaIK>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaIK> GlobalNamespace::GorillaIK::getStaticF_playerIK()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaIK>, "playerIK", ::GlobalNamespace::GorillaIK*>();
}
inline void GlobalNamespace::GorillaIK::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK::ResetIKData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"ResetIKData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaIK::CanUpdateIK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CanUpdateIK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK::DelayedUpdateIK(bool  usingIK)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"DelayedUpdateIK", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usingIK);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaIK::DoDelayedUpdateIK(bool  usingIK)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"DoDelayedUpdateIK", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, usingIK);
}
inline bool GlobalNamespace::GorillaIK::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GorillaIK::OverrideTargetPos(bool  isLeftHand, ::UnityEngine::Vector3  targetWorldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"OverrideTargetPos", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, targetWorldPos);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GorillaIK::GetShoulderLocalTargetPos_Left(bool  updatedIK)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"GetShoulderLocalTargetPos_Left", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, updatedIK);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GorillaIK::GetShoulderLocalTargetPos_Right(bool  updatedIK)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"GetShoulderLocalTargetPos_Right", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, updatedIK);
}
inline void GlobalNamespace::GorillaIK::ClearOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"ClearOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK::SkeletonUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"SkeletonUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK::CalibrateLeanOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CalibrateLeanOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaIK::CalibrateLeanOffsetCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CalibrateLeanOffsetCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK::ResetLeanOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"ResetLeanOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK::LoadLeanOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"LoadLeanOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK::SaveLeanOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"SaveLeanOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GorillaIK::CalculateAverage(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vecs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CalculateAverage", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, vecs);
}
inline ::UnityEngine::Quaternion GlobalNamespace::GorillaIK::CalculateAverage(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  quats, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CalculateAverage", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, quats, index);
}
inline void GlobalNamespace::GorillaIK::CheckPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"CheckPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK::PermissionGranted(::StringW  permissionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {"PermissionGranted", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionName);
}
inline void GlobalNamespace::GorillaIK::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaIK* GlobalNamespace::GorillaIK::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaIK*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIK::GorillaIK()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::*)(int32_t)>(&::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5913fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::*)()>(&::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5915678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::*)()>(&::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::MoveNext)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x591567c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::*)()>(&::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5915794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::*)()>(&::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x591579c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::*)()>(&::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59157d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaIK>& GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaIK> const& GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaIK>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_get_usingIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingIK;
}
constexpr bool const& GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_get_usingIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingIK;
}
constexpr void GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::__cordl_internal_set_usingIK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usingIK = value;
}
inline void GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45* GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45::GorillaIK__DoDelayedUpdateIK_d__45()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::*)(int32_t)>(&::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5914bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::*)()>(&::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59152a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::*)()>(&::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::MoveNext)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x59152ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::*)()>(&::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5915630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::*)()>(&::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5915638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::*)()>(&::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5915670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaIK>& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaIK> const& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaIK>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get__vecs_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vecs_5__2;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get__vecs_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vecs_5__2;
}
constexpr void GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_set__vecs_5__2(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vecs_5__2 = value;
}
constexpr int32_t& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get__maxTries_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTries_5__3;
}
constexpr int32_t const& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get__maxTries_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTries_5__3;
}
constexpr void GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_set__maxTries_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxTries_5__3 = value;
}
constexpr int32_t& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get__tries_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tries_5__4;
}
constexpr int32_t const& GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_get__tries_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tries_5__4;
}
constexpr void GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::__cordl_internal_set__tries_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tries_5__4 = value;
}
inline void GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66* GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66::GorillaIK__CalibrateLeanOffsetCoroutine_d__66()   {
}
