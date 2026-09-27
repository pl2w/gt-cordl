#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticSwapper_SwapMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticSwapper_SwapMode)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticSwapper_SwapMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticSwapper_SwapMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticSwapper_SwapMode, "GorillaTag.Cosmetics", "CosmeticSwapper/SwapMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.CosmeticSwapper/SwapMode
struct CORDL_TYPE CosmeticSwapper_SwapMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticSwapper_SwapMode_Unwrapped
enum struct __CosmeticSwapper_SwapMode_Unwrapped : int32_t {
__E_AllAtOnce = static_cast<int32_t>(0x0),
__E_StepByStep = static_cast<int32_t>(0x1),
__E_Random = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticSwapper_SwapMode_Unwrapped () const noexcept {
return static_cast<__CosmeticSwapper_SwapMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticSwapper_SwapMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticSwapper_SwapMode(int32_t  value__) noexcept;

/// @brief Field AllAtOnce value: I32(0)
static ::GlobalNamespace::CosmeticSwapper_SwapMode const AllAtOnce;

/// @brief Field Random value: I32(2)
static ::GlobalNamespace::CosmeticSwapper_SwapMode const Random;

/// @brief Field StepByStep value: I32(1)
static ::GlobalNamespace::CosmeticSwapper_SwapMode const StepByStep;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4908};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticSwapper_SwapMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticSwapper_SwapMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
