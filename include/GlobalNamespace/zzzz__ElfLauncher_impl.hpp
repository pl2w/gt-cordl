#pragma once
// IWYU pragma private; include "GlobalNamespace/ElfLauncher.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_Crank_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ElfLauncher_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ElfLauncher.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncher::*)()>(&::GlobalNamespace::ElfLauncher::OnEnable)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x564c844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncher.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncher::*)()>(&::GlobalNamespace::ElfLauncher::OnDisable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x564cb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncher.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncher::*)()>(&::GlobalNamespace::ElfLauncher::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x564cc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncher.OnCranked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncher::*)(float_t)>(&::GlobalNamespace::ElfLauncher::OnCranked)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x564cd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"OnCranked", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncher.Shoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncher::*)()>(&::GlobalNamespace::ElfLauncher::Shoot)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x564ce18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"Shoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncher.ShootShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncher::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::ElfLauncher::ShootShared)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x564d12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"ShootShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncher.ShootShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncher::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::ElfLauncher::ShootShared)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x564d344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                    {::i2c::class_of<::GlobalNamespace::ElfLauncher*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncher::*)()>(&::GlobalNamespace::ElfLauncher::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56476e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::ElfLauncher::__cordl_internal_get_parentHoldable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHoldable;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::ElfLauncher::__cordl_internal_get_parentHoldable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHoldable;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_parentHoldable(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentHoldable = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>& GlobalNamespace::ElfLauncher::__cordl_internal_get_cranks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cranks;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>> const& GlobalNamespace::ElfLauncher::__cordl_internal_get_cranks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cranks;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_cranks(::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cranks = value;
}
constexpr float_t& GlobalNamespace::ElfLauncher::__cordl_internal_get_crankShootThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankShootThreshold;
}
constexpr float_t const& GlobalNamespace::ElfLauncher::__cordl_internal_get_crankShootThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankShootThreshold;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_crankShootThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankShootThreshold = value;
}
constexpr float_t& GlobalNamespace::ElfLauncher::__cordl_internal_get_crankClickThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankClickThreshold;
}
constexpr float_t const& GlobalNamespace::ElfLauncher::__cordl_internal_get_crankClickThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankClickThreshold;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_crankClickThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankClickThreshold = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ElfLauncher::__cordl_internal_get_muzzle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muzzle;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ElfLauncher::__cordl_internal_get_muzzle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muzzle;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_muzzle(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muzzle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ElfLauncher::__cordl_internal_get_elfProjectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elfProjectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ElfLauncher::__cordl_internal_get_elfProjectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elfProjectilePrefab;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_elfProjectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elfProjectilePrefab = value;
}
constexpr int32_t& GlobalNamespace::ElfLauncher::__cordl_internal_get_elfProjectileHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elfProjectileHash;
}
constexpr int32_t const& GlobalNamespace::ElfLauncher::__cordl_internal_get_elfProjectileHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elfProjectileHash;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_elfProjectileHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elfProjectileHash = value;
}
constexpr float_t& GlobalNamespace::ElfLauncher::__cordl_internal_get_muzzleVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muzzleVelocity;
}
constexpr float_t const& GlobalNamespace::ElfLauncher::__cordl_internal_get_muzzleVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muzzleVelocity;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_muzzleVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muzzleVelocity = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::ElfLauncher::__cordl_internal_get_crankClickAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankClickAudio;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::ElfLauncher::__cordl_internal_get_crankClickAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankClickAudio;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_crankClickAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankClickAudio = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::ElfLauncher::__cordl_internal_get_shootAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootAudio;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::ElfLauncher::__cordl_internal_get_shootAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootAudio;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_shootAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootAudio = value;
}
constexpr float_t& GlobalNamespace::ElfLauncher::__cordl_internal_get_shootHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootHapticStrength;
}
constexpr float_t const& GlobalNamespace::ElfLauncher::__cordl_internal_get_shootHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootHapticStrength;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_shootHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootHapticStrength = value;
}
constexpr float_t& GlobalNamespace::ElfLauncher::__cordl_internal_get_shootHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootHapticDuration;
}
constexpr float_t const& GlobalNamespace::ElfLauncher::__cordl_internal_get_shootHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootHapticDuration;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_shootHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootHapticDuration = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GlobalNamespace::ElfLauncher::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GlobalNamespace::ElfLauncher::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr float_t& GlobalNamespace::ElfLauncher::__cordl_internal_get_currentShootCrankAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentShootCrankAmount;
}
constexpr float_t const& GlobalNamespace::ElfLauncher::__cordl_internal_get_currentShootCrankAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentShootCrankAmount;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_currentShootCrankAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentShootCrankAmount = value;
}
constexpr float_t& GlobalNamespace::ElfLauncher::__cordl_internal_get_currentClickCrankAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentClickCrankAmount;
}
constexpr float_t const& GlobalNamespace::ElfLauncher::__cordl_internal_get_currentClickCrankAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentClickCrankAmount;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_currentClickCrankAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentClickCrankAmount = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::ElfLauncher::__cordl_internal_get_m_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_player;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::ElfLauncher::__cordl_internal_get_m_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_player;
}
constexpr void GlobalNamespace::ElfLauncher::__cordl_internal_set_m_player(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_player = value;
}
inline void GlobalNamespace::ElfLauncher::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ElfLauncher::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ElfLauncher::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ElfLauncher::OnCranked(float_t  deltaAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"OnCranked", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaAngle);
}
inline void GlobalNamespace::ElfLauncher::Shoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"Shoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ElfLauncher::ShootShared(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {"ShootShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GlobalNamespace::ElfLauncher::ShootShared(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ElfLauncher*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, direction);
}
inline void GlobalNamespace::ElfLauncher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ElfLauncher* GlobalNamespace::ElfLauncher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ElfLauncher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ElfLauncher::ElfLauncher()   {
}
