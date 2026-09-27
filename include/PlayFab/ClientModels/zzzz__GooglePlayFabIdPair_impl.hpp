#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GooglePlayFabIdPair.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GooglePlayFabIdPair_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GooglePlayFabIdPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GooglePlayFabIdPair::*)()>(&::PlayFab::ClientModels::GooglePlayFabIdPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84deb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GooglePlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GooglePlayFabIdPair::__cordl_internal_get_GoogleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleId;
}
constexpr ::StringW const& PlayFab::ClientModels::GooglePlayFabIdPair::__cordl_internal_get_GoogleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleId;
}
constexpr void PlayFab::ClientModels::GooglePlayFabIdPair::__cordl_internal_set_GoogleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoogleId = value;
}
constexpr ::StringW& PlayFab::ClientModels::GooglePlayFabIdPair::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::GooglePlayFabIdPair::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::GooglePlayFabIdPair::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
inline void PlayFab::ClientModels::GooglePlayFabIdPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GooglePlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GooglePlayFabIdPair* PlayFab::ClientModels::GooglePlayFabIdPair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GooglePlayFabIdPair*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GooglePlayFabIdPair::GooglePlayFabIdPair()   {
}
