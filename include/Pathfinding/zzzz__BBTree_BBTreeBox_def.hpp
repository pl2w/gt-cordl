#pragma once
// IWYU pragma private; include "Pathfinding/BBTree_BBTreeBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BBTree_BBTreeBox)
namespace Pathfinding {
struct IntRect;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct BBTree_BBTreeBox;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BBTree_BBTreeBox);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BBTree_BBTreeBox, "Pathfinding", "BBTree/BBTreeBox");
// Dependencies Pathfinding.IntRect
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.BBTree/BBTreeBox
struct CORDL_TYPE BBTree_BBTreeBox {
public:
// Declarations
 __declspec(property(get=get_IsLeaf)) bool  IsLeaf;

/// @brief Method Contains, addr 0x5e95c78, size 0x30, virtual false, abstract: false, final false
inline bool Contains(::UnityEngine::Vector3  point) ;

/// @brief Method .ctor, addr 0x5e961f4, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  nodeOffset, ::Pathfinding::IntRect  rect) ;

/// @brief Method .ctor, addr 0x5e9482c, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::IntRect  rect) ;

/// @brief Method get_IsLeaf, addr 0x5e958a8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsLeaf() ;

// Ctor Parameters []
// @brief default ctor
constexpr BBTree_BBTreeBox() ;

// Ctor Parameters [CppParam { name: "rect", ty: "::Pathfinding::IntRect", modifiers: "", def_value: None, comment: None }, CppParam { name: "nodeOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "left", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "right", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BBTree_BBTreeBox(::Pathfinding::IntRect  rect, int32_t  nodeOffset, int32_t  left, int32_t  right) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21337};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field rect, offset: 0x0, size: 0x10, def value: None
 ::Pathfinding::IntRect  rect;

/// @brief Field nodeOffset, offset: 0x10, size: 0x4, def value: None
 int32_t  nodeOffset;

/// @brief Field left, offset: 0x14, size: 0x4, def value: None
 int32_t  left;

/// @brief Field right, offset: 0x18, size: 0x4, def value: None
 int32_t  right;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BBTree_BBTreeBox, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BBTree_BBTreeBox, nodeOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BBTree_BBTreeBox, left) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BBTree_BBTreeBox, right) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BBTree_BBTreeBox) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
