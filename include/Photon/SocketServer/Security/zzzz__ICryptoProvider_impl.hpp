#pragma once
// IWYU pragma private; include "Photon/SocketServer/Security/ICryptoProvider.hpp"
#include "Photon/SocketServer/Security/zzzz__ICryptoProvider_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::SocketServer::Security::ICryptoProvider.get_PublicKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Photon::SocketServer::Security::ICryptoProvider::*)()>(&::Photon::SocketServer::Security::ICryptoProvider::get_PublicKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(),
                    {::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::ICryptoProvider.DeriveSharedKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::SocketServer::Security::ICryptoProvider::*)(::ArrayW<uint8_t>)>(&::Photon::SocketServer::Security::ICryptoProvider::DeriveSharedKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(),
                    {::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::ICryptoProvider.Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Photon::SocketServer::Security::ICryptoProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Photon::SocketServer::Security::ICryptoProvider::Encrypt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(),
                    {::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::ICryptoProvider.Decrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Photon::SocketServer::Security::ICryptoProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Photon::SocketServer::Security::ICryptoProvider::Decrypt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(),
                    {::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Photon::SocketServer::Security::ICryptoProvider::get_PublicKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Photon::SocketServer::Security::ICryptoProvider::DeriveSharedKey(::ArrayW<uint8_t>  otherPartyPublicKey)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPartyPublicKey);
}
inline ::ArrayW<uint8_t> Photon::SocketServer::Security::ICryptoProvider::Encrypt(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count);
}
inline ::ArrayW<uint8_t> Photon::SocketServer::Security::ICryptoProvider::Decrypt(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::SocketServer::Security::ICryptoProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::SocketServer::Security::ICryptoProvider::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::SocketServer::Security::ICryptoProvider::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
