#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/OperationRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationRequest_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::OperationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::OperationRequest::*)()>(&::ExitGames::Client::Photon::OperationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6d00a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::OperationRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& ExitGames::Client::Photon::OperationRequest::__cordl_internal_get_OperationCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationCode;
}
constexpr uint8_t const& ExitGames::Client::Photon::OperationRequest::__cordl_internal_get_OperationCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationCode;
}
constexpr void ExitGames::Client::Photon::OperationRequest::__cordl_internal_set_OperationCode(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationCode = value;
}
constexpr ::ExitGames::Client::Photon::ParameterDictionary*& ExitGames::Client::Photon::OperationRequest::__cordl_internal_get_Parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr ::ExitGames::Client::Photon::ParameterDictionary* const& ExitGames::Client::Photon::OperationRequest::__cordl_internal_get_Parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr void ExitGames::Client::Photon::OperationRequest::__cordl_internal_set_Parameters(::ExitGames::Client::Photon::ParameterDictionary*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Parameters = value;
}
inline void ExitGames::Client::Photon::OperationRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::OperationRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::OperationRequest* ExitGames::Client::Photon::OperationRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::OperationRequest*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::OperationRequest::OperationRequest()   {
}
