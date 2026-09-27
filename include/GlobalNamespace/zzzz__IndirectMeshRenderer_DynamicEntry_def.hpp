#pragma once
// IWYU pragma private; include "GlobalNamespace/IndirectMeshRenderer_DynamicEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectMeshRenderer_DynamicEntry)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct IndirectMeshRenderer_DynamicEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IndirectMeshRenderer_DynamicEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IndirectMeshRenderer_DynamicEntry, "", "IndirectMeshRenderer/DynamicEntry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: IndirectMeshRenderer/DynamicEntry
struct CORDL_TYPE IndirectMeshRenderer_DynamicEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IndirectMeshRenderer_DynamicEntry() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "matrixIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr IndirectMeshRenderer_DynamicEntry(::UnityW<::UnityEngine::Transform>  transform, int32_t  matrixIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{895};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field transform, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Field matrixIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  matrixIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DynamicEntry, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DynamicEntry, matrixIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IndirectMeshRenderer_DynamicEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
