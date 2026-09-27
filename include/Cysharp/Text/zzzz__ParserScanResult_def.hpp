#pragma once
// IWYU pragma private; include "Cysharp/Text/ParserScanResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParserScanResult)
// Forward declare root types
namespace Cysharp::Text {
struct ParserScanResult;
}
// Write type traits
MARK_VAL_T(::Cysharp::Text::ParserScanResult);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::ParserScanResult, "Cysharp.Text", "ParserScanResult");
// Dependencies 
namespace Cysharp::Text {
// Is value type: true
// CS Name: Cysharp.Text.ParserScanResult
struct CORDL_TYPE ParserScanResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParserScanResult_Unwrapped
enum struct __ParserScanResult_Unwrapped : int32_t {
__E_BraceOpen = static_cast<int32_t>(0x0),
__E_EscapedChar = static_cast<int32_t>(0x1),
__E_NormalChar = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParserScanResult_Unwrapped () const noexcept {
return static_cast<__ParserScanResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ParserScanResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ParserScanResult(int32_t  value__) noexcept;

/// @brief Field BraceOpen value: I32(0)
static ::Cysharp::Text::ParserScanResult const BraceOpen;

/// @brief Field EscapedChar value: I32(1)
static ::Cysharp::Text::ParserScanResult const EscapedChar;

/// @brief Field NormalChar value: I32(2)
static ::Cysharp::Text::ParserScanResult const NormalChar;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Text::ParserScanResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Text::ParserScanResult) == 0x4, "Size mismatch!");

} // namespace end def Cysharp::Text
