#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/DeviceInfoRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__DeviceInfoRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::DeviceInfoRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::DeviceInfoRequest::*)()>(&::PlayFab::ClientModels::DeviceInfoRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8436f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::DeviceInfoRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& PlayFab::ClientModels::DeviceInfoRequest::__cordl_internal_get_Info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Info;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& PlayFab::ClientModels::DeviceInfoRequest::__cordl_internal_get_Info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Info;
}
constexpr void PlayFab::ClientModels::DeviceInfoRequest::__cordl_internal_set_Info(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Info = value;
}
inline void PlayFab::ClientModels::DeviceInfoRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::DeviceInfoRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::DeviceInfoRequest* PlayFab::ClientModels::DeviceInfoRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::DeviceInfoRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::DeviceInfoRequest::DeviceInfoRequest()   {
}
