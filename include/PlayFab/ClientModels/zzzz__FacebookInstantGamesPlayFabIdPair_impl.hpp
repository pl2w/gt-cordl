#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/FacebookInstantGamesPlayFabIdPair.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__FacebookInstantGamesPlayFabIdPair_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::*)()>(&::PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::__cordl_internal_get_FacebookInstantGamesId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInstantGamesId;
}
constexpr ::StringW const& PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::__cordl_internal_get_FacebookInstantGamesId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInstantGamesId;
}
constexpr void PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::__cordl_internal_set_FacebookInstantGamesId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FacebookInstantGamesId = value;
}
constexpr ::StringW& PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
inline void PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair* PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair()   {
}
