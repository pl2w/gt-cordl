#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
//  Writing Method size for method: ::PlayFab::SharedModels::PlayFabRequestCommon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::SharedModels::PlayFabRequestCommon::*)()>(&::PlayFab::SharedModels::PlayFabRequestCommon::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7def58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::PlayFabRequestCommon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::PlayFabAuthenticationContext*& PlayFab::SharedModels::PlayFabRequestCommon::__cordl_internal_get_AuthenticationContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthenticationContext;
}
constexpr ::PlayFab::PlayFabAuthenticationContext* const& PlayFab::SharedModels::PlayFabRequestCommon::__cordl_internal_get_AuthenticationContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthenticationContext;
}
constexpr void PlayFab::SharedModels::PlayFabRequestCommon::__cordl_internal_set_AuthenticationContext(::PlayFab::PlayFabAuthenticationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthenticationContext = value;
}
inline void PlayFab::SharedModels::PlayFabRequestCommon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::PlayFabRequestCommon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::SharedModels::PlayFabRequestCommon* PlayFab::SharedModels::PlayFabRequestCommon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::SharedModels::PlayFabRequestCommon*>());
}
// Ctor Parameters []
constexpr ::PlayFab::SharedModels::PlayFabRequestCommon::PlayFabRequestCommon()   {
}
