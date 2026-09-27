#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectPools_DelayedSpawnData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPools_DelayedSpawnData)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct ObjectPools_DelayedSpawnData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ObjectPools_DelayedSpawnData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectPools_DelayedSpawnData, "", "ObjectPools/DelayedSpawnData");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: ObjectPools/DelayedSpawnData
struct CORDL_TYPE ObjectPools_DelayedSpawnData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPools_DelayedSpawnData() ;

// Ctor Parameters [CppParam { name: "prefabHash", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "xform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr ObjectPools_DelayedSpawnData(int32_t  prefabHash, ::UnityW<::UnityEngine::Transform>  xform, ::UnityEngine::Vector3  pos) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field prefabHash, offset: 0x0, size: 0x4, def value: None
 int32_t  prefabHash;

/// @brief Field xform, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  xform;

/// @brief Field pos, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  pos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectPools_DelayedSpawnData, prefabHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectPools_DelayedSpawnData, xform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectPools_DelayedSpawnData, pos) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObjectPools_DelayedSpawnData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
