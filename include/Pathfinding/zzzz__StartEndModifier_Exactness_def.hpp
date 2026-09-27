#pragma once
// IWYU pragma private; include "Pathfinding/StartEndModifier_Exactness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StartEndModifier_Exactness)
// Forward declare root types
namespace GlobalNamespace {
struct StartEndModifier_Exactness;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StartEndModifier_Exactness);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StartEndModifier_Exactness, "Pathfinding", "StartEndModifier/Exactness");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.StartEndModifier/Exactness
struct CORDL_TYPE StartEndModifier_Exactness {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StartEndModifier_Exactness_Unwrapped
enum struct __StartEndModifier_Exactness_Unwrapped : int32_t {
__E_SnapToNode = static_cast<int32_t>(0x0),
__E_Original = static_cast<int32_t>(0x1),
__E_Interpolate = static_cast<int32_t>(0x2),
__E_ClosestOnNode = static_cast<int32_t>(0x3),
__E_NodeConnection = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StartEndModifier_Exactness_Unwrapped () const noexcept {
return static_cast<__StartEndModifier_Exactness_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StartEndModifier_Exactness() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StartEndModifier_Exactness(int32_t  value__) noexcept;

/// @brief Field ClosestOnNode value: I32(3)
static ::GlobalNamespace::StartEndModifier_Exactness const ClosestOnNode;

/// @brief Field Interpolate value: I32(2)
static ::GlobalNamespace::StartEndModifier_Exactness const Interpolate;

/// @brief Field NodeConnection value: I32(4)
static ::GlobalNamespace::StartEndModifier_Exactness const NodeConnection;

/// @brief Field Original value: I32(1)
static ::GlobalNamespace::StartEndModifier_Exactness const Original;

/// @brief Field SnapToNode value: I32(0)
static ::GlobalNamespace::StartEndModifier_Exactness const SnapToNode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StartEndModifier_Exactness, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StartEndModifier_Exactness) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
