#pragma once
// IWYU pragma private; include "System/Security/Cryptography/FromBase64TransformMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FromBase64TransformMode)
// Forward declare root types
namespace System::Security::Cryptography {
struct FromBase64TransformMode;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::FromBase64TransformMode);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::FromBase64TransformMode, "System.Security.Cryptography", "FromBase64TransformMode");
// [ComVisible(true)]
// Dependencies 
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: System.Security.Cryptography.FromBase64TransformMode
struct CORDL_TYPE FromBase64TransformMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FromBase64TransformMode_Unwrapped
enum struct __FromBase64TransformMode_Unwrapped : int32_t {
__E_IgnoreWhiteSpaces = static_cast<int32_t>(0x0),
__E_DoNotIgnoreWhiteSpaces = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FromBase64TransformMode_Unwrapped () const noexcept {
return static_cast<__FromBase64TransformMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FromBase64TransformMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FromBase64TransformMode(int32_t  value__) noexcept;

/// @brief Field DoNotIgnoreWhiteSpaces value: I32(1)
static ::System::Security::Cryptography::FromBase64TransformMode const DoNotIgnoreWhiteSpaces;

/// @brief Field IgnoreWhiteSpaces value: I32(0)
static ::System::Security::Cryptography::FromBase64TransformMode const IgnoreWhiteSpaces;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6074};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::FromBase64TransformMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::FromBase64TransformMode) == 0x4, "Size mismatch!");

} // namespace end def System::Security::Cryptography
