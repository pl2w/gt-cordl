#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CurrentServerStats.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CurrentServerStats_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CurrentServerStats._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CurrentServerStats::*)()>(&::PlayFab::MultiplayerModels::CurrentServerStats::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8408a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CurrentServerStats*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_get_Active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Active;
}
constexpr int32_t const& PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_get_Active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Active;
}
constexpr void PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_set_Active(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Active = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_get_Propping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Propping;
}
constexpr int32_t const& PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_get_Propping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Propping;
}
constexpr void PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_set_Propping(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Propping = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_get_StandingBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StandingBy;
}
constexpr int32_t const& PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_get_StandingBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StandingBy;
}
constexpr void PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_set_StandingBy(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StandingBy = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_get_Total()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Total;
}
constexpr int32_t const& PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_get_Total() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Total;
}
constexpr void PlayFab::MultiplayerModels::CurrentServerStats::__cordl_internal_set_Total(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Total = value;
}
inline void PlayFab::MultiplayerModels::CurrentServerStats::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CurrentServerStats*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CurrentServerStats* PlayFab::MultiplayerModels::CurrentServerStats::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CurrentServerStats*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CurrentServerStats::CurrentServerStats()   {
}
