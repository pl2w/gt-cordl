#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Encryption/EncryptorNet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/Encryption/zzzz__EncryptorNet_def.hpp"
#include "ExitGames/Client/Photon/Encryption/zzzz__IPhotonEncryptor_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool, int32_t)>(&::ExitGames::Client::Photon::Encryption::EncryptorNet::Init)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6f4a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {"Init", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet.Encrypt2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::Encryption::EncryptorNet::Encrypt2)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6f4a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {"Encrypt2", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet.Decrypt2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::Encryption::EncryptorNet::Decrypt2)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6f4ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {"Decrypt2", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet.CalculateEncryptedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)(int32_t)>(&::ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateEncryptedSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6f4af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {"CalculateEncryptedSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet.CalculateFragmentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)()>(&::ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateFragmentLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6f4b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {"CalculateFragmentLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)()>(&::ExitGames::Client::Photon::Encryption::EncryptorNet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f4b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::Encryption::EncryptorNet::Init(::ArrayW<uint8_t>  encryptionSecret, ::ArrayW<uint8_t>  hmacSecret, ::ArrayW<uint8_t>  ivBytes, bool  chainingModeGCM, int32_t  mtu)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {"Init", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encryptionSecret, hmacSecret, ivBytes, chainingModeGCM, mtu);
}
inline void ExitGames::Client::Photon::Encryption::EncryptorNet::Encrypt2(::ArrayW<uint8_t>  data, int32_t  len, ::ArrayW<uint8_t>  header, ::ArrayW<uint8_t>  output, int32_t  outOffset, ::by_ref<int32_t>  outSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {"Encrypt2", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, len, header, output, outOffset, outSize);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::Encryption::EncryptorNet::Decrypt2(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  len, ::ArrayW<uint8_t>  header, ::by_ref<int32_t>  outLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {"Decrypt2", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, len, header, outLen);
}
inline int32_t ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateEncryptedSize(int32_t  unencryptedSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {"CalculateEncryptedSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, unencryptedSize);
}
inline int32_t ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateFragmentLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {"CalculateFragmentLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::Encryption::EncryptorNet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Encryption::EncryptorNet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::Encryption::EncryptorNet* ExitGames::Client::Photon::Encryption::EncryptorNet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::Encryption::EncryptorNet*>());
}
/// @brief Convert operator to "::ExitGames::Client::Photon::Encryption::IPhotonEncryptor"
constexpr  ExitGames::Client::Photon::Encryption::EncryptorNet::operator ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*() noexcept {
return static_cast<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::ExitGames::Client::Photon::Encryption::IPhotonEncryptor"
constexpr ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor* ExitGames::Client::Photon::Encryption::EncryptorNet::i___ExitGames__Client__Photon__Encryption__IPhotonEncryptor() noexcept {
return static_cast<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::Encryption::EncryptorNet::EncryptorNet()   {
}
