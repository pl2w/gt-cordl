#pragma once
// IWYU pragma private; include "GlobalNamespace/RotationSoundPlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RotationSoundPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RotationSoundPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RotationSoundPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationSoundPlayer::*)()>(&::GlobalNamespace::RotationSoundPlayer::Awake)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5e07788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationSoundPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationSoundPlayer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationSoundPlayer::*)()>(&::GlobalNamespace::RotationSoundPlayer::Update)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5e07aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationSoundPlayer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationSoundPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationSoundPlayer::*)()>(&::GlobalNamespace::RotationSoundPlayer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e07e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationSoundPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_transforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_transforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transforms;
}
constexpr void GlobalNamespace::RotationSoundPlayer::__cordl_internal_set_transforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transforms = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_soundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_soundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr void GlobalNamespace::RotationSoundPlayer::__cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundBankPlayer = value;
}
constexpr float_t& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_rotationAmountThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationAmountThreshold;
}
constexpr float_t const& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_rotationAmountThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationAmountThreshold;
}
constexpr void GlobalNamespace::RotationSoundPlayer::__cordl_internal_set_rotationAmountThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationAmountThreshold = value;
}
constexpr float_t& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_rotationSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeedThreshold;
}
constexpr float_t const& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_rotationSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeedThreshold;
}
constexpr void GlobalNamespace::RotationSoundPlayer::__cordl_internal_set_rotationSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeedThreshold = value;
}
constexpr float_t& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr float_t const& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr void GlobalNamespace::RotationSoundPlayer::__cordl_internal_set_cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldown = value;
}
constexpr float_t& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_cooldownTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTimer;
}
constexpr float_t const& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_cooldownTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTimer;
}
constexpr void GlobalNamespace::RotationSoundPlayer::__cordl_internal_set_cooldownTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownTimer = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_initialUpAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialUpAxis;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_initialUpAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialUpAxis;
}
constexpr void GlobalNamespace::RotationSoundPlayer::__cordl_internal_set_initialUpAxis(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialUpAxis = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_lastUpAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpAxis;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_lastUpAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpAxis;
}
constexpr void GlobalNamespace::RotationSoundPlayer::__cordl_internal_set_lastUpAxis(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastUpAxis = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_lastRotationSpeeds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRotationSpeeds;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::RotationSoundPlayer::__cordl_internal_get_lastRotationSpeeds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRotationSpeeds;
}
constexpr void GlobalNamespace::RotationSoundPlayer::__cordl_internal_set_lastRotationSpeeds(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRotationSpeeds = value;
}
inline void GlobalNamespace::RotationSoundPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationSoundPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotationSoundPlayer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationSoundPlayer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotationSoundPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationSoundPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RotationSoundPlayer* GlobalNamespace::RotationSoundPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotationSoundPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotationSoundPlayer::RotationSoundPlayer()   {
}
//  Writing Method size for method: ::GlobalNamespace::RotationSoundPlayer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationSoundPlayer___c::*)()>(&::GlobalNamespace::RotationSoundPlayer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e07ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationSoundPlayer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationSoundPlayer___c._Awake_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RotationSoundPlayer___c::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::RotationSoundPlayer___c::_Awake_b__9_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e07ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationSoundPlayer___c*>(),
                        {"<Awake>b__9_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RotationSoundPlayer___c::setStaticF___9(::GlobalNamespace::RotationSoundPlayer___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RotationSoundPlayer___c*, "<>9", ::GlobalNamespace::RotationSoundPlayer___c*>(std::forward<::GlobalNamespace::RotationSoundPlayer___c*>(value));
}
inline ::GlobalNamespace::RotationSoundPlayer___c* GlobalNamespace::RotationSoundPlayer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RotationSoundPlayer___c*, "<>9", ::GlobalNamespace::RotationSoundPlayer___c*>();
}
inline void GlobalNamespace::RotationSoundPlayer___c::setStaticF___9__9_0(::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*, "<>9__9_0", ::GlobalNamespace::RotationSoundPlayer___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>* GlobalNamespace::RotationSoundPlayer___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*, "<>9__9_0", ::GlobalNamespace::RotationSoundPlayer___c*>();
}
inline void GlobalNamespace::RotationSoundPlayer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationSoundPlayer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RotationSoundPlayer___c::_Awake_b__9_0(::UnityEngine::Transform*  xform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationSoundPlayer___c*>(),
                        {"<Awake>b__9_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xform);
}
inline ::GlobalNamespace::RotationSoundPlayer___c* GlobalNamespace::RotationSoundPlayer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotationSoundPlayer___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotationSoundPlayer___c::RotationSoundPlayer___c()   {
}
