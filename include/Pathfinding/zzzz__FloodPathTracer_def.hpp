#pragma once
// IWYU pragma private; include "Pathfinding/FloodPathTracer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__ABPath_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FloodPathTracer)
namespace Pathfinding {
class FloodPath;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class OnPathDelegate;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class FloodPathTracer;
}
// Write type traits
MARK_REF_T(::Pathfinding::FloodPathTracer*);
DEFINE_IL2CPP_CLASS(::Pathfinding::FloodPathTracer*, "Pathfinding", "FloodPathTracer");
// Dependencies Pathfinding.ABPath
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.FloodPathTracer
class CORDL_TYPE FloodPathTracer : public ::Pathfinding::ABPath {
public:
// Declarations
/// @brief Field flood, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_flood, put=__cordl_internal_set_flood)) ::Pathfinding::FloodPath*  flood;

 __declspec(property(get=get_hasEndPoint)) bool  hasEndPoint;

/// @brief Method CalculateStep, addr 0x5eaf260, size 0x5c, virtual true, abstract: false, final false
inline void CalculateStep(int64_t  targetTick) ;

/// @brief Method Construct, addr 0x5eaee0c, size 0xbc, virtual false, abstract: false, final false
static inline ::Pathfinding::FloodPathTracer* Construct(::UnityEngine::Vector3  start, ::Pathfinding::FloodPath*  flood, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method Initialize, addr 0x5eaf004, size 0x8c, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::Pathfinding::FloodPathTracer* New_ctor() ;

/// @brief Method Reset, addr 0x5eaefe0, size 0x24, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Setup, addr 0x5eaeec8, size 0x118, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Vector3  start, ::Pathfinding::FloodPath*  flood, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method Trace, addr 0x5eaf090, size 0x1d0, virtual false, abstract: false, final false
inline void Trace(::Pathfinding::GraphNode*  from) ;

constexpr ::Pathfinding::FloodPath* const& __cordl_internal_get_flood() const;

constexpr ::Pathfinding::FloodPath*& __cordl_internal_get_flood() ;

constexpr void __cordl_internal_set_flood(::Pathfinding::FloodPath*  value) ;

/// @brief Method .ctor, addr 0x5eaedb4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_hasEndPoint, addr 0x5eaedac, size 0x8, virtual true, abstract: false, final false
inline bool get_hasEndPoint() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloodPathTracer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloodPathTracer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloodPathTracer(FloodPathTracer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloodPathTracer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloodPathTracer(FloodPathTracer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21395};

/// @brief Field flood, offset: 0x138, size: 0x8, def value: None
 ::Pathfinding::FloodPath*  ___flood;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::FloodPathTracer, ___flood) == 0x138, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::FloodPathTracer) == 0x140, "Size mismatch!");

} // namespace end def Pathfinding
