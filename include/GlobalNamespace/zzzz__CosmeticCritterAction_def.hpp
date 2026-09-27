#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticCritterAction)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticCritterAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticCritterAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterAction, "", "CosmeticCritterAction");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CosmeticCritterAction
struct CORDL_TYPE CosmeticCritterAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticCritterAction_Unwrapped
enum struct __CosmeticCritterAction_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_RPC = static_cast<int32_t>(0x1),
__E_Spawn = static_cast<int32_t>(0x2),
__E_Despawn = static_cast<int32_t>(0x4),
__E_SpawnLinked = static_cast<int32_t>(0x8),
__E_ShadeHeartbeat = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticCritterAction_Unwrapped () const noexcept {
return static_cast<__CosmeticCritterAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticCritterAction(int32_t  value__) noexcept;

/// @brief Field Despawn value: I32(4)
static ::GlobalNamespace::CosmeticCritterAction const Despawn;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::CosmeticCritterAction const None;

/// @brief Field RPC value: I32(1)
static ::GlobalNamespace::CosmeticCritterAction const RPC;

/// @brief Field ShadeHeartbeat value: I32(16)
static ::GlobalNamespace::CosmeticCritterAction const ShadeHeartbeat;

/// @brief Field Spawn value: I32(2)
static ::GlobalNamespace::CosmeticCritterAction const Spawn;

/// @brief Field SpawnLinked value: I32(8)
static ::GlobalNamespace::CosmeticCritterAction const SpawnLinked;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1667};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterAction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
