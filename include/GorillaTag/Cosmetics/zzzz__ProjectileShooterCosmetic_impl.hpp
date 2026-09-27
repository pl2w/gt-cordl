#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ProjectileShooterCosmetic.hpp"
#include "GorillaTag/Cosmetics/zzzz__ProjectileShooterCosmetic_ShootActivator_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ProjectileShooterCosmetic_ShootDirection_impl.hpp"
#include "GorillaTag/zzzz__HashWrapper_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ProjectileShooterCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ProjectileShooterCosmetic_ShootActivator_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ProjectileShooterCosmetic_ShootDirection_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.IsMovementShoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::IsMovementShoot)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d9e3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"IsMovementShoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.IsRigDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::IsRigDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d9e3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"IsRigDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.get_shootingAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::get_shootingAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9e40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"get_shootingAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.set_shootingAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::set_shootingAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9e414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"set_shootingAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.get_IsCoolingDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::get_IsCoolingDown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d9e41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"get_IsCoolingDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::Awake)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5d9e42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9e648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9e650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::Tick)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x5d9e658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.GetVectorFromBodyToLaunchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::GetVectorFromBodyToLaunchPosition)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d9ed7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"GetVectorFromBodyToLaunchPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.GetShootPositionAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::GetShootPositionAndRotation)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d9ee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"GetShootPositionAndRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.Shoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::Shoot)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5d9ef04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"Shoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.TryShoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::TryShoot)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9ede8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"TryShoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.TryRunHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)(float_t, float_t)>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::TryRunHaptics)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5d9ebd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"TryRunHaptics", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.GetChargeFrac
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::GetChargeFrac)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d9eb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"GetChargeFrac", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.SetPressState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::SetPressState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d9eb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"SetPressState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.OnButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::OnButtonPressed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d9f4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"OnButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.OnButtonReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::OnButtonReleased)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d9f568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"OnButtonReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.ResetShoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::ResetShoot)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d9f628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"ResetShoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic.AttachTrail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)(int32_t, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, bool, bool)>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::AttachTrail)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5d9f32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"AttachTrail", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ProjectileShooterCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ProjectileShooterCosmetic::*)()>(&::GorillaTag::Cosmetics::ProjectileShooterCosmetic::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d9f6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTag::HashWrapper& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::GorillaTag::HashWrapper const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_projectilePrefab(::GorillaTag::HashWrapper  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr ::GorillaTag::HashWrapper& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_projectileTrailPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileTrailPrefab;
}
constexpr ::GorillaTag::HashWrapper const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_projectileTrailPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileTrailPrefab;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_projectileTrailPrefab(::GorillaTag::HashWrapper  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileTrailPrefab = value;
}
constexpr ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootActivatorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootActivatorType;
}
constexpr ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootActivatorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootActivatorType;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_shootActivatorType(::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootActivatorType = value;
}
constexpr ::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootDirectionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootDirectionType;
}
constexpr ::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootDirectionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootDirectionType;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_shootDirectionType(::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootDirectionType = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_offsetRigPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetRigPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_offsetRigPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetRigPosition;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_offsetRigPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetRigPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootFromTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootFromTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootFromTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootFromTransform;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_shootFromTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootFromTransform = value;
}
constexpr bool& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_drawShootVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawShootVector;
}
constexpr bool const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_drawShootVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawShootVector;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_drawShootVector(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawShootVector = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_cooldownSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownSeconds;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_cooldownSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownSeconds;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_cooldownSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownSeconds = value;
}
constexpr bool& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_enableHaptics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableHaptics;
}
constexpr bool const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_enableHaptics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableHaptics;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_enableHaptics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableHaptics = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootHapticsIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootHapticsIntensity;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootHapticsIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootHapticsIntensity;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_shootHapticsIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootHapticsIntensity = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootHapticsDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootHapticsDuration;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootHapticsDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootHapticsDuration;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_shootHapticsDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootHapticsDuration = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_chargeHapticsIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeHapticsIntensity;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_chargeHapticsIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeHapticsIntensity;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_chargeHapticsIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeHapticsIntensity = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_maxChargeHapticsIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChargeHapticsIntensity;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_maxChargeHapticsIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChargeHapticsIntensity;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_maxChargeHapticsIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxChargeHapticsIntensity = value;
}
constexpr bool& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_hapticsBothHands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsBothHands;
}
constexpr bool const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_hapticsBothHands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsBothHands;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_hapticsBothHands(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticsBothHands = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_velocityEstimatorStartGestureSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorStartGestureSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_velocityEstimatorStartGestureSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorStartGestureSpeed;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_velocityEstimatorStartGestureSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimatorStartGestureSpeed = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_velocityEstimatorStopGestureSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorStopGestureSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_velocityEstimatorStopGestureSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorStopGestureSpeed;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_velocityEstimatorStopGestureSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimatorStopGestureSpeed = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_velocityEstimatorMinRigDotProduct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorMinRigDotProduct;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_velocityEstimatorMinRigDotProduct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorMinRigDotProduct;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_velocityEstimatorMinRigDotProduct(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimatorMinRigDotProduct = value;
}
constexpr bool& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_logVelocityEstimatorSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVelocityEstimatorSpeed;
}
constexpr bool const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_logVelocityEstimatorSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVelocityEstimatorSpeed;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_logVelocityEstimatorSpeed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVelocityEstimatorSpeed = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootMinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootMinSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootMinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootMinSpeed;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_shootMinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootMinSpeed = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootMaxSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_shootMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootMaxSpeed;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_shootMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootMaxSpeed = value;
}
constexpr bool& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_allowCharging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowCharging;
}
constexpr bool const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_allowCharging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowCharging;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_allowCharging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowCharging = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_maxChargeSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChargeSeconds;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_maxChargeSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChargeSeconds;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_maxChargeSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxChargeSeconds = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_snapToMaxChargeAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapToMaxChargeAt;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_snapToMaxChargeAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapToMaxChargeAt;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_snapToMaxChargeAt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapToMaxChargeAt = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_chargeDecaySpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDecaySpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_chargeDecaySpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDecaySpeed;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_chargeDecaySpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeDecaySpeed = value;
}
constexpr bool& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_runChargeCancelledEventOnShoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runChargeCancelledEventOnShoot;
}
constexpr bool const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_runChargeCancelledEventOnShoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runChargeCancelledEventOnShoot;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_runChargeCancelledEventOnShoot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runChargeCancelledEventOnShoot = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_chargeRateCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeRateCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_chargeRateCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeRateCurve;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_chargeRateCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeRateCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_chargeToShotSpeedCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeToShotSpeedCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_chargeToShotSpeedCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeToShotSpeedCurve;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_chargeToShotSpeedCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeToShotSpeedCurve = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onCooldownFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCooldownFinished;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onCooldownFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCooldownFinished;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_onCooldownFinished(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCooldownFinished = value;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_continuousChargingProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousChargingProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_continuousChargingProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousChargingProperties;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_continuousChargingProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousChargingProperties = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_whileCharging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileCharging;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_whileCharging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileCharging;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_whileCharging(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whileCharging = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onMaxCharge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaxCharge;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onMaxCharge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaxCharge;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_onMaxCharge(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onMaxCharge = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onChargeCancelled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChargeCancelled;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onChargeCancelled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChargeCancelled;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_onChargeCancelled(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChargeCancelled = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onShoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onShoot;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onShoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onShoot;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_onShoot(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onShoot = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onShootLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onShootLocal;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onShootLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onShootLocal;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_onShootLocal(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onShootLocal = value;
}
constexpr int32_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_numberOfProgressSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numberOfProgressSteps;
}
constexpr int32_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_numberOfProgressSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numberOfProgressSteps;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_numberOfProgressSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numberOfProgressSteps = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onMovedToNextStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMovedToNextStep;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onMovedToNextStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMovedToNextStep;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_onMovedToNextStep(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onMovedToNextStep = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onReachedLastProgressStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReachedLastProgressStep;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_onReachedLastProgressStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReachedLastProgressStep;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_onReachedLastProgressStep(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onReachedLastProgressStep = value;
}
constexpr int32_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_currentStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStep;
}
constexpr int32_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_currentStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStep;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_currentStep(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentStep = value;
}
constexpr int32_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_lastStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStep;
}
constexpr int32_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_lastStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStep;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_lastStep(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStep = value;
}
constexpr bool& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get__shootingAllowed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shootingAllowed_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get__shootingAllowed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shootingAllowed_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set__shootingAllowed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shootingAllowed_k__BackingField = value;
}
constexpr bool& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_isPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPressed;
}
constexpr bool const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_isPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPressed;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_isPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPressed = value;
}
constexpr bool& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_velocityEstimatorThresholdMet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorThresholdMet;
}
constexpr bool const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_velocityEstimatorThresholdMet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorThresholdMet;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_velocityEstimatorThresholdMet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimatorThresholdMet = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_cooldownRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownRemaining;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_cooldownRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownRemaining;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_cooldownRemaining(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownRemaining = value;
}
constexpr float_t& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_chargeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeTime;
}
constexpr float_t const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_chargeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeTime;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_chargeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeTime = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_transferrableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_transferrableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableObject = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr bool& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_isLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr bool const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_isLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_isLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLocal = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_debugShootDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugShootDirection;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get_debugShootDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugShootDirection;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set_debugShootDirection(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugShootDirection = value;
}
constexpr bool& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::ProjectileShooterCosmetic::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline bool GorillaTag::Cosmetics::ProjectileShooterCosmetic::IsMovementShoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"IsMovementShoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ProjectileShooterCosmetic::IsRigDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"IsRigDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ProjectileShooterCosmetic::get_shootingAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"get_shootingAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::set_shootingAllowed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"set_shootingAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTag::Cosmetics::ProjectileShooterCosmetic::get_IsCoolingDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"get_IsCoolingDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ProjectileShooterCosmetic::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTag::Cosmetics::ProjectileShooterCosmetic::GetVectorFromBodyToLaunchPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"GetVectorFromBodyToLaunchPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::GetShootPositionAndRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"GetShootPositionAndRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::Shoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"Shoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ProjectileShooterCosmetic::TryShoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"TryShoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::TryRunHaptics(float_t  intensity, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"TryRunHaptics", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intensity, duration);
}
inline float_t GorillaTag::Cosmetics::ProjectileShooterCosmetic::GetChargeFrac()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"GetChargeFrac", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::SetPressState(bool  pressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"SetPressState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressed);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::OnButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"OnButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::OnButtonReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"OnButtonReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::ResetShoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"ResetShoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::AttachTrail(int32_t  trailHash, ::UnityEngine::GameObject*  newProjectile, ::UnityEngine::Vector3  location, bool  blueTeam, bool  orangeTeam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {"AttachTrail", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailHash, newProjectile, location, blueTeam, orangeTeam);
}
inline void GorillaTag::Cosmetics::ProjectileShooterCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ProjectileShooterCosmetic* GorillaTag::Cosmetics::ProjectileShooterCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ProjectileShooterCosmetic*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::Cosmetics::ProjectileShooterCosmetic::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::Cosmetics::ProjectileShooterCosmetic::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ProjectileShooterCosmetic::ProjectileShooterCosmetic()   {
}
