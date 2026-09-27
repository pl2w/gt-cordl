#pragma once
// IWYU pragma private; include "GlobalNamespace/RacingManager.hpp"
#include "GlobalNamespace/zzzz__NetworkSceneObject_impl.hpp"
#include "GlobalNamespace/zzzz__RacingManager_RaceSetup_impl.hpp"
#include "GlobalNamespace/zzzz__RacingManager_RacingState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "GlobalNamespace/zzzz__RacingManager_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RaceVisual_def.hpp"
#include "GlobalNamespace/zzzz__RacingManager_RaceSetup_def.hpp"
#include "GlobalNamespace/zzzz__RacingManager_RacerData_def.hpp"
#include "GlobalNamespace/zzzz__RacingManager_RacingState_def.hpp"
#include "GlobalNamespace/zzzz__RacingManager_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RacingManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::RacingManager> (*)()>(&::GlobalNamespace::RacingManager::get_instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x568f360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RacingManager*)>(&::GlobalNamespace::RacingManager::set_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x568f3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::RacingManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RacingManager::*)()>(&::GlobalNamespace::RacingManager::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568f400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)(bool)>(&::GlobalNamespace::RacingManager::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568f408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)()>(&::GlobalNamespace::RacingManager::Awake)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x568f410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)()>(&::GlobalNamespace::RacingManager::OnEnable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x568f928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                    {::i2c::class_of<::GlobalNamespace::RacingManager*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)()>(&::GlobalNamespace::RacingManager::OnDisable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x568fa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                    {::i2c::class_of<::GlobalNamespace::RacingManager*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.OnRoomJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)()>(&::GlobalNamespace::RacingManager::OnRoomJoin)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x568fb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"OnRoomJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RacingManager::OnPlayerJoined)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x568fc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.RegisterVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)(::GlobalNamespace::RaceVisual*)>(&::GlobalNamespace::RacingManager::RegisterVisual)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x568eec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"RegisterVisual", {}, {::i2c::type_of<::GlobalNamespace::RaceVisual*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.Button_StartRace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)(int32_t, int32_t)>(&::GlobalNamespace::RacingManager::Button_StartRace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x568ef6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"Button_StartRace", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.RequestRaceStart_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RacingManager::RequestRaceStart_RPC)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x568ffec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"RequestRaceStart_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.RaceBeginCountdown_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)(uint8_t, uint8_t, double_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RacingManager::RaceBeginCountdown_RPC)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5690330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"RaceBeginCountdown_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.RaceLockInParticipants_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)(uint8_t, ::ArrayW<int32_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RacingManager::RaceLockInParticipants_RPC)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x56905c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"RaceLockInParticipants_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.OnCheckpointPassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)(int32_t, int32_t)>(&::GlobalNamespace::RacingManager::OnCheckpointPassed)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x568f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"OnCheckpointPassed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.PassCheckpoint_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)(uint8_t, uint8_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RacingManager::PassCheckpoint_RPC)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5690ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"PassCheckpoint_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.RaceEnded_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)(uint8_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RacingManager::RaceEnded_RPC)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5691434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"RaceEnded_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.ITickSystemTick_Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)()>(&::GlobalNamespace::RacingManager::ITickSystemTick_Tick)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x56918c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"ITickSystemTick.Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager.IsActorLockedIntoAnyRace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RacingManager::*)(int32_t)>(&::GlobalNamespace::RacingManager::IsActorLockedIntoAnyRace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5691964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"IsActorLockedIntoAnyRace", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager::*)()>(&::GlobalNamespace::RacingManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5691aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RacingManager::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::RacingManager::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::RacingManager::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::RacingManager_RaceSetup>& GlobalNamespace::RacingManager::__cordl_internal_get_raceSetups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceSetups;
}
constexpr ::ArrayW<::GlobalNamespace::RacingManager_RaceSetup> const& GlobalNamespace::RacingManager::__cordl_internal_get_raceSetups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceSetups;
}
constexpr void GlobalNamespace::RacingManager::__cordl_internal_set_raceSetups(::ArrayW<::GlobalNamespace::RacingManager_RaceSetup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceSetups = value;
}
constexpr ::ArrayW<::GlobalNamespace::RacingManager_Race*>& GlobalNamespace::RacingManager::__cordl_internal_get_races()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___races;
}
constexpr ::ArrayW<::GlobalNamespace::RacingManager_Race*> const& GlobalNamespace::RacingManager::__cordl_internal_get_races() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___races;
}
constexpr void GlobalNamespace::RacingManager::__cordl_internal_set_races(::ArrayW<::GlobalNamespace::RacingManager_Race*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___races = value;
}
inline void GlobalNamespace::RacingManager::setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::RacingManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::RacingManager>, "<instance>k__BackingField", ::GlobalNamespace::RacingManager*>(std::forward<::UnityW<::GlobalNamespace::RacingManager>>(value));
}
inline ::UnityW<::GlobalNamespace::RacingManager> GlobalNamespace::RacingManager::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::RacingManager>, "<instance>k__BackingField", ::GlobalNamespace::RacingManager*>();
}
inline ::UnityW<::GlobalNamespace::RacingManager> GlobalNamespace::RacingManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::RacingManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RacingManager::set_instance(::GlobalNamespace::RacingManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::RacingManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::RacingManager::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RacingManager::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RacingManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RacingManager::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RacingManager*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RacingManager::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RacingManager*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RacingManager::OnRoomJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"OnRoomJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RacingManager::OnPlayerJoined(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::RacingManager::RegisterVisual(::GlobalNamespace::RaceVisual*  visual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"RegisterVisual", {}, {::i2c::type_of<::GlobalNamespace::RaceVisual*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visual);
}
inline void GlobalNamespace::RacingManager::Button_StartRace(int32_t  raceId, int32_t  laps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"Button_StartRace", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raceId, laps);
}
inline void GlobalNamespace::RacingManager::RequestRaceStart_RPC(int32_t  raceId, int32_t  laps, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"RequestRaceStart_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raceId, laps, info);
}
inline void GlobalNamespace::RacingManager::RaceBeginCountdown_RPC(uint8_t  raceId, uint8_t  laps, double_t  startTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"RaceBeginCountdown_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raceId, laps, startTime, info);
}
inline void GlobalNamespace::RacingManager::RaceLockInParticipants_RPC(uint8_t  raceId, ::ArrayW<int32_t>  participantActorNumbers, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"RaceLockInParticipants_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raceId, participantActorNumbers, info);
}
inline void GlobalNamespace::RacingManager::OnCheckpointPassed(int32_t  raceId, int32_t  checkpointIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"OnCheckpointPassed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raceId, checkpointIndex);
}
inline void GlobalNamespace::RacingManager::PassCheckpoint_RPC(uint8_t  raceId, uint8_t  checkpointIndex, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"PassCheckpoint_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raceId, checkpointIndex, info);
}
inline void GlobalNamespace::RacingManager::RaceEnded_RPC(uint8_t  raceId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"RaceEnded_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raceId, info);
}
inline void GlobalNamespace::RacingManager::ITickSystemTick_Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"ITickSystemTick.Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RacingManager::IsActorLockedIntoAnyRace(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {"IsActorLockedIntoAnyRace", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actorNumber);
}
inline void GlobalNamespace::RacingManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RacingManager* GlobalNamespace::RacingManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RacingManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::RacingManager::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::RacingManager::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RacingManager::RacingManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)(int32_t, ::GlobalNamespace::RacingManager_RaceSetup, ::System::Collections::Generic::HashSet_1<int32_t>*, ::Photon::Pun::PhotonView*)>(&::GlobalNamespace::RacingManager_Race::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x568f72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RacingManager_RaceSetup>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.get_racingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RacingManager_RacingState (::GlobalNamespace::RacingManager_Race::*)()>(&::GlobalNamespace::RacingManager_Race::get_racingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5691bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"get_racingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.set_racingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)(::GlobalNamespace::RacingManager_RacingState)>(&::GlobalNamespace::RacingManager_Race::set_racingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5691bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"set_racingState", {}, {::i2c::type_of<::GlobalNamespace::RacingManager_RacingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.RegisterVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)(::GlobalNamespace::RaceVisual*)>(&::GlobalNamespace::RacingManager_Race::RegisterVisual)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5691bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"RegisterVisual", {}, {::i2c::type_of<::GlobalNamespace::RaceVisual*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)()>(&::GlobalNamespace::RacingManager_Race::Clear)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x568fbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.IsActorLockedIntoRace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RacingManager_Race::*)(int32_t)>(&::GlobalNamespace::RacingManager_Race::IsActorLockedIntoRace)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56919dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"IsActorLockedIntoRace", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.SendStateToNewPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RacingManager_Race::SendStateToNewPlayer)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x568fcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"SendStateToNewPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)()>(&::GlobalNamespace::RacingManager_Race::Tick)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x569191c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.TickWithNextDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RacingManager_Race::*)()>(&::GlobalNamespace::RacingManager_Race::TickWithNextDelay)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x5691bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"TickWithNextDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.RaceEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)()>(&::GlobalNamespace::RacingManager_Race::RaceEnded)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x569151c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"RaceEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.RefreshStartingPlayerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)()>(&::GlobalNamespace::RacingManager_Race::RefreshStartingPlayerList)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5691fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"RefreshStartingPlayerList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.Button_StartRace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)(int32_t)>(&::GlobalNamespace::RacingManager_Race::Button_StartRace)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x568fe9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"Button_StartRace", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.Host_RequestRaceStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)(int32_t, int32_t)>(&::GlobalNamespace::RacingManager_Race::Host_RequestRaceStart)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x569012c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"Host_RequestRaceStart", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.BeginCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)(double_t, int32_t)>(&::GlobalNamespace::RacingManager_Race::BeginCountdown)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56904c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"BeginCountdown", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.RaceCountdownEnds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)()>(&::GlobalNamespace::RacingManager_Race::RaceCountdownEnds)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5692208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"RaceCountdownEnds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.LockInParticipants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)(::ArrayW<int32_t>, bool)>(&::GlobalNamespace::RacingManager_Race::LockInParticipants)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x56906fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"LockInParticipants", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.PassCheckpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)(::Photon::Realtime::Player*, int32_t, double_t)>(&::GlobalNamespace::RacingManager_Race::PassCheckpoint)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x5690de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"PassCheckpoint", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.OnRacerOrderChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_Race::*)()>(&::GlobalNamespace::RacingManager_Race::OnRacerOrderChanged)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x569243c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"OnRacerOrderChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_Race.UpdateActorsInStartZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RacingManager_Race::*)()>(&::GlobalNamespace::RacingManager_Race::UpdateActorsInStartZone)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x5692a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"UpdateActorsInStartZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RacingManager_Race::__cordl_internal_get_raceIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceIndex;
}
constexpr int32_t const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_raceIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceIndex;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_raceIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceIndex = value;
}
constexpr int32_t& GlobalNamespace::RacingManager_Race::__cordl_internal_get_numCheckpoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numCheckpoints;
}
constexpr int32_t const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_numCheckpoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numCheckpoints;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_numCheckpoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numCheckpoints = value;
}
constexpr float_t& GlobalNamespace::RacingManager_Race::__cordl_internal_get_dqBaseDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dqBaseDuration;
}
constexpr float_t const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_dqBaseDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dqBaseDuration;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_dqBaseDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dqBaseDuration = value;
}
constexpr float_t& GlobalNamespace::RacingManager_Race::__cordl_internal_get_dqInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dqInterval;
}
constexpr float_t const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_dqInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dqInterval;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_dqInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dqInterval = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::RacingManager_Race::__cordl_internal_get_raceStartZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceStartZone;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_raceStartZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceStartZone;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_raceStartZone(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceStartZone = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::RacingManager_Race::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RacingManager_RacerData>*& GlobalNamespace::RacingManager_Race::__cordl_internal_get_racers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___racers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RacingManager_RacerData>* const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_racers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___racers;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_racers(::System::Collections::Generic::List_1<::GlobalNamespace::RacingManager_RacerData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___racers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,int32_t>*& GlobalNamespace::RacingManager_Race::__cordl_internal_get_playerLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,int32_t>* const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_playerLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLookup;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_playerLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLookup = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::RacingManager_Race::__cordl_internal_get_actorsInStartZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorsInStartZone;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_actorsInStartZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorsInStartZone;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_actorsInStartZone(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorsInStartZone = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::RacingManager_Race::__cordl_internal_get_actorsInStartZone2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorsInStartZone2;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_actorsInStartZone2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorsInStartZone2;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_actorsInStartZone2(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorsInStartZone2 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*& GlobalNamespace::RacingManager_Race::__cordl_internal_get_playerNamesInStartZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNamesInStartZone;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_playerNamesInStartZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNamesInStartZone;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_playerNamesInStartZone(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNamesInStartZone = value;
}
constexpr int32_t& GlobalNamespace::RacingManager_Race::__cordl_internal_get_numLapsSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numLapsSelected;
}
constexpr int32_t const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_numLapsSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numLapsSelected;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_numLapsSelected(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numLapsSelected = value;
}
constexpr ::GlobalNamespace::RacingManager_RacingState& GlobalNamespace::RacingManager_Race::__cordl_internal_get__racingState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____racingState_k__BackingField;
}
constexpr ::GlobalNamespace::RacingManager_RacingState const& GlobalNamespace::RacingManager_Race::__cordl_internal_get__racingState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____racingState_k__BackingField;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set__racingState_k__BackingField(::GlobalNamespace::RacingManager_RacingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____racingState_k__BackingField = value;
}
constexpr double_t& GlobalNamespace::RacingManager_Race::__cordl_internal_get_raceStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceStartTime;
}
constexpr double_t const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_raceStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceStartTime;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_raceStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceStartTime = value;
}
constexpr double_t& GlobalNamespace::RacingManager_Race::__cordl_internal_get_abortRaceAtTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abortRaceAtTimestamp;
}
constexpr double_t const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_abortRaceAtTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abortRaceAtTimestamp;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_abortRaceAtTimestamp(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abortRaceAtTimestamp = value;
}
constexpr float_t& GlobalNamespace::RacingManager_Race::__cordl_internal_get_resultsEndTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultsEndTimestamp;
}
constexpr float_t const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_resultsEndTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultsEndTimestamp;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_resultsEndTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultsEndTimestamp = value;
}
constexpr bool& GlobalNamespace::RacingManager_Race::__cordl_internal_get_isInstanceLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInstanceLoaded;
}
constexpr bool const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_isInstanceLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInstanceLoaded;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_isInstanceLoaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInstanceLoaded = value;
}
constexpr int32_t& GlobalNamespace::RacingManager_Race::__cordl_internal_get_numCheckpointsToWin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numCheckpointsToWin;
}
constexpr int32_t const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_numCheckpointsToWin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numCheckpointsToWin;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_numCheckpointsToWin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numCheckpointsToWin = value;
}
constexpr ::UnityW<::GlobalNamespace::RaceVisual>& GlobalNamespace::RacingManager_Race::__cordl_internal_get_raceVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceVisual;
}
constexpr ::UnityW<::GlobalNamespace::RaceVisual> const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_raceVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceVisual;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_raceVisual(::UnityW<::GlobalNamespace::RaceVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceVisual = value;
}
constexpr bool& GlobalNamespace::RacingManager_Race::__cordl_internal_get_hasLockedInParticipants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLockedInParticipants;
}
constexpr bool const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_hasLockedInParticipants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLockedInParticipants;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_hasLockedInParticipants(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasLockedInParticipants = value;
}
constexpr float_t& GlobalNamespace::RacingManager_Race::__cordl_internal_get_nextTickTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTickTimestamp;
}
constexpr float_t const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_nextTickTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTickTimestamp;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_nextTickTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextTickTimestamp = value;
}
constexpr float_t& GlobalNamespace::RacingManager_Race::__cordl_internal_get_nextStartZoneUpdateTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextStartZoneUpdateTimestamp;
}
constexpr float_t const& GlobalNamespace::RacingManager_Race::__cordl_internal_get_nextStartZoneUpdateTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextStartZoneUpdateTimestamp;
}
constexpr void GlobalNamespace::RacingManager_Race::__cordl_internal_set_nextStartZoneUpdateTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextStartZoneUpdateTimestamp = value;
}
inline void GlobalNamespace::RacingManager_Race::setStaticF_stringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "stringBuilder", ::GlobalNamespace::RacingManager_Race*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* GlobalNamespace::RacingManager_Race::getStaticF_stringBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "stringBuilder", ::GlobalNamespace::RacingManager_Race*>();
}
inline void GlobalNamespace::RacingManager_Race::setStaticF_timesStringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "timesStringBuilder", ::GlobalNamespace::RacingManager_Race*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* GlobalNamespace::RacingManager_Race::getStaticF_timesStringBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "timesStringBuilder", ::GlobalNamespace::RacingManager_Race*>();
}
inline void GlobalNamespace::RacingManager_Race::setStaticF_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "overlapColliders", ::GlobalNamespace::RacingManager_Race*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Collider>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> GlobalNamespace::RacingManager_Race::getStaticF_overlapColliders()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "overlapColliders", ::GlobalNamespace::RacingManager_Race*>();
}
inline void GlobalNamespace::RacingManager_Race::setStaticF_playerLayerMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "playerLayerMask", ::GlobalNamespace::RacingManager_Race*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::RacingManager_Race::getStaticF_playerLayerMask()  {
return ::cordl_internals::getStaticField<int32_t, "playerLayerMask", ::GlobalNamespace::RacingManager_Race*>();
}
inline void GlobalNamespace::RacingManager_Race::_ctor(int32_t  raceIndex, ::GlobalNamespace::RacingManager_RaceSetup  setup, ::System::Collections::Generic::HashSet_1<int32_t>*  actorsInAnyRace, ::Photon::Pun::PhotonView*  photonView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RacingManager_RaceSetup>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raceIndex, setup, actorsInAnyRace, photonView);
}
inline ::GlobalNamespace::RacingManager_RacingState GlobalNamespace::RacingManager_Race::get_racingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"get_racingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RacingManager_RacingState>(this, ___internal_method);
}
inline void GlobalNamespace::RacingManager_Race::set_racingState(::GlobalNamespace::RacingManager_RacingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"set_racingState", {}, {::i2c::type_of<::GlobalNamespace::RacingManager_RacingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RacingManager_Race::RegisterVisual(::GlobalNamespace::RaceVisual*  visual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"RegisterVisual", {}, {::i2c::type_of<::GlobalNamespace::RaceVisual*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visual);
}
inline void GlobalNamespace::RacingManager_Race::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RacingManager_Race::IsActorLockedIntoRace(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"IsActorLockedIntoRace", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actorNumber);
}
inline void GlobalNamespace::RacingManager_Race::SendStateToNewPlayer(::GlobalNamespace::NetPlayer*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"SendStateToNewPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::RacingManager_Race::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::RacingManager_Race::TickWithNextDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"TickWithNextDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RacingManager_Race::RaceEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"RaceEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RacingManager_Race::RefreshStartingPlayerList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"RefreshStartingPlayerList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RacingManager_Race::Button_StartRace(int32_t  laps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"Button_StartRace", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, laps);
}
inline void GlobalNamespace::RacingManager_Race::Host_RequestRaceStart(int32_t  laps, int32_t  requestedByActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"Host_RequestRaceStart", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, laps, requestedByActorNumber);
}
inline void GlobalNamespace::RacingManager_Race::BeginCountdown(double_t  startTime, int32_t  laps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"BeginCountdown", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTime, laps);
}
inline void GlobalNamespace::RacingManager_Race::RaceCountdownEnds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"RaceCountdownEnds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RacingManager_Race::LockInParticipants(::ArrayW<int32_t>  participantActorNumbers, bool  isProvisional)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"LockInParticipants", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, participantActorNumbers, isProvisional);
}
inline void GlobalNamespace::RacingManager_Race::PassCheckpoint(::Photon::Realtime::Player*  player, int32_t  checkpointIndex, double_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"PassCheckpoint", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, checkpointIndex, time);
}
inline void GlobalNamespace::RacingManager_Race::OnRacerOrderChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"OnRacerOrderChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RacingManager_Race::UpdateActorsInStartZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_Race*>(),
                        {"UpdateActorsInStartZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::RacingManager_Race* GlobalNamespace::RacingManager_Race::New_ctor(int32_t  raceIndex, ::GlobalNamespace::RacingManager_RaceSetup  setup, ::System::Collections::Generic::HashSet_1<int32_t>*  actorsInAnyRace, ::Photon::Pun::PhotonView*  photonView)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RacingManager_Race*>(raceIndex, setup, actorsInAnyRace, photonView));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RacingManager_Race::RacingManager_Race()   {
}
//  Writing Method size for method: ::GlobalNamespace::RacingManager_RacerComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RacingManager_RacerComparer::*)(::GlobalNamespace::RacingManager_RacerData, ::GlobalNamespace::RacingManager_RacerData)>(&::GlobalNamespace::RacingManager_RacerComparer::Compare)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5691aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_RacerComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::RacingManager_RacerData>(), ::i2c::type_of<::GlobalNamespace::RacingManager_RacerData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RacingManager_RacerComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingManager_RacerComparer::*)()>(&::GlobalNamespace::RacingManager_RacerComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5691b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_RacerComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RacingManager_RacerComparer::setStaticF_instance(::GlobalNamespace::RacingManager_RacerComparer*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RacingManager_RacerComparer*, "instance", ::GlobalNamespace::RacingManager_RacerComparer*>(std::forward<::GlobalNamespace::RacingManager_RacerComparer*>(value));
}
inline ::GlobalNamespace::RacingManager_RacerComparer* GlobalNamespace::RacingManager_RacerComparer::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RacingManager_RacerComparer*, "instance", ::GlobalNamespace::RacingManager_RacerComparer*>();
}
inline int32_t GlobalNamespace::RacingManager_RacerComparer::Compare(::GlobalNamespace::RacingManager_RacerData  a, ::GlobalNamespace::RacingManager_RacerData  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_RacerComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::RacingManager_RacerData>(), ::i2c::type_of<::GlobalNamespace::RacingManager_RacerData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void GlobalNamespace::RacingManager_RacerComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingManager_RacerComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RacingManager_RacerComparer* GlobalNamespace::RacingManager_RacerComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RacingManager_RacerComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::RacingManager_RacerData>"
constexpr  GlobalNamespace::RacingManager_RacerComparer::operator ::System::Collections::Generic::IComparer_1<::GlobalNamespace::RacingManager_RacerData>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::RacingManager_RacerData>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::RacingManager_RacerData>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::RacingManager_RacerData>* GlobalNamespace::RacingManager_RacerComparer::i___System__Collections__Generic__IComparer_1___GlobalNamespace__RacingManager_RacerData_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::RacingManager_RacerData>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RacingManager_RacerComparer::RacingManager_RacerComparer()   {
}
