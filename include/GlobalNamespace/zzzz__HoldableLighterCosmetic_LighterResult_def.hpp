#pragma once
// IWYU pragma private; include "GlobalNamespace/HoldableLighterCosmetic_LighterResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HoldableLighterCosmetic_LighterResult)
// Forward declare root types
namespace GlobalNamespace {
struct HoldableLighterCosmetic_LighterResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HoldableLighterCosmetic_LighterResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoldableLighterCosmetic_LighterResult, "", "HoldableLighterCosmetic/LighterResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HoldableLighterCosmetic/LighterResult
struct CORDL_TYPE HoldableLighterCosmetic_LighterResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HoldableLighterCosmetic_LighterResult_Unwrapped
enum struct __HoldableLighterCosmetic_LighterResult_Unwrapped : int32_t {
__E_Flicker = static_cast<int32_t>(0x0),
__E_Light = static_cast<int32_t>(0x1),
__E_Explode = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoldableLighterCosmetic_LighterResult_Unwrapped () const noexcept {
return static_cast<__HoldableLighterCosmetic_LighterResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HoldableLighterCosmetic_LighterResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HoldableLighterCosmetic_LighterResult(int32_t  value__) noexcept;

/// @brief Field Explode value: I32(2)
static ::GlobalNamespace::HoldableLighterCosmetic_LighterResult const Explode;

/// @brief Field Flicker value: I32(0)
static ::GlobalNamespace::HoldableLighterCosmetic_LighterResult const Flicker;

/// @brief Field Light value: I32(1)
static ::GlobalNamespace::HoldableLighterCosmetic_LighterResult const Light;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{195};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic_LighterResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HoldableLighterCosmetic_LighterResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
