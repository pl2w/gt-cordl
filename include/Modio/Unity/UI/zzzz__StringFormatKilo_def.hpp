#pragma once
// IWYU pragma private; include "Modio/Unity/UI/StringFormatKilo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringFormatKilo)
// Forward declare root types
namespace Modio::Unity::UI {
struct StringFormatKilo;
}
// Write type traits
MARK_VAL_T(::Modio::Unity::UI::StringFormatKilo);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::StringFormatKilo, "Modio.Unity.UI", "StringFormatKilo");
// Dependencies 
namespace Modio::Unity::UI {
// Is value type: true
// CS Name: Modio.Unity.UI.StringFormatKilo
struct CORDL_TYPE StringFormatKilo {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StringFormatKilo_Unwrapped
enum struct __StringFormatKilo_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Comma = static_cast<int32_t>(0x1),
__E_Kilo = static_cast<int32_t>(0x2),
__E_Custom = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StringFormatKilo_Unwrapped () const noexcept {
return static_cast<__StringFormatKilo_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StringFormatKilo() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StringFormatKilo(int32_t  value__) noexcept;

/// @brief Field Comma value: I32(1)
static ::Modio::Unity::UI::StringFormatKilo const Comma;

/// @brief Field Custom value: I32(3)
static ::Modio::Unity::UI::StringFormatKilo const Custom;

/// @brief Field Kilo value: I32(2)
static ::Modio::Unity::UI::StringFormatKilo const Kilo;

/// @brief Field None value: I32(0)
static ::Modio::Unity::UI::StringFormatKilo const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27033};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::StringFormatKilo, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::StringFormatKilo) == 0x4, "Size mismatch!");

} // namespace end def Modio::Unity::UI
