#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Allocator2D_Alloc2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Allocator2D_Alloc2D)
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
class Allocator2D_Row;
}
// Forward declare root types
namespace GlobalNamespace {
struct Allocator2D_Alloc2D;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Allocator2D_Alloc2D);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Allocator2D_Alloc2D, "UnityEngine.UIElements.UIR", "Allocator2D/Alloc2D");
// Dependencies UnityEngine.RectInt, UnityEngine.UIElements.UIR.Alloc
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.Allocator2D/Alloc2D
struct CORDL_TYPE Allocator2D_Alloc2D {
public:
// Declarations
/// @brief Method .ctor, addr 0xb7cd3f0, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::UIR::Allocator2D_Row*  row, ::UnityEngine::UIElements::UIR::Alloc  alloc, int32_t  width, int32_t  height) ;

// Ctor Parameters []
// @brief default ctor
constexpr Allocator2D_Alloc2D() ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: None, comment: None }, CppParam { name: "row", ty: "::UnityEngine::UIElements::UIR::Allocator2D_Row*", modifiers: "", def_value: None, comment: None }, CppParam { name: "alloc", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None, comment: None }]
constexpr Allocator2D_Alloc2D(::UnityEngine::RectInt  rect, ::UnityEngine::UIElements::UIR::Allocator2D_Row*  row, ::UnityEngine::UIElements::UIR::Alloc  alloc) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8505};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field rect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::RectInt  rect;

/// @brief Field row, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::Allocator2D_Row*  row;

/// @brief Field alloc, offset: 0x18, size: 0x18, def value: None
 ::UnityEngine::UIElements::UIR::Alloc  alloc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Allocator2D_Alloc2D, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Allocator2D_Alloc2D, row) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Allocator2D_Alloc2D, alloc) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Allocator2D_Alloc2D) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
