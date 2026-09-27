#pragma once
// IWYU pragma private; include "Pathfinding/RVO/ObstacleVertex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/RVO/zzzz__RVOLayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObstacleVertex)
// Forward declare root types
namespace Pathfinding::RVO {
class ObstacleVertex;
}
// Write type traits
MARK_REF_T(::Pathfinding::RVO::ObstacleVertex*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::ObstacleVertex*, "Pathfinding.RVO", "ObstacleVertex");
// Dependencies Pathfinding.RVO.RVOLayer, System.Object, UnityEngine.Vector2, UnityEngine.Vector3
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.ObstacleVertex
class CORDL_TYPE ObstacleVertex : public ::System::Object {
public:
// Declarations
/// @brief Field dir, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dir, put=__cordl_internal_set_dir)) ::UnityEngine::Vector2  dir;

/// @brief Field height, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

/// @brief Field ignore, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignore, put=__cordl_internal_set_ignore)) bool  ignore;

/// @brief Field layer, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) ::Pathfinding::RVO::RVOLayer  layer;

/// @brief Field next, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Pathfinding::RVO::ObstacleVertex*  next;

/// @brief Field position, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field prev, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::Pathfinding::RVO::ObstacleVertex*  prev;

static inline ::Pathfinding::RVO::ObstacleVertex* New_ctor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_dir() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_dir() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr bool const& __cordl_internal_get_ignore() const;

constexpr bool& __cordl_internal_get_ignore() ;

constexpr ::Pathfinding::RVO::RVOLayer const& __cordl_internal_get_layer() const;

constexpr ::Pathfinding::RVO::RVOLayer& __cordl_internal_get_layer() ;

constexpr ::Pathfinding::RVO::ObstacleVertex* const& __cordl_internal_get_next() const;

constexpr ::Pathfinding::RVO::ObstacleVertex*& __cordl_internal_get_next() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr ::Pathfinding::RVO::ObstacleVertex* const& __cordl_internal_get_prev() const;

constexpr ::Pathfinding::RVO::ObstacleVertex*& __cordl_internal_get_prev() ;

constexpr void __cordl_internal_set_dir(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_ignore(bool  value) ;

constexpr void __cordl_internal_set_layer(::Pathfinding::RVO::RVOLayer  value) ;

constexpr void __cordl_internal_set_next(::Pathfinding::RVO::ObstacleVertex*  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_prev(::Pathfinding::RVO::ObstacleVertex*  value) ;

/// @brief Method .ctor, addr 0x5ee3234, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObstacleVertex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObstacleVertex", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleVertex(ObstacleVertex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleVertex", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleVertex(ObstacleVertex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21492};

/// @brief Field ignore, offset: 0x10, size: 0x1, def value: None
 bool  ___ignore;

/// @brief Field position, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

/// @brief Field dir, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___dir;

/// @brief Field height, offset: 0x28, size: 0x4, def value: None
 float_t  ___height;

/// @brief Field layer, offset: 0x2c, size: 0x4, def value: None
 ::Pathfinding::RVO::RVOLayer  ___layer;

/// @brief Field next, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::RVO::ObstacleVertex*  ___next;

/// @brief Field prev, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::RVO::ObstacleVertex*  ___prev;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::ObstacleVertex, ___ignore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::ObstacleVertex, ___position) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::ObstacleVertex, ___dir) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::ObstacleVertex, ___height) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::ObstacleVertex, ___layer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::ObstacleVertex, ___next) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::ObstacleVertex, ___prev) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::ObstacleVertex) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::RVO
