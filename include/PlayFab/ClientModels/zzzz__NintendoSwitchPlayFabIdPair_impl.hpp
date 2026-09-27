#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/NintendoSwitchPlayFabIdPair.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__NintendoSwitchPlayFabIdPair_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair::*)()>(&::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::NintendoSwitchPlayFabIdPair::__cordl_internal_get_NintendoSwitchDeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NintendoSwitchDeviceId;
}
constexpr ::StringW const& PlayFab::ClientModels::NintendoSwitchPlayFabIdPair::__cordl_internal_get_NintendoSwitchDeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NintendoSwitchDeviceId;
}
constexpr void PlayFab::ClientModels::NintendoSwitchPlayFabIdPair::__cordl_internal_set_NintendoSwitchDeviceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NintendoSwitchDeviceId = value;
}
constexpr ::StringW& PlayFab::ClientModels::NintendoSwitchPlayFabIdPair::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::NintendoSwitchPlayFabIdPair::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::NintendoSwitchPlayFabIdPair::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
inline void PlayFab::ClientModels::NintendoSwitchPlayFabIdPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair* PlayFab::ClientModels::NintendoSwitchPlayFabIdPair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair()   {
}
