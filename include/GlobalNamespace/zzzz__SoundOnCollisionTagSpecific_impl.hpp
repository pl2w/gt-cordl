#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundOnCollisionTagSpecific.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SoundOnCollisionTagSpecific_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SoundOnCollisionTagSpecific.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundOnCollisionTagSpecific::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SoundOnCollisionTagSpecific::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56ad880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundOnCollisionTagSpecific*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundOnCollisionTagSpecific._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundOnCollisionTagSpecific::*)()>(&::GlobalNamespace::SoundOnCollisionTagSpecific::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56ad93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundOnCollisionTagSpecific*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_get_tagName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagName;
}
constexpr ::StringW const& GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_get_tagName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagName;
}
constexpr void GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_set_tagName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagName = value;
}
constexpr float_t& GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_get_noiseCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseCooldown;
}
constexpr float_t const& GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_get_noiseCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseCooldown;
}
constexpr void GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_set_noiseCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseCooldown = value;
}
constexpr float_t& GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_get_nextSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSound;
}
constexpr float_t const& GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_get_nextSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSound;
}
constexpr void GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_set_nextSound(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_get_collisionSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionSounds;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_get_collisionSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionSounds;
}
constexpr void GlobalNamespace::SoundOnCollisionTagSpecific::__cordl_internal_set_collisionSounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionSounds = value;
}
inline void GlobalNamespace::SoundOnCollisionTagSpecific::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundOnCollisionTagSpecific*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::SoundOnCollisionTagSpecific::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundOnCollisionTagSpecific*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SoundOnCollisionTagSpecific* GlobalNamespace::SoundOnCollisionTagSpecific::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SoundOnCollisionTagSpecific*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoundOnCollisionTagSpecific::SoundOnCollisionTagSpecific()   {
}
