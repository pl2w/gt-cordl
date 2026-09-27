#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTitlePublicKeyResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetTitlePublicKeyResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetTitlePublicKeyResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetTitlePublicKeyResult::*)()>(&::PlayFab::ClientModels::GetTitlePublicKeyResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTitlePublicKeyResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetTitlePublicKeyResult::__cordl_internal_get_RSAPublicKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RSAPublicKey;
}
constexpr ::StringW const& PlayFab::ClientModels::GetTitlePublicKeyResult::__cordl_internal_get_RSAPublicKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RSAPublicKey;
}
constexpr void PlayFab::ClientModels::GetTitlePublicKeyResult::__cordl_internal_set_RSAPublicKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RSAPublicKey = value;
}
inline void PlayFab::ClientModels::GetTitlePublicKeyResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTitlePublicKeyResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetTitlePublicKeyResult* PlayFab::ClientModels::GetTitlePublicKeyResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetTitlePublicKeyResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetTitlePublicKeyResult::GetTitlePublicKeyResult()   {
}
