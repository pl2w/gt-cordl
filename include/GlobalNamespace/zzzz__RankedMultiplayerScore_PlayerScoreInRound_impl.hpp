#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerScore_PlayerScoreInRound.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_PlayerScoreInRound_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound::*)(int32_t, bool)>(&::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5964550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound::_ctor(int32_t  id, bool  initInfected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, initInfected);
}
// Ctor Parameters [CppParam { name: "PlayerId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NumTags", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PointsOnDefense", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "JoinTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TaggedTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Infected", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound::RankedMultiplayerScore_PlayerScoreInRound(int32_t  PlayerId, int32_t  NumTags, float_t  PointsOnDefense, float_t  JoinTime, float_t  TaggedTime, bool  Infected) noexcept  {
this->PlayerId = PlayerId;
this->NumTags = NumTags;
this->PointsOnDefense = PointsOnDefense;
this->JoinTime = JoinTime;
this->TaggedTime = TaggedTime;
this->Infected = Infected;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound::RankedMultiplayerScore_PlayerScoreInRound()   {
}
