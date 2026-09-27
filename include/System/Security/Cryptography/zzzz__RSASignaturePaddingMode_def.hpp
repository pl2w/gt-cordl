#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSASignaturePaddingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RSASignaturePaddingMode)
// Forward declare root types
namespace System::Security::Cryptography {
struct RSASignaturePaddingMode;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::RSASignaturePaddingMode);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RSASignaturePaddingMode, "System.Security.Cryptography", "RSASignaturePaddingMode");
// Dependencies 
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: System.Security.Cryptography.RSASignaturePaddingMode
struct CORDL_TYPE RSASignaturePaddingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RSASignaturePaddingMode_Unwrapped
enum struct __RSASignaturePaddingMode_Unwrapped : int32_t {
__E_Pkcs1 = static_cast<int32_t>(0x0),
__E_Pss = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RSASignaturePaddingMode_Unwrapped () const noexcept {
return static_cast<__RSASignaturePaddingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RSASignaturePaddingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RSASignaturePaddingMode(int32_t  value__) noexcept;

/// @brief Field Pkcs1 value: I32(0)
static ::System::Security::Cryptography::RSASignaturePaddingMode const Pkcs1;

/// @brief Field Pss value: I32(1)
static ::System::Security::Cryptography::RSASignaturePaddingMode const Pss;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RSASignaturePaddingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::RSASignaturePaddingMode) == 0x4, "Size mismatch!");

} // namespace end def System::Security::Cryptography
