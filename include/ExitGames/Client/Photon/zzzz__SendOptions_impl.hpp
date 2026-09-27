#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SendOptions.hpp"
#include "ExitGames/Client/Photon/zzzz__DeliveryMode_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SendOptions.get_Reliability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::SendOptions::*)()>(&::ExitGames::Client::Photon::SendOptions::get_Reliability)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6e05f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SendOptions>(),
                        {"get_Reliability", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SendOptions.set_Reliability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SendOptions::*)(bool)>(&::ExitGames::Client::Photon::SendOptions::set_Reliability)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6e0600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SendOptions>(),
                        {"set_Reliability", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::SendOptions::setStaticF_SendReliable(::ExitGames::Client::Photon::SendOptions  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SendOptions, "SendReliable", ::ExitGames::Client::Photon::SendOptions>(std::forward<::ExitGames::Client::Photon::SendOptions>(value));
}
inline ::ExitGames::Client::Photon::SendOptions ExitGames::Client::Photon::SendOptions::getStaticF_SendReliable()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SendOptions, "SendReliable", ::ExitGames::Client::Photon::SendOptions>();
}
inline void ExitGames::Client::Photon::SendOptions::setStaticF_SendUnreliable(::ExitGames::Client::Photon::SendOptions  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SendOptions, "SendUnreliable", ::ExitGames::Client::Photon::SendOptions>(std::forward<::ExitGames::Client::Photon::SendOptions>(value));
}
inline ::ExitGames::Client::Photon::SendOptions ExitGames::Client::Photon::SendOptions::getStaticF_SendUnreliable()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SendOptions, "SendUnreliable", ::ExitGames::Client::Photon::SendOptions>();
}
inline bool ExitGames::Client::Photon::SendOptions::get_Reliability()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SendOptions>(),
                        {"get_Reliability", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void ExitGames::Client::Photon::SendOptions::set_Reliability(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SendOptions>(),
                        {"set_Reliability", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "DeliveryMode", ty: "::ExitGames::Client::Photon::DeliveryMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Encrypt", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Channel", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::ExitGames::Client::Photon::SendOptions::SendOptions(::ExitGames::Client::Photon::DeliveryMode  DeliveryMode, bool  Encrypt, uint8_t  Channel) noexcept  {
this->DeliveryMode = DeliveryMode;
this->Encrypt = Encrypt;
this->Channel = Channel;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SendOptions::SendOptions()   {
}
