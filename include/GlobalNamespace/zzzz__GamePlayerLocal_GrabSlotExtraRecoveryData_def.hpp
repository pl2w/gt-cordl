#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayerLocal_GrabSlotExtraRecoveryData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GamePlayerLocal_GrabSlotExtraRecoveryData)
// Forward declare root types
namespace GlobalNamespace {
struct GamePlayerLocal_GrabSlotExtraRecoveryData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData, "", "GamePlayerLocal/GrabSlotExtraRecoveryData");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GamePlayerLocal/GrabSlotExtraRecoveryData
struct CORDL_TYPE GamePlayerLocal_GrabSlotExtraRecoveryData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GamePlayerLocal_GrabSlotExtraRecoveryData() ;

// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr GamePlayerLocal_GrabSlotExtraRecoveryData(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1789};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field pos, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  pos;

/// @brief Field rot, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData, pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData, rot) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
