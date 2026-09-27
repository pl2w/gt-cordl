#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticEffectsOnPlayers_TargetType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticEffectsOnPlayers_TargetType)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticEffectsOnPlayers_TargetType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType, "GorillaTag.Cosmetics", "CosmeticEffectsOnPlayers/TargetType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.CosmeticEffectsOnPlayers/TargetType
struct CORDL_TYPE CosmeticEffectsOnPlayers_TargetType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticEffectsOnPlayers_TargetType_Unwrapped
enum struct __CosmeticEffectsOnPlayers_TargetType_Unwrapped : int32_t {
__E_Owner = static_cast<int32_t>(0x0),
__E_Others = static_cast<int32_t>(0x1),
__E_All = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticEffectsOnPlayers_TargetType_Unwrapped () const noexcept {
return static_cast<__CosmeticEffectsOnPlayers_TargetType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticEffectsOnPlayers_TargetType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticEffectsOnPlayers_TargetType(int32_t  value__) noexcept;

/// @brief Field All value: I32(2)
static ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType const All;

/// @brief Field Others value: I32(1)
static ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType const Others;

/// @brief Field Owner value: I32(0)
static ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType const Owner;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4848};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
