#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager_RPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEntityManager_RPC)
// Forward declare root types
namespace GlobalNamespace {
struct GameEntityManager_RPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameEntityManager_RPC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager_RPC, "", "GameEntityManager/RPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameEntityManager/RPC
struct CORDL_TYPE GameEntityManager_RPC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameEntityManager_RPC_Unwrapped
enum struct __GameEntityManager_RPC_Unwrapped : int32_t {
__E_CreateItem = static_cast<int32_t>(0x0),
__E_CreateItems = static_cast<int32_t>(0x1),
__E_DestroyItem = static_cast<int32_t>(0x2),
__E_ApplyState = static_cast<int32_t>(0x3),
__E_GrabEntity = static_cast<int32_t>(0x4),
__E_ThrowEntity = static_cast<int32_t>(0x5),
__E_SendTableData = static_cast<int32_t>(0x6),
__E_HitEntity = static_cast<int32_t>(0x7),
__E_PlayerLeftZone = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameEntityManager_RPC_Unwrapped () const noexcept {
return static_cast<__GameEntityManager_RPC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager_RPC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameEntityManager_RPC(int32_t  value__) noexcept;

/// @brief Field ApplyState value: I32(3)
static ::GlobalNamespace::GameEntityManager_RPC const ApplyState;

/// @brief Field CreateItem value: I32(0)
static ::GlobalNamespace::GameEntityManager_RPC const CreateItem;

/// @brief Field CreateItems value: I32(1)
static ::GlobalNamespace::GameEntityManager_RPC const CreateItems;

/// @brief Field DestroyItem value: I32(2)
static ::GlobalNamespace::GameEntityManager_RPC const DestroyItem;

/// @brief Field GrabEntity value: I32(4)
static ::GlobalNamespace::GameEntityManager_RPC const GrabEntity;

/// @brief Field HitEntity value: I32(7)
static ::GlobalNamespace::GameEntityManager_RPC const HitEntity;

/// @brief Field PlayerLeftZone value: I32(8)
static ::GlobalNamespace::GameEntityManager_RPC const PlayerLeftZone;

/// @brief Field SendTableData value: I32(6)
static ::GlobalNamespace::GameEntityManager_RPC const SendTableData;

/// @brief Field ThrowEntity value: I32(5)
static ::GlobalNamespace::GameEntityManager_RPC const ThrowEntity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityManager_RPC, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityManager_RPC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
