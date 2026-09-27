#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukRoomAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukRoomAnchor)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukRoomAnchor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukRoomAnchor");
// Dependencies System.Guid, UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukRoomAnchor
struct CORDL_TYPE MRUKNativeFuncs_MrukRoomAnchor {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukRoomAnchor() ;

// Ctor Parameters [CppParam { name: "space", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukRoomAnchor(uint64_t  space, ::System::Guid  uuid, ::UnityEngine::Pose  pose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25806};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field space, offset: 0x0, size: 0x8, def value: None
 uint64_t  space;

/// @brief Field uuid, offset: 0x8, size: 0x10, def value: None
 ::System::Guid  uuid;

/// @brief Field pose, offset: 0x18, size: 0x1c, def value: None
 ::UnityEngine::Pose  pose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor, space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor, uuid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor, pose) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
