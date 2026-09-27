#pragma once
// IWYU pragma private; include "Pathfinding/AstarColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AstarColor)
namespace GlobalNamespace {
class AstarPath;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Pathfinding {
class AstarColor;
}
// Write type traits
MARK_REF_T(::Pathfinding::AstarColor*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarColor*, "Pathfinding", "AstarColor");
// Dependencies System.Object, UnityEngine.Color
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarColor
class CORDL_TYPE AstarColor : public ::System::Object {
public:
// Declarations
/// @brief Field AreaColors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AreaColors, put=setStaticF_AreaColors)) ::ArrayW<::UnityEngine::Color>  AreaColors;

/// @brief Field BoundsHandles, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_BoundsHandles, put=setStaticF_BoundsHandles)) ::UnityEngine::Color  BoundsHandles;

/// @brief Field ConnectionHighLerp, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_ConnectionHighLerp, put=setStaticF_ConnectionHighLerp)) ::UnityEngine::Color  ConnectionHighLerp;

/// @brief Field ConnectionLowLerp, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_ConnectionLowLerp, put=setStaticF_ConnectionLowLerp)) ::UnityEngine::Color  ConnectionLowLerp;

/// @brief Field MeshEdgeColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MeshEdgeColor, put=setStaticF_MeshEdgeColor)) ::UnityEngine::Color  MeshEdgeColor;

/// @brief Field SolidColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SolidColor, put=setStaticF_SolidColor)) ::UnityEngine::Color  SolidColor;

/// @brief Field UnwalkableNode, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_UnwalkableNode, put=setStaticF_UnwalkableNode)) ::UnityEngine::Color  UnwalkableNode;

/// @brief Field _AreaColors, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__AreaColors, put=__cordl_internal_set__AreaColors)) ::ArrayW<::UnityEngine::Color>  _AreaColors;

/// @brief Field _BoundsHandles, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__BoundsHandles, put=__cordl_internal_set__BoundsHandles)) ::UnityEngine::Color  _BoundsHandles;

/// @brief Field _ConnectionHighLerp, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__ConnectionHighLerp, put=__cordl_internal_set__ConnectionHighLerp)) ::UnityEngine::Color  _ConnectionHighLerp;

/// @brief Field _ConnectionLowLerp, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__ConnectionLowLerp, put=__cordl_internal_set__ConnectionLowLerp)) ::UnityEngine::Color  _ConnectionLowLerp;

/// @brief Field _MeshEdgeColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__MeshEdgeColor, put=__cordl_internal_set__MeshEdgeColor)) ::UnityEngine::Color  _MeshEdgeColor;

/// @brief Field _SolidColor, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__SolidColor, put=__cordl_internal_set__SolidColor)) ::UnityEngine::Color  _SolidColor;

/// @brief Field _UnwalkableNode, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__UnwalkableNode, put=__cordl_internal_set__UnwalkableNode)) ::UnityEngine::Color  _UnwalkableNode;

/// @brief Method ColorHash, addr 0x5e47744, size 0x3b4, virtual false, abstract: false, final false
static inline int32_t ColorHash() ;

/// @brief Method GetAreaColor, addr 0x5e47af8, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetAreaColor(uint32_t  area) ;

/// @brief Method GetTagColor, addr 0x5e47c1c, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetTagColor(uint32_t  tag) ;

static inline ::Pathfinding::AstarColor* New_ctor() ;

/// @brief Method PushToStatic, addr 0x5e47cdc, size 0xf8, virtual false, abstract: false, final false
inline void PushToStatic(::GlobalNamespace::AstarPath*  astar) ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get__AreaColors() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get__AreaColors() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__BoundsHandles() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__BoundsHandles() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__ConnectionHighLerp() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__ConnectionHighLerp() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__ConnectionLowLerp() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__ConnectionLowLerp() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__MeshEdgeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__MeshEdgeColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__SolidColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__SolidColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__UnwalkableNode() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__UnwalkableNode() ;

constexpr void __cordl_internal_set__AreaColors(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set__BoundsHandles(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__ConnectionHighLerp(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__ConnectionLowLerp(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__MeshEdgeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__SolidColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__UnwalkableNode(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x5e47dd4, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Color> getStaticF_AreaColors() ;

static inline ::UnityEngine::Color getStaticF_BoundsHandles() ;

static inline ::UnityEngine::Color getStaticF_ConnectionHighLerp() ;

static inline ::UnityEngine::Color getStaticF_ConnectionLowLerp() ;

static inline ::UnityEngine::Color getStaticF_MeshEdgeColor() ;

static inline ::UnityEngine::Color getStaticF_SolidColor() ;

static inline ::UnityEngine::Color getStaticF_UnwalkableNode() ;

static inline void setStaticF_AreaColors(::ArrayW<::UnityEngine::Color>  value) ;

static inline void setStaticF_BoundsHandles(::UnityEngine::Color  value) ;

static inline void setStaticF_ConnectionHighLerp(::UnityEngine::Color  value) ;

static inline void setStaticF_ConnectionLowLerp(::UnityEngine::Color  value) ;

static inline void setStaticF_MeshEdgeColor(::UnityEngine::Color  value) ;

static inline void setStaticF_SolidColor(::UnityEngine::Color  value) ;

static inline void setStaticF_UnwalkableNode(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarColor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarColor(AstarColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarColor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarColor(AstarColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21189};

/// @brief Field _SolidColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ____SolidColor;

/// @brief Field _UnwalkableNode, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____UnwalkableNode;

/// @brief Field _BoundsHandles, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____BoundsHandles;

/// @brief Field _ConnectionLowLerp, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____ConnectionLowLerp;

/// @brief Field _ConnectionHighLerp, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____ConnectionHighLerp;

/// @brief Field _MeshEdgeColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____MeshEdgeColor;

/// @brief Field _AreaColors, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ____AreaColors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AstarColor, ____SolidColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarColor, ____UnwalkableNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarColor, ____BoundsHandles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarColor, ____ConnectionLowLerp) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarColor, ____ConnectionHighLerp) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarColor, ____MeshEdgeColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarColor, ____AreaColors) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AstarColor) == 0x78, "Size mismatch!");

} // namespace end def Pathfinding
