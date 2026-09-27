#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/Certificate.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__Certificate_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::Certificate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::Certificate::*)()>(&::PlayFab::MultiplayerModels::Certificate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::Certificate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::Certificate::__cordl_internal_get_Base64EncodedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Base64EncodedValue;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::Certificate::__cordl_internal_get_Base64EncodedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Base64EncodedValue;
}
constexpr void PlayFab::MultiplayerModels::Certificate::__cordl_internal_set_Base64EncodedValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Base64EncodedValue = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::Certificate::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::Certificate::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::Certificate::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::Certificate::__cordl_internal_get_Password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::Certificate::__cordl_internal_get_Password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr void PlayFab::MultiplayerModels::Certificate::__cordl_internal_set_Password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Password = value;
}
inline void PlayFab::MultiplayerModels::Certificate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::Certificate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::Certificate* PlayFab::MultiplayerModels::Certificate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::Certificate*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::Certificate::Certificate()   {
}
