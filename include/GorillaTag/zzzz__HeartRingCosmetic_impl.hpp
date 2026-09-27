#pragma once
// IWYU pragma private; include "GorillaTag/HeartRingCosmetic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/zzzz__HeartRingCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::HeartRingCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::HeartRingCosmetic::*)()>(&::GorillaTag::HeartRingCosmetic::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d1f168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HeartRingCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::HeartRingCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::HeartRingCosmetic::*)()>(&::GorillaTag::HeartRingCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5d1f20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HeartRingCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::HeartRingCosmetic.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::HeartRingCosmetic::*)()>(&::GorillaTag::HeartRingCosmetic::LateUpdate)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5d1f52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HeartRingCosmetic*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::HeartRingCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::HeartRingCosmetic::*)()>(&::GorillaTag::HeartRingCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d1f724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HeartRingCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::HeartRingCosmetic._Awake_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::HeartRingCosmetic::*)()>(&::GorillaTag::HeartRingCosmetic::_Awake_b__13_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d1f744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HeartRingCosmetic*>(),
                        {"<Awake>b__13_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::HeartRingCosmetic::__cordl_internal_get_effects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effects;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::HeartRingCosmetic::__cordl_internal_get_effects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effects;
}
constexpr void GorillaTag::HeartRingCosmetic::__cordl_internal_set_effects(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effects = value;
}
constexpr bool& GorillaTag::HeartRingCosmetic::__cordl_internal_get_isHauntedVoiceChanger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHauntedVoiceChanger;
}
constexpr bool const& GorillaTag::HeartRingCosmetic::__cordl_internal_get_isHauntedVoiceChanger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHauntedVoiceChanger;
}
constexpr void GorillaTag::HeartRingCosmetic::__cordl_internal_set_isHauntedVoiceChanger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHauntedVoiceChanger = value;
}
constexpr float_t& GorillaTag::HeartRingCosmetic::__cordl_internal_get_hauntedVoicePitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hauntedVoicePitch;
}
constexpr float_t const& GorillaTag::HeartRingCosmetic::__cordl_internal_get_hauntedVoicePitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hauntedVoicePitch;
}
constexpr void GorillaTag::HeartRingCosmetic::__cordl_internal_set_hauntedVoicePitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hauntedVoicePitch = value;
}
constexpr float_t& GorillaTag::HeartRingCosmetic::__cordl_internal_get_effectActivationRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectActivationRadius;
}
constexpr float_t const& GorillaTag::HeartRingCosmetic::__cordl_internal_get_effectActivationRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectActivationRadius;
}
constexpr void GorillaTag::HeartRingCosmetic::__cordl_internal_set_effectActivationRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectActivationRadius = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::HeartRingCosmetic::__cordl_internal_get_headToMouthOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headToMouthOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::HeartRingCosmetic::__cordl_internal_get_headToMouthOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headToMouthOffset;
}
constexpr void GorillaTag::HeartRingCosmetic::__cordl_internal_set_headToMouthOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headToMouthOffset = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::HeartRingCosmetic::__cordl_internal_get_ownerRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::HeartRingCosmetic::__cordl_internal_get_ownerRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr void GorillaTag::HeartRingCosmetic::__cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerRig = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::HeartRingCosmetic::__cordl_internal_get_ownerHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerHead;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::HeartRingCosmetic::__cordl_internal_get_ownerHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerHead;
}
constexpr void GorillaTag::HeartRingCosmetic::__cordl_internal_set_ownerHead(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerHead = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTag::HeartRingCosmetic::__cordl_internal_get_particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTag::HeartRingCosmetic::__cordl_internal_get_particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr void GorillaTag::HeartRingCosmetic::__cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystem = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::HeartRingCosmetic::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::HeartRingCosmetic::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTag::HeartRingCosmetic::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr float_t& GorillaTag::HeartRingCosmetic::__cordl_internal_get_maxEmissionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEmissionRate;
}
constexpr float_t const& GorillaTag::HeartRingCosmetic::__cordl_internal_get_maxEmissionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEmissionRate;
}
constexpr void GorillaTag::HeartRingCosmetic::__cordl_internal_set_maxEmissionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxEmissionRate = value;
}
constexpr float_t& GorillaTag::HeartRingCosmetic::__cordl_internal_get_maxVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr float_t const& GorillaTag::HeartRingCosmetic::__cordl_internal_get_maxVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr void GorillaTag::HeartRingCosmetic::__cordl_internal_set_maxVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVolume = value;
}
inline void GorillaTag::HeartRingCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HeartRingCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::HeartRingCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HeartRingCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::HeartRingCosmetic::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HeartRingCosmetic*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::HeartRingCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HeartRingCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::HeartRingCosmetic::_Awake_b__13_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HeartRingCosmetic*>(),
                        {"<Awake>b__13_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::HeartRingCosmetic* GorillaTag::HeartRingCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::HeartRingCosmetic*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::HeartRingCosmetic::HeartRingCosmetic()   {
}
