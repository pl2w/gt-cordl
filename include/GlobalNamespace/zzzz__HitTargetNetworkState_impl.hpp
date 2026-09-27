#pragma once
// IWYU pragma private; include "GlobalNamespace/HitTargetNetworkState.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "GlobalNamespace/zzzz__HitTargetNetworkState_def.hpp"
#include "GlobalNamespace/zzzz__HitTargetNetworkState_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GorillaTag/zzzz__WatchableIntSO_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::Awake)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x571c48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::Start)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x571c630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.SetInitialState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::SetInitialState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x571c724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"SetInitialState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::OnLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x571c78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x571c790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.TestPressCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::TestPressCheck)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x571c8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"TestPressCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.ProjectileHitReciever
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collision*)>(&::GlobalNamespace::HitTargetNetworkState::ProjectileHitReciever)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x571c948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"ProjectileHitReciever", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.TargetHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::HitTargetNetworkState::TargetHit)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x571c9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"TargetHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::get_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x571cd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)(int32_t)>(&::GlobalNamespace::HitTargetNetworkState::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x571cdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"set_Data", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::WriteDataFusion)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x571ce2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::ReadDataFusion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x571ce88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::HitTargetNetworkState::WriteDataPUN)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x571cf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::HitTargetNetworkState::ReadDataPUN)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x571cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.PlayAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)(int32_t, int32_t)>(&::GlobalNamespace::HitTargetNetworkState::PlayAudio)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x571cd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"PlayAudio", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.ResetCo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::ResetCo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x571cc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"ResetCo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x571d120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)(bool)>(&::GlobalNamespace::HitTargetNetworkState::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x571d130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState::*)()>(&::GlobalNamespace::HitTargetNetworkState::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x571d150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::WatchableIntSO>& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_networkedScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedScore;
}
constexpr ::UnityW<::GorillaTag::WatchableIntSO> const& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_networkedScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedScore;
}
constexpr void GlobalNamespace::HitTargetNetworkState::__cordl_internal_set_networkedScore(::UnityW<::GorillaTag::WatchableIntSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkedScore = value;
}
constexpr int32_t& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_hitCooldownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldownTime;
}
constexpr int32_t const& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_hitCooldownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldownTime;
}
constexpr void GlobalNamespace::HitTargetNetworkState::__cordl_internal_set_hitCooldownTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitCooldownTime = value;
}
constexpr bool& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_testPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPress;
}
constexpr bool const& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_testPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPress;
}
constexpr void GlobalNamespace::HitTargetNetworkState::__cordl_internal_set_testPress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testPress = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_audioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_audioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr void GlobalNamespace::HitTargetNetworkState::__cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClips = value;
}
constexpr bool& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_scoreIsDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreIsDistance;
}
constexpr bool const& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_scoreIsDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreIsDistance;
}
constexpr void GlobalNamespace::HitTargetNetworkState::__cordl_internal_set_scoreIsDistance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreIsDistance = value;
}
constexpr float_t& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_resetAfterDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetAfterDuration;
}
constexpr float_t const& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_resetAfterDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetAfterDuration;
}
constexpr void GlobalNamespace::HitTargetNetworkState::__cordl_internal_set_resetAfterDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetAfterDuration = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_audioPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioPlayer;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_audioPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioPlayer;
}
constexpr void GlobalNamespace::HitTargetNetworkState::__cordl_internal_set_audioPlayer(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioPlayer = value;
}
constexpr float_t& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_nextHittableTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextHittableTimestamp;
}
constexpr float_t const& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_nextHittableTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextHittableTimestamp;
}
constexpr void GlobalNamespace::HitTargetNetworkState::__cordl_internal_set_nextHittableTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextHittableTimestamp = value;
}
constexpr float_t& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_resetAtTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetAtTimestamp;
}
constexpr float_t const& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_resetAtTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetAtTimestamp;
}
constexpr void GlobalNamespace::HitTargetNetworkState::__cordl_internal_set_resetAtTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetAtTimestamp = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_resetCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get_resetCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetCoroutine;
}
constexpr void GlobalNamespace::HitTargetNetworkState::__cordl_internal_set_resetCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetCoroutine = value;
}
constexpr int32_t& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr int32_t const& GlobalNamespace::HitTargetNetworkState::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::HitTargetNetworkState::__cordl_internal_set__Data(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GlobalNamespace::HitTargetNetworkState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState::SetInitialState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"SetInitialState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::HitTargetNetworkState::TestPressCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"TestPressCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState::ProjectileHitReciever(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"ProjectileHitReciever", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collision);
}
inline void GlobalNamespace::HitTargetNetworkState::TargetHit(::UnityEngine::Vector3  launchPoint, ::UnityEngine::Vector3  impactPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"TargetHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, launchPoint, impactPoint);
}
inline int32_t GlobalNamespace::HitTargetNetworkState::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState::set_Data(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"set_Data", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HitTargetNetworkState::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::HitTargetNetworkState::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::HitTargetNetworkState::PlayAudio(int32_t  oldScore, int32_t  newScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"PlayAudio", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldScore, newScore);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::HitTargetNetworkState::ResetCo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {"ResetCo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::HitTargetNetworkState::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HitTargetNetworkState*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HitTargetNetworkState* GlobalNamespace::HitTargetNetworkState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HitTargetNetworkState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HitTargetNetworkState::HitTargetNetworkState()   {
}
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::*)(int32_t)>(&::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x571c920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::*)()>(&::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x571d2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::*)()>(&::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x571d2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::*)()>(&::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571d424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::*)()>(&::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x571d42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::*)()>(&::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571d464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::HitTargetNetworkState>& GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::HitTargetNetworkState> const& GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HitTargetNetworkState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15* GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15::HitTargetNetworkState__TestPressCheck_d__15()   {
}
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::*)(int32_t)>(&::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x571d0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::*)()>(&::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x571d174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::*)()>(&::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x571d178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::*)()>(&::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571d2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::*)()>(&::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x571d2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::*)()>(&::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571d2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::HitTargetNetworkState>& GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::HitTargetNetworkState> const& GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HitTargetNetworkState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27* GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27::HitTargetNetworkState__ResetCo_d__27()   {
}
