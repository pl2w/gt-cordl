#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/FartBagThrowable.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__FartBagThrowable_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IProjectile_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__UpdateBlendShapeCosmetic_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.get_ParentTransferable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::TransferrableObject> (::GorillaTag::Cosmetics::FartBagThrowable::*)()>(&::GorillaTag::Cosmetics::FartBagThrowable::get_ParentTransferable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d954dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"get_ParentTransferable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.set_ParentTransferable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)(::GlobalNamespace::TransferrableObject*)>(&::GorillaTag::Cosmetics::FartBagThrowable::set_ParentTransferable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d954e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"set_ParentTransferable", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.add_OnDeflated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)(::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*)>(&::GorillaTag::Cosmetics::FartBagThrowable::add_OnDeflated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d954ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"add_OnDeflated", {}, {::i2c::type_of<::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.remove_OnDeflated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)(::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*)>(&::GorillaTag::Cosmetics::FartBagThrowable::remove_OnDeflated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d9559c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"remove_OnDeflated", {}, {::i2c::type_of<::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)()>(&::GorillaTag::Cosmetics::FartBagThrowable::OnEnable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d9564c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)()>(&::GorillaTag::Cosmetics::FartBagThrowable::Update)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d95760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::VRRig*, int32_t)>(&::GorillaTag::Cosmetics::FartBagThrowable::Launch)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5d95968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.InitialPhotonEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)()>(&::GorillaTag::Cosmetics::FartBagThrowable::InitialPhotonEvent)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5d95abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"InitialPhotonEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)(::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::FartBagThrowable::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5d95d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)(::UnityEngine::Collision*)>(&::GorillaTag::Cosmetics::FartBagThrowable::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5d96140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.Deflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)()>(&::GorillaTag::Cosmetics::FartBagThrowable::Deflate)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5d95f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"Deflate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.DeflateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::FartBagThrowable::DeflateEvent)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5d96408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"DeflateEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.DeflateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)()>(&::GorillaTag::Cosmetics::FartBagThrowable::DeflateLocal)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5d95798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"DeflateLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.DisableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)()>(&::GorillaTag::Cosmetics::FartBagThrowable::DisableObject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d96668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"DisableObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)()>(&::GorillaTag::Cosmetics::FartBagThrowable::OnDestroy)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5d96698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FartBagThrowable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FartBagThrowable::*)()>(&::GorillaTag::Cosmetics::FartBagThrowable::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d967d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_deflationEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deflationEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_deflationEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deflationEffect;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_deflationEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deflationEffect = value;
}
constexpr float_t& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_destroyWhenDeflateDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyWhenDeflateDelay;
}
constexpr float_t const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_destroyWhenDeflateDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyWhenDeflateDelay;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_destroyWhenDeflateDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyWhenDeflateDelay = value;
}
constexpr float_t& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_forceDestroyAfterSec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceDestroyAfterSec;
}
constexpr float_t const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_forceDestroyAfterSec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceDestroyAfterSec;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_forceDestroyAfterSec(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceDestroyAfterSec = value;
}
constexpr float_t& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_placementOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementOffset;
}
constexpr float_t const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_placementOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementOffset;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_placementOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placementOffset = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_updateBlendShapeCosmetic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateBlendShapeCosmetic;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic> const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_updateBlendShapeCosmetic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateBlendShapeCosmetic;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_updateBlendShapeCosmetic(::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateBlendShapeCosmetic = value;
}
constexpr ::UnityEngine::LayerMask& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_floorLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_floorLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorLayerMask;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_floorLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floorLayerMask = value;
}
constexpr ::UnityEngine::LayerMask& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_handLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_handLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handLayerMask;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_handLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handLayerMask = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidbody = value;
}
constexpr bool& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_placedOnFloor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedOnFloor;
}
constexpr bool const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_placedOnFloor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedOnFloor;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_placedOnFloor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placedOnFloor = value;
}
constexpr float_t& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_placedOnFloorTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedOnFloorTime;
}
constexpr float_t const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_placedOnFloorTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedOnFloorTime;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_placedOnFloorTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placedOnFloorTime = value;
}
constexpr float_t& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_timeCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCreated;
}
constexpr float_t const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_timeCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCreated;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_timeCreated(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeCreated = value;
}
constexpr bool& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_deflated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deflated;
}
constexpr bool const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_deflated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deflated;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_deflated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deflated = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_handContactPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handContactPoint;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_handContactPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handContactPoint;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_handContactPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handContactPoint = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_handNormalVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handNormalVector;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_handNormalVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handNormalVector;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_handNormalVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handNormalVector = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_callLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_callLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiter = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get__ParentTransferable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParentTransferable_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get__ParentTransferable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParentTransferable_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set__ParentTransferable_k__BackingField(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParentTransferable_k__BackingField = value;
}
constexpr ::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_OnDeflated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDeflated;
}
constexpr ::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>* const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get_OnDeflated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDeflated;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set_OnDeflated(::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDeflated = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::FartBagThrowable::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
inline ::UnityW<::GlobalNamespace::TransferrableObject> GorillaTag::Cosmetics::FartBagThrowable::get_ParentTransferable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"get_ParentTransferable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TransferrableObject>>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::set_ParentTransferable(::GlobalNamespace::TransferrableObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"set_ParentTransferable", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::add_OnDeflated(::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"add_OnDeflated", {}, {::i2c::type_of<::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::remove_OnDeflated(::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"remove_OnDeflated", {}, {::i2c::type_of<::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPosition, startRotation, velocity, chargeFrac, ownerRig, progress);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::InitialPhotonEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"InitialPhotonEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::OnCollisionEnter(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::Deflate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"Deflate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::DeflateEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"DeflateEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::DeflateLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"DeflateLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::DisableObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"DisableObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FartBagThrowable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FartBagThrowable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::FartBagThrowable* GorillaTag::Cosmetics::FartBagThrowable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::FartBagThrowable*>());
}
/// @brief Convert operator to "::GorillaTag::Cosmetics::IProjectile"
constexpr  GorillaTag::Cosmetics::FartBagThrowable::operator ::GorillaTag::Cosmetics::IProjectile*() noexcept {
return static_cast<::GorillaTag::Cosmetics::IProjectile*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::Cosmetics::IProjectile"
constexpr ::GorillaTag::Cosmetics::IProjectile* GorillaTag::Cosmetics::FartBagThrowable::i___GorillaTag__Cosmetics__IProjectile() noexcept {
return static_cast<::GorillaTag::Cosmetics::IProjectile*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::FartBagThrowable::FartBagThrowable()   {
}
