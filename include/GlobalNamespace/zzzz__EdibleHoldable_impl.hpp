#pragma once
// IWYU pragma private; include "GlobalNamespace/EdibleHoldable.hpp"
#include "GlobalNamespace/zzzz__EdibleHoldable_EdibleHoldableStates_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GorillaTag/zzzz__IResettableItem_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__EdibleHoldable_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__EdibleHoldable_EdibleHoldableStates_def.hpp"
#include "GlobalNamespace/zzzz__EdibleHoldable_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.get_lastBiterActorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::get_lastBiterActorID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5757ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                        {"get_lastBiterActorID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.set_lastBiterActorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable::*)(int32_t)>(&::GlobalNamespace::EdibleHoldable::set_lastBiterActorID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5757cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                        {"set_lastBiterActorID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5757cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::EdibleHoldable::OnGrab)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5757d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.OnActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::OnActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5757da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5757da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5757db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.ResetToDefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::ResetToDefaultState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5757db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EdibleHoldable::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::EdibleHoldable::OnRelease)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5757dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::LateUpdateLocal)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x5757df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::LateUpdateShared)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x575845c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.OnEdibleHoldableStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::OnEdibleHoldableStateChange)> {
  constexpr static std::size_t size = 0x734;
  constexpr static std::size_t addrs = 0x57584a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.CanActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::CanActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5758bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable.CanDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::CanDeactivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5758be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable::*)()>(&::GlobalNamespace::EdibleHoldable::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5758be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::EdibleHoldable::__cordl_internal_get_eatSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatSounds;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_eatSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatSounds;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_eatSounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eatSounds = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::EdibleHoldable::__cordl_internal_get_edibleMeshObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___edibleMeshObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_edibleMeshObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___edibleMeshObjects;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_edibleMeshObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___edibleMeshObjects = value;
}
constexpr int32_t& GlobalNamespace::EdibleHoldable::__cordl_internal_get__lastBiterActorID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBiterActorID_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::EdibleHoldable::__cordl_internal_get__lastBiterActorID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBiterActorID_k__BackingField;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set__lastBiterActorID_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastBiterActorID_k__BackingField = value;
}
constexpr ::GlobalNamespace::EdibleHoldable_BiteEvent*& GlobalNamespace::EdibleHoldable::__cordl_internal_get_onBiteView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBiteView;
}
constexpr ::GlobalNamespace::EdibleHoldable_BiteEvent* const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_onBiteView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBiteView;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_onBiteView(::GlobalNamespace::EdibleHoldable_BiteEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBiteView = value;
}
constexpr ::GlobalNamespace::EdibleHoldable_BiteEvent*& GlobalNamespace::EdibleHoldable::__cordl_internal_get_onBiteWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBiteWorld;
}
constexpr ::GlobalNamespace::EdibleHoldable_BiteEvent* const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_onBiteWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBiteWorld;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_onBiteWorld(::GlobalNamespace::EdibleHoldable_BiteEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBiteWorld = value;
}
constexpr float_t& GlobalNamespace::EdibleHoldable::__cordl_internal_get_lastEatTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEatTime;
}
constexpr float_t const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_lastEatTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEatTime;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_lastEatTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastEatTime = value;
}
constexpr float_t& GlobalNamespace::EdibleHoldable::__cordl_internal_get_lastFullyEatenTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFullyEatenTime;
}
constexpr float_t const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_lastFullyEatenTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFullyEatenTime;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_lastFullyEatenTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFullyEatenTime = value;
}
constexpr float_t& GlobalNamespace::EdibleHoldable::__cordl_internal_get_eatMinimumCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatMinimumCooldown;
}
constexpr float_t const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_eatMinimumCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatMinimumCooldown;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_eatMinimumCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eatMinimumCooldown = value;
}
constexpr float_t& GlobalNamespace::EdibleHoldable::__cordl_internal_get_respawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTime;
}
constexpr float_t const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_respawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTime;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_respawnTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnTime = value;
}
constexpr float_t& GlobalNamespace::EdibleHoldable::__cordl_internal_get_biteDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biteDistance;
}
constexpr float_t const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_biteDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biteDistance;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_biteDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___biteDistance = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::EdibleHoldable::__cordl_internal_get_biteOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biteOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_biteOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biteOffset;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_biteOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___biteOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::EdibleHoldable::__cordl_internal_get_biteSpot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biteSpot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_biteSpot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biteSpot;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_biteSpot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___biteSpot = value;
}
constexpr bool& GlobalNamespace::EdibleHoldable::__cordl_internal_get_inBiteZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inBiteZone;
}
constexpr bool const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_inBiteZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inBiteZone;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_inBiteZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inBiteZone = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::EdibleHoldable::__cordl_internal_get_eatSoundSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatSoundSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_eatSoundSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatSoundSource;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_eatSoundSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eatSoundSource = value;
}
constexpr ::GlobalNamespace::EdibleHoldable_EdibleHoldableStates& GlobalNamespace::EdibleHoldable::__cordl_internal_get_previousEdibleState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousEdibleState;
}
constexpr ::GlobalNamespace::EdibleHoldable_EdibleHoldableStates const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_previousEdibleState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousEdibleState;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_previousEdibleState(::GlobalNamespace::EdibleHoldable_EdibleHoldableStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousEdibleState = value;
}
constexpr ::ArrayW<::GorillaTag::IResettableItem*>& GlobalNamespace::EdibleHoldable::__cordl_internal_get_iResettableItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iResettableItems;
}
constexpr ::ArrayW<::GorillaTag::IResettableItem*> const& GlobalNamespace::EdibleHoldable::__cordl_internal_get_iResettableItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iResettableItems;
}
constexpr void GlobalNamespace::EdibleHoldable::__cordl_internal_set_iResettableItems(::ArrayW<::GorillaTag::IResettableItem*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iResettableItems = value;
}
inline int32_t GlobalNamespace::EdibleHoldable::get_lastBiterActorID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                        {"get_lastBiterActorID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::EdibleHoldable::set_lastBiterActorID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                        {"set_lastBiterActorID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EdibleHoldable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EdibleHoldable::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::EdibleHoldable::OnActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EdibleHoldable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EdibleHoldable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EdibleHoldable::ResetToDefaultState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EdibleHoldable::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::EdibleHoldable::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EdibleHoldable::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EdibleHoldable::OnEdibleHoldableStateChange()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EdibleHoldable::CanActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EdibleHoldable::CanDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::EdibleHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdibleHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EdibleHoldable* GlobalNamespace::EdibleHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EdibleHoldable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EdibleHoldable::EdibleHoldable()   {
}
//  Writing Method size for method: ::GlobalNamespace::EdibleHoldable_BiteEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdibleHoldable_BiteEvent::*)()>(&::GlobalNamespace::EdibleHoldable_BiteEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5758c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdibleHoldable_BiteEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EdibleHoldable_BiteEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdibleHoldable_BiteEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EdibleHoldable_BiteEvent* GlobalNamespace::EdibleHoldable_BiteEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EdibleHoldable_BiteEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EdibleHoldable_BiteEvent::EdibleHoldable_BiteEvent()   {
}
