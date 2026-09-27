#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSASignatureFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DSASignatureFormatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class DSA;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DSASignatureFormatter;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::DSASignatureFormatter*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::DSASignatureFormatter*, "System.Security.Cryptography", "DSASignatureFormatter");
// [ComVisible(true)]
// Dependencies System.Security.Cryptography.AsymmetricSignatureFormatter
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.DSASignatureFormatter
class CORDL_TYPE DSASignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter {
public:
// Declarations
/// @brief Field _dsaKey, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dsaKey, put=__cordl_internal_set__dsaKey)) ::System::Security::Cryptography::DSA*  _dsaKey;

/// @brief Field _oid, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__oid, put=__cordl_internal_set__oid)) ::StringW  _oid;

/// @brief Method CreateSignature, addr 0xa167564, size 0xd4, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> CreateSignature(::ArrayW<uint8_t>  rgbHash) ;

static inline ::System::Security::Cryptography::DSASignatureFormatter* New_ctor() ;

static inline ::System::Security::Cryptography::DSASignatureFormatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

/// @brief Method SetHashAlgorithm, addr 0xa1674a0, size 0xc4, virtual true, abstract: false, final false
inline void SetHashAlgorithm(::StringW  strName) ;

/// @brief Method SetKey, addr 0xa1673ac, size 0xf4, virtual true, abstract: false, final false
inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

constexpr ::System::Security::Cryptography::DSA* const& __cordl_internal_get__dsaKey() const;

constexpr ::System::Security::Cryptography::DSA*& __cordl_internal_get__dsaKey() ;

constexpr ::StringW const& __cordl_internal_get__oid() const;

constexpr ::StringW& __cordl_internal_get__oid() ;

constexpr void __cordl_internal_set__dsaKey(::System::Security::Cryptography::DSA*  value) ;

constexpr void __cordl_internal_set__oid(::StringW  value) ;

/// @brief Method .ctor, addr 0xa167228, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa1672b0, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DSASignatureFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DSASignatureFormatter(DSASignatureFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DSASignatureFormatter(DSASignatureFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6090};

/// @brief Field _dsaKey, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::DSA*  ____dsaKey;

/// @brief Field _oid, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____oid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::DSASignatureFormatter, ____dsaKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSASignatureFormatter, ____oid) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::DSASignatureFormatter) == 0x20, "Size mismatch!");

} // namespace end def System::Security::Cryptography
