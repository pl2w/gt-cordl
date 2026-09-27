#pragma once
// IWYU pragma private; include "Photon/SocketServer/Security/DiffieHellmanCryptoProvider.hpp"
#include "System/Numerics/zzzz__BigInteger_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/SocketServer/Security/zzzz__DiffieHellmanCryptoProvider_def.hpp"
#include "Photon/SocketServer/Security/zzzz__ICryptoProvider_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/Security/Cryptography/zzzz__Rijndael_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)()>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa6f4b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::ArrayW<uint8_t>)>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa6f4e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider.get_PublicKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)()>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::get_PublicKey)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6f4f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"get_PublicKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider.DeriveSharedKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::ArrayW<uint8_t>)>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::DeriveSharedKey)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xa6f5078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"DeriveSharedKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider.PhotonBigIntArrayToMsBigIntArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::ArrayW<uint8_t>)>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::PhotonBigIntArrayToMsBigIntArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6f5314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"PhotonBigIntArrayToMsBigIntArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider.MsBigIntArrayToPhotonBigIntArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::ArrayW<uint8_t>)>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::MsBigIntArrayToPhotonBigIntArray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa6f4fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"MsBigIntArrayToPhotonBigIntArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider.Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Encrypt)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa6f5444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"Encrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider.Decrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Decrypt)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa6f5618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"Decrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)()>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6f57ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(bool)>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6f5844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider.CalculatePublicKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)()>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::CalculatePublicKey)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa6f4dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"CalculatePublicKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider.CalculateSharedKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::System::Numerics::BigInteger)>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::CalculateSharedKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa6f53b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"CalculateSharedKey", {}, {::i2c::type_of<::System::Numerics::BigInteger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider.GenerateRandomSecret
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(int32_t)>(&::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::GenerateRandomSecret)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa6f4c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"GenerateRandomSecret", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Numerics::BigInteger& Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_get_prime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prime;
}
constexpr ::System::Numerics::BigInteger const& Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_get_prime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prime;
}
constexpr void Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_set_prime(::System::Numerics::BigInteger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prime = value;
}
constexpr ::System::Numerics::BigInteger& Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_get_secret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secret;
}
constexpr ::System::Numerics::BigInteger const& Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_get_secret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secret;
}
constexpr void Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_set_secret(::System::Numerics::BigInteger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secret = value;
}
constexpr ::System::Numerics::BigInteger& Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_get_publicKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicKey;
}
constexpr ::System::Numerics::BigInteger const& Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_get_publicKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicKey;
}
constexpr void Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_set_publicKey(::System::Numerics::BigInteger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___publicKey = value;
}
constexpr ::System::Security::Cryptography::Rijndael*& Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_get_crypto()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crypto;
}
constexpr ::System::Security::Cryptography::Rijndael* const& Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_get_crypto() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crypto;
}
constexpr void Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_set_crypto(::System::Security::Cryptography::Rijndael*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crypto = value;
}
constexpr ::ArrayW<uint8_t>& Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_get_sharedKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedKey;
}
constexpr ::ArrayW<uint8_t> const& Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_get_sharedKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedKey;
}
constexpr void Photon::SocketServer::Security::DiffieHellmanCryptoProvider::__cordl_internal_set_sharedKey(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedKey = value;
}
inline void Photon::SocketServer::Security::DiffieHellmanCryptoProvider::setStaticF_primeRoot(::System::Numerics::BigInteger  value)  {
::cordl_internals::setStaticField<::System::Numerics::BigInteger, "primeRoot", ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(std::forward<::System::Numerics::BigInteger>(value));
}
inline ::System::Numerics::BigInteger Photon::SocketServer::Security::DiffieHellmanCryptoProvider::getStaticF_primeRoot()  {
return ::cordl_internals::getStaticField<::System::Numerics::BigInteger, "primeRoot", ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>();
}
inline void Photon::SocketServer::Security::DiffieHellmanCryptoProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::SocketServer::Security::DiffieHellmanCryptoProvider::_ctor(::ArrayW<uint8_t>  cryptoKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cryptoKey);
}
inline ::ArrayW<uint8_t> Photon::SocketServer::Security::DiffieHellmanCryptoProvider::get_PublicKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"get_PublicKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Photon::SocketServer::Security::DiffieHellmanCryptoProvider::DeriveSharedKey(::ArrayW<uint8_t>  otherPartyPublicKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"DeriveSharedKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPartyPublicKey);
}
inline ::ArrayW<uint8_t> Photon::SocketServer::Security::DiffieHellmanCryptoProvider::PhotonBigIntArrayToMsBigIntArray(::ArrayW<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"PhotonBigIntArrayToMsBigIntArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, array);
}
inline ::ArrayW<uint8_t> Photon::SocketServer::Security::DiffieHellmanCryptoProvider::MsBigIntArrayToPhotonBigIntArray(::ArrayW<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"MsBigIntArrayToPhotonBigIntArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, array);
}
inline ::ArrayW<uint8_t> Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Encrypt(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"Encrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count);
}
inline ::ArrayW<uint8_t> Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Decrypt(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"Decrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count);
}
inline void Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Numerics::BigInteger Photon::SocketServer::Security::DiffieHellmanCryptoProvider::CalculatePublicKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"CalculatePublicKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(this, ___internal_method);
}
inline ::System::Numerics::BigInteger Photon::SocketServer::Security::DiffieHellmanCryptoProvider::CalculateSharedKey(::System::Numerics::BigInteger  otherPartyPublicKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"CalculateSharedKey", {}, {::i2c::type_of<::System::Numerics::BigInteger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(this, ___internal_method, otherPartyPublicKey);
}
inline ::System::Numerics::BigInteger Photon::SocketServer::Security::DiffieHellmanCryptoProvider::GenerateRandomSecret(int32_t  secretLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(),
                        {"GenerateRandomSecret", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(this, ___internal_method, secretLength);
}
inline ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider* Photon::SocketServer::Security::DiffieHellmanCryptoProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>());
}
inline ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider* Photon::SocketServer::Security::DiffieHellmanCryptoProvider::New_ctor(::ArrayW<uint8_t>  cryptoKey)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*>(cryptoKey));
}
/// @brief Convert operator to "::Photon::SocketServer::Security::ICryptoProvider"
constexpr  Photon::SocketServer::Security::DiffieHellmanCryptoProvider::operator ::Photon::SocketServer::Security::ICryptoProvider*() noexcept {
return static_cast<::Photon::SocketServer::Security::ICryptoProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::SocketServer::Security::ICryptoProvider"
constexpr ::Photon::SocketServer::Security::ICryptoProvider* Photon::SocketServer::Security::DiffieHellmanCryptoProvider::i___Photon__SocketServer__Security__ICryptoProvider() noexcept {
return static_cast<::Photon::SocketServer::Security::ICryptoProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::SocketServer::Security::DiffieHellmanCryptoProvider::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::SocketServer::Security::DiffieHellmanCryptoProvider::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::DiffieHellmanCryptoProvider()   {
}
