#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1SignatureFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSAPKCS1SignatureFormatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SignatureFormatter;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::RSAPKCS1SignatureFormatter*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RSAPKCS1SignatureFormatter*, "System.Security.Cryptography", "RSAPKCS1SignatureFormatter");
// [ComVisible(true)]
// Dependencies System.Security.Cryptography.AsymmetricSignatureFormatter
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSAPKCS1SignatureFormatter
class CORDL_TYPE RSAPKCS1SignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter {
public:
// Declarations
/// @brief Field hash, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_hash, put=__cordl_internal_set_hash)) ::StringW  hash;

/// @brief Field rsa, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rsa, put=__cordl_internal_set_rsa)) ::System::Security::Cryptography::RSA*  rsa;

/// @brief Method CreateSignature, addr 0xa186d64, size 0x11c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> CreateSignature(::ArrayW<uint8_t>  rgbHash) ;

static inline ::System::Security::Cryptography::RSAPKCS1SignatureFormatter* New_ctor() ;

static inline ::System::Security::Cryptography::RSAPKCS1SignatureFormatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

/// @brief Method SetHashAlgorithm, addr 0xa186e80, size 0x58, virtual true, abstract: false, final false
inline void SetHashAlgorithm(::StringW  strName) ;

/// @brief Method SetKey, addr 0xa186ed8, size 0xf4, virtual true, abstract: false, final false
inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

constexpr ::StringW const& __cordl_internal_get_hash() const;

constexpr ::StringW& __cordl_internal_get_hash() ;

constexpr ::System::Security::Cryptography::RSA* const& __cordl_internal_get_rsa() const;

constexpr ::System::Security::Cryptography::RSA*& __cordl_internal_get_rsa() ;

constexpr void __cordl_internal_set_hash(::StringW  value) ;

constexpr void __cordl_internal_set_rsa(::System::Security::Cryptography::RSA*  value) ;

/// @brief Method .ctor, addr 0xa186d28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa186d30, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RSAPKCS1SignatureFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RSAPKCS1SignatureFormatter(RSAPKCS1SignatureFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSAPKCS1SignatureFormatter(RSAPKCS1SignatureFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6152};

/// @brief Field rsa, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::RSA*  ___rsa;

/// @brief Field hash, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___hash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1SignatureFormatter, ___rsa) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1SignatureFormatter, ___hash) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::RSAPKCS1SignatureFormatter) == 0x20, "Size mismatch!");

} // namespace end def System::Security::Cryptography
