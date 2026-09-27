#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIScoreboardEntry.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRUIScoreboardEntry_def.hpp"
#include "GlobalNamespace/zzzz__GRUIScoreboard_ScoreboardScreen_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRUIScoreboardEntry.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIScoreboardEntry::*)(::GlobalNamespace::VRRig*, int32_t, ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen)>(&::GlobalNamespace::GRUIScoreboardEntry::Setup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58ec9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboardEntry*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIScoreboardEntry.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIScoreboardEntry::*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen)>(&::GlobalNamespace::GRUIScoreboardEntry::Refresh)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x58ecb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboardEntry*>(),
                        {"Refresh", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIScoreboardEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIScoreboardEntry::*)()>(&::GlobalNamespace::GRUIScoreboardEntry::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58ed1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboardEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerNameLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerNameLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameLabel;
}
constexpr void GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_set_playerNameLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameLabel = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerCutLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCutLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerCutLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCutLabel;
}
constexpr void GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_set_playerCutLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCutLabel = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_defaultUIParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultUIParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_defaultUIParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultUIParent;
}
constexpr void GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_set_defaultUIParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultUIParent = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerTitleLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTitleLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerTitleLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTitleLabel;
}
constexpr void GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_set_playerTitleLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTitleLabel = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerCurrencyLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCurrencyLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerCurrencyLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCurrencyLabel;
}
constexpr void GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_set_playerCurrencyLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCurrencyLabel = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_shiftCutParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftCutParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_shiftCutParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftCutParent;
}
constexpr void GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_set_shiftCutParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftCutParent = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerTimeLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTimeLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerTimeLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTimeLabel;
}
constexpr void GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_set_playerTimeLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTimeLabel = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerPercentageLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPercentageLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerPercentageLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPercentageLabel;
}
constexpr void GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_set_playerPercentageLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPercentageLabel = value;
}
constexpr int32_t& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerActorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerActorId;
}
constexpr int32_t const& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_playerActorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerActorId;
}
constexpr void GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_set_playerActorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerActorId = value;
}
constexpr int32_t& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_currencySet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencySet;
}
constexpr int32_t const& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_currencySet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencySet;
}
constexpr void GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_set_currencySet(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currencySet = value;
}
constexpr ::StringW& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_titleSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleSet;
}
constexpr ::StringW const& GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_get_titleSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleSet;
}
constexpr void GlobalNamespace::GRUIScoreboardEntry::__cordl_internal_set_titleSet(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleSet = value;
}
inline void GlobalNamespace::GRUIScoreboardEntry::Setup(::GlobalNamespace::VRRig*  vrRig, int32_t  playerActorId, ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  screenType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboardEntry*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vrRig, playerActorId, screenType);
}
inline void GlobalNamespace::GRUIScoreboardEntry::Refresh(::GlobalNamespace::VRRig*  vrRig, ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  screenType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboardEntry*>(),
                        {"Refresh", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vrRig, screenType);
}
inline void GlobalNamespace::GRUIScoreboardEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboardEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRUIScoreboardEntry* GlobalNamespace::GRUIScoreboardEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRUIScoreboardEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRUIScoreboardEntry::GRUIScoreboardEntry()   {
}
