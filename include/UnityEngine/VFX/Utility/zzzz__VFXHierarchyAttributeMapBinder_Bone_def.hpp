#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXHierarchyAttributeMapBinder_Bone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VFXHierarchyAttributeMapBinder_Bone)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct VFXHierarchyAttributeMapBinder_Bone;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone, "UnityEngine.VFX.Utility", "VFXHierarchyAttributeMapBinder/Bone");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXHierarchyAttributeMapBinder/Bone
struct CORDL_TYPE VFXHierarchyAttributeMapBinder_Bone {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VFXHierarchyAttributeMapBinder_Bone() ;

// Ctor Parameters [CppParam { name: "source", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "target", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr VFXHierarchyAttributeMapBinder_Bone(::UnityW<::UnityEngine::Transform>  source, float_t  sourceRadius, ::UnityW<::UnityEngine::Transform>  target, float_t  targetRadius) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30062};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field source, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  source;

/// @brief Field sourceRadius, offset: 0x8, size: 0x4, def value: None
 float_t  sourceRadius;

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetRadius, offset: 0x18, size: 0x4, def value: None
 float_t  targetRadius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone, sourceRadius) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone, target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone, targetRadius) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
