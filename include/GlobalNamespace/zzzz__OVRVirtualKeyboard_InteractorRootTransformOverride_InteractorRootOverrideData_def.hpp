#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, "", "OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData");
// Dependencies OVRPose
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData
struct CORDL_TYPE InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData() ;

// Ctor Parameters [CppParam { name: "root", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "originalPose", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetPose", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: None, comment: None }]
constexpr InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData(::UnityW<::UnityEngine::Transform>  root, ::GlobalNamespace::OVRPose  originalPose, ::GlobalNamespace::OVRPose  targetPose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12527};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field root, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  root;

/// @brief Field originalPose, offset: 0x8, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPose  originalPose;

/// @brief Field targetPose, offset: 0x24, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPose  targetPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, root) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, originalPose) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, targetPose) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
