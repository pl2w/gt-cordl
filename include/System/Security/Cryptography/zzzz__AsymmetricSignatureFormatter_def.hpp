#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsymmetricSignatureFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricSignatureFormatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricSignatureFormatter;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::AsymmetricSignatureFormatter*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::AsymmetricSignatureFormatter*, "System.Security.Cryptography", "AsymmetricSignatureFormatter");
// [ComVisible(true)]
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.AsymmetricSignatureFormatter
class CORDL_TYPE AsymmetricSignatureFormatter : public ::System::Object {
public:
// Declarations
/// @brief Method CreateSignature, addr 0xa162960, size 0xac, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> CreateSignature(::System::Security::Cryptography::HashAlgorithm*  hash) ;

/// @brief Method CreateSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> CreateSignature(::ArrayW<uint8_t>  rgbHash) ;

static inline ::System::Security::Cryptography::AsymmetricSignatureFormatter* New_ctor() ;

/// @brief Method SetHashAlgorithm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetHashAlgorithm(::StringW  strName) ;

/// @brief Method SetKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

/// @brief Method .ctor, addr 0xa162958, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsymmetricSignatureFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsymmetricSignatureFormatter(AsymmetricSignatureFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsymmetricSignatureFormatter(AsymmetricSignatureFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6073};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::AsymmetricSignatureFormatter) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
