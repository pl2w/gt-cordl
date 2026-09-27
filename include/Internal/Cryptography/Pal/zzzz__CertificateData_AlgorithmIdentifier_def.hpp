#pragma once
// IWYU pragma private; include "Internal/Cryptography/Pal/CertificateData_AlgorithmIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateData_AlgorithmIdentifier)
// Forward declare root types
namespace GlobalNamespace {
struct CertificateData_AlgorithmIdentifier;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CertificateData_AlgorithmIdentifier);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CertificateData_AlgorithmIdentifier, "Internal.Cryptography.Pal", "CertificateData/AlgorithmIdentifier");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier
struct CORDL_TYPE CertificateData_AlgorithmIdentifier {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CertificateData_AlgorithmIdentifier() ;

// Ctor Parameters [CppParam { name: "AlgorithmId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Parameters", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr CertificateData_AlgorithmIdentifier(::StringW  AlgorithmId, ::ArrayW<uint8_t>  Parameters) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9908};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field AlgorithmId, offset: 0x0, size: 0x8, def value: None
 ::StringW  AlgorithmId;

/// @brief Field Parameters, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  Parameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CertificateData_AlgorithmIdentifier, AlgorithmId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CertificateData_AlgorithmIdentifier, Parameters) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CertificateData_AlgorithmIdentifier) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
