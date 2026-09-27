#pragma once
// IWYU pragma private; include "GlobalNamespace/RacingScoreboard.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RacingScoreboard_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RacingScoreboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RacingScoreboard::*)()>(&::GlobalNamespace::RacingScoreboard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5693250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::RacingScoreboard::__cordl_internal_get_mainDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainDisplay;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::RacingScoreboard::__cordl_internal_get_mainDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainDisplay;
}
constexpr void GlobalNamespace::RacingScoreboard::__cordl_internal_set_mainDisplay(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainDisplay = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::RacingScoreboard::__cordl_internal_get_timesDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timesDisplay;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::RacingScoreboard::__cordl_internal_get_timesDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timesDisplay;
}
constexpr void GlobalNamespace::RacingScoreboard::__cordl_internal_set_timesDisplay(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timesDisplay = value;
}
inline void GlobalNamespace::RacingScoreboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RacingScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RacingScoreboard* GlobalNamespace::RacingScoreboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RacingScoreboard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RacingScoreboard::RacingScoreboard()   {
}
