#pragma once
// IWYU pragma private; include "Pathfinding/StartEndModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__PathModifier_def.hpp"
#include "Pathfinding/zzzz__StartEndModifier_Exactness_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StartEndModifier)
namespace GlobalNamespace {
struct StartEndModifier_Exactness;
}
namespace Pathfinding {
class ABPath;
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
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class StartEndModifier;
}
// Write type traits
MARK_REF_T(::Pathfinding::StartEndModifier*);
DEFINE_IL2CPP_CLASS(::Pathfinding::StartEndModifier*, "Pathfinding", "StartEndModifier");
// Dependencies Pathfinding.PathModifier, Pathfinding.StartEndModifier::Exactness, UnityEngine.LayerMask
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.StartEndModifier
class CORDL_TYPE StartEndModifier : public ::Pathfinding::PathModifier {
public:
// Declarations
using Exactness = ::GlobalNamespace::StartEndModifier_Exactness;

 __declspec(property(get=get_Order)) int32_t  Order;

/// @brief Field addPoints, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_addPoints, put=__cordl_internal_set_addPoints)) bool  addPoints;

/// @brief Field adjustStartPoint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_adjustStartPoint, put=__cordl_internal_set_adjustStartPoint)) ::System::Func_1<::UnityEngine::Vector3>*  adjustStartPoint;

/// @brief Field connectionBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionBuffer, put=__cordl_internal_set_connectionBuffer)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  connectionBuffer;

/// @brief Field connectionBufferAddDelegate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionBufferAddDelegate, put=__cordl_internal_set_connectionBufferAddDelegate)) ::System::Action_1<::Pathfinding::GraphNode*>*  connectionBufferAddDelegate;

/// @brief Field exactEndPoint, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_exactEndPoint, put=__cordl_internal_set_exactEndPoint)) ::GlobalNamespace::StartEndModifier_Exactness  exactEndPoint;

/// @brief Field exactStartPoint, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_exactStartPoint, put=__cordl_internal_set_exactStartPoint)) ::GlobalNamespace::StartEndModifier_Exactness  exactStartPoint;

/// @brief Field mask, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityEngine::LayerMask  mask;

/// @brief Field useGraphRaycasting, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_useGraphRaycasting, put=__cordl_internal_set_useGraphRaycasting)) bool  useGraphRaycasting;

/// @brief Field useRaycasting, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRaycasting, put=__cordl_internal_set_useRaycasting)) bool  useRaycasting;

/// @brief Method Apply, addr 0x5ea5e0c, size 0x340, virtual true, abstract: false, final false
inline void Apply(::Pathfinding::Path*  _p) ;

/// @brief Method GetClampedPoint, addr 0x5ea6648, size 0x1d8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetClampedPoint(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Pathfinding::GraphNode*  hint) ;

static inline ::Pathfinding::StartEndModifier* New_ctor() ;

/// @brief Method Snap, addr 0x5ea614c, size 0x4fc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Snap(::Pathfinding::ABPath*  path, ::GlobalNamespace::StartEndModifier_Exactness  mode, bool  start, ::by_ref<bool>  forceAddPoint, ::by_ref<int32_t>  closestConnectionIndex) ;

constexpr bool const& __cordl_internal_get_addPoints() const;

constexpr bool& __cordl_internal_get_addPoints() ;

constexpr ::System::Func_1<::UnityEngine::Vector3>* const& __cordl_internal_get_adjustStartPoint() const;

constexpr ::System::Func_1<::UnityEngine::Vector3>*& __cordl_internal_get_adjustStartPoint() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_connectionBuffer() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_connectionBuffer() ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_connectionBufferAddDelegate() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_connectionBufferAddDelegate() ;

constexpr ::GlobalNamespace::StartEndModifier_Exactness const& __cordl_internal_get_exactEndPoint() const;

constexpr ::GlobalNamespace::StartEndModifier_Exactness& __cordl_internal_get_exactEndPoint() ;

constexpr ::GlobalNamespace::StartEndModifier_Exactness const& __cordl_internal_get_exactStartPoint() const;

constexpr ::GlobalNamespace::StartEndModifier_Exactness& __cordl_internal_get_exactStartPoint() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mask() ;

constexpr bool const& __cordl_internal_get_useGraphRaycasting() const;

constexpr bool& __cordl_internal_get_useGraphRaycasting() ;

constexpr bool const& __cordl_internal_get_useRaycasting() const;

constexpr bool& __cordl_internal_get_useRaycasting() ;

constexpr void __cordl_internal_set_addPoints(bool  value) ;

constexpr void __cordl_internal_set_adjustStartPoint(::System::Func_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_connectionBuffer(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_connectionBufferAddDelegate(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_exactEndPoint(::GlobalNamespace::StartEndModifier_Exactness  value) ;

constexpr void __cordl_internal_set_exactStartPoint(::GlobalNamespace::StartEndModifier_Exactness  value) ;

constexpr void __cordl_internal_set_mask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_useGraphRaycasting(bool  value) ;

constexpr void __cordl_internal_set_useRaycasting(bool  value) ;

/// @brief Method .ctor, addr 0x5ea6820, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Order, addr 0x5ea5e04, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Order() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StartEndModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StartEndModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StartEndModifier(StartEndModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartEndModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartEndModifier(StartEndModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21375};

/// @brief Field addPoints, offset: 0x18, size: 0x1, def value: None
 bool  ___addPoints;

/// @brief Field exactStartPoint, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::StartEndModifier_Exactness  ___exactStartPoint;

/// @brief Field exactEndPoint, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::StartEndModifier_Exactness  ___exactEndPoint;

/// @brief Field adjustStartPoint, offset: 0x28, size: 0x8, def value: None
 ::System::Func_1<::UnityEngine::Vector3>*  ___adjustStartPoint;

/// @brief Field useRaycasting, offset: 0x30, size: 0x1, def value: None
 bool  ___useRaycasting;

/// @brief Field mask, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___mask;

/// @brief Field useGraphRaycasting, offset: 0x38, size: 0x1, def value: None
 bool  ___useGraphRaycasting;

/// @brief Field connectionBuffer, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ___connectionBuffer;

/// @brief Field connectionBufferAddDelegate, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  ___connectionBufferAddDelegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::StartEndModifier, ___addPoints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::StartEndModifier, ___exactStartPoint) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::StartEndModifier, ___exactEndPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::StartEndModifier, ___adjustStartPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::StartEndModifier, ___useRaycasting) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::StartEndModifier, ___mask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::StartEndModifier, ___useGraphRaycasting) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::StartEndModifier, ___connectionBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::StartEndModifier, ___connectionBufferAddDelegate) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::StartEndModifier) == 0x50, "Size mismatch!");

} // namespace end def Pathfinding
