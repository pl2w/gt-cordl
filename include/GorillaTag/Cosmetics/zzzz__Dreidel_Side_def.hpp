#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/Dreidel_Side.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Dreidel_Side)
// Forward declare root types
namespace GlobalNamespace {
struct Dreidel_Side;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Dreidel_Side);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Dreidel_Side, "GorillaTag.Cosmetics", "Dreidel/Side");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.Dreidel/Side
struct CORDL_TYPE Dreidel_Side {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Dreidel_Side_Unwrapped
enum struct __Dreidel_Side_Unwrapped : int32_t {
__E_Shin = static_cast<int32_t>(0x0),
__E_Hey = static_cast<int32_t>(0x1),
__E_Gimel = static_cast<int32_t>(0x2),
__E_Nun = static_cast<int32_t>(0x3),
__E_Count = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Dreidel_Side_Unwrapped () const noexcept {
return static_cast<__Dreidel_Side_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Dreidel_Side() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Dreidel_Side(int32_t  value__) noexcept;

/// @brief Field Count value: I32(4)
static ::GlobalNamespace::Dreidel_Side const Count;

/// @brief Field Gimel value: I32(2)
static ::GlobalNamespace::Dreidel_Side const Gimel;

/// @brief Field Hey value: I32(1)
static ::GlobalNamespace::Dreidel_Side const Hey;

/// @brief Field Nun value: I32(3)
static ::GlobalNamespace::Dreidel_Side const Nun;

/// @brief Field Shin value: I32(0)
static ::GlobalNamespace::Dreidel_Side const Shin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4915};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Dreidel_Side, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Dreidel_Side) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
