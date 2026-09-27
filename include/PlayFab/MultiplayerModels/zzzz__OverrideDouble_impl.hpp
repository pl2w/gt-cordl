#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/OverrideDouble.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__OverrideDouble_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::OverrideDouble._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::OverrideDouble::*)()>(&::PlayFab::MultiplayerModels::OverrideDouble::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::OverrideDouble*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& PlayFab::MultiplayerModels::OverrideDouble::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr double_t const& PlayFab::MultiplayerModels::OverrideDouble::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void PlayFab::MultiplayerModels::OverrideDouble::__cordl_internal_set_Value(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
inline void PlayFab::MultiplayerModels::OverrideDouble::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::OverrideDouble*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::OverrideDouble* PlayFab::MultiplayerModels::OverrideDouble::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::OverrideDouble*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::OverrideDouble::OverrideDouble()   {
}
