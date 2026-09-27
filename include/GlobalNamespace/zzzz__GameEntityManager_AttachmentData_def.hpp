#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager_AttachmentData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEntityManager_AttachmentData)
// Forward declare root types
namespace GlobalNamespace {
struct GameEntityManager_AttachmentData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameEntityManager_AttachmentData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager_AttachmentData, "", "GameEntityManager/AttachmentData");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameEntityManager/AttachmentData
struct CORDL_TYPE GameEntityManager_AttachmentData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager_AttachmentData() ;

// Ctor Parameters [CppParam { name: "entityNetId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachToEntityNetId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr GameEntityManager_AttachmentData(int32_t  entityNetId, int32_t  attachToEntityNetId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field entityNetId, offset: 0x0, size: 0x4, def value: None
 int32_t  entityNetId;

/// @brief Field attachToEntityNetId, offset: 0x4, size: 0x4, def value: None
 int32_t  attachToEntityNetId;

/// @brief Field localPosition, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  localPosition;

/// @brief Field localRotation, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Quaternion  localRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityManager_AttachmentData, entityNetId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_AttachmentData, attachToEntityNetId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_AttachmentData, localPosition) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_AttachmentData, localRotation) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityManager_AttachmentData) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
