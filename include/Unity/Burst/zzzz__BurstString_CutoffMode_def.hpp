#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_CutoffMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString_CutoffMode)
// Forward declare root types
namespace GlobalNamespace {
struct BurstString_CutoffMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstString_CutoffMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstString_CutoffMode, "Unity.Burst", "BurstString/CutoffMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Burst.BurstString/CutoffMode
struct CORDL_TYPE BurstString_CutoffMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BurstString_CutoffMode_Unwrapped
enum struct __BurstString_CutoffMode_Unwrapped : int32_t {
__E_Unique = static_cast<int32_t>(0x0),
__E_TotalLength = static_cast<int32_t>(0x1),
__E_FractionLength = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BurstString_CutoffMode_Unwrapped () const noexcept {
return static_cast<__BurstString_CutoffMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BurstString_CutoffMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BurstString_CutoffMode(int32_t  value__) noexcept;

/// @brief Field FractionLength value: I32(2)
static ::GlobalNamespace::BurstString_CutoffMode const FractionLength;

/// @brief Field TotalLength value: I32(1)
static ::GlobalNamespace::BurstString_CutoffMode const TotalLength;

/// @brief Field Unique value: I32(0)
static ::GlobalNamespace::BurstString_CutoffMode const Unique;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32182};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstString_CutoffMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BurstString_CutoffMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
