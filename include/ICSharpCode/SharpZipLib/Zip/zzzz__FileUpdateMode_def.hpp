#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/FileUpdateMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileUpdateMode)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
struct FileUpdateMode;
}
// Write type traits
MARK_VAL_T(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode, "ICSharpCode.SharpZipLib.Zip", "FileUpdateMode");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.FileUpdateMode
struct CORDL_TYPE FileUpdateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FileUpdateMode_Unwrapped
enum struct __FileUpdateMode_Unwrapped : int32_t {
__E_Safe = static_cast<int32_t>(0x0),
__E_Direct = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FileUpdateMode_Unwrapped () const noexcept {
return static_cast<__FileUpdateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FileUpdateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FileUpdateMode(int32_t  value__) noexcept;

/// @brief Field Direct value: I32(1)
static ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode const Direct;

/// @brief Field Safe value: I32(0)
static ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode const Safe;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17342};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode) == 0x4, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
