#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystemSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RoomSystemSettings_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiterWithCooldown_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomCount_def.hpp"
#include "GlobalNamespace/zzzz__RoomCount_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_PlayerEffectConfig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaTag/zzzz__ExpectedUsersDecayTimer_def.hpp"
#include "GorillaTag/zzzz__TickSystemTimer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.get_ExpectedUsersTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::ExpectedUsersDecayTimer* (::GlobalNamespace::RoomSystemSettings::*)()>(&::GlobalNamespace::RoomSystemSettings::get_ExpectedUsersTimer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_ExpectedUsersTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.get_ResyncNetworkTimeTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::TickSystemTimer* (::GlobalNamespace::RoomSystemSettings::*)()>(&::GlobalNamespace::RoomSystemSettings::get_ResyncNetworkTimeTimer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_ResyncNetworkTimeTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.get_StatusEffectLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CallLimiterWithCooldown* (::GlobalNamespace::RoomSystemSettings::*)()>(&::GlobalNamespace::RoomSystemSettings::get_StatusEffectLimiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_StatusEffectLimiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.get_SoundEffectLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CallLimiterWithCooldown* (::GlobalNamespace::RoomSystemSettings::*)()>(&::GlobalNamespace::RoomSystemSettings::get_SoundEffectLimiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbf88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_SoundEffectLimiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.get_SoundEffectOtherLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CallLimiterWithCooldown* (::GlobalNamespace::RoomSystemSettings::*)()>(&::GlobalNamespace::RoomSystemSettings::get_SoundEffectOtherLimiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_SoundEffectOtherLimiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.get_PlayerEffectLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CallLimiterWithCooldown* (::GlobalNamespace::RoomSystemSettings::*)()>(&::GlobalNamespace::RoomSystemSettings::get_PlayerEffectLimiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_PlayerEffectLimiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.get_LavaSyncLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CallLimiterWithCooldown* (::GlobalNamespace::RoomSystemSettings::*)()>(&::GlobalNamespace::RoomSystemSettings::get_LavaSyncLimiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_LavaSyncLimiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.get_PlayerImpactEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::RoomSystemSettings::*)()>(&::GlobalNamespace::RoomSystemSettings::get_PlayerImpactEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_PlayerImpactEffect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.get_PlayerEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>* (::GlobalNamespace::RoomSystemSettings::*)()>(&::GlobalNamespace::RoomSystemSettings::get_PlayerEffects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_PlayerEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.get_PausedDCTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RoomSystemSettings::*)()>(&::GlobalNamespace::RoomSystemSettings::get_PausedDCTimer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_PausedDCTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.GetRoomCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RoomSystemSettings::*)(bool, bool)>(&::GlobalNamespace::RoomSystemSettings::GetRoomCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ad0e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"GetRoomCount", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings.GetRoomCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RoomSystemSettings::*)(::GlobalNamespace::GTZone, ::GorillaGameModes::GameModeType, bool, bool)>(&::GlobalNamespace::RoomSystemSettings::GetRoomCount)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ad1454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"GetRoomCount", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GorillaGameModes::GameModeType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystemSettings::*)()>(&::GlobalNamespace::RoomSystemSettings::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5adbfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTag::ExpectedUsersDecayTimer*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_expectedUsersTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectedUsersTimer;
}
constexpr ::GorillaTag::ExpectedUsersDecayTimer* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_expectedUsersTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectedUsersTimer;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_expectedUsersTimer(::GorillaTag::ExpectedUsersDecayTimer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expectedUsersTimer = value;
}
constexpr ::GorillaTag::TickSystemTimer*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_resyncNetworkTimeTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resyncNetworkTimeTimer;
}
constexpr ::GorillaTag::TickSystemTimer* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_resyncNetworkTimeTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resyncNetworkTimeTimer;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_resyncNetworkTimeTimer(::GorillaTag::TickSystemTimer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resyncNetworkTimeTimer = value;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_statusEffectLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusEffectLimiter;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_statusEffectLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusEffectLimiter;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_statusEffectLimiter(::GlobalNamespace::CallLimiterWithCooldown*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusEffectLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_soundEffectLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundEffectLimiter;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_soundEffectLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundEffectLimiter;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_soundEffectLimiter(::GlobalNamespace::CallLimiterWithCooldown*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundEffectLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_soundEffectOtherLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundEffectOtherLimiter;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_soundEffectOtherLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundEffectOtherLimiter;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_soundEffectOtherLimiter(::GlobalNamespace::CallLimiterWithCooldown*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundEffectOtherLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_playerEffectLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerEffectLimiter;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_playerEffectLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerEffectLimiter;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_playerEffectLimiter(::GlobalNamespace::CallLimiterWithCooldown*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerEffectLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_lavaSyncLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSyncLimiter;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_lavaSyncLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSyncLimiter;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_lavaSyncLimiter(::GlobalNamespace::CallLimiterWithCooldown*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaSyncLimiter = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_playerImpactEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerImpactEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_playerImpactEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerImpactEffect;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_playerImpactEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerImpactEffect = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_playerEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerEffects;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_playerEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerEffects;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_playerEffects(::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerEffects = value;
}
constexpr int32_t& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_pausedDCTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pausedDCTimer;
}
constexpr int32_t const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_pausedDCTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pausedDCTimer;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_pausedDCTimer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pausedDCTimer = value;
}
constexpr ::GlobalNamespace::RoomCount*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_publicRoomCountZoneModeMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicRoomCountZoneModeMapping;
}
constexpr ::GlobalNamespace::RoomCount* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_publicRoomCountZoneModeMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicRoomCountZoneModeMapping;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_publicRoomCountZoneModeMapping(::GlobalNamespace::RoomCount*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___publicRoomCountZoneModeMapping = value;
}
constexpr ::GlobalNamespace::PrivateRoomCount*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_privateRoomCountZoneModeMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateRoomCountZoneModeMapping;
}
constexpr ::GlobalNamespace::PrivateRoomCount* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_privateRoomCountZoneModeMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateRoomCountZoneModeMapping;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_privateRoomCountZoneModeMapping(::GlobalNamespace::PrivateRoomCount*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privateRoomCountZoneModeMapping = value;
}
constexpr ::GlobalNamespace::RoomCount*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_subsPublicRoomCountZoneModeMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsPublicRoomCountZoneModeMapping;
}
constexpr ::GlobalNamespace::RoomCount* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_subsPublicRoomCountZoneModeMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsPublicRoomCountZoneModeMapping;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_subsPublicRoomCountZoneModeMapping(::GlobalNamespace::RoomCount*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subsPublicRoomCountZoneModeMapping = value;
}
constexpr ::GlobalNamespace::PrivateRoomCount*& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_subsPrivateRoomCountZoneModeMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsPrivateRoomCountZoneModeMapping;
}
constexpr ::GlobalNamespace::PrivateRoomCount* const& GlobalNamespace::RoomSystemSettings::__cordl_internal_get_subsPrivateRoomCountZoneModeMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsPrivateRoomCountZoneModeMapping;
}
constexpr void GlobalNamespace::RoomSystemSettings::__cordl_internal_set_subsPrivateRoomCountZoneModeMapping(::GlobalNamespace::PrivateRoomCount*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subsPrivateRoomCountZoneModeMapping = value;
}
inline ::GorillaTag::ExpectedUsersDecayTimer* GlobalNamespace::RoomSystemSettings::get_ExpectedUsersTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_ExpectedUsersTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::ExpectedUsersDecayTimer*>(this, ___internal_method);
}
inline ::GorillaTag::TickSystemTimer* GlobalNamespace::RoomSystemSettings::get_ResyncNetworkTimeTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_ResyncNetworkTimeTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::TickSystemTimer*>(this, ___internal_method);
}
inline ::GlobalNamespace::CallLimiterWithCooldown* GlobalNamespace::RoomSystemSettings::get_StatusEffectLimiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_StatusEffectLimiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimiterWithCooldown*>(this, ___internal_method);
}
inline ::GlobalNamespace::CallLimiterWithCooldown* GlobalNamespace::RoomSystemSettings::get_SoundEffectLimiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_SoundEffectLimiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimiterWithCooldown*>(this, ___internal_method);
}
inline ::GlobalNamespace::CallLimiterWithCooldown* GlobalNamespace::RoomSystemSettings::get_SoundEffectOtherLimiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_SoundEffectOtherLimiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimiterWithCooldown*>(this, ___internal_method);
}
inline ::GlobalNamespace::CallLimiterWithCooldown* GlobalNamespace::RoomSystemSettings::get_PlayerEffectLimiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_PlayerEffectLimiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimiterWithCooldown*>(this, ___internal_method);
}
inline ::GlobalNamespace::CallLimiterWithCooldown* GlobalNamespace::RoomSystemSettings::get_LavaSyncLimiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_LavaSyncLimiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimiterWithCooldown*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::RoomSystemSettings::get_PlayerImpactEffect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_PlayerImpactEffect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>* GlobalNamespace::RoomSystemSettings::get_PlayerEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_PlayerEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RoomSystemSettings::get_PausedDCTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"get_PausedDCTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RoomSystemSettings::GetRoomCount(bool  privateRoom, bool  sub)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"GetRoomCount", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, privateRoom, sub);
}
inline int32_t GlobalNamespace::RoomSystemSettings::GetRoomCount(::GlobalNamespace::GTZone  zone, ::GorillaGameModes::GameModeType  mode, bool  privateRoom, bool  sub)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {"GetRoomCount", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GorillaGameModes::GameModeType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, zone, mode, privateRoom, sub);
}
inline void GlobalNamespace::RoomSystemSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomSystemSettings* GlobalNamespace::RoomSystemSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomSystemSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomSystemSettings::RoomSystemSettings()   {
}
