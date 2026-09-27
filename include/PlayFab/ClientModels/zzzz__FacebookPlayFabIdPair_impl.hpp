#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/FacebookPlayFabIdPair.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__FacebookPlayFabIdPair_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::FacebookPlayFabIdPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::FacebookPlayFabIdPair::*)()>(&::PlayFab::ClientModels::FacebookPlayFabIdPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::FacebookPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::FacebookPlayFabIdPair::__cordl_internal_get_FacebookId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookId;
}
constexpr ::StringW const& PlayFab::ClientModels::FacebookPlayFabIdPair::__cordl_internal_get_FacebookId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookId;
}
constexpr void PlayFab::ClientModels::FacebookPlayFabIdPair::__cordl_internal_set_FacebookId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FacebookId = value;
}
constexpr ::StringW& PlayFab::ClientModels::FacebookPlayFabIdPair::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::FacebookPlayFabIdPair::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::FacebookPlayFabIdPair::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
inline void PlayFab::ClientModels::FacebookPlayFabIdPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::FacebookPlayFabIdPair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::FacebookPlayFabIdPair* PlayFab::ClientModels::FacebookPlayFabIdPair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::FacebookPlayFabIdPair*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::FacebookPlayFabIdPair::FacebookPlayFabIdPair()   {
}
