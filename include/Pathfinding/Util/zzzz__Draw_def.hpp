#pragma once
// IWYU pragma private; include "Pathfinding/Util/Draw.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Draw)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Util {
class Draw;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::Draw*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::Draw*, "Pathfinding.Util", "Draw");
// Dependencies System.Object, UnityEngine.Matrix4x4
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.Draw
class CORDL_TYPE Draw : public ::System::Object {
public:
// Declarations
/// @brief Field Debug, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Debug, put=setStaticF_Debug)) ::Pathfinding::Util::Draw*  Debug;

/// @brief Field Gizmos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Gizmos, put=setStaticF_Gizmos)) ::Pathfinding::Util::Draw*  Gizmos;

/// @brief Field gizmos, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_gizmos, put=__cordl_internal_set_gizmos)) bool  gizmos;

/// @brief Field matrix, offset 0x14, size 0x40 
 __declspec(property(get=__cordl_internal_get_matrix, put=__cordl_internal_set_matrix)) ::UnityEngine::Matrix4x4  matrix;

/// @brief Method Bezier, addr 0x5ed5d78, size 0x344, virtual false, abstract: false, final false
inline void Bezier(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Color  color) ;

/// @brief Method CircleXZ, addr 0x5ed5784, size 0x150, virtual false, abstract: false, final false
inline void CircleXZ(::UnityEngine::Vector3  center, float_t  radius, ::UnityEngine::Color  color, float_t  startAngle, float_t  endAngle) ;

/// @brief Method CrossXZ, addr 0x5ed5c44, size 0x134, virtual false, abstract: false, final false
inline void CrossXZ(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  size) ;

/// @brief Method Cylinder, addr 0x5ed58d4, size 0x370, virtual false, abstract: false, final false
inline void Cylinder(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, float_t  height, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method Line, addr 0x5ed562c, size 0x158, virtual false, abstract: false, final false
inline void Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Color  color) ;

static inline ::Pathfinding::Util::Draw* New_ctor() ;

/// @brief Method Polyline, addr 0x5ed54b8, size 0x174, virtual false, abstract: false, final false
inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color, bool  cycle) ;

/// @brief Method SetColor, addr 0x5ed541c, size 0x9c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

constexpr bool const& __cordl_internal_get_gizmos() const;

constexpr bool& __cordl_internal_get_gizmos() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_matrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_matrix() ;

constexpr void __cordl_internal_set_gizmos(bool  value) ;

constexpr void __cordl_internal_set_matrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method .ctor, addr 0x5ed60bc, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Pathfinding::Util::Draw* getStaticF_Debug() ;

static inline ::Pathfinding::Util::Draw* getStaticF_Gizmos() ;

static inline void setStaticF_Debug(::Pathfinding::Util::Draw*  value) ;

static inline void setStaticF_Gizmos(::Pathfinding::Util::Draw*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Draw() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Draw", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Draw(Draw && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Draw", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Draw(Draw const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21461};

/// @brief Field gizmos, offset: 0x10, size: 0x1, def value: None
 bool  ___gizmos;

/// @brief Field matrix, offset: 0x14, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___matrix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::Draw, ___gizmos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::Draw, ___matrix) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::Draw) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding::Util
