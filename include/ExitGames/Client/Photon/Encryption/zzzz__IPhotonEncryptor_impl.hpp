#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Encryption/IPhotonEncryptor.hpp"
#include "ExitGames/Client/Photon/Encryption/zzzz__IPhotonEncryptor_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Encryption::IPhotonEncryptor::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool, int32_t)>(&::ExitGames::Client::Photon::Encryption::IPhotonEncryptor::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor.Encrypt2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Encryption::IPhotonEncryptor::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::Encryption::IPhotonEncryptor::Encrypt2)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor.Decrypt2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::Encryption::IPhotonEncryptor::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::Encryption::IPhotonEncryptor::Decrypt2)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor.CalculateEncryptedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::Encryption::IPhotonEncryptor::*)(int32_t)>(&::ExitGames::Client::Photon::Encryption::IPhotonEncryptor::CalculateEncryptedSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor.CalculateFragmentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::Encryption::IPhotonEncryptor::*)()>(&::ExitGames::Client::Photon::Encryption::IPhotonEncryptor::CalculateFragmentLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::Encryption::IPhotonEncryptor::Init(::ArrayW<uint8_t>  encryptionSecret, ::ArrayW<uint8_t>  hmacSecret, ::ArrayW<uint8_t>  ivBytes, bool  chainingModeGCM, int32_t  mtu)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encryptionSecret, hmacSecret, ivBytes, chainingModeGCM, mtu);
}
inline void ExitGames::Client::Photon::Encryption::IPhotonEncryptor::Encrypt2(::ArrayW<uint8_t>  data, int32_t  len, ::ArrayW<uint8_t>  header, ::ArrayW<uint8_t>  output, int32_t  outOffset, ::by_ref<int32_t>  outSize)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, len, header, output, outOffset, outSize);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::Encryption::IPhotonEncryptor::Decrypt2(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  len, ::ArrayW<uint8_t>  header, ::by_ref<int32_t>  outLen)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, len, header, outLen);
}
inline int32_t ExitGames::Client::Photon::Encryption::IPhotonEncryptor::CalculateEncryptedSize(int32_t  unencryptedSize)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, unencryptedSize);
}
inline int32_t ExitGames::Client::Photon::Encryption::IPhotonEncryptor::CalculateFragmentLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
