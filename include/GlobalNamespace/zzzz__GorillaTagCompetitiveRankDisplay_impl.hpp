#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveRankDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveRankDisplay_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveRankDisplay.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveRankDisplay::*)()>(&::GlobalNamespace::GorillaTagCompetitiveRankDisplay::OnEnable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x592a7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveRankDisplay.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveRankDisplay::*)()>(&::GlobalNamespace::GorillaTagCompetitiveRankDisplay::OnDisable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x592a94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveRankDisplay.HandleRankedSubtierChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveRankDisplay::*)(int32_t, int32_t)>(&::GlobalNamespace::GorillaTagCompetitiveRankDisplay::HandleRankedSubtierChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x592a8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {"HandleRankedSubtierChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveRankDisplay.UpdateRankIcons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveRankDisplay::*)(int32_t)>(&::GlobalNamespace::GorillaTagCompetitiveRankDisplay::UpdateRankIcons)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x592aa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {"UpdateRankIcons", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveRankDisplay.UpdateRankProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveRankDisplay::*)(float_t)>(&::GlobalNamespace::GorillaTagCompetitiveRankDisplay::UpdateRankProgress)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x592ad30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {"UpdateRankProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveRankDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveRankDisplay::*)()>(&::GlobalNamespace::GorillaTagCompetitiveRankDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x592ad8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_progressBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBar;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_progressBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBar;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_set_progressBar(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressBar = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_progressBarSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBarSize;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_progressBarSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBarSize;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_set_progressBarSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressBarSize = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_currentRankSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRankSprite;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_currentRankSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRankSprite;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_set_currentRankSprite(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRankSprite = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_prevRankSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevRankSprite;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_prevRankSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevRankSprite;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_set_prevRankSprite(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevRankSprite = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_nextRankSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextRankSprite;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_nextRankSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextRankSprite;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_set_nextRankSprite(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextRankSprite = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_currentRank_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRank_Name;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_currentRank_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRank_Name;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_set_currentRank_Name(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRank_Name = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_prevText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_prevText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevText;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_set_prevText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_nextText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_nextText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextText;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_set_nextText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_prevRank_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevRank_Name;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_prevRank_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevRank_Name;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_set_prevRank_Name(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevRank_Name = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_nextRank_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextRank_Name;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_get_nextRank_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextRank_Name;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRankDisplay::__cordl_internal_set_nextRank_Name(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextRank_Name = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveRankDisplay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveRankDisplay::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveRankDisplay::HandleRankedSubtierChanged(int32_t  questSubTier, int32_t  pcSubTier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {"HandleRankedSubtierChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questSubTier, pcSubTier);
}
inline void GlobalNamespace::GorillaTagCompetitiveRankDisplay::UpdateRankIcons(int32_t  currentRank)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {"UpdateRankIcons", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentRank);
}
inline void GlobalNamespace::GorillaTagCompetitiveRankDisplay::UpdateRankProgress(float_t  percent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {"UpdateRankProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, percent);
}
inline void GlobalNamespace::GorillaTagCompetitiveRankDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveRankDisplay* GlobalNamespace::GorillaTagCompetitiveRankDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveRankDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveRankDisplay::GorillaTagCompetitiveRankDisplay()   {
}
