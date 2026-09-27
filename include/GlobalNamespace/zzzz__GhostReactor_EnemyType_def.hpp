#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactor_EnemyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactor_EnemyType)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactor_EnemyType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactor_EnemyType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactor_EnemyType, "", "GhostReactor/EnemyType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactor/EnemyType
struct CORDL_TYPE GhostReactor_EnemyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GhostReactor_EnemyType_Unwrapped
enum struct __GhostReactor_EnemyType_Unwrapped : int32_t {
__E_Chaser = static_cast<int32_t>(0x0),
__E_Ranged = static_cast<int32_t>(0x1),
__E_Phantom = static_cast<int32_t>(0x2),
__E_Environment = static_cast<int32_t>(0x3),
__E_CustomMapsEnemy = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GhostReactor_EnemyType_Unwrapped () const noexcept {
return static_cast<__GhostReactor_EnemyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactor_EnemyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactor_EnemyType(int32_t  value__) noexcept;

/// @brief Field Chaser value: I32(0)
static ::GlobalNamespace::GhostReactor_EnemyType const Chaser;

/// @brief Field CustomMapsEnemy value: I32(4)
static ::GlobalNamespace::GhostReactor_EnemyType const CustomMapsEnemy;

/// @brief Field Environment value: I32(3)
static ::GlobalNamespace::GhostReactor_EnemyType const Environment;

/// @brief Field Phantom value: I32(2)
static ::GlobalNamespace::GhostReactor_EnemyType const Phantom;

/// @brief Field Ranged value: I32(1)
static ::GlobalNamespace::GhostReactor_EnemyType const Ranged;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1802};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactor_EnemyType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactor_EnemyType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
