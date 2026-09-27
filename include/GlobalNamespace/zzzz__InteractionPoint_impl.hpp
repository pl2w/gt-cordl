#pragma once
// IWYU pragma private; include "GlobalNamespace/InteractionPoint.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__EquipmentInteractor_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__IHoldableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.get_ignoreLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::get_ignoreLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"get_ignoreLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.set_ignoreLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InteractionPoint::*)(bool)>(&::GlobalNamespace::InteractionPoint::set_ignoreLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"set_ignoreLeftHand", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.get_ignoreRightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::get_ignoreRightHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"get_ignoreRightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.set_ignoreRightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InteractionPoint::*)(bool)>(&::GlobalNamespace::InteractionPoint::set_ignoreRightHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"set_ignoreRightHand", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.get_Holdable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IHoldableObject* (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::get_Holdable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"get_Holdable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InteractionPoint::*)(bool)>(&::GlobalNamespace::InteractionPoint::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InteractionPoint::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::InteractionPoint::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InteractionPoint::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::InteractionPoint::OnSpawn)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5735568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.GorillaTag_ISpawnable_OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::GorillaTag_ISpawnable_OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5735950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5735954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::OnEnable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5735964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57359e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::LateUpdate)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5735a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.OverlapCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InteractionPoint::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::InteractionPoint::OverlapCheck)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5735df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"OverlapCheck", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::BuildValidationCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractionPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InteractionPoint::*)()>(&::GlobalNamespace::InteractionPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::InteractionPoint::__cordl_internal_get_parentHoldableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHoldableObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::InteractionPoint::__cordl_internal_get_parentHoldableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHoldableObject;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set_parentHoldableObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentHoldableObject = value;
}
constexpr ::GlobalNamespace::IHoldableObject*& GlobalNamespace::InteractionPoint::__cordl_internal_get_parentHoldable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHoldable;
}
constexpr ::GlobalNamespace::IHoldableObject* const& GlobalNamespace::InteractionPoint::__cordl_internal_get_parentHoldable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHoldable;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set_parentHoldable(::GlobalNamespace::IHoldableObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentHoldable = value;
}
constexpr bool& GlobalNamespace::InteractionPoint::__cordl_internal_get__ignoreLeftHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreLeftHand_k__BackingField;
}
constexpr bool const& GlobalNamespace::InteractionPoint::__cordl_internal_get__ignoreLeftHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreLeftHand_k__BackingField;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set__ignoreLeftHand_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ignoreLeftHand_k__BackingField = value;
}
constexpr bool& GlobalNamespace::InteractionPoint::__cordl_internal_get__ignoreRightHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreRightHand_k__BackingField;
}
constexpr bool const& GlobalNamespace::InteractionPoint::__cordl_internal_get__ignoreRightHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreRightHand_k__BackingField;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set__ignoreRightHand_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ignoreRightHand_k__BackingField = value;
}
constexpr bool& GlobalNamespace::InteractionPoint::__cordl_internal_get_isNonSpawnedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNonSpawnedObject;
}
constexpr bool const& GlobalNamespace::InteractionPoint::__cordl_internal_get_isNonSpawnedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNonSpawnedObject;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set_isNonSpawnedObject(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isNonSpawnedObject = value;
}
constexpr float_t& GlobalNamespace::InteractionPoint::__cordl_internal_get_interactionRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionRadius;
}
constexpr float_t const& GlobalNamespace::InteractionPoint::__cordl_internal_get_interactionRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionRadius;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set_interactionRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionRadius = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::InteractionPoint::__cordl_internal_get_myCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::InteractionPoint::__cordl_internal_get_myCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor>& GlobalNamespace::InteractionPoint::__cordl_internal_get_interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactor;
}
constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor> const& GlobalNamespace::InteractionPoint::__cordl_internal_get_interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactor;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set_interactor(::UnityW<::GlobalNamespace::EquipmentInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactor = value;
}
constexpr bool& GlobalNamespace::InteractionPoint::__cordl_internal_get_wasInLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInLeft;
}
constexpr bool const& GlobalNamespace::InteractionPoint::__cordl_internal_get_wasInLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInLeft;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set_wasInLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasInLeft = value;
}
constexpr bool& GlobalNamespace::InteractionPoint::__cordl_internal_get_wasInRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInRight;
}
constexpr bool const& GlobalNamespace::InteractionPoint::__cordl_internal_get_wasInRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInRight;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set_wasInRight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasInRight = value;
}
constexpr bool& GlobalNamespace::InteractionPoint::__cordl_internal_get_forLocalPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forLocalPlayer;
}
constexpr bool const& GlobalNamespace::InteractionPoint::__cordl_internal_get_forLocalPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forLocalPlayer;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set_forLocalPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forLocalPlayer = value;
}
constexpr bool& GlobalNamespace::InteractionPoint::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::InteractionPoint::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::InteractionPoint::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::InteractionPoint::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::InteractionPoint::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
inline bool GlobalNamespace::InteractionPoint::get_ignoreLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"get_ignoreLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::InteractionPoint::set_ignoreLeftHand(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"set_ignoreLeftHand", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::InteractionPoint::get_ignoreRightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"get_ignoreRightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::InteractionPoint::set_ignoreRightHand(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"set_ignoreRightHand", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IHoldableObject* GlobalNamespace::InteractionPoint::get_Holdable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"get_Holdable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IHoldableObject*>(this, ___internal_method);
}
inline bool GlobalNamespace::InteractionPoint::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::InteractionPoint::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::InteractionPoint::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::InteractionPoint::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::InteractionPoint::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::InteractionPoint::GorillaTag_ISpawnable_OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InteractionPoint::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InteractionPoint::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InteractionPoint::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InteractionPoint::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::InteractionPoint::OverlapCheck(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"OverlapCheck", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point);
}
inline bool GlobalNamespace::InteractionPoint::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::InteractionPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractionPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InteractionPoint* GlobalNamespace::InteractionPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InteractionPoint*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::InteractionPoint::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::InteractionPoint::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::InteractionPoint::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::InteractionPoint::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InteractionPoint::InteractionPoint()   {
}
