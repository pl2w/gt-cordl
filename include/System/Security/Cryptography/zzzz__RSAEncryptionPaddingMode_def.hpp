#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAEncryptionPaddingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RSAEncryptionPaddingMode)
// Forward declare root types
namespace System::Security::Cryptography {
struct RSAEncryptionPaddingMode;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::RSAEncryptionPaddingMode);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RSAEncryptionPaddingMode, "System.Security.Cryptography", "RSAEncryptionPaddingMode");
// Dependencies 
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: System.Security.Cryptography.RSAEncryptionPaddingMode
struct CORDL_TYPE RSAEncryptionPaddingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RSAEncryptionPaddingMode_Unwrapped
enum struct __RSAEncryptionPaddingMode_Unwrapped : int32_t {
__E_Pkcs1 = static_cast<int32_t>(0x0),
__E_Oaep = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RSAEncryptionPaddingMode_Unwrapped () const noexcept {
return static_cast<__RSAEncryptionPaddingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RSAEncryptionPaddingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RSAEncryptionPaddingMode(int32_t  value__) noexcept;

/// @brief Field Oaep value: I32(1)
static ::System::Security::Cryptography::RSAEncryptionPaddingMode const Oaep;

/// @brief Field Pkcs1 value: I32(0)
static ::System::Security::Cryptography::RSAEncryptionPaddingMode const Pkcs1;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6065};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RSAEncryptionPaddingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::RSAEncryptionPaddingMode) == 0x4, "Size mismatch!");

} // namespace end def System::Security::Cryptography
