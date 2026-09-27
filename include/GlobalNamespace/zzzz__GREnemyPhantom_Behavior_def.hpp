#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyPhantom_Behavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyPhantom_Behavior)
// Forward declare root types
namespace GlobalNamespace {
struct GREnemyPhantom_Behavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GREnemyPhantom_Behavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyPhantom_Behavior, "", "GREnemyPhantom/Behavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GREnemyPhantom/Behavior
struct CORDL_TYPE GREnemyPhantom_Behavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GREnemyPhantom_Behavior_Unwrapped
enum struct __GREnemyPhantom_Behavior_Unwrapped : int32_t {
__E_Mine = static_cast<int32_t>(0x0),
__E_Idle = static_cast<int32_t>(0x1),
__E_Alert = static_cast<int32_t>(0x2),
__E_Return = static_cast<int32_t>(0x3),
__E_Rage = static_cast<int32_t>(0x4),
__E_Chase = static_cast<int32_t>(0x5),
__E_Attack = static_cast<int32_t>(0x6),
__E_Investigate = static_cast<int32_t>(0x7),
__E_Jump = static_cast<int32_t>(0x8),
__E_Count = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GREnemyPhantom_Behavior_Unwrapped () const noexcept {
return static_cast<__GREnemyPhantom_Behavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GREnemyPhantom_Behavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GREnemyPhantom_Behavior(int32_t  value__) noexcept;

/// @brief Field Alert value: I32(2)
static ::GlobalNamespace::GREnemyPhantom_Behavior const Alert;

/// @brief Field Attack value: I32(6)
static ::GlobalNamespace::GREnemyPhantom_Behavior const Attack;

/// @brief Field Chase value: I32(5)
static ::GlobalNamespace::GREnemyPhantom_Behavior const Chase;

/// @brief Field Count value: I32(9)
static ::GlobalNamespace::GREnemyPhantom_Behavior const Count;

/// @brief Field Idle value: I32(1)
static ::GlobalNamespace::GREnemyPhantom_Behavior const Idle;

/// @brief Field Investigate value: I32(7)
static ::GlobalNamespace::GREnemyPhantom_Behavior const Investigate;

/// @brief Field Jump value: I32(8)
static ::GlobalNamespace::GREnemyPhantom_Behavior const Jump;

/// @brief Field Mine value: I32(0)
static ::GlobalNamespace::GREnemyPhantom_Behavior const Mine;

/// @brief Field Rage value: I32(4)
static ::GlobalNamespace::GREnemyPhantom_Behavior const Rage;

/// @brief Field Return value: I32(3)
static ::GlobalNamespace::GREnemyPhantom_Behavior const Return;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1960};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyPhantom_Behavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyPhantom_Behavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
