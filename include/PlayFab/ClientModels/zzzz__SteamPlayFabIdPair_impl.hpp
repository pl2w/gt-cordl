#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SteamPlayFabIdPair.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__SteamPlayFabIdPair_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::SteamPlayFabIdPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::SteamPlayFabIdPair::*)()>(&::PlayFab::ClientModels::SteamPlayFabIdPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SteamPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::SteamPlayFabIdPair::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::SteamPlayFabIdPair::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::SteamPlayFabIdPair::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& PlayFab::ClientModels::SteamPlayFabIdPair::__cordl_internal_get_SteamStringId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamStringId;
}
constexpr ::StringW const& PlayFab::ClientModels::SteamPlayFabIdPair::__cordl_internal_get_SteamStringId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamStringId;
}
constexpr void PlayFab::ClientModels::SteamPlayFabIdPair::__cordl_internal_set_SteamStringId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SteamStringId = value;
}
inline void PlayFab::ClientModels::SteamPlayFabIdPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SteamPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::SteamPlayFabIdPair* PlayFab::ClientModels::SteamPlayFabIdPair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::SteamPlayFabIdPair*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::SteamPlayFabIdPair::SteamPlayFabIdPair()   {
}
