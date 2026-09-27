#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukHit)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukHit;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukHit);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukHit, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukHit");
// Dependencies System.Guid, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukHit
struct CORDL_TYPE MRUKNativeFuncs_MrukHit {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukHit() ;

// Ctor Parameters [CppParam { name: "roomAnchorUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "sceneAnchorUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukHit(::System::Guid  roomAnchorUuid, ::System::Guid  sceneAnchorUuid, float_t  hitDistance, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitNormal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25808};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3c};

/// @brief Field roomAnchorUuid, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  roomAnchorUuid;

/// @brief Field sceneAnchorUuid, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  sceneAnchorUuid;

/// @brief Field hitDistance, offset: 0x20, size: 0x4, def value: None
 float_t  hitDistance;

/// @brief Field hitPosition, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  hitPosition;

/// @brief Field hitNormal, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  hitNormal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukHit, roomAnchorUuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukHit, sceneAnchorUuid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukHit, hitDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukHit, hitPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukHit, hitNormal) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukHit) == 0x3c, "Size mismatch!");

} // namespace end def GlobalNamespace
