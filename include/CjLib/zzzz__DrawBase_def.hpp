#pragma once
// IWYU pragma private; include "CjLib/DrawBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "CjLib/zzzz__DebugUtil_Style_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DrawBase)
namespace GlobalNamespace {
struct DebugUtil_Style;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace CjLib {
class DrawBase;
}
// Write type traits
MARK_REF_T(::CjLib::DrawBase*);
DEFINE_IL2CPP_CLASS(::CjLib::DrawBase*, "CjLib", "DrawBase");
// Dependencies CjLib.DebugUtil::Style, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace CjLib {
// Is value type: false
// CS Name: CjLib.DrawBase
class CORDL_TYPE DrawBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field DepthTest, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_DepthTest, put=__cordl_internal_set_DepthTest)) bool  DepthTest;

/// @brief Field ShadededColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_ShadededColor, put=__cordl_internal_set_ShadededColor)) ::UnityEngine::Color  ShadededColor;

/// @brief Field Style, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_Style, put=__cordl_internal_set_Style)) ::GlobalNamespace::DebugUtil_Style  Style;

/// @brief Field Wireframe, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_Wireframe, put=__cordl_internal_set_Wireframe)) bool  Wireframe;

/// @brief Field WireframeColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_WireframeColor, put=__cordl_internal_set_WireframeColor)) ::UnityEngine::Color  WireframeColor;

/// @brief Method Draw, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest) ;

static inline ::CjLib::DrawBase* New_ctor() ;

/// @brief Method Update, addr 0x5de1ea8, size 0x68, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_DepthTest() const;

constexpr bool& __cordl_internal_get_DepthTest() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_ShadededColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_ShadededColor() ;

constexpr ::GlobalNamespace::DebugUtil_Style const& __cordl_internal_get_Style() const;

constexpr ::GlobalNamespace::DebugUtil_Style& __cordl_internal_get_Style() ;

constexpr bool const& __cordl_internal_get_Wireframe() const;

constexpr bool& __cordl_internal_get_Wireframe() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_WireframeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_WireframeColor() ;

constexpr void __cordl_internal_set_DepthTest(bool  value) ;

constexpr void __cordl_internal_set_ShadededColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_Style(::GlobalNamespace::DebugUtil_Style  value) ;

constexpr void __cordl_internal_set_Wireframe(bool  value) ;

constexpr void __cordl_internal_set_WireframeColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x5de1738, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawBase(DrawBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawBase(DrawBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5136};

/// @brief Field WireframeColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___WireframeColor;

/// @brief Field ShadededColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___ShadededColor;

/// @brief Field Wireframe, offset: 0x40, size: 0x1, def value: None
 bool  ___Wireframe;

/// @brief Field Style, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::DebugUtil_Style  ___Style;

/// @brief Field DepthTest, offset: 0x48, size: 0x1, def value: None
 bool  ___DepthTest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CjLib::DrawBase, ___WireframeColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawBase, ___ShadededColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawBase, ___Wireframe) == 0x40, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawBase, ___Style) == 0x44, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawBase, ___DepthTest) == 0x48, "Offset mismatch!");

static_assert(sizeof(::CjLib::DrawBase) == 0x50, "Size mismatch!");

} // namespace end def CjLib
