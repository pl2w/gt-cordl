#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_BoneAndBindpose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshCombinerSingle_BoneAndBindpose)
namespace System {
class Object;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_BoneAndBindpose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/BoneAndBindpose");
// Dependencies UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/BoneAndBindpose
struct CORDL_TYPE MB3_MeshCombinerSingle_BoneAndBindpose {
public:
// Declarations
/// @brief Method Equals, addr 0x9d9a8a8, size 0x148, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x9d9a9f0, size 0x78, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x9d93de0, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  t, ::UnityEngine::Matrix4x4  bp) ;

// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_BoneAndBindpose() ;

// Ctor Parameters [CppParam { name: "bone", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindPose", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }]
constexpr MB3_MeshCombinerSingle_BoneAndBindpose(::UnityW<::UnityEngine::Transform>  bone, ::UnityEngine::Matrix4x4  bindPose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22638};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field bone, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  bone;

/// @brief Field bindPose, offset: 0x8, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  bindPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose, bone) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose, bindPose) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
