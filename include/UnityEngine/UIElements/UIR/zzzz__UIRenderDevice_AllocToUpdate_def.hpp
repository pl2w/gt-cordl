#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice_AllocToUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRenderDevice_AllocToUpdate)
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements::UIR {
class Page;
}
// Forward declare root types
namespace GlobalNamespace {
struct UIRenderDevice_AllocToUpdate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UIRenderDevice_AllocToUpdate);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UIRenderDevice_AllocToUpdate, "UnityEngine.UIElements.UIR", "UIRenderDevice/AllocToUpdate");
// Dependencies UnityEngine.UIElements.UIR.Alloc
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate
struct CORDL_TYPE UIRenderDevice_AllocToUpdate {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UIRenderDevice_AllocToUpdate() ;

// Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "allocTime", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshHandle", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: None, comment: None }, CppParam { name: "permAllocVerts", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None, comment: None }, CppParam { name: "permAllocIndices", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None, comment: None }, CppParam { name: "permPage", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None, comment: None }, CppParam { name: "copyBackIndices", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr UIRenderDevice_AllocToUpdate(uint32_t  id, uint32_t  allocTime, ::UnityEngine::UIElements::UIR::MeshHandle*  meshHandle, ::UnityEngine::UIElements::UIR::Alloc  permAllocVerts, ::UnityEngine::UIElements::UIR::Alloc  permAllocIndices, ::UnityEngine::UIElements::UIR::Page*  permPage, bool  copyBackIndices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8602};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field id, offset: 0x0, size: 0x4, def value: None
 uint32_t  id;

/// @brief Field allocTime, offset: 0x4, size: 0x4, def value: None
 uint32_t  allocTime;

/// @brief Field meshHandle, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::MeshHandle*  meshHandle;

/// @brief Field permAllocVerts, offset: 0x10, size: 0x18, def value: None
 ::UnityEngine::UIElements::UIR::Alloc  permAllocVerts;

/// @brief Field permAllocIndices, offset: 0x28, size: 0x18, def value: None
 ::UnityEngine::UIElements::UIR::Alloc  permAllocIndices;

/// @brief Field permPage, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::Page*  permPage;

/// @brief Field copyBackIndices, offset: 0x48, size: 0x1, def value: None
 bool  copyBackIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIRenderDevice_AllocToUpdate, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_AllocToUpdate, allocTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_AllocToUpdate, meshHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_AllocToUpdate, permAllocVerts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_AllocToUpdate, permAllocIndices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_AllocToUpdate, permPage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_AllocToUpdate, copyBackIndices) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UIRenderDevice_AllocToUpdate) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
