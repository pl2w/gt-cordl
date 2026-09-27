#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_LuauPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bindings_LuauPlayer)
// Forward declare root types
namespace GlobalNamespace {
struct Bindings_LuauPlayer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Bindings_LuauPlayer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_LuauPlayer, "", "Bindings/LuauPlayer");
// [BurstCompile]
// Dependencies Unity.Collections.FixedString32Bytes, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/LuauPlayer
struct CORDL_TYPE Bindings_LuauPlayer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_LuauPlayer() ;

// Ctor Parameters [CppParam { name: "PlayerID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlayerName", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlayerMaterial", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsMasterClient", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "BodyPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScaleMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsPCVR", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "LeftHandPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "RightHandPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsEntityAuthority", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "HeadRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "LeftHandRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "RightHandRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsInVStump", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Bindings_LuauPlayer(int32_t  PlayerID, ::Unity::Collections::FixedString32Bytes  PlayerName, int32_t  PlayerMaterial, bool  IsMasterClient, ::UnityEngine::Vector3  BodyPosition, float_t  ScaleMultiplier, ::UnityEngine::Vector3  Velocity, bool  IsPCVR, ::UnityEngine::Vector3  LeftHandPosition, ::UnityEngine::Vector3  RightHandPosition, bool  IsEntityAuthority, ::UnityEngine::Quaternion  HeadRotation, ::UnityEngine::Quaternion  LeftHandRotation, ::UnityEngine::Quaternion  RightHandRotation, bool  IsInVStump) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3108};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x9c};

/// @brief Field PlayerID, offset: 0x0, size: 0x4, def value: None
 int32_t  PlayerID;

/// @brief Field PlayerName, offset: 0x4, size: 0x20, def value: None
 ::Unity::Collections::FixedString32Bytes  PlayerName;

/// @brief Field PlayerMaterial, offset: 0x24, size: 0x4, def value: None
 int32_t  PlayerMaterial;

/// @brief Field IsMasterClient, offset: 0x28, size: 0x1, def value: None
 bool  IsMasterClient;

/// @brief Field BodyPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  BodyPosition;

/// @brief Field ScaleMultiplier, offset: 0x38, size: 0x4, def value: None
 float_t  ScaleMultiplier;

/// @brief Field Velocity, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  Velocity;

/// @brief Field IsPCVR, offset: 0x48, size: 0x1, def value: None
 bool  IsPCVR;

/// @brief Field LeftHandPosition, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  LeftHandPosition;

/// @brief Field RightHandPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  RightHandPosition;

/// @brief Field IsEntityAuthority, offset: 0x64, size: 0x1, def value: None
 bool  IsEntityAuthority;

/// @brief Field HeadRotation, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Quaternion  HeadRotation;

/// @brief Field LeftHandRotation, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Quaternion  LeftHandRotation;

/// @brief Field RightHandRotation, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Quaternion  RightHandRotation;

/// @brief Field IsInVStump, offset: 0x98, size: 0x1, def value: None
 bool  IsInVStump;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, PlayerID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, PlayerName) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, PlayerMaterial) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, IsMasterClient) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, BodyPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, ScaleMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, Velocity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, IsPCVR) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, LeftHandPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, RightHandPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, IsEntityAuthority) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, HeadRotation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, LeftHandRotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, RightHandRotation) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauPlayer, IsInVStump) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Bindings_LuauPlayer) == 0x9c, "Size mismatch!");

} // namespace end def GlobalNamespace
