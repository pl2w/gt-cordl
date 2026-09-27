#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricAlgorithm)
namespace System::Security::Cryptography {
class KeySizes;
}
namespace System::Security::Cryptography {
class PbeParameters;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::AsymmetricAlgorithm*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::AsymmetricAlgorithm*, "System.Security.Cryptography", "AsymmetricAlgorithm");
// [ComVisible(true)]
// Dependencies System.Object, System.Security.Cryptography.KeySizes
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.AsymmetricAlgorithm
class CORDL_TYPE AsymmetricAlgorithm : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_KeyExchangeAlgorithm)) ::StringW  KeyExchangeAlgorithm;

 __declspec(property(get=get_KeySize, put=set_KeySize)) int32_t  KeySize;

/// @brief Field KeySizeValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_KeySizeValue, put=__cordl_internal_set_KeySizeValue)) int32_t  KeySizeValue;

 __declspec(property(get=get_LegalKeySizes)) ::ArrayW<::System::Security::Cryptography::KeySizes*>  LegalKeySizes;

/// @brief Field LegalKeySizesValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_LegalKeySizesValue, put=__cordl_internal_set_LegalKeySizesValue)) ::ArrayW<::System::Security::Cryptography::KeySizes*>  LegalKeySizesValue;

 __declspec(property(get=get_SignatureAlgorithm)) ::StringW  SignatureAlgorithm;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Clear, addr 0xa162214, size 0x6c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Create, addr 0xa162484, size 0x54, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::AsymmetricAlgorithm* Create() ;

/// @brief Method Create, addr 0xa1624d8, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::AsymmetricAlgorithm* Create(::StringW  algName) ;

/// @brief Method Dispose, addr 0xa162210, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa162280, size 0x4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method ExportEncryptedPkcs8PrivateKey, addr 0xa162624, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<char16_t>  password, ::System::Security::Cryptography::PbeParameters*  pbeParameters) ;

/// @brief Method ExportEncryptedPkcs8PrivateKey, addr 0xa1625ec, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t>  passwordBytes, ::System::Security::Cryptography::PbeParameters*  pbeParameters) ;

/// @brief Method ExportPkcs8PrivateKey, addr 0xa16265c, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ExportPkcs8PrivateKey() ;

/// @brief Method ExportSubjectPublicKeyInfo, addr 0xa162694, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ExportSubjectPublicKeyInfo() ;

/// @brief Method FromXmlString, addr 0xa16257c, size 0x38, virtual true, abstract: false, final false
inline void FromXmlString(::StringW  xmlString) ;

/// @brief Method ImportEncryptedPkcs8PrivateKey, addr 0xa162704, size 0x38, virtual true, abstract: false, final false
inline void ImportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<char16_t>  password, ::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead) ;

/// @brief Method ImportEncryptedPkcs8PrivateKey, addr 0xa1626cc, size 0x38, virtual true, abstract: false, final false
inline void ImportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t>  passwordBytes, ::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead) ;

/// @brief Method ImportPkcs8PrivateKey, addr 0xa16273c, size 0x38, virtual true, abstract: false, final false
inline void ImportPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead) ;

/// @brief Method ImportSubjectPublicKeyInfo, addr 0xa162774, size 0x38, virtual true, abstract: false, final false
inline void ImportSubjectPublicKeyInfo(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead) ;

static inline ::System::Security::Cryptography::AsymmetricAlgorithm* New_ctor() ;

/// @brief Method ToXmlString, addr 0xa1625b4, size 0x38, virtual true, abstract: false, final false
inline ::StringW ToXmlString(bool  includePrivateParameters) ;

/// @brief Method TryExportEncryptedPkcs8PrivateKey, addr 0xa1627e4, size 0x38, virtual true, abstract: false, final false
inline bool TryExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<char16_t>  password, ::System::Security::Cryptography::PbeParameters*  pbeParameters, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryExportEncryptedPkcs8PrivateKey, addr 0xa1627ac, size 0x38, virtual true, abstract: false, final false
inline bool TryExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t>  passwordBytes, ::System::Security::Cryptography::PbeParameters*  pbeParameters, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryExportPkcs8PrivateKey, addr 0xa16281c, size 0x38, virtual true, abstract: false, final false
inline bool TryExportPkcs8PrivateKey(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryExportSubjectPublicKeyInfo, addr 0xa162854, size 0x38, virtual true, abstract: false, final false
inline bool TryExportSubjectPublicKeyInfo(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

constexpr int32_t const& __cordl_internal_get_KeySizeValue() const;

constexpr int32_t& __cordl_internal_get_KeySizeValue() ;

constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*> const& __cordl_internal_get_LegalKeySizesValue() const;

constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*>& __cordl_internal_get_LegalKeySizesValue() ;

constexpr void __cordl_internal_set_KeySizeValue(int32_t  value) ;

constexpr void __cordl_internal_set_LegalKeySizesValue(::ArrayW<::System::Security::Cryptography::KeySizes*>  value) ;

/// @brief Method .ctor, addr 0xa162208, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_KeyExchangeAlgorithm, addr 0xa16244c, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_KeyExchangeAlgorithm() ;

/// @brief Method get_KeySize, addr 0xa162284, size 0x8, virtual true, abstract: false, final false
inline int32_t get_KeySize() ;

/// @brief Method get_LegalKeySizes, addr 0xa16239c, size 0x78, virtual true, abstract: false, final false
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> get_LegalKeySizes() ;

/// @brief Method get_SignatureAlgorithm, addr 0xa162414, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_SignatureAlgorithm() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_KeySize, addr 0xa16228c, size 0xe8, virtual true, abstract: false, final false
inline void set_KeySize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsymmetricAlgorithm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsymmetricAlgorithm(AsymmetricAlgorithm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsymmetricAlgorithm(AsymmetricAlgorithm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6069};

/// @brief Field KeySizeValue, offset: 0x10, size: 0x4, def value: None
 int32_t  ___KeySizeValue;

/// @brief Field LegalKeySizesValue, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Security::Cryptography::KeySizes*>  ___LegalKeySizesValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::AsymmetricAlgorithm, ___KeySizeValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AsymmetricAlgorithm, ___LegalKeySizesValue) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::AsymmetricAlgorithm) == 0x20, "Size mismatch!");

} // namespace end def System::Security::Cryptography
