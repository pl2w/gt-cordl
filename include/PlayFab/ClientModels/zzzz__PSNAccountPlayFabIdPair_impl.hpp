#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PSNAccountPlayFabIdPair.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__PSNAccountPlayFabIdPair_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::PSNAccountPlayFabIdPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::PSNAccountPlayFabIdPair::*)()>(&::PlayFab::ClientModels::PSNAccountPlayFabIdPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PSNAccountPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::PSNAccountPlayFabIdPair::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::PSNAccountPlayFabIdPair::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::PSNAccountPlayFabIdPair::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& PlayFab::ClientModels::PSNAccountPlayFabIdPair::__cordl_internal_get_PSNAccountId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PSNAccountId;
}
constexpr ::StringW const& PlayFab::ClientModels::PSNAccountPlayFabIdPair::__cordl_internal_get_PSNAccountId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PSNAccountId;
}
constexpr void PlayFab::ClientModels::PSNAccountPlayFabIdPair::__cordl_internal_set_PSNAccountId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PSNAccountId = value;
}
inline void PlayFab::ClientModels::PSNAccountPlayFabIdPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PSNAccountPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::PSNAccountPlayFabIdPair* PlayFab::ClientModels::PSNAccountPlayFabIdPair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::PSNAccountPlayFabIdPair*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair()   {
}
