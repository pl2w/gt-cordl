#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice_AllocToFree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UIRenderDevice_AllocToFree)
namespace UnityEngine::UIElements::UIR {
class Page;
}
// Forward declare root types
namespace GlobalNamespace {
struct UIRenderDevice_AllocToFree;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UIRenderDevice_AllocToFree);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UIRenderDevice_AllocToFree, "UnityEngine.UIElements.UIR", "UIRenderDevice/AllocToFree");
// Dependencies UnityEngine.UIElements.UIR.Alloc
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree
struct CORDL_TYPE UIRenderDevice_AllocToFree {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UIRenderDevice_AllocToFree() ;

// Ctor Parameters [CppParam { name: "alloc", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None, comment: None }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertices", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr UIRenderDevice_AllocToFree(::UnityEngine::UIElements::UIR::Alloc  alloc, ::UnityEngine::UIElements::UIR::Page*  page, bool  vertices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8603};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field alloc, offset: 0x0, size: 0x18, def value: None
 ::UnityEngine::UIElements::UIR::Alloc  alloc;

/// @brief Field page, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::Page*  page;

/// @brief Field vertices, offset: 0x20, size: 0x1, def value: None
 bool  vertices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIRenderDevice_AllocToFree, alloc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_AllocToFree, page) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_AllocToFree, vertices) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UIRenderDevice_AllocToFree) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
