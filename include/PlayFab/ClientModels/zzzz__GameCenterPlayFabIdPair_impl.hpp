#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GameCenterPlayFabIdPair.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GameCenterPlayFabIdPair_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GameCenterPlayFabIdPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GameCenterPlayFabIdPair::*)()>(&::PlayFab::ClientModels::GameCenterPlayFabIdPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GameCenterPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GameCenterPlayFabIdPair::__cordl_internal_get_GameCenterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCenterId;
}
constexpr ::StringW const& PlayFab::ClientModels::GameCenterPlayFabIdPair::__cordl_internal_get_GameCenterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCenterId;
}
constexpr void PlayFab::ClientModels::GameCenterPlayFabIdPair::__cordl_internal_set_GameCenterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameCenterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::GameCenterPlayFabIdPair::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::GameCenterPlayFabIdPair::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::GameCenterPlayFabIdPair::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
inline void PlayFab::ClientModels::GameCenterPlayFabIdPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GameCenterPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GameCenterPlayFabIdPair* PlayFab::ClientModels::GameCenterPlayFabIdPair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GameCenterPlayFabIdPair*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GameCenterPlayFabIdPair::GameCenterPlayFabIdPair()   {
}
