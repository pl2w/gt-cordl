#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DSA)
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System {
class Exception;
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
class DSA;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::DSA*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::DSA*, "System.Security.Cryptography", "DSA");
// [ComVisible(true)]
// Dependencies System.Security.Cryptography.AsymmetricAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.DSA
class CORDL_TYPE DSA : public ::System::Security::Cryptography::AsymmetricAlgorithm {
public:
// Declarations
/// @brief Method Create, addr 0xa16506c, size 0x54, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::DSA* Create() ;

/// @brief Method Create, addr 0xa1650c0, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::DSA* Create(::StringW  algName) ;

/// @brief Method Create, addr 0xa1663fc, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::DSA* Create(int32_t  keySizeInBits) ;

/// @brief Method Create, addr 0xa1664c4, size 0x100, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::DSA* Create(::System::Security::Cryptography::DSAParameters  parameters) ;

/// @brief Method CreateSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> CreateSignature(::ArrayW<uint8_t>  rgbHash) ;

/// @brief Method DerivedClassMustOverride, addr 0xa165188, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* DerivedClassMustOverride() ;

/// @brief Method ExportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Security::Cryptography::DSAParameters ExportParameters(bool  includePrivateParameters) ;

/// @brief Method FromXmlString, addr 0xa165800, size 0x76c, virtual true, abstract: false, final false
inline void FromXmlString(::StringW  xmlString) ;

/// @brief Method HashAlgorithmNameNullOrEmpty, addr 0xa1653d8, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Exception* HashAlgorithmNameNullOrEmpty() ;

/// @brief Method HashData, addr 0xa165164, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> HashData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method HashData, addr 0xa165208, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> HashData(::System::IO::Stream*  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method ImportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ImportParameters(::System::Security::Cryptography::DSAParameters  parameters) ;

static inline ::System::Security::Cryptography::DSA* New_ctor() ;

/// @brief Method SignData, addr 0xa16522c, size 0x6c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SignData(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method SignData, addr 0xa165298, size 0x140, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> SignData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method SignData, addr 0xa165478, size 0xb8, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> SignData(::System::IO::Stream*  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method ToXmlString, addr 0xa165f6c, size 0x490, virtual true, abstract: false, final false
inline ::StringW ToXmlString(bool  includePrivateParameters) ;

/// @brief Method TryCreateSignature, addr 0xa1665c4, size 0x10c, virtual true, abstract: false, final false
inline bool TryCreateSignature(::System::ReadOnlySpan_1<uint8_t>  hash, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryHashData, addr 0xa1666d0, size 0x27c, virtual true, abstract: false, final false
inline bool TryHashData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TrySignData, addr 0xa16694c, size 0x168, virtual true, abstract: false, final false
inline bool TrySignData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method VerifyData, addr 0xa1655a0, size 0x174, virtual true, abstract: false, final false
inline bool VerifyData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method VerifyData, addr 0xa165530, size 0x70, virtual false, abstract: false, final false
inline bool VerifyData(::ArrayW<uint8_t>  data, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method VerifyData, addr 0xa165714, size 0xec, virtual true, abstract: false, final false
inline bool VerifyData(::System::IO::Stream*  data, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method VerifyData, addr 0xa166ab4, size 0x2c8, virtual true, abstract: false, final false
inline bool VerifyData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::ReadOnlySpan_1<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method VerifySignature, addr 0xa166d7c, size 0x8c, virtual true, abstract: false, final false
inline bool VerifySignature(::System::ReadOnlySpan_1<uint8_t>  hash, ::System::ReadOnlySpan_1<uint8_t>  signature) ;

/// @brief Method VerifySignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool VerifySignature(::ArrayW<uint8_t>  rgbHash, ::ArrayW<uint8_t>  rgbSignature) ;

/// @brief Method .ctor, addr 0xa165064, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DSA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DSA", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DSA(DSA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DSA", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DSA(DSA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6088};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::DSA) == 0x20, "Size mismatch!");

} // namespace end def System::Security::Cryptography
