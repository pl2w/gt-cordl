#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CspAlgorithmType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CspAlgorithmType)
// Forward declare root types
namespace System::Security::Cryptography {
struct CspAlgorithmType;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::CspAlgorithmType);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::CspAlgorithmType, "System.Security.Cryptography", "CspAlgorithmType");
// Dependencies 
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: System.Security.Cryptography.CspAlgorithmType
struct CORDL_TYPE CspAlgorithmType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CspAlgorithmType_Unwrapped
enum struct __CspAlgorithmType_Unwrapped : int32_t {
__E_Rsa = static_cast<int32_t>(0x0),
__E_Dss = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CspAlgorithmType_Unwrapped () const noexcept {
return static_cast<__CspAlgorithmType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CspAlgorithmType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CspAlgorithmType(int32_t  value__) noexcept;

/// @brief Field Dss value: I32(1)
static ::System::Security::Cryptography::CspAlgorithmType const Dss;

/// @brief Field Rsa value: I32(0)
static ::System::Security::Cryptography::CspAlgorithmType const Rsa;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::CspAlgorithmType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::CspAlgorithmType) == 0x4, "Size mismatch!");

} // namespace end def System::Security::Cryptography
