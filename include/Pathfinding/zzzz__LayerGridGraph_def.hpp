#pragma once
// IWYU pragma private; include "Pathfinding/LayerGridGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GridGraph_def.hpp"
#include "Pathfinding/zzzz__LayerGridGraph_HeightSample_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LayerGridGraph)
namespace GlobalNamespace {
struct LayerGridGraph_HeightSample;
}
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding {
class GraphCollision;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GraphUpdateObject;
}
namespace Pathfinding {
class GraphUpdateShape;
}
namespace Pathfinding {
class GridNodeBase;
}
namespace Pathfinding {
class IUpdatableGraph;
}
namespace Pathfinding {
struct IntRect;
}
namespace Pathfinding {
class LayerGridGraph_HitComparer;
}
namespace Pathfinding {
class LayerGridGraph__ScanInternal_d__19;
}
namespace Pathfinding {
class LevelGridNode;
}
namespace Pathfinding {
class NNConstraint;
}
namespace Pathfinding {
struct NNInfoInternal;
}
namespace Pathfinding {
struct Progress;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class LayerGridGraph;
}
namespace Pathfinding {
class LayerGridGraph_HitComparer;
}
namespace Pathfinding {
class LayerGridGraph__ScanInternal_d__19;
}
// Write type traits
MARK_REF_T(::Pathfinding::LayerGridGraph*);
MARK_REF_T(::Pathfinding::LayerGridGraph_HitComparer*);
MARK_REF_T(::Pathfinding::LayerGridGraph__ScanInternal_d__19*);
DEFINE_IL2CPP_CLASS(::Pathfinding::LayerGridGraph*, "Pathfinding", "LayerGridGraph");
DEFINE_IL2CPP_CLASS(::Pathfinding::LayerGridGraph_HitComparer*, "Pathfinding", "LayerGridGraph/HitComparer");
DEFINE_IL2CPP_CLASS(::Pathfinding::LayerGridGraph__ScanInternal_d__19*, "Pathfinding", "LayerGridGraph/<ScanInternal>d__19");
// [Preserve]
// Dependencies Pathfinding.GridGraph, Pathfinding.LayerGridGraph::HeightSample
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.LayerGridGraph
class CORDL_TYPE LayerGridGraph : public ::Pathfinding::GridGraph {
public:
// Declarations
using HeightSample = ::GlobalNamespace::LayerGridGraph_HeightSample;

using HitComparer = ::Pathfinding::LayerGridGraph_HitComparer;

using _ScanInternal_d__19 = ::Pathfinding::LayerGridGraph__ScanInternal_d__19;

 __declspec(property(get=get_LayerCount)) int32_t  LayerCount;

/// @brief Field characterHeight, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_characterHeight, put=__cordl_internal_set_characterHeight)) float_t  characterHeight;

/// @brief Field comparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_comparer, put=setStaticF_comparer)) ::Pathfinding::LayerGridGraph_HitComparer*  comparer;

/// @brief Field heightSampleBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_heightSampleBuffer, put=setStaticF_heightSampleBuffer)) ::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample>  heightSampleBuffer;

/// @brief Field lastScannedDepth, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastScannedDepth, put=__cordl_internal_set_lastScannedDepth)) int32_t  lastScannedDepth;

/// @brief Field lastScannedWidth, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastScannedWidth, put=__cordl_internal_set_lastScannedWidth)) int32_t  lastScannedWidth;

/// @brief Field layerCount, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerCount, put=__cordl_internal_set_layerCount)) int32_t  layerCount;

/// @brief Field mergeSpanRange, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_mergeSpanRange, put=__cordl_internal_set_mergeSpanRange)) float_t  mergeSpanRange;

 __declspec(property(get=get_uniformWidthDepthGrid)) bool  uniformWidthDepthGrid;

/// @brief Convert operator to "::Pathfinding::IUpdatableGraph"
constexpr operator  ::Pathfinding::IUpdatableGraph*() noexcept;

/// @brief Method AddLayers, addr 0x5e7a13c, size 0x214, virtual false, abstract: false, final false
inline void AddLayers(int32_t  count) ;

/// @brief Method CalculateConnections, addr 0x5e7a4a0, size 0xa4, virtual true, abstract: false, final false
inline void CalculateConnections(::Pathfinding::GridNodeBase*  baseNode) ;

/// @brief Method CalculateConnections, addr 0x5e7a980, size 0x5c, virtual true, abstract: false, final false
inline void CalculateConnections(int32_t  x, int32_t  z) ;

/// @brief Method CalculateConnections, addr 0x5e7a54c, size 0x430, virtual false, abstract: false, final false
inline void CalculateConnections(int32_t  x, int32_t  z, int32_t  layerIndex) ;

/// [Obsolete("Use CalculateConnections(x,z,layerIndex) or CalculateConnections(node) instead")]
/// @brief Method CalculateConnections, addr 0x5e7a97c, size 0x4, virtual false, abstract: false, final false
inline void CalculateConnections(int32_t  x, int32_t  z, int32_t  layerIndex, ::Pathfinding::LevelGridNode*  node) ;

/// [Obsolete("Use node.HasConnectionInDirection instead")]
/// @brief Method CheckConnection, addr 0x5e7aea0, size 0x1c, virtual false, abstract: false, final false
static inline bool CheckConnection(::Pathfinding::LevelGridNode*  node, int32_t  dir) ;

/// @brief Method CountNodes, addr 0x5e78214, size 0x40, virtual true, abstract: false, final false
inline int32_t CountNodes() ;

/// @brief Method DeserializeExtraInfo, addr 0x5e7afdc, size 0x1d0, virtual true, abstract: false, final false
inline void DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method ErosionAnyFalseConnections, addr 0x5e7a360, size 0x140, virtual true, abstract: false, final false
inline bool ErosionAnyFalseConnections(::Pathfinding::GraphNode*  baseNode) ;

/// @brief Method GetNearest, addr 0x5e7ab00, size 0x1b0, virtual true, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint) ;

/// @brief Method GetNearestFromGraphSpace, addr 0x5e7ade4, size 0xbc, virtual true, abstract: false, final false
inline ::Pathfinding::GridNodeBase* GetNearestFromGraphSpace(::UnityEngine::Vector3  positionGraphSpace) ;

/// @brief Method GetNearestNode, addr 0x5e7acb0, size 0x134, virtual false, abstract: false, final false
inline ::Pathfinding::GridNodeBase* GetNearestNode(::UnityEngine::Vector3  position, int32_t  x, int32_t  z, ::Pathfinding::NNConstraint*  constraint) ;

/// @brief Method GetNode, addr 0x5e78a78, size 0x5c, virtual true, abstract: false, final false
inline ::Pathfinding::GridNodeBase* GetNode(int32_t  x, int32_t  z) ;

/// @brief Method GetNode, addr 0x5e78ad4, size 0x78, virtual false, abstract: false, final false
inline ::Pathfinding::GridNodeBase* GetNode(int32_t  x, int32_t  z, int32_t  layer) ;

/// @brief Method GetNodes, addr 0x5e78254, size 0x70, virtual true, abstract: false, final false
inline void GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// @brief Method GetNodesInRegion, addr 0x5e782c4, size 0x2e4, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* GetNodesInRegion(::UnityEngine::Bounds  b, ::Pathfinding::GraphUpdateShape*  shape) ;

/// @brief Method GetNodesInRegion, addr 0x5e785a8, size 0x220, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* GetNodesInRegion(::Pathfinding::IntRect  rect) ;

/// @brief Method GetNodesInRegion, addr 0x5e787c8, size 0x2b0, virtual true, abstract: false, final false
inline int32_t GetNodesInRegion(::Pathfinding::IntRect  rect, ::ArrayW<::Pathfinding::GridNodeBase*>  buffer) ;

static inline ::Pathfinding::LayerGridGraph* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5e77f50, size 0x24, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateArea, addr 0x5e78b4c, size 0x854, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateArea(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method PostDeserialization, addr 0x5e7b1ac, size 0x21c, virtual true, abstract: false, final false
inline void PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method RecalculateCell, addr 0x5e79828, size 0x914, virtual true, abstract: false, final false
inline void RecalculateCell(int32_t  x, int32_t  z, bool  resetPenalties, bool  resetTags) ;

/// @brief Method RemoveGridGraphFromStatic, addr 0x5e77f74, size 0x80, virtual false, abstract: false, final false
inline void RemoveGridGraphFromStatic() ;

/// @brief Method SampleHeights, addr 0x5e79454, size 0x3d4, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample> SampleHeights(::Pathfinding::GraphCollision*  collision, float_t  mergeSpanRange, ::UnityEngine::Vector3  position, ::by_ref<int32_t>  numHits) ;

/// [IteratorStateMachine(typeof(Pathfinding.LayerGridGraph::<ScanInternal>d__19))]
/// @brief Method ScanInternal, addr 0x5e793a0, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanInternal() ;

/// @brief Method SerializeExtraInfo, addr 0x5e7aebc, size 0x120, virtual true, abstract: false, final false
inline void SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

constexpr float_t const& __cordl_internal_get_characterHeight() const;

constexpr float_t& __cordl_internal_get_characterHeight() ;

constexpr int32_t const& __cordl_internal_get_lastScannedDepth() const;

constexpr int32_t& __cordl_internal_get_lastScannedDepth() ;

constexpr int32_t const& __cordl_internal_get_lastScannedWidth() const;

constexpr int32_t& __cordl_internal_get_lastScannedWidth() ;

constexpr int32_t const& __cordl_internal_get_layerCount() const;

constexpr int32_t& __cordl_internal_get_layerCount() ;

constexpr float_t const& __cordl_internal_get_mergeSpanRange() const;

constexpr float_t& __cordl_internal_get_mergeSpanRange() ;

constexpr void __cordl_internal_set_characterHeight(float_t  value) ;

constexpr void __cordl_internal_set_lastScannedDepth(int32_t  value) ;

constexpr void __cordl_internal_set_lastScannedWidth(int32_t  value) ;

constexpr void __cordl_internal_set_layerCount(int32_t  value) ;

constexpr void __cordl_internal_set_mergeSpanRange(float_t  value) ;

/// @brief Method .ctor, addr 0x5e7b3c8, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Pathfinding::LayerGridGraph_HitComparer* getStaticF_comparer() ;

static inline ::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample> getStaticF_heightSampleBuffer() ;

/// @brief Method get_LayerCount, addr 0x5e7820c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_LayerCount() ;

/// @brief Method get_uniformWidthDepthGrid, addr 0x5e78204, size 0x8, virtual true, abstract: false, final false
inline bool get_uniformWidthDepthGrid() ;

/// @brief Convert to "::Pathfinding::IUpdatableGraph"
constexpr ::Pathfinding::IUpdatableGraph* i___Pathfinding__IUpdatableGraph() noexcept;

static inline void setStaticF_comparer(::Pathfinding::LayerGridGraph_HitComparer*  value) ;

static inline void setStaticF_heightSampleBuffer(::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerGridGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerGridGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerGridGraph(LayerGridGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerGridGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerGridGraph(LayerGridGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21311};

/// [JsonMember]
/// @brief Field layerCount, offset: 0x190, size: 0x4, def value: None
 int32_t  ___layerCount;

/// [JsonMember]
/// @brief Field mergeSpanRange, offset: 0x194, size: 0x4, def value: None
 float_t  ___mergeSpanRange;

/// [JsonMember]
/// @brief Field characterHeight, offset: 0x198, size: 0x4, def value: None
 float_t  ___characterHeight;

/// @brief Field lastScannedWidth, offset: 0x19c, size: 0x4, def value: None
 int32_t  ___lastScannedWidth;

/// @brief Field lastScannedDepth, offset: 0x1a0, size: 0x4, def value: None
 int32_t  ___lastScannedDepth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::LayerGridGraph, ___layerCount) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::LayerGridGraph, ___mergeSpanRange) == 0x194, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::LayerGridGraph, ___characterHeight) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::LayerGridGraph, ___lastScannedWidth) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::LayerGridGraph, ___lastScannedDepth) == 0x1a0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::LayerGridGraph) == 0x1a8, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies Pathfinding.Progress, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.LayerGridGraph/<ScanInternal>d__19
class CORDL_TYPE LayerGridGraph__ScanInternal_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)) ::Pathfinding::Progress  System_Collections_Generic_IEnumerator_Pathfinding_Progress__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Pathfinding::Progress  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::LayerGridGraph*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <progressCounter>5__2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__progressCounter_5__2, put=__cordl_internal_set__progressCounter_5__2)) int32_t  _progressCounter_5__2;

/// @brief Field <z>5__3, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__z_5__3, put=__cordl_internal_set__z_5__3)) int32_t  _z_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e7b53c, size 0x528, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::LayerGridGraph__ScanInternal_d__19* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator, addr 0x5e7bb14, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current, addr 0x5e7ba74, size 0xc, virtual true, abstract: false, final true
inline ::Pathfinding::Progress System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e7bbb8, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e7ba80, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e7bab8, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e7b538, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Pathfinding::Progress const& __cordl_internal_get___2__current() const;

constexpr ::Pathfinding::Progress& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::LayerGridGraph* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::LayerGridGraph*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__progressCounter_5__2() const;

constexpr int32_t& __cordl_internal_get__progressCounter_5__2() ;

constexpr int32_t const& __cordl_internal_get__z_5__3() const;

constexpr int32_t& __cordl_internal_get__z_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Pathfinding::Progress  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::LayerGridGraph*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__progressCounter_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__z_5__3(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e79420, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerGridGraph__ScanInternal_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerGridGraph__ScanInternal_d__19", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerGridGraph__ScanInternal_d__19(LayerGridGraph__ScanInternal_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerGridGraph__ScanInternal_d__19", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerGridGraph__ScanInternal_d__19(LayerGridGraph__ScanInternal_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21310};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::Pathfinding::Progress  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::LayerGridGraph*  _____4__this;

/// @brief Field <progressCounter>5__2, offset: 0x38, size: 0x4, def value: None
 int32_t  ____progressCounter_5__2;

/// @brief Field <z>5__3, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____z_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::LayerGridGraph__ScanInternal_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::LayerGridGraph__ScanInternal_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::LayerGridGraph__ScanInternal_d__19, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::LayerGridGraph__ScanInternal_d__19, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::LayerGridGraph__ScanInternal_d__19, ____progressCounter_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::LayerGridGraph__ScanInternal_d__19, ____z_5__3) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::LayerGridGraph__ScanInternal_d__19) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.LayerGridGraph/HitComparer
class CORDL_TYPE LayerGridGraph_HitComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept;

/// @brief Method Compare, addr 0x5e7b4f4, size 0x44, virtual true, abstract: false, final true
inline int32_t Compare(::UnityEngine::RaycastHit  a, ::UnityEngine::RaycastHit  b) ;

static inline ::Pathfinding::LayerGridGraph_HitComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5e7b4ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>* i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerGridGraph_HitComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerGridGraph_HitComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerGridGraph_HitComparer(LayerGridGraph_HitComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerGridGraph_HitComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerGridGraph_HitComparer(LayerGridGraph_HitComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21309};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::LayerGridGraph_HitComparer) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
