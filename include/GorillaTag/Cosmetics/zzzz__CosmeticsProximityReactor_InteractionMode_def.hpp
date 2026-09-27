#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticsProximityReactor_InteractionMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsProximityReactor_InteractionMode)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsProximityReactor_InteractionMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsProximityReactor_InteractionMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsProximityReactor_InteractionMode, "GorillaTag.Cosmetics", "CosmeticsProximityReactor/InteractionMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.CosmeticsProximityReactor/InteractionMode
struct CORDL_TYPE CosmeticsProximityReactor_InteractionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticsProximityReactor_InteractionMode_Unwrapped
enum struct __CosmeticsProximityReactor_InteractionMode_Unwrapped : int32_t {
__E_CosmeticToCosmetic = static_cast<int32_t>(0x0),
__E_CosmeticToEnvironment = static_cast<int32_t>(0x1),
__E_GorillaBodyToCosmetic = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticsProximityReactor_InteractionMode_Unwrapped () const noexcept {
return static_cast<__CosmeticsProximityReactor_InteractionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsProximityReactor_InteractionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsProximityReactor_InteractionMode(int32_t  value__) noexcept;

/// @brief Field CosmeticToCosmetic value: I32(0)
static ::GlobalNamespace::CosmeticsProximityReactor_InteractionMode const CosmeticToCosmetic;

/// @brief Field CosmeticToEnvironment value: I32(1)
static ::GlobalNamespace::CosmeticsProximityReactor_InteractionMode const CosmeticToEnvironment;

/// @brief Field GorillaBodyToCosmetic value: I32(2)
static ::GlobalNamespace::CosmeticsProximityReactor_InteractionMode const GorillaBodyToCosmetic;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4903};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsProximityReactor_InteractionMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsProximityReactor_InteractionMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
