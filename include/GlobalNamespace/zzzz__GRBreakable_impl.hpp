#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBreakable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRBreakable_def.hpp"
#include "GlobalNamespace/zzzz__GRBreakableItemSpawnConfig_def.hpp"
#include "GlobalNamespace/zzzz__GRBreakable_BreakableState_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "GlobalNamespace/zzzz__IGameHittable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRBreakable.get_BrokenLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRBreakable::*)()>(&::GlobalNamespace::GRBreakable::get_BrokenLocal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5873cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"get_BrokenLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBreakable::*)()>(&::GlobalNamespace::GRBreakable::OnEnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5873cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBreakable::*)()>(&::GlobalNamespace::GRBreakable::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5873d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakable.OnEntityStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBreakable::*)(int64_t, int64_t)>(&::GlobalNamespace::GRBreakable::OnEntityStateChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5873e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"OnEntityStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakable.BreakLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBreakable::*)()>(&::GlobalNamespace::GRBreakable::BreakLocal)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5873e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"BreakLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakable.RestoreLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBreakable::*)()>(&::GlobalNamespace::GRBreakable::RestoreLocal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x58740c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"RestoreLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakable.IsHitValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRBreakable::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRBreakable::IsHitValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5874208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakable.OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBreakable::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRBreakable::OnHit)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5874228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBreakable::*)()>(&::GlobalNamespace::GRBreakable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5874324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRBreakable::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRBreakable::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRBreakable::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GRBreakable::__cordl_internal_get_enableWhenBroken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhenBroken;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GRBreakable::__cordl_internal_get_enableWhenBroken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhenBroken;
}
constexpr void GlobalNamespace::GRBreakable::__cordl_internal_set_enableWhenBroken(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableWhenBroken = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GRBreakable::__cordl_internal_get_disableWhenBroken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenBroken;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GRBreakable::__cordl_internal_get_disableWhenBroken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenBroken;
}
constexpr void GlobalNamespace::GRBreakable::__cordl_internal_set_disableWhenBroken(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableWhenBroken = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GRBreakable::__cordl_internal_get_breakableCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakableCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GRBreakable::__cordl_internal_get_breakableCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakableCollider;
}
constexpr void GlobalNamespace::GRBreakable::__cordl_internal_set_breakableCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakableCollider = value;
}
constexpr bool& GlobalNamespace::GRBreakable::__cordl_internal_get_holdsRandomItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdsRandomItem;
}
constexpr bool const& GlobalNamespace::GRBreakable::__cordl_internal_get_holdsRandomItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdsRandomItem;
}
constexpr void GlobalNamespace::GRBreakable::__cordl_internal_set_holdsRandomItem(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdsRandomItem = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRBreakable::__cordl_internal_get_itemSpawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemSpawnLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRBreakable::__cordl_internal_get_itemSpawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemSpawnLocation;
}
constexpr void GlobalNamespace::GRBreakable::__cordl_internal_set_itemSpawnLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemSpawnLocation = value;
}
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& GlobalNamespace::GRBreakable::__cordl_internal_get_itemSpawnProbability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemSpawnProbability;
}
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& GlobalNamespace::GRBreakable::__cordl_internal_get_itemSpawnProbability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemSpawnProbability;
}
constexpr void GlobalNamespace::GRBreakable::__cordl_internal_set_itemSpawnProbability(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemSpawnProbability = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRBreakable::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRBreakable::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRBreakable::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRBreakable::__cordl_internal_get_breakSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRBreakable::__cordl_internal_get_breakSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakSound;
}
constexpr void GlobalNamespace::GRBreakable::__cordl_internal_set_breakSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakSound = value;
}
constexpr float_t& GlobalNamespace::GRBreakable::__cordl_internal_get_breakSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRBreakable::__cordl_internal_get_breakSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakSoundVolume;
}
constexpr void GlobalNamespace::GRBreakable::__cordl_internal_set_breakSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakSoundVolume = value;
}
constexpr bool& GlobalNamespace::GRBreakable::__cordl_internal_get_brokenLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brokenLocal;
}
constexpr bool const& GlobalNamespace::GRBreakable::__cordl_internal_get_brokenLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brokenLocal;
}
constexpr void GlobalNamespace::GRBreakable::__cordl_internal_set_brokenLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brokenLocal = value;
}
inline bool GlobalNamespace::GRBreakable::get_BrokenLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"get_BrokenLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRBreakable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBreakable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBreakable::OnEntityStateChanged(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"OnEntityStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GRBreakable::BreakLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"BreakLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBreakable::RestoreLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"RestoreLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRBreakable::IsHitValid(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GRBreakable::OnHit(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GRBreakable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRBreakable* GlobalNamespace::GRBreakable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBreakable*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr  GlobalNamespace::GRBreakable::operator ::GlobalNamespace::IGameHittable*() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* GlobalNamespace::GRBreakable::i___GlobalNamespace__IGameHittable() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBreakable::GRBreakable()   {
}
