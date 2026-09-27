#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveScoreboardLine.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveScoreboardLine_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveScoreboard_PredictedResult_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveScoreboardLine.SetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::*)(::StringW, ::UnityEngine::Sprite*)>(&::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::SetPlayer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x592b278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {"SetPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveScoreboardLine.SetScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::*)(float_t, int32_t)>(&::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::SetScore)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x592b2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {"SetScore", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveScoreboardLine.SetPredictedResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::*)(::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult)>(&::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::SetPredictedResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x592b434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {"SetPredictedResult", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveScoreboardLine.DisplayPredictedResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::*)(bool)>(&::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::DisplayPredictedResults)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x592b4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {"DisplayPredictedResults", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveScoreboardLine.SetInfected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::*)(bool)>(&::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::SetInfected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x592b470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {"SetInfected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveScoreboardLine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::*)()>(&::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592b4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_rankSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rankSprite;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_rankSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rankSprite;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_set_rankSprite(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rankSprite = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_playerNameDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameDisplay;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_playerNameDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameDisplay;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_set_playerNameDisplay(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameDisplay = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_untaggedTimeDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___untaggedTimeDisplay;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_untaggedTimeDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___untaggedTimeDisplay;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_set_untaggedTimeDisplay(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___untaggedTimeDisplay = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_tagCountDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCountDisplay;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_tagCountDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCountDisplay;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_set_tagCountDisplay(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagCountDisplay = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_resultSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSprite;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_resultSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSprite;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_set_resultSprite(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultSprite = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>>& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_resultSprites()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSprites;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>> const& GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_get_resultSprites() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSprites;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::__cordl_internal_set_resultSprites(::ArrayW<::UnityW<::UnityEngine::Sprite>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultSprites = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::SetPlayer(::StringW  playerName, ::UnityEngine::Sprite*  icon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {"SetPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName, icon);
}
inline void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::SetScore(float_t  untaggedTime, int32_t  tagCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {"SetScore", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, untaggedTime, tagCount);
}
inline void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::SetPredictedResult(::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {"SetPredictedResult", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::DisplayPredictedResults(bool  bShow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {"DisplayPredictedResults", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bShow);
}
inline void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::SetInfected(bool  infected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {"SetInfected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, infected);
}
inline void GlobalNamespace::GorillaTagCompetitiveScoreboardLine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveScoreboardLine* GlobalNamespace::GorillaTagCompetitiveScoreboardLine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveScoreboardLine::GorillaTagCompetitiveScoreboardLine()   {
}
