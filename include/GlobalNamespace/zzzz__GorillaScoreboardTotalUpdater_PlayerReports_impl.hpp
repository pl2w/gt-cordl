#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaScoreboardTotalUpdater_PlayerReports.hpp"
#include "GlobalNamespace/zzzz__GorillaScoreboardTotalUpdater_PlayerReports_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerScoreboardLine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports::*)(::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports, ::GlobalNamespace::GorillaPlayerScoreboardLine*)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59a15cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>(), ::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports::*)(::GlobalNamespace::GorillaPlayerScoreboardLine*)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59a1644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports::_ctor(::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports  reportToUpdate, ::GlobalNamespace::GorillaPlayerScoreboardLine*  lineToUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>(), ::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reportToUpdate, lineToUpdate);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports::_ctor(::GlobalNamespace::GorillaPlayerScoreboardLine*  lineToUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lineToUpdate);
}
// Ctor Parameters [CppParam { name: "cheating", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "toxicity", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hateSpeech", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pressedReport", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports::GorillaScoreboardTotalUpdater_PlayerReports(bool  cheating, bool  toxicity, bool  hateSpeech, bool  pressedReport) noexcept  {
this->cheating = cheating;
this->toxicity = toxicity;
this->hateSpeech = hateSpeech;
this->pressedReport = pressedReport;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports::GorillaScoreboardTotalUpdater_PlayerReports()   {
}
