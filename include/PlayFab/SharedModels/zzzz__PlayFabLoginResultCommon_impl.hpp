#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/PlayFabLoginResultCommon.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabLoginResultCommon_def.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
//  Writing Method size for method: ::PlayFab::SharedModels::PlayFabLoginResultCommon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::SharedModels::PlayFabLoginResultCommon::*)()>(&::PlayFab::SharedModels::PlayFabLoginResultCommon::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7def68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::PlayFabLoginResultCommon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::PlayFabAuthenticationContext*& PlayFab::SharedModels::PlayFabLoginResultCommon::__cordl_internal_get_AuthenticationContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthenticationContext;
}
constexpr ::PlayFab::PlayFabAuthenticationContext* const& PlayFab::SharedModels::PlayFabLoginResultCommon::__cordl_internal_get_AuthenticationContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthenticationContext;
}
constexpr void PlayFab::SharedModels::PlayFabLoginResultCommon::__cordl_internal_set_AuthenticationContext(::PlayFab::PlayFabAuthenticationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthenticationContext = value;
}
inline void PlayFab::SharedModels::PlayFabLoginResultCommon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::PlayFabLoginResultCommon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::SharedModels::PlayFabLoginResultCommon* PlayFab::SharedModels::PlayFabLoginResultCommon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::SharedModels::PlayFabLoginResultCommon*>());
}
// Ctor Parameters []
constexpr ::PlayFab::SharedModels::PlayFabLoginResultCommon::PlayFabLoginResultCommon()   {
}
