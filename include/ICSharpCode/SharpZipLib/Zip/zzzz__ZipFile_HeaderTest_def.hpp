#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipFile_HeaderTest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipFile_HeaderTest)
// Forward declare root types
namespace GlobalNamespace {
struct ZipFile_HeaderTest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ZipFile_HeaderTest);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZipFile_HeaderTest, "ICSharpCode.SharpZipLib.Zip", "ZipFile/HeaderTest");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipFile/HeaderTest
struct CORDL_TYPE ZipFile_HeaderTest {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZipFile_HeaderTest_Unwrapped
enum struct __ZipFile_HeaderTest_Unwrapped : int32_t {
__E_Extract = static_cast<int32_t>(0x1),
__E_Header = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipFile_HeaderTest_Unwrapped () const noexcept {
return static_cast<__ZipFile_HeaderTest_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipFile_HeaderTest() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZipFile_HeaderTest(int32_t  value__) noexcept;

/// @brief Field Extract value: I32(1)
static ::GlobalNamespace::ZipFile_HeaderTest const Extract;

/// @brief Field Header value: I32(2)
static ::GlobalNamespace::ZipFile_HeaderTest const Header;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17344};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZipFile_HeaderTest, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZipFile_HeaderTest) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
