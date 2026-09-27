#pragma once
// IWYU pragma private; include "Photon/Pun/CustomTypes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__CustomTypes_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Pun::CustomTypes.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::CustomTypes::Register)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa711c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::CustomTypes*>(),
                        {"Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::CustomTypes.SerializePhotonPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::Photon::Pun::CustomTypes::SerializePhotonPlayer)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa711d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::CustomTypes*>(),
                        {"SerializePhotonPlayer", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::CustomTypes.DeserializePhotonPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t)>(&::Photon::Pun::CustomTypes::DeserializePhotonPlayer)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xa711f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::CustomTypes*>(),
                        {"DeserializePhotonPlayer", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::CustomTypes::setStaticF_memPlayer(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "memPlayer", ::Photon::Pun::CustomTypes*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Photon::Pun::CustomTypes::getStaticF_memPlayer()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "memPlayer", ::Photon::Pun::CustomTypes*>();
}
inline void Photon::Pun::CustomTypes::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::CustomTypes*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int16_t Photon::Pun::CustomTypes::SerializePhotonPlayer(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::CustomTypes*>(),
                        {"SerializePhotonPlayer", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, outStream, customobject);
}
inline ::System::Object* Photon::Pun::CustomTypes::DeserializePhotonPlayer(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::CustomTypes*>(),
                        {"DeserializePhotonPlayer", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, inStream, length);
}
// Ctor Parameters []
constexpr ::Photon::Pun::CustomTypes::CustomTypes()   {
}
