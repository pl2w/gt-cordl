#pragma once
// IWYU pragma private; include "System/Security/Cryptography/ICspAsymmetricAlgorithm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICspAsymmetricAlgorithm)
namespace System::Security::Cryptography {
class CspKeyContainerInfo;
}
// Forward declare root types
namespace System::Security::Cryptography {
class ICspAsymmetricAlgorithm;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::ICspAsymmetricAlgorithm*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::ICspAsymmetricAlgorithm*, "System.Security.Cryptography", "ICspAsymmetricAlgorithm");
// Dependencies 
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.ICspAsymmetricAlgorithm
class CORDL_TYPE ICspAsymmetricAlgorithm {
public:
// Declarations
 __declspec(property(get=get_CspKeyContainerInfo)) ::System::Security::Cryptography::CspKeyContainerInfo*  CspKeyContainerInfo;

/// @brief Method ExportCspBlob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> ExportCspBlob(bool  includePrivateParameters) ;

/// @brief Method ImportCspBlob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ImportCspBlob(::ArrayW<uint8_t>  rawData) ;

/// @brief Method get_CspKeyContainerInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Security::Cryptography::CspKeyContainerInfo* get_CspKeyContainerInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "ICspAsymmetricAlgorithm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICspAsymmetricAlgorithm(ICspAsymmetricAlgorithm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6052};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
