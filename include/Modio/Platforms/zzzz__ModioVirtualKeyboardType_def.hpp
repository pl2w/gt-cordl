#pragma once
// IWYU pragma private; include "Modio/Platforms/ModioVirtualKeyboardType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioVirtualKeyboardType)
// Forward declare root types
namespace Modio::Platforms {
struct ModioVirtualKeyboardType;
}
// Write type traits
MARK_VAL_T(::Modio::Platforms::ModioVirtualKeyboardType);
DEFINE_IL2CPP_CLASS(::Modio::Platforms::ModioVirtualKeyboardType, "Modio.Platforms", "ModioVirtualKeyboardType");
// Dependencies 
namespace Modio::Platforms {
// Is value type: true
// CS Name: Modio.Platforms.ModioVirtualKeyboardType
struct CORDL_TYPE ModioVirtualKeyboardType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModioVirtualKeyboardType_Unwrapped
enum struct __ModioVirtualKeyboardType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Search = static_cast<int32_t>(0x1),
__E_EmailAddress = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModioVirtualKeyboardType_Unwrapped () const noexcept {
return static_cast<__ModioVirtualKeyboardType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModioVirtualKeyboardType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModioVirtualKeyboardType(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Modio::Platforms::ModioVirtualKeyboardType const Default;

/// @brief Field EmailAddress value: I32(2)
static ::Modio::Platforms::ModioVirtualKeyboardType const EmailAddress;

/// @brief Field Search value: I32(1)
static ::Modio::Platforms::ModioVirtualKeyboardType const Search;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17560};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Platforms::ModioVirtualKeyboardType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Platforms::ModioVirtualKeyboardType) == 0x4, "Size mismatch!");

} // namespace end def Modio::Platforms
