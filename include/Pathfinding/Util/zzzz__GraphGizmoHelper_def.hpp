#pragma once
// IWYU pragma private; include "Pathfinding/Util/GraphGizmoHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Util/zzzz__RetainedGizmos_Hasher_def.hpp"
#include "Pathfinding/zzzz__GraphDebugMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphGizmoHelper)
namespace GlobalNamespace {
class AstarPath;
}
namespace GlobalNamespace {
struct RetainedGizmos_Hasher;
}
namespace Pathfinding::Util {
class IAstarPooledObject;
}
namespace Pathfinding::Util {
class RetainedGizmos_Builder;
}
namespace Pathfinding::Util {
class RetainedGizmos;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class PathHandler;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Util {
class GraphGizmoHelper;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::GraphGizmoHelper*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::GraphGizmoHelper*, "Pathfinding.Util", "GraphGizmoHelper");
// Dependencies Pathfinding.GraphDebugMode, Pathfinding.Util.RetainedGizmos::Hasher, System.Object, UnityEngine.Color, UnityEngine.Vector3
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.GraphGizmoHelper
class CORDL_TYPE GraphGizmoHelper : public ::System::Object {
public:
// Declarations
/// @brief Field <builder>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__builder_k__BackingField, put=__cordl_internal_set__builder_k__BackingField)) ::Pathfinding::Util::RetainedGizmos_Builder*  _builder_k__BackingField;

/// @brief Field <hasher>k__BackingField, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get__hasher_k__BackingField, put=__cordl_internal_set__hasher_k__BackingField)) ::GlobalNamespace::RetainedGizmos_Hasher  _hasher_k__BackingField;

 __declspec(property(get=get_builder, put=set_builder)) ::Pathfinding::Util::RetainedGizmos_Builder*  builder;

/// @brief Field debugData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugData, put=__cordl_internal_set_debugData)) ::Pathfinding::PathHandler*  debugData;

/// @brief Field debugFloor, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugFloor, put=__cordl_internal_set_debugFloor)) float_t  debugFloor;

/// @brief Field debugMode, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugMode, put=__cordl_internal_set_debugMode)) ::Pathfinding::GraphDebugMode  debugMode;

/// @brief Field debugPathID, offset 0x38, size 0x2 
 __declspec(property(get=__cordl_internal_get_debugPathID, put=__cordl_internal_set_debugPathID)) uint16_t  debugPathID;

/// @brief Field debugRoof, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugRoof, put=__cordl_internal_set_debugRoof)) float_t  debugRoof;

/// @brief Field drawConnection, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_drawConnection, put=__cordl_internal_set_drawConnection)) ::System::Action_1<::Pathfinding::GraphNode*>*  drawConnection;

/// @brief Field drawConnectionColor, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_drawConnectionColor, put=__cordl_internal_set_drawConnectionColor)) ::UnityEngine::Color  drawConnectionColor;

/// @brief Field drawConnectionStart, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_drawConnectionStart, put=__cordl_internal_set_drawConnectionStart)) ::UnityEngine::Vector3  drawConnectionStart;

/// @brief Field gizmos, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gizmos, put=__cordl_internal_set_gizmos)) ::Pathfinding::Util::RetainedGizmos*  gizmos;

 __declspec(property(get=get_hasher, put=set_hasher)) ::GlobalNamespace::RetainedGizmos_Hasher  hasher;

/// @brief Field showSearchTree, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSearchTree, put=__cordl_internal_set_showSearchTree)) bool  showSearchTree;

/// @brief Convert operator to "::Pathfinding::Util::IAstarPooledObject"
constexpr operator  ::Pathfinding::Util::IAstarPooledObject*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method DrawConnection, addr 0x5ee0994, size 0xb0, virtual false, abstract: false, final false
inline void DrawConnection(::Pathfinding::GraphNode*  other) ;

/// @brief Method DrawConnections, addr 0x5ee02f8, size 0x17c, virtual false, abstract: false, final false
inline void DrawConnections(::Pathfinding::GraphNode*  node) ;

/// @brief Method DrawTriangles, addr 0x5ee0b14, size 0x17c, virtual false, abstract: false, final false
inline void DrawTriangles(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<::UnityEngine::Color>  colors, int32_t  numTriangles) ;

/// @brief Method DrawWireTriangle, addr 0x5ee0a44, size 0xd0, virtual false, abstract: false, final false
inline void DrawWireTriangle(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, ::UnityEngine::Color  color) ;

/// @brief Method DrawWireTriangles, addr 0x5ee0db4, size 0xf0, virtual false, abstract: false, final false
inline void DrawWireTriangles(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<::UnityEngine::Color>  colors, int32_t  numTriangles) ;

/// @brief Method InSearchTree, addr 0x5ee0474, size 0x3c, virtual false, abstract: false, final false
static inline bool InSearchTree(::Pathfinding::GraphNode*  node, ::Pathfinding::PathHandler*  handler, uint16_t  pathID) ;

/// @brief Method Init, addr 0x5ee0150, size 0x128, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::AstarPath*  active, ::GlobalNamespace::RetainedGizmos_Hasher  hasher, ::Pathfinding::Util::RetainedGizmos*  gizmos) ;

static inline ::Pathfinding::Util::GraphGizmoHelper* New_ctor() ;

/// @brief Method NodeColor, addr 0x5ee04b0, size 0x280, virtual false, abstract: false, final false
inline ::UnityEngine::Color NodeColor(::Pathfinding::GraphNode*  node) ;

/// @brief Method OnEnterPool, addr 0x5ee0278, size 0x80, virtual true, abstract: false, final true
inline void OnEnterPool() ;

/// @brief Method Submit, addr 0x5ee0ea4, size 0x44, virtual false, abstract: false, final false
inline void Submit() ;

/// @brief Method System.IDisposable.Dispose, addr 0x5ee0f1c, size 0x60, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::Pathfinding::Util::RetainedGizmos_Builder* const& __cordl_internal_get__builder_k__BackingField() const;

constexpr ::Pathfinding::Util::RetainedGizmos_Builder*& __cordl_internal_get__builder_k__BackingField() ;

constexpr ::GlobalNamespace::RetainedGizmos_Hasher const& __cordl_internal_get__hasher_k__BackingField() const;

constexpr ::GlobalNamespace::RetainedGizmos_Hasher& __cordl_internal_get__hasher_k__BackingField() ;

constexpr ::Pathfinding::PathHandler* const& __cordl_internal_get_debugData() const;

constexpr ::Pathfinding::PathHandler*& __cordl_internal_get_debugData() ;

constexpr float_t const& __cordl_internal_get_debugFloor() const;

constexpr float_t& __cordl_internal_get_debugFloor() ;

constexpr ::Pathfinding::GraphDebugMode const& __cordl_internal_get_debugMode() const;

constexpr ::Pathfinding::GraphDebugMode& __cordl_internal_get_debugMode() ;

constexpr uint16_t const& __cordl_internal_get_debugPathID() const;

constexpr uint16_t& __cordl_internal_get_debugPathID() ;

constexpr float_t const& __cordl_internal_get_debugRoof() const;

constexpr float_t& __cordl_internal_get_debugRoof() ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_drawConnection() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_drawConnection() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_drawConnectionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_drawConnectionColor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_drawConnectionStart() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_drawConnectionStart() ;

constexpr ::Pathfinding::Util::RetainedGizmos* const& __cordl_internal_get_gizmos() const;

constexpr ::Pathfinding::Util::RetainedGizmos*& __cordl_internal_get_gizmos() ;

constexpr bool const& __cordl_internal_get_showSearchTree() const;

constexpr bool& __cordl_internal_get_showSearchTree() ;

constexpr void __cordl_internal_set__builder_k__BackingField(::Pathfinding::Util::RetainedGizmos_Builder*  value) ;

constexpr void __cordl_internal_set__hasher_k__BackingField(::GlobalNamespace::RetainedGizmos_Hasher  value) ;

constexpr void __cordl_internal_set_debugData(::Pathfinding::PathHandler*  value) ;

constexpr void __cordl_internal_set_debugFloor(float_t  value) ;

constexpr void __cordl_internal_set_debugMode(::Pathfinding::GraphDebugMode  value) ;

constexpr void __cordl_internal_set_debugPathID(uint16_t  value) ;

constexpr void __cordl_internal_set_debugRoof(float_t  value) ;

constexpr void __cordl_internal_set_drawConnection(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_drawConnectionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_drawConnectionStart(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_gizmos(::Pathfinding::Util::RetainedGizmos*  value) ;

constexpr void __cordl_internal_set_showSearchTree(bool  value) ;

/// @brief Method .ctor, addr 0x5ee00c0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_builder, addr 0x5ee00b0, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Util::RetainedGizmos_Builder* get_builder() ;

/// [CompilerGenerated]
/// @brief Method get_hasher, addr 0x5ee0084, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::RetainedGizmos_Hasher get_hasher() ;

/// @brief Convert to "::Pathfinding::Util::IAstarPooledObject"
constexpr ::Pathfinding::Util::IAstarPooledObject* i___Pathfinding__Util__IAstarPooledObject() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_builder, addr 0x5ee00b8, size 0x8, virtual false, abstract: false, final false
inline void set_builder(::Pathfinding::Util::RetainedGizmos_Builder*  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasher, addr 0x5ee0098, size 0x18, virtual false, abstract: false, final false
inline void set_hasher(::GlobalNamespace::RetainedGizmos_Hasher  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphGizmoHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphGizmoHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphGizmoHelper(GraphGizmoHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphGizmoHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphGizmoHelper(GraphGizmoHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21487};

/// [CompilerGenerated]
/// @brief Field <hasher>k__BackingField, offset: 0x10, size: 0x18, def value: None
 ::GlobalNamespace::RetainedGizmos_Hasher  ____hasher_k__BackingField;

/// @brief Field gizmos, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::Util::RetainedGizmos*  ___gizmos;

/// @brief Field debugData, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::PathHandler*  ___debugData;

/// @brief Field debugPathID, offset: 0x38, size: 0x2, def value: None
 uint16_t  ___debugPathID;

/// @brief Field debugMode, offset: 0x3c, size: 0x4, def value: None
 ::Pathfinding::GraphDebugMode  ___debugMode;

/// @brief Field showSearchTree, offset: 0x40, size: 0x1, def value: None
 bool  ___showSearchTree;

/// @brief Field debugFloor, offset: 0x44, size: 0x4, def value: None
 float_t  ___debugFloor;

/// @brief Field debugRoof, offset: 0x48, size: 0x4, def value: None
 float_t  ___debugRoof;

/// [CompilerGenerated]
/// @brief Field <builder>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Pathfinding::Util::RetainedGizmos_Builder*  ____builder_k__BackingField;

/// @brief Field drawConnectionStart, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___drawConnectionStart;

/// @brief Field drawConnectionColor, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Color  ___drawConnectionColor;

/// @brief Field drawConnection, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  ___drawConnection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ____hasher_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ___gizmos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ___debugData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ___debugPathID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ___debugMode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ___showSearchTree) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ___debugFloor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ___debugRoof) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ____builder_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ___drawConnectionStart) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ___drawConnectionColor) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphGizmoHelper, ___drawConnection) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::GraphGizmoHelper) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding::Util
