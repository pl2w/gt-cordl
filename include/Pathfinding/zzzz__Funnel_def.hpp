#pragma once
// IWYU pragma private; include "Pathfinding/Funnel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Funnel)
namespace GlobalNamespace {
struct Funnel_FunnelPortals;
}
namespace GlobalNamespace {
struct Funnel_PathPart;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class Funnel;
}
// Write type traits
MARK_REF_T(::Pathfinding::Funnel*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Funnel*, "Pathfinding", "Funnel");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.Funnel
class CORDL_TYPE Funnel : public ::System::Object {
public:
// Declarations
using FunnelPortals = ::GlobalNamespace::Funnel_FunnelPortals;

using PathPart = ::GlobalNamespace::Funnel_PathPart;

/// @brief Method Calculate, addr 0x5eb7250, size 0x75c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Calculate(::GlobalNamespace::Funnel_FunnelPortals  funnel, bool  unwrap, bool  splitAtEveryPortal) ;

/// @brief Method Calculate, addr 0x5eb79ac, size 0x498, virtual false, abstract: false, final false
static inline void Calculate(::ArrayW<::UnityEngine::Vector2>  left, ::ArrayW<::UnityEngine::Vector2>  right, int32_t  numPortals, int32_t  startIndex, ::System::Collections::Generic::List_1<int32_t>*  funnelPath, int32_t  maxCorners, ::by_ref<bool>  lastCorner) ;

/// @brief Method ConstructFunnelPortals, addr 0x5eb60c8, size 0x630, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Funnel_FunnelPortals ConstructFunnelPortals(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, ::GlobalNamespace::Funnel_PathPart  part) ;

/// @brief Method FixFunnel, addr 0x5eb70d0, size 0x13c, virtual false, abstract: false, final false
static inline int32_t FixFunnel(::ArrayW<::UnityEngine::Vector2>  left, ::ArrayW<::UnityEngine::Vector2>  right, int32_t  numPortals) ;

/// @brief Method FromXZ, addr 0x5eb7214, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FromXZ(::UnityEngine::Vector2  p) ;

/// @brief Method LeftOrColinear, addr 0x5eb7238, size 0x18, virtual false, abstract: false, final false
static inline bool LeftOrColinear(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

static inline ::Pathfinding::Funnel* New_ctor() ;

/// @brief Method RightOrColinear, addr 0x5eb7220, size 0x18, virtual false, abstract: false, final false
static inline bool RightOrColinear(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

/// @brief Method ShrinkPortals, addr 0x5eb66f8, size 0x21c, virtual false, abstract: false, final false
static inline void ShrinkPortals(::GlobalNamespace::Funnel_FunnelPortals  portals, float_t  shrink) ;

/// @brief Method SplitIntoParts, addr 0x5eb5a2c, size 0x69c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::Funnel_PathPart>* SplitIntoParts(::Pathfinding::Path*  path) ;

/// @brief Method ToXZ, addr 0x5eb720c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ToXZ(::UnityEngine::Vector3  p) ;

/// @brief Method Unwrap, addr 0x5eb6b5c, size 0x574, virtual false, abstract: false, final false
static inline void Unwrap(::GlobalNamespace::Funnel_FunnelPortals  funnel, ::ArrayW<::UnityEngine::Vector2>  left, ::ArrayW<::UnityEngine::Vector2>  right) ;

/// @brief Method UnwrapHelper, addr 0x5eb6914, size 0x248, virtual false, abstract: false, final false
static inline bool UnwrapHelper(::UnityEngine::Vector3  portalStart, ::UnityEngine::Vector3  portalEnd, ::UnityEngine::Vector3  prevPoint, ::UnityEngine::Vector3  nextPoint, ::by_ref<::UnityEngine::Quaternion>  mRot, ::by_ref<::UnityEngine::Vector3>  mOffset) ;

/// @brief Method .ctor, addr 0x5eb7e44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Funnel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Funnel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Funnel(Funnel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Funnel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Funnel(Funnel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21414};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Funnel) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
