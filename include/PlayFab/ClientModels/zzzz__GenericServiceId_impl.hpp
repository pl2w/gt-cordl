#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GenericServiceId.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GenericServiceId_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GenericServiceId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GenericServiceId::*)()>(&::PlayFab::ClientModels::GenericServiceId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GenericServiceId*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GenericServiceId::__cordl_internal_get_ServiceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServiceName;
}
constexpr ::StringW const& PlayFab::ClientModels::GenericServiceId::__cordl_internal_get_ServiceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServiceName;
}
constexpr void PlayFab::ClientModels::GenericServiceId::__cordl_internal_set_ServiceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServiceName = value;
}
constexpr ::StringW& PlayFab::ClientModels::GenericServiceId::__cordl_internal_get_UserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr ::StringW const& PlayFab::ClientModels::GenericServiceId::__cordl_internal_get_UserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr void PlayFab::ClientModels::GenericServiceId::__cordl_internal_set_UserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserId = value;
}
inline void PlayFab::ClientModels::GenericServiceId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GenericServiceId*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GenericServiceId* PlayFab::ClientModels::GenericServiceId::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GenericServiceId*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GenericServiceId::GenericServiceId()   {
}
