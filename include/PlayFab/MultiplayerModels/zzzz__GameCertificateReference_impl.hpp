#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GameCertificateReference.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GameCertificateReference_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GameCertificateReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GameCertificateReference::*)()>(&::PlayFab::MultiplayerModels::GameCertificateReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GameCertificateReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::GameCertificateReference::__cordl_internal_get_GsdkAlias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GsdkAlias;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GameCertificateReference::__cordl_internal_get_GsdkAlias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GsdkAlias;
}
constexpr void PlayFab::MultiplayerModels::GameCertificateReference::__cordl_internal_set_GsdkAlias(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GsdkAlias = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GameCertificateReference::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GameCertificateReference::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::GameCertificateReference::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
inline void PlayFab::MultiplayerModels::GameCertificateReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GameCertificateReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GameCertificateReference* PlayFab::MultiplayerModels::GameCertificateReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GameCertificateReference*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GameCertificateReference::GameCertificateReference()   {
}
