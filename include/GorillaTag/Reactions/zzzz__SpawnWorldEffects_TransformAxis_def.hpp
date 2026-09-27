#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/SpawnWorldEffects_TransformAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnWorldEffects_TransformAxis)
// Forward declare root types
namespace GlobalNamespace {
struct SpawnWorldEffects_TransformAxis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SpawnWorldEffects_TransformAxis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpawnWorldEffects_TransformAxis, "GorillaTag.Reactions", "SpawnWorldEffects/TransformAxis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Reactions.SpawnWorldEffects/TransformAxis
struct CORDL_TYPE SpawnWorldEffects_TransformAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SpawnWorldEffects_TransformAxis_Unwrapped
enum struct __SpawnWorldEffects_TransformAxis_Unwrapped : int32_t {
__E_Forward = static_cast<int32_t>(0x0),
__E_Back = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Left = static_cast<int32_t>(0x3),
__E_Up = static_cast<int32_t>(0x4),
__E_Down = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpawnWorldEffects_TransformAxis_Unwrapped () const noexcept {
return static_cast<__SpawnWorldEffects_TransformAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SpawnWorldEffects_TransformAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SpawnWorldEffects_TransformAxis(int32_t  value__) noexcept;

/// @brief Field Back value: I32(1)
static ::GlobalNamespace::SpawnWorldEffects_TransformAxis const Back;

/// @brief Field Down value: I32(5)
static ::GlobalNamespace::SpawnWorldEffects_TransformAxis const Down;

/// @brief Field Forward value: I32(0)
static ::GlobalNamespace::SpawnWorldEffects_TransformAxis const Forward;

/// @brief Field Left value: I32(3)
static ::GlobalNamespace::SpawnWorldEffects_TransformAxis const Left;

/// @brief Field Right value: I32(2)
static ::GlobalNamespace::SpawnWorldEffects_TransformAxis const Right;

/// @brief Field Up value: I32(4)
static ::GlobalNamespace::SpawnWorldEffects_TransformAxis const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4709};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpawnWorldEffects_TransformAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpawnWorldEffects_TransformAxis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
