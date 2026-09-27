#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/UseZip64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UseZip64)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
struct UseZip64;
}
// Write type traits
MARK_VAL_T(::ICSharpCode::SharpZipLib::Zip::UseZip64);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::UseZip64, "ICSharpCode.SharpZipLib.Zip", "UseZip64");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.UseZip64
struct CORDL_TYPE UseZip64 {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UseZip64_Unwrapped
enum struct __UseZip64_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_On = static_cast<int32_t>(0x1),
__E_Dynamic = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UseZip64_Unwrapped () const noexcept {
return static_cast<__UseZip64_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UseZip64() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UseZip64(int32_t  value__) noexcept;

/// @brief Field Dynamic value: I32(2)
static ::ICSharpCode::SharpZipLib::Zip::UseZip64 const Dynamic;

/// @brief Field Off value: I32(0)
static ::ICSharpCode::SharpZipLib::Zip::UseZip64 const Off;

/// @brief Field On value: I32(1)
static ::ICSharpCode::SharpZipLib::Zip::UseZip64 const On;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17317};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::UseZip64, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::UseZip64) == 0x4, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
