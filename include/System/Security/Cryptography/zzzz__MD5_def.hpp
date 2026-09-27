#pragma once
// IWYU pragma private; include "System/Security/Cryptography/MD5.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MD5)
// Forward declare root types
namespace System::Security::Cryptography {
class MD5;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::MD5*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::MD5*, "System.Security.Cryptography", "MD5");
// [ComVisible(true)]
// Dependencies System.Security.Cryptography.HashAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.MD5
class CORDL_TYPE MD5 : public ::System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief Method Create, addr 0xa169aec, size 0x54, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::MD5* Create() ;

/// @brief Method Create, addr 0xa169b40, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::MD5* Create(::StringW  algName) ;

static inline ::System::Security::Cryptography::MD5* New_ctor() ;

/// @brief Method .ctor, addr 0xa169acc, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MD5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MD5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MD5(MD5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MD5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MD5(MD5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6103};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::MD5) == 0x28, "Size mismatch!");

} // namespace end def System::Security::Cryptography
