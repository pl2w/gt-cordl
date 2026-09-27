#pragma once
// IWYU pragma private; include "System/Buffers/Text/Utf8Parser_ComponentParseResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Utf8Parser_ComponentParseResult)
// Forward declare root types
namespace GlobalNamespace {
struct Utf8Parser_ComponentParseResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Utf8Parser_ComponentParseResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Utf8Parser_ComponentParseResult, "System.Buffers.Text", "Utf8Parser/ComponentParseResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Buffers.Text.Utf8Parser/ComponentParseResult
struct CORDL_TYPE Utf8Parser_ComponentParseResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __Utf8Parser_ComponentParseResult_Unwrapped
enum struct __Utf8Parser_ComponentParseResult_Unwrapped : uint8_t {
__E_NoMoreData = static_cast<uint8_t>(0x0u),
__E_Colon = static_cast<uint8_t>(0x1u),
__E_Period = static_cast<uint8_t>(0x2u),
__E_ParseFailure = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Utf8Parser_ComponentParseResult_Unwrapped () const noexcept {
return static_cast<__Utf8Parser_ComponentParseResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Utf8Parser_ComponentParseResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Utf8Parser_ComponentParseResult(uint8_t  value__) noexcept;

/// @brief Field Colon value: U8(1)
static ::GlobalNamespace::Utf8Parser_ComponentParseResult const Colon;

/// @brief Field NoMoreData value: U8(0)
static ::GlobalNamespace::Utf8Parser_ComponentParseResult const NoMoreData;

/// @brief Field ParseFailure value: U8(3)
static ::GlobalNamespace::Utf8Parser_ComponentParseResult const ParseFailure;

/// @brief Field Period value: U8(2)
static ::GlobalNamespace::Utf8Parser_ComponentParseResult const Period;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6980};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Utf8Parser_ComponentParseResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Utf8Parser_ComponentParseResult) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
