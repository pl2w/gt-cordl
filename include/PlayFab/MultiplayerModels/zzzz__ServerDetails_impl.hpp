#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ServerDetails.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ServerDetails_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__Port_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ServerDetails._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ServerDetails::*)()>(&::PlayFab::MultiplayerModels::ServerDetails::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ServerDetails*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::ServerDetails::__cordl_internal_get_IPV4Address()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPV4Address;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ServerDetails::__cordl_internal_get_IPV4Address() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPV4Address;
}
constexpr void PlayFab::MultiplayerModels::ServerDetails::__cordl_internal_set_IPV4Address(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IPV4Address = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& PlayFab::MultiplayerModels::ServerDetails::__cordl_internal_get_Ports()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ports;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* const& PlayFab::MultiplayerModels::ServerDetails::__cordl_internal_get_Ports() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ports;
}
constexpr void PlayFab::MultiplayerModels::ServerDetails::__cordl_internal_set_Ports(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ports = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ServerDetails::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ServerDetails::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::MultiplayerModels::ServerDetails::__cordl_internal_set_Region(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
inline void PlayFab::MultiplayerModels::ServerDetails::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ServerDetails*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ServerDetails* PlayFab::MultiplayerModels::ServerDetails::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ServerDetails*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ServerDetails::ServerDetails()   {
}
