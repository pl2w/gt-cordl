#pragma once
// IWYU pragma private; include "GlobalNamespace/RaceCheckpointManager.hpp"
#include "GlobalNamespace/zzzz__RaceCheckpoint_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RaceCheckpointManager_def.hpp"
#include "GlobalNamespace/zzzz__RaceVisual_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RaceCheckpointManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceCheckpointManager::*)()>(&::GlobalNamespace::RaceCheckpointManager::Start)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x568e6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceCheckpointManager.OnRaceStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceCheckpointManager::*)()>(&::GlobalNamespace::RaceCheckpointManager::OnRaceStart)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x568e7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {"OnRaceStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceCheckpointManager.OnRaceEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceCheckpointManager::*)()>(&::GlobalNamespace::RaceCheckpointManager::OnRaceEnd)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x568e788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {"OnRaceEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceCheckpointManager.OnCheckpointReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceCheckpointManager::*)(int32_t, ::GlobalNamespace::SoundBankPlayer*)>(&::GlobalNamespace::RaceCheckpointManager::OnCheckpointReached)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x568e624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {"OnCheckpointReached", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SoundBankPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceCheckpointManager.IsPlayerNearCheckpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RaceCheckpointManager::*)(::GlobalNamespace::VRRig*, int32_t)>(&::GlobalNamespace::RaceCheckpointManager::IsPlayerNearCheckpoint)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x568e8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {"IsPlayerNearCheckpoint", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceCheckpointManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceCheckpointManager::*)()>(&::GlobalNamespace::RaceCheckpointManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568e948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::RaceCheckpoint>>& GlobalNamespace::RaceCheckpointManager::__cordl_internal_get_checkpoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkpoints;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::RaceCheckpoint>> const& GlobalNamespace::RaceCheckpointManager::__cordl_internal_get_checkpoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkpoints;
}
constexpr void GlobalNamespace::RaceCheckpointManager::__cordl_internal_set_checkpoints(::ArrayW<::UnityW<::GlobalNamespace::RaceCheckpoint>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkpoints = value;
}
constexpr ::UnityW<::GlobalNamespace::RaceVisual>& GlobalNamespace::RaceCheckpointManager::__cordl_internal_get_visual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visual;
}
constexpr ::UnityW<::GlobalNamespace::RaceVisual> const& GlobalNamespace::RaceCheckpointManager::__cordl_internal_get_visual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visual;
}
constexpr void GlobalNamespace::RaceCheckpointManager::__cordl_internal_set_visual(::UnityW<::GlobalNamespace::RaceVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visual = value;
}
inline void GlobalNamespace::RaceCheckpointManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RaceCheckpointManager::OnRaceStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {"OnRaceStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RaceCheckpointManager::OnRaceEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {"OnRaceEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RaceCheckpointManager::OnCheckpointReached(int32_t  index, ::GlobalNamespace::SoundBankPlayer*  checkpointSound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {"OnCheckpointReached", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SoundBankPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, checkpointSound);
}
inline bool GlobalNamespace::RaceCheckpointManager::IsPlayerNearCheckpoint(::GlobalNamespace::VRRig*  player, int32_t  checkpointIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {"IsPlayerNearCheckpoint", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, checkpointIdx);
}
inline void GlobalNamespace::RaceCheckpointManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpointManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RaceCheckpointManager* GlobalNamespace::RaceCheckpointManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RaceCheckpointManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RaceCheckpointManager::RaceCheckpointManager()   {
}
