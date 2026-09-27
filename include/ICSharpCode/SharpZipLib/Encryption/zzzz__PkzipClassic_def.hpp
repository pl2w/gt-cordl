#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/PkzipClassic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkzipClassic)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Encryption {
class PkzipClassic;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Encryption::PkzipClassic*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Encryption::PkzipClassic*, "ICSharpCode.SharpZipLib.Encryption", "PkzipClassic");
// Dependencies System.Security.Cryptography.SymmetricAlgorithm
namespace ICSharpCode::SharpZipLib::Encryption {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Encryption.PkzipClassic
class CORDL_TYPE PkzipClassic : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
// Declarations
/// @brief Method GenerateKeys, addr 0x9ff7b0c, size 0x424, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GenerateKeys(::ArrayW<uint8_t>  seed) ;

static inline ::ICSharpCode::SharpZipLib::Encryption::PkzipClassic* New_ctor() ;

/// @brief Method .ctor, addr 0x9ff7f30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PkzipClassic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PkzipClassic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PkzipClassic(PkzipClassic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkzipClassic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkzipClassic(PkzipClassic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Encryption::PkzipClassic) == 0x48, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Encryption
