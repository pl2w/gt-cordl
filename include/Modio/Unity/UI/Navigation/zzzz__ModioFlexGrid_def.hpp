#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Navigation/ModioFlexGrid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioFlexGrid)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Modio::Unity::UI::Navigation {
class ModioFlexGrid;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Navigation::ModioFlexGrid*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Navigation::ModioFlexGrid*, "Modio.Unity.UI.Navigation", "ModioFlexGrid");
// Dependencies UnityEngine.UI.LayoutGroup
namespace Modio::Unity::UI::Navigation {
// Is value type: false
// CS Name: Modio.Unity.UI.Navigation.ModioFlexGrid
class CORDL_TYPE ModioFlexGrid : public ::UnityEngine::UI::LayoutGroup {
public:
// Declarations
/// @brief Field m_ChildControlHeight, offset 0x67, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ChildControlHeight, put=__cordl_internal_set_m_ChildControlHeight)) bool  m_ChildControlHeight;

/// @brief Field m_ChildControlWidth, offset 0x66, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ChildControlWidth, put=__cordl_internal_set_m_ChildControlWidth)) bool  m_ChildControlWidth;

/// @brief Field m_ChildForceExpandHeight, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ChildForceExpandHeight, put=__cordl_internal_set_m_ChildForceExpandHeight)) bool  m_ChildForceExpandHeight;

/// @brief Field m_ChildForceExpandWidth, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ChildForceExpandWidth, put=__cordl_internal_set_m_ChildForceExpandWidth)) bool  m_ChildForceExpandWidth;

/// @brief Field m_ChildScaleHeight, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ChildScaleHeight, put=__cordl_internal_set_m_ChildScaleHeight)) bool  m_ChildScaleHeight;

/// @brief Field m_ChildScaleWidth, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ChildScaleWidth, put=__cordl_internal_set_m_ChildScaleWidth)) bool  m_ChildScaleWidth;

/// @brief Field m_ReverseArrangement, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ReverseArrangement, put=__cordl_internal_set_m_ReverseArrangement)) bool  m_ReverseArrangement;

/// @brief Field m_Spacing, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Spacing, put=__cordl_internal_set_m_Spacing)) float_t  m_Spacing;

/// @brief Method CalcAlongAxis, addr 0x9fb0188, size 0x3e4, virtual false, abstract: false, final false
inline void CalcAlongAxis(int32_t  axis, bool  isVertical) ;

/// @brief Method CalculateLayoutInputHorizontal, addr 0x9fb0148, size 0x40, virtual true, abstract: false, final false
inline void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical, addr 0x9fb056c, size 0x38, virtual true, abstract: false, final false
inline void CalculateLayoutInputVertical() ;

/// @brief Method GetChildSizes, addr 0x9fb091c, size 0x10c, virtual false, abstract: false, final false
inline void GetChildSizes(::UnityEngine::RectTransform*  child, int32_t  axis, bool  controlSize, bool  childForceExpand, ::by_ref<float_t>  min, ::by_ref<float_t>  preferred, ::by_ref<float_t>  flexible) ;

static inline ::Modio::Unity::UI::Navigation::ModioFlexGrid* New_ctor() ;

/// @brief Method SetChildrenAlongAxis, addr 0x9fb05ac, size 0x368, virtual false, abstract: false, final false
inline void SetChildrenAlongAxis(int32_t  axis) ;

/// @brief Method SetLayoutHorizontal, addr 0x9fb05a4, size 0x8, virtual true, abstract: false, final false
inline void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical, addr 0x9fb0914, size 0x8, virtual true, abstract: false, final false
inline void SetLayoutVertical() ;

constexpr bool const& __cordl_internal_get_m_ChildControlHeight() const;

constexpr bool& __cordl_internal_get_m_ChildControlHeight() ;

constexpr bool const& __cordl_internal_get_m_ChildControlWidth() const;

constexpr bool& __cordl_internal_get_m_ChildControlWidth() ;

constexpr bool const& __cordl_internal_get_m_ChildForceExpandHeight() const;

constexpr bool& __cordl_internal_get_m_ChildForceExpandHeight() ;

constexpr bool const& __cordl_internal_get_m_ChildForceExpandWidth() const;

constexpr bool& __cordl_internal_get_m_ChildForceExpandWidth() ;

constexpr bool const& __cordl_internal_get_m_ChildScaleHeight() const;

constexpr bool& __cordl_internal_get_m_ChildScaleHeight() ;

constexpr bool const& __cordl_internal_get_m_ChildScaleWidth() const;

constexpr bool& __cordl_internal_get_m_ChildScaleWidth() ;

constexpr bool const& __cordl_internal_get_m_ReverseArrangement() const;

constexpr bool& __cordl_internal_get_m_ReverseArrangement() ;

constexpr float_t const& __cordl_internal_get_m_Spacing() const;

constexpr float_t& __cordl_internal_get_m_Spacing() ;

constexpr void __cordl_internal_set_m_ChildControlHeight(bool  value) ;

constexpr void __cordl_internal_set_m_ChildControlWidth(bool  value) ;

constexpr void __cordl_internal_set_m_ChildForceExpandHeight(bool  value) ;

constexpr void __cordl_internal_set_m_ChildForceExpandWidth(bool  value) ;

constexpr void __cordl_internal_set_m_ChildScaleHeight(bool  value) ;

constexpr void __cordl_internal_set_m_ChildScaleWidth(bool  value) ;

constexpr void __cordl_internal_set_m_ReverseArrangement(bool  value) ;

constexpr void __cordl_internal_set_m_Spacing(float_t  value) ;

/// @brief Method .ctor, addr 0x9fb0a28, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioFlexGrid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioFlexGrid", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioFlexGrid(ModioFlexGrid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioFlexGrid", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioFlexGrid(ModioFlexGrid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27112};

/// [SerializeField]
/// @brief Field m_Spacing, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_Spacing;

/// [SerializeField]
/// @brief Field m_ChildForceExpandWidth, offset: 0x64, size: 0x1, def value: None
 bool  ___m_ChildForceExpandWidth;

/// [SerializeField]
/// @brief Field m_ChildForceExpandHeight, offset: 0x65, size: 0x1, def value: None
 bool  ___m_ChildForceExpandHeight;

/// [SerializeField]
/// @brief Field m_ChildControlWidth, offset: 0x66, size: 0x1, def value: None
 bool  ___m_ChildControlWidth;

/// [SerializeField]
/// @brief Field m_ChildControlHeight, offset: 0x67, size: 0x1, def value: None
 bool  ___m_ChildControlHeight;

/// [SerializeField]
/// @brief Field m_ChildScaleWidth, offset: 0x68, size: 0x1, def value: None
 bool  ___m_ChildScaleWidth;

/// [SerializeField]
/// @brief Field m_ChildScaleHeight, offset: 0x69, size: 0x1, def value: None
 bool  ___m_ChildScaleHeight;

/// [SerializeField]
/// @brief Field m_ReverseArrangement, offset: 0x6a, size: 0x1, def value: None
 bool  ___m_ReverseArrangement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioFlexGrid, ___m_Spacing) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioFlexGrid, ___m_ChildForceExpandWidth) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioFlexGrid, ___m_ChildForceExpandHeight) == 0x65, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioFlexGrid, ___m_ChildControlWidth) == 0x66, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioFlexGrid, ___m_ChildControlHeight) == 0x67, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioFlexGrid, ___m_ChildScaleWidth) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioFlexGrid, ___m_ChildScaleHeight) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioFlexGrid, ___m_ReverseArrangement) == 0x6a, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Navigation::ModioFlexGrid) == 0x70, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Navigation
