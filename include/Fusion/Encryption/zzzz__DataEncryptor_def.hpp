#pragma once
// IWYU pragma private; include "Fusion/Encryption/DataEncryptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataEncryptor)
namespace Fusion::Encryption {
class IDataEncryption;
}
namespace System::Security::Cryptography {
class Aes;
}
namespace System::Security::Cryptography {
class HMACSHA256;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Fusion::Encryption {
class DataEncryptor;
}
// Write type traits
MARK_REF_T(::Fusion::Encryption::DataEncryptor*);
DEFINE_IL2CPP_CLASS(::Fusion::Encryption::DataEncryptor*, "Fusion.Encryption", "DataEncryptor");
// Dependencies System.Object
namespace Fusion::Encryption {
// Is value type: false
// CS Name: Fusion.Encryption.DataEncryptor
class CORDL_TYPE DataEncryptor : public ::System::Object {
public:
// Declarations
/// @brief Field _aesKey, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__aesKey, put=__cordl_internal_set__aesKey)) ::ArrayW<uint8_t>  _aesKey;

/// @brief Field _cryptoProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__cryptoProvider, put=__cordl_internal_set__cryptoProvider)) ::System::Security::Cryptography::Aes*  _cryptoProvider;

/// @brief Field _encryptBufferDecrypt, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__encryptBufferDecrypt, put=__cordl_internal_set__encryptBufferDecrypt)) ::ArrayW<uint8_t>  _encryptBufferDecrypt;

/// @brief Field _encryptBufferEncrypt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__encryptBufferEncrypt, put=__cordl_internal_set__encryptBufferEncrypt)) ::ArrayW<uint8_t>  _encryptBufferEncrypt;

/// @brief Field _hmacsha256, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmacsha256, put=__cordl_internal_set__hmacsha256)) ::System::Security::Cryptography::HMACSHA256*  _hmacsha256;

/// @brief Field _ivDecryptBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ivDecryptBuffer, put=__cordl_internal_set__ivDecryptBuffer)) ::ArrayW<uint8_t>  _ivDecryptBuffer;

/// @brief Field _ivEncryptBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ivEncryptBuffer, put=__cordl_internal_set__ivEncryptBuffer)) ::ArrayW<uint8_t>  _ivEncryptBuffer;

/// @brief Field _rng, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rng, put=__cordl_internal_set__rng)) ::System::Security::Cryptography::RandomNumberGenerator*  _rng;

/// @brief Convert operator to "::Fusion::Encryption::IDataEncryption"
constexpr operator  ::Fusion::Encryption::IDataEncryption*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BuildAesProvider, addr 0x603c868, size 0xac, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::Aes* BuildAesProvider(::ArrayW<uint8_t>  key) ;

/// @brief Method BuildHMACSHA256, addr 0x603c914, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::HMACSHA256* BuildHMACSHA256(::ArrayW<uint8_t>  key) ;

/// @brief Method ComputeHash, addr 0x603d7a4, size 0x2b0, virtual true, abstract: false, final true
inline bool ComputeHash(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity) ;

/// @brief Method DecryptData, addr 0x603d0bc, size 0x6c0, virtual true, abstract: false, final true
inline bool DecryptData(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity) ;

/// @brief Method Dispose, addr 0x603dcb0, size 0x108, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EncryptData, addr 0x603c970, size 0x724, virtual true, abstract: false, final true
inline bool EncryptData(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity) ;

/// @brief Method GetBufferDecrypt, addr 0x603d77c, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBufferDecrypt() ;

/// @brief Method GetBufferEncrypt, addr 0x603d094, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBufferEncrypt() ;

static inline ::Fusion::Encryption::DataEncryptor* New_ctor() ;

/// @brief Method Setup, addr 0x603c704, size 0x164, virtual true, abstract: false, final true
inline void Setup(::ArrayW<uint8_t>  key) ;

/// @brief Method VerifyHash, addr 0x603da54, size 0x25c, virtual true, abstract: false, final true
inline bool VerifyHash(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__aesKey() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__aesKey() ;

constexpr ::System::Security::Cryptography::Aes* const& __cordl_internal_get__cryptoProvider() const;

constexpr ::System::Security::Cryptography::Aes*& __cordl_internal_get__cryptoProvider() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__encryptBufferDecrypt() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__encryptBufferDecrypt() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__encryptBufferEncrypt() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__encryptBufferEncrypt() ;

constexpr ::System::Security::Cryptography::HMACSHA256* const& __cordl_internal_get__hmacsha256() const;

constexpr ::System::Security::Cryptography::HMACSHA256*& __cordl_internal_get__hmacsha256() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__ivDecryptBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__ivDecryptBuffer() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__ivEncryptBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__ivEncryptBuffer() ;

constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& __cordl_internal_get__rng() const;

constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get__rng() ;

constexpr void __cordl_internal_set__aesKey(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__cryptoProvider(::System::Security::Cryptography::Aes*  value) ;

constexpr void __cordl_internal_set__encryptBufferDecrypt(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__encryptBufferEncrypt(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__hmacsha256(::System::Security::Cryptography::HMACSHA256*  value) ;

constexpr void __cordl_internal_set__ivDecryptBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__ivEncryptBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__rng(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

/// @brief Method .ctor, addr 0x603ddb8, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::Encryption::IDataEncryption"
constexpr ::Fusion::Encryption::IDataEncryption* i___Fusion__Encryption__IDataEncryption() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataEncryptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataEncryptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataEncryptor(DataEncryptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataEncryptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataEncryptor(DataEncryptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29414};

/// @brief Field _cryptoProvider, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::Aes*  ____cryptoProvider;

/// @brief Field _hmacsha256, offset: 0x18, size: 0x8, def value: None
 ::System::Security::Cryptography::HMACSHA256*  ____hmacsha256;

/// @brief Field _rng, offset: 0x20, size: 0x8, def value: None
 ::System::Security::Cryptography::RandomNumberGenerator*  ____rng;

/// @brief Field _encryptBufferEncrypt, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____encryptBufferEncrypt;

/// @brief Field _encryptBufferDecrypt, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____encryptBufferDecrypt;

/// @brief Field _aesKey, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____aesKey;

/// @brief Field _ivEncryptBuffer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____ivEncryptBuffer;

/// @brief Field _ivDecryptBuffer, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____ivDecryptBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Encryption::DataEncryptor, ____cryptoProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Encryption::DataEncryptor, ____hmacsha256) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Encryption::DataEncryptor, ____rng) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Encryption::DataEncryptor, ____encryptBufferEncrypt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Encryption::DataEncryptor, ____encryptBufferDecrypt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Encryption::DataEncryptor, ____aesKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Encryption::DataEncryptor, ____ivEncryptBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Encryption::DataEncryptor, ____ivDecryptBuffer) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::Encryption::DataEncryptor) == 0x50, "Size mismatch!");

} // namespace end def Fusion::Encryption
