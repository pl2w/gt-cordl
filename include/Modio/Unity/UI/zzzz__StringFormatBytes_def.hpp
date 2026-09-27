#pragma once
// IWYU pragma private; include "Modio/Unity/UI/StringFormatBytes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringFormatBytes)
// Forward declare root types
namespace Modio::Unity::UI {
struct StringFormatBytes;
}
// Write type traits
MARK_VAL_T(::Modio::Unity::UI::StringFormatBytes);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::StringFormatBytes, "Modio.Unity.UI", "StringFormatBytes");
// Dependencies 
namespace Modio::Unity::UI {
// Is value type: true
// CS Name: Modio.Unity.UI.StringFormatBytes
struct CORDL_TYPE StringFormatBytes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StringFormatBytes_Unwrapped
enum struct __StringFormatBytes_Unwrapped : int32_t {
__E_Bytes = static_cast<int32_t>(0x0),
__E_BytesComma = static_cast<int32_t>(0x1),
__E_Suffix = static_cast<int32_t>(0x2),
__E_Custom = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StringFormatBytes_Unwrapped () const noexcept {
return static_cast<__StringFormatBytes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StringFormatBytes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StringFormatBytes(int32_t  value__) noexcept;

/// @brief Field Bytes value: I32(0)
static ::Modio::Unity::UI::StringFormatBytes const Bytes;

/// @brief Field BytesComma value: I32(1)
static ::Modio::Unity::UI::StringFormatBytes const BytesComma;

/// @brief Field Custom value: I32(3)
static ::Modio::Unity::UI::StringFormatBytes const Custom;

/// @brief Field Suffix value: I32(2)
static ::Modio::Unity::UI::StringFormatBytes const Suffix;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27032};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::StringFormatBytes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::StringFormatBytes) == 0x4, "Size mismatch!");

} // namespace end def Modio::Unity::UI
