#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_LuauRoomState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Bindings_LuauRoomState)
// Forward declare root types
namespace GlobalNamespace {
struct Bindings_LuauRoomState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Bindings_LuauRoomState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_LuauRoomState, "", "Bindings/LuauRoomState");
// [BurstCompile]
// Dependencies Unity.Collections.FixedString32Bytes
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/LuauRoomState
struct CORDL_TYPE Bindings_LuauRoomState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_LuauRoomState() ;

// Ctor Parameters [CppParam { name: "IsQuest", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "FPS", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsPrivate", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "RoomCode", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: None, comment: None }]
constexpr Bindings_LuauRoomState(bool  IsQuest, float_t  FPS, bool  IsPrivate, ::Unity::Collections::FixedString32Bytes  RoomCode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3172};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field IsQuest, offset: 0x0, size: 0x1, def value: None
 bool  IsQuest;

/// @brief Field FPS, offset: 0x4, size: 0x4, def value: None
 float_t  FPS;

/// @brief Field IsPrivate, offset: 0x8, size: 0x1, def value: None
 bool  IsPrivate;

/// @brief Field RoomCode, offset: 0xa, size: 0x20, def value: None
 ::Unity::Collections::FixedString32Bytes  RoomCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Bindings_LuauRoomState, IsQuest) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauRoomState, FPS) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauRoomState, IsPrivate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauRoomState, RoomCode) == 0xa, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Bindings_LuauRoomState) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
