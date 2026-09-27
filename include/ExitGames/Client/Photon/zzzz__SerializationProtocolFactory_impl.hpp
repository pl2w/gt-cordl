#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SerializationProtocolFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializationProtocolFactory_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializationProtocol_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SerializationProtocolFactory.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::IProtocol* (*)(::ExitGames::Client::Photon::SerializationProtocol)>(&::ExitGames::Client::Photon::SerializationProtocolFactory::Create)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa6c4a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SerializationProtocolFactory*>(),
                        {"Create", {}, {::i2c::type_of<::ExitGames::Client::Photon::SerializationProtocol>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ExitGames::Client::Photon::IProtocol* ExitGames::Client::Photon::SerializationProtocolFactory::Create(::ExitGames::Client::Photon::SerializationProtocol  serializationProtocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SerializationProtocolFactory*>(),
                        {"Create", {}, {::i2c::type_of<::ExitGames::Client::Photon::SerializationProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::IProtocol*>(nullptr, ___internal_method, serializationProtocol);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SerializationProtocolFactory::SerializationProtocolFactory()   {
}
