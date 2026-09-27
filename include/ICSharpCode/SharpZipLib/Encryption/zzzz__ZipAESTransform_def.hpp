#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/ZipAESTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipAESTransform)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
class IncrementalHash;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Encryption {
class ZipAESTransform;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*, "ICSharpCode.SharpZipLib.Encryption", "ZipAESTransform");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Encryption {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Encryption.ZipAESTransform
class CORDL_TYPE ZipAESTransform : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CanReuseTransform)) bool  CanReuseTransform;

 __declspec(property(get=get_CanTransformMultipleBlocks)) bool  CanTransformMultipleBlocks;

 __declspec(property(get=get_InputBlockSize)) int32_t  InputBlockSize;

 __declspec(property(get=get_OutputBlockSize)) int32_t  OutputBlockSize;

 __declspec(property(get=get_PwdVerifier)) ::ArrayW<uint8_t>  PwdVerifier;

/// @brief Field _authCode, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__authCode, put=__cordl_internal_set__authCode)) ::ArrayW<uint8_t>  _authCode;

/// @brief Field _blockSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__blockSize, put=__cordl_internal_set__blockSize)) int32_t  _blockSize;

/// @brief Field _counterNonce, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__counterNonce, put=__cordl_internal_set__counterNonce)) ::ArrayW<uint8_t>  _counterNonce;

/// @brief Field _encrPos, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__encrPos, put=__cordl_internal_set__encrPos)) int32_t  _encrPos;

/// @brief Field _encryptBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__encryptBuffer, put=__cordl_internal_set__encryptBuffer)) ::ArrayW<uint8_t>  _encryptBuffer;

/// @brief Field _encryptor, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__encryptor, put=__cordl_internal_set__encryptor)) ::System::Security::Cryptography::ICryptoTransform*  _encryptor;

/// @brief Field _hmacsha1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmacsha1, put=__cordl_internal_set__hmacsha1)) ::System::Security::Cryptography::IncrementalHash*  _hmacsha1;

/// @brief Field _pwdVerifier, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__pwdVerifier, put=__cordl_internal_set__pwdVerifier)) ::ArrayW<uint8_t>  _pwdVerifier;

/// @brief Field _writeMode, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__writeMode, put=__cordl_internal_set__writeMode)) bool  _writeMode;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr operator  ::System::Security::Cryptography::ICryptoTransform*() noexcept;

/// @brief Method Dispose, addr 0x9ff9a2c, size 0xa0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetAuthCode, addr 0x9ff93c4, size 0x44, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetAuthCode() ;

static inline ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform* New_ctor(::StringW  key, ::ArrayW<uint8_t>  saltBytes, int32_t  blockSize, bool  writeMode) ;

/// @brief Method TransformBlock, addr 0x9ff9408, size 0x230, virtual true, abstract: false, final true
inline int32_t TransformBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount, ::ArrayW<uint8_t>  outputBuffer, int32_t  outputOffset) ;

/// @brief Method TransformFinalBlock, addr 0x9ff9978, size 0x94, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__authCode() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__authCode() ;

constexpr int32_t const& __cordl_internal_get__blockSize() const;

constexpr int32_t& __cordl_internal_get__blockSize() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__counterNonce() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__counterNonce() ;

constexpr int32_t const& __cordl_internal_get__encrPos() const;

constexpr int32_t& __cordl_internal_get__encrPos() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__encryptBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__encryptBuffer() ;

constexpr ::System::Security::Cryptography::ICryptoTransform* const& __cordl_internal_get__encryptor() const;

constexpr ::System::Security::Cryptography::ICryptoTransform*& __cordl_internal_get__encryptor() ;

constexpr ::System::Security::Cryptography::IncrementalHash* const& __cordl_internal_get__hmacsha1() const;

constexpr ::System::Security::Cryptography::IncrementalHash*& __cordl_internal_get__hmacsha1() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__pwdVerifier() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__pwdVerifier() ;

constexpr bool const& __cordl_internal_get__writeMode() const;

constexpr bool& __cordl_internal_get__writeMode() ;

constexpr void __cordl_internal_set__authCode(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__blockSize(int32_t  value) ;

constexpr void __cordl_internal_set__counterNonce(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__encrPos(int32_t  value) ;

constexpr void __cordl_internal_set__encryptBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__encryptor(::System::Security::Cryptography::ICryptoTransform*  value) ;

constexpr void __cordl_internal_set__hmacsha1(::System::Security::Cryptography::IncrementalHash*  value) ;

constexpr void __cordl_internal_set__pwdVerifier(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__writeMode(bool  value) ;

/// @brief Method .ctor, addr 0x9ff9670, size 0x300, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, ::ArrayW<uint8_t>  saltBytes, int32_t  blockSize, bool  writeMode) ;

/// @brief Method get_CanReuseTransform, addr 0x9ff9a24, size 0x8, virtual true, abstract: false, final true
inline bool get_CanReuseTransform() ;

/// @brief Method get_CanTransformMultipleBlocks, addr 0x9ff9a1c, size 0x8, virtual true, abstract: false, final true
inline bool get_CanTransformMultipleBlocks() ;

/// @brief Method get_InputBlockSize, addr 0x9ff9a0c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_InputBlockSize() ;

/// @brief Method get_OutputBlockSize, addr 0x9ff9a14, size 0x8, virtual true, abstract: false, final true
inline int32_t get_OutputBlockSize() ;

/// @brief Method get_PwdVerifier, addr 0x9ff9970, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_PwdVerifier() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* i___System__Security__Cryptography__ICryptoTransform() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipAESTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipAESTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipAESTransform(ZipAESTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipAESTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipAESTransform(ZipAESTransform const& ) = delete;

/// @brief Field ENCRYPT_BLOCK offset 0xffffffff size 0x4
static constexpr int32_t  ENCRYPT_BLOCK{static_cast<int32_t>(0x10)};

/// @brief Field KEY_ROUNDS offset 0xffffffff size 0x4
static constexpr int32_t  KEY_ROUNDS{static_cast<int32_t>(0x3e8)};

/// @brief Field PWD_VER_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  PWD_VER_LENGTH{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17416};

/// @brief Field _blockSize, offset: 0x10, size: 0x4, def value: None
 int32_t  ____blockSize;

/// @brief Field _encryptor, offset: 0x18, size: 0x8, def value: None
 ::System::Security::Cryptography::ICryptoTransform*  ____encryptor;

/// @brief Field _counterNonce, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____counterNonce;

/// @brief Field _encryptBuffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____encryptBuffer;

/// @brief Field _encrPos, offset: 0x30, size: 0x4, def value: None
 int32_t  ____encrPos;

/// @brief Field _pwdVerifier, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____pwdVerifier;

/// @brief Field _hmacsha1, offset: 0x40, size: 0x8, def value: None
 ::System::Security::Cryptography::IncrementalHash*  ____hmacsha1;

/// @brief Field _authCode, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____authCode;

/// @brief Field _writeMode, offset: 0x50, size: 0x1, def value: None
 bool  ____writeMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform, ____blockSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform, ____encryptor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform, ____counterNonce) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform, ____encryptBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform, ____encrPos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform, ____pwdVerifier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform, ____hmacsha1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform, ____authCode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform, ____writeMode) == 0x50, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform) == 0x58, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Encryption
