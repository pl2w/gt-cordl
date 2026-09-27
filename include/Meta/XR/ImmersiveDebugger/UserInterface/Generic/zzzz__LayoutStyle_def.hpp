#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/LayoutStyle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__LayoutStyle_Direction_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__LayoutStyle_Layout_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Style_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LayoutStyle)
namespace GlobalNamespace {
struct LayoutStyle_Direction;
}
namespace GlobalNamespace {
struct LayoutStyle_Layout;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class LayoutStyle;
}
// Write type traits
MARK_REF_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*);
DEFINE_IL2CPP_CLASS(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "LayoutStyle");
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle::Direction, Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle::Layout, Meta.XR.ImmersiveDebugger.UserInterface.Generic.Style, UnityEngine.TextAnchor, UnityEngine.Vector2
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle
class CORDL_TYPE LayoutStyle : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style {
public:
// Declarations
using Direction = ::GlobalNamespace::LayoutStyle_Direction;

using Layout = ::GlobalNamespace::LayoutStyle_Layout;

 __declspec(property(get=get_BottomMargin)) float_t  BottomMargin;

 __declspec(property(get=get_BottomRightMargin)) ::UnityEngine::Vector2  BottomRightMargin;

 __declspec(property(get=get_LeftMargin)) float_t  LeftMargin;

 __declspec(property(get=get_RightMargin)) float_t  RightMargin;

 __declspec(property(get=get_TopLeftMargin)) ::UnityEngine::Vector2  TopLeftMargin;

 __declspec(property(get=get_TopMargin)) float_t  TopMargin;

/// @brief Field adaptHeight, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_adaptHeight, put=__cordl_internal_set_adaptHeight)) bool  adaptHeight;

/// @brief Field anchor, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_anchor, put=__cordl_internal_set_anchor)) ::UnityEngine::TextAnchor  anchor;

/// @brief Field autoFitChildren, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoFitChildren, put=__cordl_internal_set_autoFitChildren)) bool  autoFitChildren;

/// @brief Field bottomRightMargin, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_bottomRightMargin, put=__cordl_internal_set_bottomRightMargin)) ::UnityEngine::Vector2  bottomRightMargin;

/// @brief Field flexDirection, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flexDirection, put=__cordl_internal_set_flexDirection)) ::GlobalNamespace::LayoutStyle_Direction  flexDirection;

/// @brief Field isOverlayCanvas, offset 0x4f, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOverlayCanvas, put=__cordl_internal_set_isOverlayCanvas)) bool  isOverlayCanvas;

/// @brief Field layout, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_layout, put=__cordl_internal_set_layout)) ::GlobalNamespace::LayoutStyle_Layout  layout;

/// @brief Field margin, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_margin, put=__cordl_internal_set_margin)) ::UnityEngine::Vector2  margin;

/// @brief Field masks, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_masks, put=__cordl_internal_set_masks)) bool  masks;

/// @brief Field pivot, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_pivot, put=__cordl_internal_set_pivot)) ::UnityEngine::TextAnchor  pivot;

/// @brief Field size, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::Vector2  size;

/// @brief Field spacing, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_spacing, put=__cordl_internal_set_spacing)) float_t  spacing;

/// @brief Field useBottomRightMargin, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useBottomRightMargin, put=__cordl_internal_set_useBottomRightMargin)) bool  useBottomRightMargin;

static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle* New_ctor() ;

/// @brief Method SetHeight, addr 0x9eeead4, size 0x28, virtual false, abstract: false, final false
inline bool SetHeight(float_t  height) ;

/// @brief Method SetIndent, addr 0x9eeeb24, size 0x40, virtual false, abstract: false, final false
inline bool SetIndent(float_t  value) ;

/// @brief Method SetWidth, addr 0x9eeeafc, size 0x28, virtual false, abstract: false, final false
inline bool SetWidth(float_t  width) ;

constexpr bool const& __cordl_internal_get_adaptHeight() const;

constexpr bool& __cordl_internal_get_adaptHeight() ;

constexpr ::UnityEngine::TextAnchor const& __cordl_internal_get_anchor() const;

constexpr ::UnityEngine::TextAnchor& __cordl_internal_get_anchor() ;

constexpr bool const& __cordl_internal_get_autoFitChildren() const;

constexpr bool& __cordl_internal_get_autoFitChildren() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_bottomRightMargin() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_bottomRightMargin() ;

constexpr ::GlobalNamespace::LayoutStyle_Direction const& __cordl_internal_get_flexDirection() const;

constexpr ::GlobalNamespace::LayoutStyle_Direction& __cordl_internal_get_flexDirection() ;

constexpr bool const& __cordl_internal_get_isOverlayCanvas() const;

constexpr bool& __cordl_internal_get_isOverlayCanvas() ;

constexpr ::GlobalNamespace::LayoutStyle_Layout const& __cordl_internal_get_layout() const;

constexpr ::GlobalNamespace::LayoutStyle_Layout& __cordl_internal_get_layout() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_margin() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_margin() ;

constexpr bool const& __cordl_internal_get_masks() const;

constexpr bool& __cordl_internal_get_masks() ;

constexpr ::UnityEngine::TextAnchor const& __cordl_internal_get_pivot() const;

constexpr ::UnityEngine::TextAnchor& __cordl_internal_get_pivot() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_size() ;

constexpr float_t const& __cordl_internal_get_spacing() const;

constexpr float_t& __cordl_internal_get_spacing() ;

constexpr bool const& __cordl_internal_get_useBottomRightMargin() const;

constexpr bool& __cordl_internal_get_useBottomRightMargin() ;

constexpr void __cordl_internal_set_adaptHeight(bool  value) ;

constexpr void __cordl_internal_set_anchor(::UnityEngine::TextAnchor  value) ;

constexpr void __cordl_internal_set_autoFitChildren(bool  value) ;

constexpr void __cordl_internal_set_bottomRightMargin(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_flexDirection(::GlobalNamespace::LayoutStyle_Direction  value) ;

constexpr void __cordl_internal_set_isOverlayCanvas(bool  value) ;

constexpr void __cordl_internal_set_layout(::GlobalNamespace::LayoutStyle_Layout  value) ;

constexpr void __cordl_internal_set_margin(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_masks(bool  value) ;

constexpr void __cordl_internal_set_pivot(::UnityEngine::TextAnchor  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_spacing(float_t  value) ;

constexpr void __cordl_internal_set_useBottomRightMargin(bool  value) ;

/// @brief Method .ctor, addr 0x9eeeb64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BottomMargin, addr 0x9eeeab0, size 0x1c, virtual false, abstract: false, final false
inline float_t get_BottomMargin() ;

/// @brief Method get_BottomRightMargin, addr 0x9ee939c, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_BottomRightMargin() ;

/// @brief Method get_LeftMargin, addr 0x9eeea84, size 0x8, virtual false, abstract: false, final false
inline float_t get_LeftMargin() ;

/// @brief Method get_RightMargin, addr 0x9eeea94, size 0x1c, virtual false, abstract: false, final false
inline float_t get_RightMargin() ;

/// @brief Method get_TopLeftMargin, addr 0x9eeeacc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_TopLeftMargin() ;

/// @brief Method get_TopMargin, addr 0x9eeea8c, size 0x8, virtual false, abstract: false, final false
inline float_t get_TopMargin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayoutStyle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayoutStyle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayoutStyle(LayoutStyle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayoutStyle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayoutStyle(LayoutStyle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27484};

/// @brief Field flexDirection, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::LayoutStyle_Direction  ___flexDirection;

/// @brief Field layout, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::LayoutStyle_Layout  ___layout;

/// @brief Field anchor, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::TextAnchor  ___anchor;

/// @brief Field pivot, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::TextAnchor  ___pivot;

/// @brief Field size, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___size;

/// @brief Field margin, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___margin;

/// @brief Field useBottomRightMargin, offset: 0x3c, size: 0x1, def value: None
 bool  ___useBottomRightMargin;

/// @brief Field bottomRightMargin, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___bottomRightMargin;

/// @brief Field spacing, offset: 0x48, size: 0x4, def value: None
 float_t  ___spacing;

/// @brief Field masks, offset: 0x4c, size: 0x1, def value: None
 bool  ___masks;

/// @brief Field adaptHeight, offset: 0x4d, size: 0x1, def value: None
 bool  ___adaptHeight;

/// @brief Field autoFitChildren, offset: 0x4e, size: 0x1, def value: None
 bool  ___autoFitChildren;

/// @brief Field isOverlayCanvas, offset: 0x4f, size: 0x1, def value: None
 bool  ___isOverlayCanvas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___flexDirection) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___layout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___anchor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___pivot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___size) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___margin) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___useBottomRightMargin) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___bottomRightMargin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___spacing) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___masks) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___adaptHeight) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___autoFitChildren) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___isOverlayCanvas) == 0x4f, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle) == 0x50, "Size mismatch!");

} // namespace end def Meta::XR::ImmersiveDebugger::UserInterface::Generic
