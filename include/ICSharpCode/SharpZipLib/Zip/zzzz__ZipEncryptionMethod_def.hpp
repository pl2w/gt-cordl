#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipEncryptionMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipEncryptionMethod)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
struct ZipEncryptionMethod;
}
// Write type traits
MARK_VAL_T(::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod, "ICSharpCode.SharpZipLib.Zip", "ZipEncryptionMethod");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipEncryptionMethod
struct CORDL_TYPE ZipEncryptionMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZipEncryptionMethod_Unwrapped
enum struct __ZipEncryptionMethod_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ZipCrypto = static_cast<int32_t>(0x1),
__E_AES128 = static_cast<int32_t>(0x2),
__E_AES256 = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipEncryptionMethod_Unwrapped () const noexcept {
return static_cast<__ZipEncryptionMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipEncryptionMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZipEncryptionMethod(int32_t  value__) noexcept;

/// @brief Field AES128 value: I32(2)
static ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod const AES128;

/// @brief Field AES256 value: I32(3)
static ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod const AES256;

/// @brief Field None value: I32(0)
static ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod const None;

/// @brief Field ZipCrypto value: I32(1)
static ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod const ZipCrypto;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17322};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod) == 0x4, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
