#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/WinnerScoreboard.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__WinnerScoreboard_def.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleCourse_RaceState_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::WinnerScoreboard.UpdateBoard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::WinnerScoreboard::*)(::StringW, ::GlobalNamespace::ObstacleCourse_RaceState)>(&::GorillaTagScripts::ObstacleCourse::WinnerScoreboard::UpdateBoard)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5c176d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::WinnerScoreboard*>(),
                        {"UpdateBoard", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ObstacleCourse_RaceState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::WinnerScoreboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::WinnerScoreboard::*)()>(&::GorillaTagScripts::ObstacleCourse::WinnerScoreboard::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c19258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::WinnerScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::ObstacleCourse::WinnerScoreboard::__cordl_internal_get_raceStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceStarted;
}
constexpr ::StringW const& GorillaTagScripts::ObstacleCourse::WinnerScoreboard::__cordl_internal_get_raceStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceStarted;
}
constexpr void GorillaTagScripts::ObstacleCourse::WinnerScoreboard::__cordl_internal_set_raceStarted(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceStarted = value;
}
constexpr ::StringW& GorillaTagScripts::ObstacleCourse::WinnerScoreboard::__cordl_internal_get_raceLoading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceLoading;
}
constexpr ::StringW const& GorillaTagScripts::ObstacleCourse::WinnerScoreboard::__cordl_internal_get_raceLoading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceLoading;
}
constexpr void GorillaTagScripts::ObstacleCourse::WinnerScoreboard::__cordl_internal_set_raceLoading(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceLoading = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::ObstacleCourse::WinnerScoreboard::__cordl_internal_get_output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::ObstacleCourse::WinnerScoreboard::__cordl_internal_get_output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr void GorillaTagScripts::ObstacleCourse::WinnerScoreboard::__cordl_internal_set_output(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___output = value;
}
inline void GorillaTagScripts::ObstacleCourse::WinnerScoreboard::UpdateBoard(::StringW  winner, ::GlobalNamespace::ObstacleCourse_RaceState  _currentState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::WinnerScoreboard*>(),
                        {"UpdateBoard", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ObstacleCourse_RaceState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, winner, _currentState);
}
inline void GorillaTagScripts::ObstacleCourse::WinnerScoreboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::WinnerScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::ObstacleCourse::WinnerScoreboard* GorillaTagScripts::ObstacleCourse::WinnerScoreboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ObstacleCourse::WinnerScoreboard*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ObstacleCourse::WinnerScoreboard::WinnerScoreboard()   {
}
