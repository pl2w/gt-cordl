#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/Statistics.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__Statistics_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::Statistics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::Statistics::*)()>(&::PlayFab::MultiplayerModels::Statistics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::Statistics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& PlayFab::MultiplayerModels::Statistics::__cordl_internal_get_Average()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Average;
}
constexpr double_t const& PlayFab::MultiplayerModels::Statistics::__cordl_internal_get_Average() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Average;
}
constexpr void PlayFab::MultiplayerModels::Statistics::__cordl_internal_set_Average(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Average = value;
}
constexpr double_t& PlayFab::MultiplayerModels::Statistics::__cordl_internal_get_Percentile50()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Percentile50;
}
constexpr double_t const& PlayFab::MultiplayerModels::Statistics::__cordl_internal_get_Percentile50() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Percentile50;
}
constexpr void PlayFab::MultiplayerModels::Statistics::__cordl_internal_set_Percentile50(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Percentile50 = value;
}
constexpr double_t& PlayFab::MultiplayerModels::Statistics::__cordl_internal_get_Percentile90()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Percentile90;
}
constexpr double_t const& PlayFab::MultiplayerModels::Statistics::__cordl_internal_get_Percentile90() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Percentile90;
}
constexpr void PlayFab::MultiplayerModels::Statistics::__cordl_internal_set_Percentile90(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Percentile90 = value;
}
constexpr double_t& PlayFab::MultiplayerModels::Statistics::__cordl_internal_get_Percentile99()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Percentile99;
}
constexpr double_t const& PlayFab::MultiplayerModels::Statistics::__cordl_internal_get_Percentile99() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Percentile99;
}
constexpr void PlayFab::MultiplayerModels::Statistics::__cordl_internal_set_Percentile99(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Percentile99 = value;
}
inline void PlayFab::MultiplayerModels::Statistics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::Statistics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::Statistics* PlayFab::MultiplayerModels::Statistics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::Statistics*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::Statistics::Statistics()   {
}
