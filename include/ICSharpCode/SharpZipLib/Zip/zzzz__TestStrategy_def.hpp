#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/TestStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TestStrategy)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
struct TestStrategy;
}
// Write type traits
MARK_VAL_T(::ICSharpCode::SharpZipLib::Zip::TestStrategy);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::TestStrategy, "ICSharpCode.SharpZipLib.Zip", "TestStrategy");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.TestStrategy
struct CORDL_TYPE TestStrategy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TestStrategy_Unwrapped
enum struct __TestStrategy_Unwrapped : int32_t {
__E_FindFirstError = static_cast<int32_t>(0x0),
__E_FindAllErrors = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TestStrategy_Unwrapped () const noexcept {
return static_cast<__TestStrategy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TestStrategy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TestStrategy(int32_t  value__) noexcept;

/// @brief Field FindAllErrors value: I32(1)
static ::ICSharpCode::SharpZipLib::Zip::TestStrategy const FindAllErrors;

/// @brief Field FindFirstError value: I32(0)
static ::ICSharpCode::SharpZipLib::Zip::TestStrategy const FindFirstError;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17338};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::TestStrategy, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::TestStrategy) == 0x4, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
