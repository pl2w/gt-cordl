#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/TestOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TestOperation)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
struct TestOperation;
}
// Write type traits
MARK_VAL_T(::ICSharpCode::SharpZipLib::Zip::TestOperation);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::TestOperation, "ICSharpCode.SharpZipLib.Zip", "TestOperation");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.TestOperation
struct CORDL_TYPE TestOperation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TestOperation_Unwrapped
enum struct __TestOperation_Unwrapped : int32_t {
__E_Initialising = static_cast<int32_t>(0x0),
__E_EntryHeader = static_cast<int32_t>(0x1),
__E_EntryData = static_cast<int32_t>(0x2),
__E_EntryComplete = static_cast<int32_t>(0x3),
__E_MiscellaneousTests = static_cast<int32_t>(0x4),
__E_Complete = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TestOperation_Unwrapped () const noexcept {
return static_cast<__TestOperation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TestOperation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TestOperation(int32_t  value__) noexcept;

/// @brief Field Complete value: I32(5)
static ::ICSharpCode::SharpZipLib::Zip::TestOperation const Complete;

/// @brief Field EntryComplete value: I32(3)
static ::ICSharpCode::SharpZipLib::Zip::TestOperation const EntryComplete;

/// @brief Field EntryData value: I32(2)
static ::ICSharpCode::SharpZipLib::Zip::TestOperation const EntryData;

/// @brief Field EntryHeader value: I32(1)
static ::ICSharpCode::SharpZipLib::Zip::TestOperation const EntryHeader;

/// @brief Field Initialising value: I32(0)
static ::ICSharpCode::SharpZipLib::Zip::TestOperation const Initialising;

/// @brief Field MiscellaneousTests value: I32(4)
static ::ICSharpCode::SharpZipLib::Zip::TestOperation const MiscellaneousTests;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17339};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::TestOperation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::TestOperation) == 0x4, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
