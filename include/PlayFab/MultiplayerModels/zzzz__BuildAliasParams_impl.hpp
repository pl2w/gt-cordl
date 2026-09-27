#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/BuildAliasParams.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildAliasParams_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::BuildAliasParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::BuildAliasParams::*)()>(&::PlayFab::MultiplayerModels::BuildAliasParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8407b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::BuildAliasParams*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::BuildAliasParams::__cordl_internal_get_AliasId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AliasId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::BuildAliasParams::__cordl_internal_get_AliasId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AliasId;
}
constexpr void PlayFab::MultiplayerModels::BuildAliasParams::__cordl_internal_set_AliasId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AliasId = value;
}
inline void PlayFab::MultiplayerModels::BuildAliasParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::BuildAliasParams*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::BuildAliasParams* PlayFab::MultiplayerModels::BuildAliasParams::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::BuildAliasParams*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::BuildAliasParams::BuildAliasParams()   {
}
