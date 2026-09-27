#pragma once
// IWYU pragma private; include "GorillaTag/Sports/SportScoreboard.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__SportScoreboardVisuals_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Sports/zzzz__SportScoreboard_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
#include "GlobalNamespace/zzzz__SportScoreboardVisuals_def.hpp"
#include "GorillaTag/Sports/zzzz__SportScoreboard_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)()>(&::GorillaTag::Sports::SportScoreboard::Awake)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5d3c2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                    {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.RegisterTeamVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)(int32_t, ::GlobalNamespace::SportScoreboardVisuals*)>(&::GorillaTag::Sports::SportScoreboard::RegisterTeamVisual)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d3c48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"RegisterTeamVisual", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SportScoreboardVisuals*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.UpdateScoreboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)()>(&::GorillaTag::Sports::SportScoreboard::UpdateScoreboard)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5d3c508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"UpdateScoreboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.OnScoreUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)()>(&::GorillaTag::Sports::SportScoreboard::OnScoreUpdated)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5d3c728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"OnScoreUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.TeamScored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)(int32_t)>(&::GorillaTag::Sports::SportScoreboard::TeamScored)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d3c154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"TeamScored", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.ResetScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)()>(&::GorillaTag::Sports::SportScoreboard::ResetScores)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d3c9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"ResetScores", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.MatchEndCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTag::Sports::SportScoreboard::*)(int32_t)>(&::GorillaTag::Sports::SportScoreboard::MatchEndCoroutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d3c940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"MatchEndCoroutine", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<int32_t> (::GorillaTag::Sports::SportScoreboard::*)()>(&::GorillaTag::Sports::SportScoreboard::get_Data)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d3ca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)()>(&::GorillaTag::Sports::SportScoreboard::WriteDataFusion)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d3cbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                    {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)()>(&::GorillaTag::Sports::SportScoreboard::ReadDataFusion)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d3cc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                    {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::Sports::SportScoreboard::WriteDataPUN)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d3ccf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                    {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::Sports::SportScoreboard::ReadDataPUN)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d3cdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                    {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)()>(&::GorillaTag::Sports::SportScoreboard::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d3ce94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)(bool)>(&::GorillaTag::Sports::SportScoreboard::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d3cfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                    {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard::*)()>(&::GorillaTag::Sports::SportScoreboard::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d3d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                    {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GorillaTag::Sports::SportScoreboard_TeamParameters*>*& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_teamParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamParameters;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::Sports::SportScoreboard_TeamParameters*>* const& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_teamParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamParameters;
}
constexpr void GorillaTag::Sports::SportScoreboard::__cordl_internal_set_teamParameters(::System::Collections::Generic::List_1<::GorillaTag::Sports::SportScoreboard_TeamParameters*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamParameters = value;
}
constexpr int32_t& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_matchEndScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchEndScore;
}
constexpr int32_t const& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_matchEndScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchEndScore;
}
constexpr void GorillaTag::Sports::SportScoreboard::__cordl_internal_set_matchEndScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchEndScore = value;
}
constexpr float_t& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_matchEndScoreResetDelayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchEndScoreResetDelayTime;
}
constexpr float_t const& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_matchEndScoreResetDelayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchEndScoreResetDelayTime;
}
constexpr void GorillaTag::Sports::SportScoreboard::__cordl_internal_set_matchEndScoreResetDelayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchEndScoreResetDelayTime = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_teamScores()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamScores;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_teamScores() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamScores;
}
constexpr void GorillaTag::Sports::SportScoreboard::__cordl_internal_set_teamScores(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamScores = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_teamScoresPrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamScoresPrev;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_teamScoresPrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamScoresPrev;
}
constexpr void GorillaTag::Sports::SportScoreboard::__cordl_internal_set_teamScoresPrev(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamScoresPrev = value;
}
constexpr bool& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_runningMatchEndCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runningMatchEndCoroutine;
}
constexpr bool const& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_runningMatchEndCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runningMatchEndCoroutine;
}
constexpr void GorillaTag::Sports::SportScoreboard::__cordl_internal_set_runningMatchEndCoroutine(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runningMatchEndCoroutine = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTag::Sports::SportScoreboard::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SportScoreboardVisuals>>& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_scoreVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreVisuals;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SportScoreboardVisuals>> const& GorillaTag::Sports::SportScoreboard::__cordl_internal_get_scoreVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreVisuals;
}
constexpr void GorillaTag::Sports::SportScoreboard::__cordl_internal_set_scoreVisuals(::ArrayW<::UnityW<::GlobalNamespace::SportScoreboardVisuals>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreVisuals = value;
}
constexpr ::ArrayW<int32_t>& GorillaTag::Sports::SportScoreboard::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::ArrayW<int32_t> const& GorillaTag::Sports::SportScoreboard::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GorillaTag::Sports::SportScoreboard::__cordl_internal_set__Data(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GorillaTag::Sports::SportScoreboard::setStaticF_Instance(::UnityW<::GorillaTag::Sports::SportScoreboard>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTag::Sports::SportScoreboard>, "Instance", ::GorillaTag::Sports::SportScoreboard*>(std::forward<::UnityW<::GorillaTag::Sports::SportScoreboard>>(value));
}
inline ::UnityW<::GorillaTag::Sports::SportScoreboard> GorillaTag::Sports::SportScoreboard::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTag::Sports::SportScoreboard>, "Instance", ::GorillaTag::Sports::SportScoreboard*>();
}
inline void GorillaTag::Sports::SportScoreboard::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Sports::SportScoreboard::RegisterTeamVisual(int32_t  TeamIndex, ::GlobalNamespace::SportScoreboardVisuals*  visuals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"RegisterTeamVisual", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SportScoreboardVisuals*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, TeamIndex, visuals);
}
inline void GorillaTag::Sports::SportScoreboard::UpdateScoreboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"UpdateScoreboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Sports::SportScoreboard::OnScoreUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"OnScoreUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Sports::SportScoreboard::TeamScored(int32_t  team)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"TeamScored", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, team);
}
inline void GorillaTag::Sports::SportScoreboard::ResetScores()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"ResetScores", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTag::Sports::SportScoreboard::MatchEndCoroutine(int32_t  winningTeam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"MatchEndCoroutine", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, winningTeam);
}
inline ::Fusion::NetworkArray_1<int32_t> GorillaTag::Sports::SportScoreboard::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<int32_t>>(this, ___internal_method);
}
inline void GorillaTag::Sports::SportScoreboard::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Sports::SportScoreboard::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Sports::SportScoreboard::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTag::Sports::SportScoreboard::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTag::Sports::SportScoreboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Sports::SportScoreboard::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GorillaTag::Sports::SportScoreboard::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Sports::SportScoreboard*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Sports::SportScoreboard* GorillaTag::Sports::SportScoreboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Sports::SportScoreboard*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Sports::SportScoreboard::SportScoreboard()   {
}
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::*)(int32_t)>(&::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d3ca68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::*)()>(&::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d3d11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::*)()>(&::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5d3d120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::*)()>(&::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3d2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::*)()>(&::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d3d2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::*)()>(&::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3d2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTag::Sports::SportScoreboard>& GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTag::Sports::SportScoreboard> const& GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_set___4__this(::UnityW<::GorillaTag::Sports::SportScoreboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_get_winningTeam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winningTeam;
}
constexpr int32_t const& GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_get_winningTeam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winningTeam;
}
constexpr void GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::__cordl_internal_set_winningTeam(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___winningTeam = value;
}
inline void GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16* GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16::SportScoreboard__MatchEndCoroutine_d__16()   {
}
//  Writing Method size for method: ::GorillaTag::Sports::SportScoreboard_TeamParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportScoreboard_TeamParameters::*)()>(&::GorillaTag::Sports::SportScoreboard_TeamParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3d114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard_TeamParameters*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTag::Sports::SportScoreboard_TeamParameters::__cordl_internal_get_matchWonAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchWonAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTag::Sports::SportScoreboard_TeamParameters::__cordl_internal_get_matchWonAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchWonAudio;
}
constexpr void GorillaTag::Sports::SportScoreboard_TeamParameters::__cordl_internal_set_matchWonAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchWonAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTag::Sports::SportScoreboard_TeamParameters::__cordl_internal_get_goalScoredAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goalScoredAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTag::Sports::SportScoreboard_TeamParameters::__cordl_internal_get_goalScoredAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goalScoredAudio;
}
constexpr void GorillaTag::Sports::SportScoreboard_TeamParameters::__cordl_internal_set_goalScoredAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goalScoredAudio = value;
}
inline void GorillaTag::Sports::SportScoreboard_TeamParameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportScoreboard_TeamParameters*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Sports::SportScoreboard_TeamParameters* GorillaTag::Sports::SportScoreboard_TeamParameters::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Sports::SportScoreboard_TeamParameters*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Sports::SportScoreboard_TeamParameters::SportScoreboard_TeamParameters()   {
}
