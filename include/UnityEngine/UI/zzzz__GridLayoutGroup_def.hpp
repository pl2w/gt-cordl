#pragma once
// IWYU pragma private; include "UnityEngine/UI/GridLayoutGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__GridLayoutGroup_Axis_def.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_Constraint_def.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_Corner_def.hpp"
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GridLayoutGroup)
namespace GlobalNamespace {
struct GridLayoutGroup_Axis;
}
namespace GlobalNamespace {
struct GridLayoutGroup_Constraint;
}
namespace GlobalNamespace {
struct GridLayoutGroup_Corner;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
class GridLayoutGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::GridLayoutGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::GridLayoutGroup*, "UnityEngine.UI", "GridLayoutGroup");
// [AddComponentMenu("Layout/Grid Layout Group", 152)]
// Dependencies UnityEngine.UI.GridLayoutGroup::Axis, UnityEngine.UI.GridLayoutGroup::Constraint, UnityEngine.UI.GridLayoutGroup::Corner, UnityEngine.UI.LayoutGroup, UnityEngine.Vector2
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.GridLayoutGroup
class CORDL_TYPE GridLayoutGroup : public ::UnityEngine::UI::LayoutGroup {
public:
// Declarations
using Axis = ::GlobalNamespace::GridLayoutGroup_Axis;

using Constraint = ::GlobalNamespace::GridLayoutGroup_Constraint;

using Corner = ::GlobalNamespace::GridLayoutGroup_Corner;

 __declspec(property(get=get_cellSize, put=set_cellSize)) ::UnityEngine::Vector2  cellSize;

 __declspec(property(get=get_constraint, put=set_constraint)) ::GlobalNamespace::GridLayoutGroup_Constraint  constraint;

 __declspec(property(get=get_constraintCount, put=set_constraintCount)) int32_t  constraintCount;

/// @brief Field m_CellSize, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CellSize, put=__cordl_internal_set_m_CellSize)) ::UnityEngine::Vector2  m_CellSize;

/// @brief Field m_Constraint, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Constraint, put=__cordl_internal_set_m_Constraint)) ::GlobalNamespace::GridLayoutGroup_Constraint  m_Constraint;

/// @brief Field m_ConstraintCount, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ConstraintCount, put=__cordl_internal_set_m_ConstraintCount)) int32_t  m_ConstraintCount;

/// @brief Field m_Spacing, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Spacing, put=__cordl_internal_set_m_Spacing)) ::UnityEngine::Vector2  m_Spacing;

/// @brief Field m_StartAxis, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StartAxis, put=__cordl_internal_set_m_StartAxis)) ::GlobalNamespace::GridLayoutGroup_Axis  m_StartAxis;

/// @brief Field m_StartCorner, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StartCorner, put=__cordl_internal_set_m_StartCorner)) ::GlobalNamespace::GridLayoutGroup_Corner  m_StartCorner;

 __declspec(property(get=get_spacing, put=set_spacing)) ::UnityEngine::Vector2  spacing;

 __declspec(property(get=get_startAxis, put=set_startAxis)) ::GlobalNamespace::GridLayoutGroup_Axis  startAxis;

 __declspec(property(get=get_startCorner, put=set_startCorner)) ::GlobalNamespace::GridLayoutGroup_Corner  startCorner;

/// @brief Method CalculateLayoutInputHorizontal, addr 0xb8f58a4, size 0x1c0, virtual true, abstract: false, final false
inline void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical, addr 0xb8f5e98, size 0x214, virtual true, abstract: false, final false
inline void CalculateLayoutInputVertical() ;

static inline ::UnityEngine::UI::GridLayoutGroup* New_ctor() ;

/// @brief Method SetCellsAlongAxis, addr 0xb8f6154, size 0x754, virtual false, abstract: false, final false
inline void SetCellsAlongAxis(int32_t  axis) ;

/// @brief Method SetLayoutHorizontal, addr 0xb8f614c, size 0x8, virtual true, abstract: false, final false
inline void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical, addr 0xb8f68a8, size 0x8, virtual true, abstract: false, final false
inline void SetLayoutVertical() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_CellSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_CellSize() ;

constexpr ::GlobalNamespace::GridLayoutGroup_Constraint const& __cordl_internal_get_m_Constraint() const;

constexpr ::GlobalNamespace::GridLayoutGroup_Constraint& __cordl_internal_get_m_Constraint() ;

constexpr int32_t const& __cordl_internal_get_m_ConstraintCount() const;

constexpr int32_t& __cordl_internal_get_m_ConstraintCount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Spacing() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Spacing() ;

constexpr ::GlobalNamespace::GridLayoutGroup_Axis const& __cordl_internal_get_m_StartAxis() const;

constexpr ::GlobalNamespace::GridLayoutGroup_Axis& __cordl_internal_get_m_StartAxis() ;

constexpr ::GlobalNamespace::GridLayoutGroup_Corner const& __cordl_internal_get_m_StartCorner() const;

constexpr ::GlobalNamespace::GridLayoutGroup_Corner& __cordl_internal_get_m_StartCorner() ;

constexpr void __cordl_internal_set_m_CellSize(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_Constraint(::GlobalNamespace::GridLayoutGroup_Constraint  value) ;

constexpr void __cordl_internal_set_m_ConstraintCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_Spacing(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_StartAxis(::GlobalNamespace::GridLayoutGroup_Axis  value) ;

constexpr void __cordl_internal_set_m_StartCorner(::GlobalNamespace::GridLayoutGroup_Corner  value) ;

/// @brief Method .ctor, addr 0xb8f56e0, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_cellSize, addr 0xb8f553c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_cellSize() ;

/// @brief Method get_constraint, addr 0xb8f5614, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GridLayoutGroup_Constraint get_constraint() ;

/// @brief Method get_constraintCount, addr 0xb8f5678, size 0x8, virtual false, abstract: false, final false
inline int32_t get_constraintCount() ;

/// @brief Method get_spacing, addr 0xb8f55a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_spacing() ;

/// @brief Method get_startAxis, addr 0xb8f54d8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GridLayoutGroup_Axis get_startAxis() ;

/// @brief Method get_startCorner, addr 0xb8f5474, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GridLayoutGroup_Corner get_startCorner() ;

/// @brief Method set_cellSize, addr 0xb8f5544, size 0x64, virtual false, abstract: false, final false
inline void set_cellSize(::UnityEngine::Vector2  value) ;

/// @brief Method set_constraint, addr 0xb8f561c, size 0x5c, virtual false, abstract: false, final false
inline void set_constraint(::GlobalNamespace::GridLayoutGroup_Constraint  value) ;

/// @brief Method set_constraintCount, addr 0xb8f5680, size 0x60, virtual false, abstract: false, final false
inline void set_constraintCount(int32_t  value) ;

/// @brief Method set_spacing, addr 0xb8f55b0, size 0x64, virtual false, abstract: false, final false
inline void set_spacing(::UnityEngine::Vector2  value) ;

/// @brief Method set_startAxis, addr 0xb8f54e0, size 0x5c, virtual false, abstract: false, final false
inline void set_startAxis(::GlobalNamespace::GridLayoutGroup_Axis  value) ;

/// @brief Method set_startCorner, addr 0xb8f547c, size 0x5c, virtual false, abstract: false, final false
inline void set_startCorner(::GlobalNamespace::GridLayoutGroup_Corner  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridLayoutGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridLayoutGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridLayoutGroup(GridLayoutGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridLayoutGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridLayoutGroup(GridLayoutGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26059};

/// [SerializeField]
/// @brief Field m_StartCorner, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::GridLayoutGroup_Corner  ___m_StartCorner;

/// [SerializeField]
/// @brief Field m_StartAxis, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::GridLayoutGroup_Axis  ___m_StartAxis;

/// [SerializeField]
/// @brief Field m_CellSize, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_CellSize;

/// [SerializeField]
/// @brief Field m_Spacing, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_Spacing;

/// [SerializeField]
/// @brief Field m_Constraint, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::GridLayoutGroup_Constraint  ___m_Constraint;

/// [SerializeField]
/// @brief Field m_ConstraintCount, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___m_ConstraintCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_StartCorner) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_StartAxis) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_CellSize) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_Spacing) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_Constraint) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_ConstraintCount) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::GridLayoutGroup) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::UI
