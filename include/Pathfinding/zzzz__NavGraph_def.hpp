#pragma once
// IWYU pragma private; include "Pathfinding/NavGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Util/zzzz__Guid_def.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_Hasher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavGraph)
namespace GlobalNamespace {
class AstarPath;
}
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding::Util {
class RetainedGizmos;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class IGraphInternals;
}
namespace Pathfinding {
class NNConstraint;
}
namespace Pathfinding {
struct NNInfoInternal;
}
namespace Pathfinding {
class NavGraph___c;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass11_0;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass12_0;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass19_0;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass22_0;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass33_0;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass34_0;
}
namespace Pathfinding {
struct Progress;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class NavGraph;
}
namespace Pathfinding {
class NavGraph___c;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass11_0;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass12_0;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass19_0;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass22_0;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass33_0;
}
namespace Pathfinding {
class NavGraph___c__DisplayClass34_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::NavGraph*);
MARK_REF_T(::Pathfinding::NavGraph___c*);
MARK_REF_T(::Pathfinding::NavGraph___c__DisplayClass11_0*);
MARK_REF_T(::Pathfinding::NavGraph___c__DisplayClass12_0*);
MARK_REF_T(::Pathfinding::NavGraph___c__DisplayClass19_0*);
MARK_REF_T(::Pathfinding::NavGraph___c__DisplayClass22_0*);
MARK_REF_T(::Pathfinding::NavGraph___c__DisplayClass33_0*);
MARK_REF_T(::Pathfinding::NavGraph___c__DisplayClass34_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NavGraph*, "Pathfinding", "NavGraph");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavGraph___c*, "Pathfinding", "NavGraph/<>c");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavGraph___c__DisplayClass11_0*, "Pathfinding", "NavGraph/<>c__DisplayClass11_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavGraph___c__DisplayClass12_0*, "Pathfinding", "NavGraph/<>c__DisplayClass12_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavGraph___c__DisplayClass19_0*, "Pathfinding", "NavGraph/<>c__DisplayClass19_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavGraph___c__DisplayClass22_0*, "Pathfinding", "NavGraph/<>c__DisplayClass22_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavGraph___c__DisplayClass33_0*, "Pathfinding", "NavGraph/<>c__DisplayClass33_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavGraph___c__DisplayClass34_0*, "Pathfinding", "NavGraph/<>c__DisplayClass34_0");
// Dependencies Pathfinding.Util.Guid, System.Object, UnityEngine.Matrix4x4
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavGraph
class CORDL_TYPE NavGraph : public ::System::Object {
public:
// Declarations
using __c = ::Pathfinding::NavGraph___c;

using __c__DisplayClass11_0 = ::Pathfinding::NavGraph___c__DisplayClass11_0;

using __c__DisplayClass12_0 = ::Pathfinding::NavGraph___c__DisplayClass12_0;

using __c__DisplayClass19_0 = ::Pathfinding::NavGraph___c__DisplayClass19_0;

using __c__DisplayClass22_0 = ::Pathfinding::NavGraph___c__DisplayClass22_0;

using __c__DisplayClass33_0 = ::Pathfinding::NavGraph___c__DisplayClass33_0;

using __c__DisplayClass34_0 = ::Pathfinding::NavGraph___c__DisplayClass34_0;

 __declspec(property(get=Pathfinding_IGraphInternals_get_SerializedEditorSettings, put=Pathfinding_IGraphInternals_set_SerializedEditorSettings)) ::StringW  Pathfinding_IGraphInternals_SerializedEditorSettings;

/// @brief Field active, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) ::UnityW<::GlobalNamespace::AstarPath>  active;

/// @brief Field drawGizmos, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawGizmos, put=__cordl_internal_set_drawGizmos)) bool  drawGizmos;

 __declspec(property(get=get_exists)) bool  exists;

/// @brief Field graphIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphIndex, put=__cordl_internal_set_graphIndex)) uint32_t  graphIndex;

/// @brief Field guid, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_guid, put=__cordl_internal_set_guid)) ::Pathfinding::Util::Guid  guid;

/// @brief Field infoScreenOpen, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_infoScreenOpen, put=__cordl_internal_set_infoScreenOpen)) bool  infoScreenOpen;

/// @brief Field initialPenalty, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialPenalty, put=__cordl_internal_set_initialPenalty)) uint32_t  initialPenalty;

/// @brief Field inverseMatrix, offset 0x90, size 0x40 
 __declspec(property(get=__cordl_internal_get_inverseMatrix, put=__cordl_internal_set_inverseMatrix)) ::UnityEngine::Matrix4x4  inverseMatrix;

/// @brief Field matrix, offset 0x50, size 0x40 
 __declspec(property(get=__cordl_internal_get_matrix, put=__cordl_internal_set_matrix)) ::UnityEngine::Matrix4x4  matrix;

/// @brief Field name, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field open, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_open, put=__cordl_internal_set_open)) bool  open;

/// @brief Field serializedEditorSettings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializedEditorSettings, put=__cordl_internal_set_serializedEditorSettings)) ::StringW  serializedEditorSettings;

/// @brief Convert operator to "::Pathfinding::IGraphInternals"
constexpr operator  ::Pathfinding::IGraphInternals*() noexcept;

/// @brief Method AssertSafeToUpdateGraph, addr 0x5e6c4f4, size 0x80, virtual false, abstract: false, final false
inline void AssertSafeToUpdateGraph() ;

/// @brief Method CountNodes, addr 0x5e6c278, size 0xc0, virtual true, abstract: false, final false
inline int32_t CountNodes() ;

/// @brief Method DeserializeExtraInfo, addr 0x5e6cab4, size 0x4, virtual true, abstract: false, final false
inline void DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method DeserializeSettingsCompatibility, addr 0x5e6cabc, size 0x108, virtual true, abstract: false, final false
inline void DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method DestroyAllNodes, addr 0x5e6c99c, size 0xf4, virtual true, abstract: false, final false
inline void DestroyAllNodes() ;

/// @brief Method DrawUnwalkableNodes, addr 0x5e6ce6c, size 0x108, virtual false, abstract: false, final false
inline void DrawUnwalkableNodes(float_t  size) ;

/// @brief Method GetNearest, addr 0x5e6c648, size 0x88, virtual false, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearest(::UnityEngine::Vector3  position) ;

/// @brief Method GetNearest, addr 0x5e6c6d0, size 0x44, virtual false, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint) ;

/// @brief Method GetNearest, addr 0x5e6c714, size 0x234, virtual true, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint) ;

/// @brief Method GetNearestForce, addr 0x5e6c948, size 0x44, virtual true, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearestForce(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint) ;

/// @brief Method GetNodes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// @brief Method GetNodes, addr 0x5e6c338, size 0xd8, virtual false, abstract: false, final false
inline void GetNodes(::System::Func_2<::Pathfinding::GraphNode*,bool>*  action) ;

static inline ::Pathfinding::NavGraph* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5e6c98c, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmos, addr 0x5e6cbc4, size 0x2a8, virtual true, abstract: false, final false
inline void OnDrawGizmos(::Pathfinding::Util::RetainedGizmos*  gizmos, bool  drawNodes) ;

/// @brief Method Pathfinding.IGraphInternals.DeserializeExtraInfo, addr 0x5e6cfc4, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IGraphInternals_DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method Pathfinding.IGraphInternals.DeserializeSettingsCompatibility, addr 0x5e6cfe4, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IGraphInternals_DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method Pathfinding.IGraphInternals.DestroyAllNodes, addr 0x5e6cf94, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IGraphInternals_DestroyAllNodes() ;

/// @brief Method Pathfinding.IGraphInternals.OnDestroy, addr 0x5e6cf84, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IGraphInternals_OnDestroy() ;

/// @brief Method Pathfinding.IGraphInternals.PostDeserialization, addr 0x5e6cfd4, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IGraphInternals_PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method Pathfinding.IGraphInternals.ScanInternal, addr 0x5e6cfa4, size 0x10, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding_IGraphInternals_ScanInternal() ;

/// @brief Method Pathfinding.IGraphInternals.SerializeExtraInfo, addr 0x5e6cfb4, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IGraphInternals_SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method Pathfinding.IGraphInternals.get_SerializedEditorSettings, addr 0x5e6cf74, size 0x8, virtual true, abstract: false, final true
inline ::StringW Pathfinding_IGraphInternals_get_SerializedEditorSettings() ;

/// @brief Method Pathfinding.IGraphInternals.set_SerializedEditorSettings, addr 0x5e6cf7c, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IGraphInternals_set_SerializedEditorSettings(::StringW  value) ;

/// @brief Method PostDeserialization, addr 0x5e6cab8, size 0x4, virtual true, abstract: false, final false
inline void PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method RelocateNodes, addr 0x5e6c574, size 0xd4, virtual true, abstract: false, final false
inline void RelocateNodes(::UnityEngine::Matrix4x4  deltaMatrix) ;

/// [Obsolete("Use RelocateNodes(Matrix4x4) instead. To keep the same behavior you can call RelocateNodes(newMatrix * oldMatrix.inverse).")]
/// @brief Method RelocateNodes, addr 0x5e6c458, size 0x9c, virtual false, abstract: false, final false
inline void RelocateNodes(::UnityEngine::Matrix4x4  oldMatrix, ::UnityEngine::Matrix4x4  newMatrix) ;

/// @brief Method Scan, addr 0x5e6ca94, size 0x1c, virtual false, abstract: false, final false
inline void Scan() ;

/// [Obsolete("Use AstarPath.Scan instead")]
/// @brief Method ScanGraph, addr 0x5e6ca90, size 0x4, virtual false, abstract: false, final false
inline void ScanGraph() ;

/// @brief Method ScanInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanInternal() ;

/// @brief Method SerializeExtraInfo, addr 0x5e6cab0, size 0x4, virtual true, abstract: false, final false
inline void SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// [Obsolete("Use the transform field (only available on some graph types) instead", true)]
/// @brief Method SetMatrix, addr 0x5e6c410, size 0x48, virtual false, abstract: false, final false
inline void SetMatrix(::UnityEngine::Matrix4x4  m) ;

constexpr ::UnityW<::GlobalNamespace::AstarPath> const& __cordl_internal_get_active() const;

constexpr ::UnityW<::GlobalNamespace::AstarPath>& __cordl_internal_get_active() ;

constexpr bool const& __cordl_internal_get_drawGizmos() const;

constexpr bool& __cordl_internal_get_drawGizmos() ;

constexpr uint32_t const& __cordl_internal_get_graphIndex() const;

constexpr uint32_t& __cordl_internal_get_graphIndex() ;

constexpr ::Pathfinding::Util::Guid const& __cordl_internal_get_guid() const;

constexpr ::Pathfinding::Util::Guid& __cordl_internal_get_guid() ;

constexpr bool const& __cordl_internal_get_infoScreenOpen() const;

constexpr bool& __cordl_internal_get_infoScreenOpen() ;

constexpr uint32_t const& __cordl_internal_get_initialPenalty() const;

constexpr uint32_t& __cordl_internal_get_initialPenalty() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_inverseMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_inverseMatrix() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_matrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_matrix() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr bool const& __cordl_internal_get_open() const;

constexpr bool& __cordl_internal_get_open() ;

constexpr ::StringW const& __cordl_internal_get_serializedEditorSettings() const;

constexpr ::StringW& __cordl_internal_get_serializedEditorSettings() ;

constexpr void __cordl_internal_set_active(::UnityW<::GlobalNamespace::AstarPath>  value) ;

constexpr void __cordl_internal_set_drawGizmos(bool  value) ;

constexpr void __cordl_internal_set_graphIndex(uint32_t  value) ;

constexpr void __cordl_internal_set_guid(::Pathfinding::Util::Guid  value) ;

constexpr void __cordl_internal_set_infoScreenOpen(bool  value) ;

constexpr void __cordl_internal_set_initialPenalty(uint32_t  value) ;

constexpr void __cordl_internal_set_inverseMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_matrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_open(bool  value) ;

constexpr void __cordl_internal_set_serializedEditorSettings(::StringW  value) ;

/// @brief Method .ctor, addr 0x5e6cff4, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_exists, addr 0x5e6c218, size 0x60, virtual false, abstract: false, final false
inline bool get_exists() ;

/// @brief Convert to "::Pathfinding::IGraphInternals"
constexpr ::Pathfinding::IGraphInternals* i___Pathfinding__IGraphInternals() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavGraph(NavGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavGraph(NavGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21296};

/// @brief Field active, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AstarPath>  ___active;

/// [JsonMember]
/// @brief Field guid, offset: 0x18, size: 0x10, def value: None
 ::Pathfinding::Util::Guid  ___guid;

/// [JsonMember]
/// @brief Field initialPenalty, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___initialPenalty;

/// [JsonMember]
/// @brief Field open, offset: 0x2c, size: 0x1, def value: None
 bool  ___open;

/// @brief Field graphIndex, offset: 0x30, size: 0x4, def value: None
 uint32_t  ___graphIndex;

/// [JsonMember]
/// @brief Field name, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___name;

/// [JsonMember]
/// @brief Field drawGizmos, offset: 0x40, size: 0x1, def value: None
 bool  ___drawGizmos;

/// [JsonMember]
/// @brief Field infoScreenOpen, offset: 0x41, size: 0x1, def value: None
 bool  ___infoScreenOpen;

/// [JsonMember]
/// @brief Field serializedEditorSettings, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___serializedEditorSettings;

/// [Obsolete("Use the transform field (only available on some graph types) instead", true)]
/// @brief Field matrix, offset: 0x50, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___matrix;

/// [Obsolete("Use the transform field (only available on some graph types) instead", true)]
/// @brief Field inverseMatrix, offset: 0x90, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___inverseMatrix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavGraph, ___active) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph, ___guid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph, ___initialPenalty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph, ___open) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph, ___graphIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph, ___name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph, ___drawGizmos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph, ___infoScreenOpen) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph, ___serializedEditorSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph, ___matrix) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph, ___inverseMatrix) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavGraph) == 0xd0, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavGraph/<>c__DisplayClass34_0
class CORDL_TYPE NavGraph___c__DisplayClass34_0 : public ::System::Object {
public:
// Declarations
/// @brief Field size, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) float_t  size;

static inline ::Pathfinding::NavGraph___c__DisplayClass34_0* New_ctor() ;

/// @brief Method <DrawUnwalkableNodes>b__0, addr 0x5e6d2b0, size 0xcc, virtual false, abstract: false, final false
inline void _DrawUnwalkableNodes_b__0(::Pathfinding::GraphNode*  node) ;

constexpr float_t const& __cordl_internal_get_size() const;

constexpr float_t& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set_size(float_t  value) ;

/// @brief Method .ctor, addr 0x5e6d2a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavGraph___c__DisplayClass34_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass34_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavGraph___c__DisplayClass34_0(NavGraph___c__DisplayClass34_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass34_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavGraph___c__DisplayClass34_0(NavGraph___c__DisplayClass34_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21295};

/// @brief Field size, offset: 0x10, size: 0x4, def value: None
 float_t  ___size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass34_0, ___size) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavGraph___c__DisplayClass34_0) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies Pathfinding.Util.RetainedGizmos::Hasher, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavGraph/<>c__DisplayClass33_0
class CORDL_TYPE NavGraph___c__DisplayClass33_0 : public ::System::Object {
public:
// Declarations
/// @brief Field hasher, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_hasher, put=__cordl_internal_set_hasher)) ::GlobalNamespace::RetainedGizmos_Hasher  hasher;

static inline ::Pathfinding::NavGraph___c__DisplayClass33_0* New_ctor() ;

/// @brief Method <OnDrawGizmos>b__0, addr 0x5e6d29c, size 0xc, virtual false, abstract: false, final false
inline void _OnDrawGizmos_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::GlobalNamespace::RetainedGizmos_Hasher const& __cordl_internal_get_hasher() const;

constexpr ::GlobalNamespace::RetainedGizmos_Hasher& __cordl_internal_get_hasher() ;

constexpr void __cordl_internal_set_hasher(::GlobalNamespace::RetainedGizmos_Hasher  value) ;

/// @brief Method .ctor, addr 0x5e6d294, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavGraph___c__DisplayClass33_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass33_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavGraph___c__DisplayClass33_0(NavGraph___c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass33_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavGraph___c__DisplayClass33_0(NavGraph___c__DisplayClass33_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21294};

/// @brief Field hasher, offset: 0x10, size: 0x18, def value: None
 ::GlobalNamespace::RetainedGizmos_Hasher  ___hasher;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass33_0, ___hasher) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavGraph___c__DisplayClass33_0) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavGraph/<>c__DisplayClass22_0
class CORDL_TYPE NavGraph___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field constraint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_constraint, put=__cordl_internal_set_constraint)) ::Pathfinding::NNConstraint*  constraint;

/// @brief Field maxDistSqr, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistSqr, put=__cordl_internal_set_maxDistSqr)) float_t  maxDistSqr;

/// @brief Field minConstDist, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minConstDist, put=__cordl_internal_set_minConstDist)) float_t  minConstDist;

/// @brief Field minConstNode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_minConstNode, put=__cordl_internal_set_minConstNode)) ::Pathfinding::GraphNode*  minConstNode;

/// @brief Field minDist, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDist, put=__cordl_internal_set_minDist)) float_t  minDist;

/// @brief Field minNode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_minNode, put=__cordl_internal_set_minNode)) ::Pathfinding::GraphNode*  minNode;

/// @brief Field position, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

static inline ::Pathfinding::NavGraph___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <GetNearest>b__0, addr 0x5e6d1b0, size 0xe4, virtual false, abstract: false, final false
inline void _GetNearest_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::Pathfinding::NNConstraint* const& __cordl_internal_get_constraint() const;

constexpr ::Pathfinding::NNConstraint*& __cordl_internal_get_constraint() ;

constexpr float_t const& __cordl_internal_get_maxDistSqr() const;

constexpr float_t& __cordl_internal_get_maxDistSqr() ;

constexpr float_t const& __cordl_internal_get_minConstDist() const;

constexpr float_t& __cordl_internal_get_minConstDist() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_minConstNode() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_minConstNode() ;

constexpr float_t const& __cordl_internal_get_minDist() const;

constexpr float_t& __cordl_internal_get_minDist() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_minNode() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_minNode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr void __cordl_internal_set_constraint(::Pathfinding::NNConstraint*  value) ;

constexpr void __cordl_internal_set_maxDistSqr(float_t  value) ;

constexpr void __cordl_internal_set_minConstDist(float_t  value) ;

constexpr void __cordl_internal_set_minConstNode(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_minDist(float_t  value) ;

constexpr void __cordl_internal_set_minNode(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5e6d1a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavGraph___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass22_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavGraph___c__DisplayClass22_0(NavGraph___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass22_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavGraph___c__DisplayClass22_0(NavGraph___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21293};

/// @brief Field position, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

/// @brief Field minDist, offset: 0x1c, size: 0x4, def value: None
 float_t  ___minDist;

/// @brief Field minNode, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___minNode;

/// @brief Field minConstDist, offset: 0x28, size: 0x4, def value: None
 float_t  ___minConstDist;

/// @brief Field maxDistSqr, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxDistSqr;

/// @brief Field constraint, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::NNConstraint*  ___constraint;

/// @brief Field minConstNode, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___minConstNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass22_0, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass22_0, ___minDist) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass22_0, ___minNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass22_0, ___minConstDist) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass22_0, ___maxDistSqr) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass22_0, ___constraint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass22_0, ___minConstNode) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavGraph___c__DisplayClass22_0) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Matrix4x4
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavGraph/<>c__DisplayClass19_0
class CORDL_TYPE NavGraph___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field deltaMatrix, offset 0x10, size 0x40 
 __declspec(property(get=__cordl_internal_get_deltaMatrix, put=__cordl_internal_set_deltaMatrix)) ::UnityEngine::Matrix4x4  deltaMatrix;

static inline ::Pathfinding::NavGraph___c__DisplayClass19_0* New_ctor() ;

/// @brief Method <RelocateNodes>b__0, addr 0x5e6d158, size 0x50, virtual false, abstract: false, final false
inline void _RelocateNodes_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_deltaMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_deltaMatrix() ;

constexpr void __cordl_internal_set_deltaMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method .ctor, addr 0x5e6d150, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavGraph___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass19_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavGraph___c__DisplayClass19_0(NavGraph___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass19_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavGraph___c__DisplayClass19_0(NavGraph___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21292};

/// @brief Field deltaMatrix, offset: 0x10, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___deltaMatrix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass19_0, ___deltaMatrix) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavGraph___c__DisplayClass19_0) == 0x50, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavGraph/<>c__DisplayClass12_0
class CORDL_TYPE NavGraph___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field action, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Func_2<::Pathfinding::GraphNode*,bool>*  action;

/// @brief Field cont, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_cont, put=__cordl_internal_set_cont)) bool  cont;

static inline ::Pathfinding::NavGraph___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <GetNodes>b__0, addr 0x5e6d114, size 0x3c, virtual false, abstract: false, final false
inline void _GetNodes_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>* const& __cordl_internal_get_action() const;

constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>*& __cordl_internal_get_action() ;

constexpr bool const& __cordl_internal_get_cont() const;

constexpr bool& __cordl_internal_get_cont() ;

constexpr void __cordl_internal_set_action(::System::Func_2<::Pathfinding::GraphNode*,bool>*  value) ;

constexpr void __cordl_internal_set_cont(bool  value) ;

/// @brief Method .ctor, addr 0x5e6d10c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavGraph___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass12_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavGraph___c__DisplayClass12_0(NavGraph___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass12_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavGraph___c__DisplayClass12_0(NavGraph___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21291};

/// @brief Field cont, offset: 0x10, size: 0x1, def value: None
 bool  ___cont;

/// @brief Field action, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::Pathfinding::GraphNode*,bool>*  ___action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass12_0, ___cont) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass12_0, ___action) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavGraph___c__DisplayClass12_0) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavGraph/<>c__DisplayClass11_0
class CORDL_TYPE NavGraph___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field count, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

static inline ::Pathfinding::NavGraph___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <CountNodes>b__0, addr 0x5e6d0fc, size 0x10, virtual false, abstract: false, final false
inline void _CountNodes_b__0(::Pathfinding::GraphNode*  node) ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e6d0f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavGraph___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass11_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavGraph___c__DisplayClass11_0(NavGraph___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c__DisplayClass11_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavGraph___c__DisplayClass11_0(NavGraph___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21290};

/// @brief Field count, offset: 0x10, size: 0x4, def value: None
 int32_t  ___count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavGraph___c__DisplayClass11_0, ___count) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavGraph___c__DisplayClass11_0) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavGraph/<>c
class CORDL_TYPE NavGraph___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Pathfinding::NavGraph___c*  __9;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::System::Action_1<::Pathfinding::GraphNode*>*  __9__25_0;

static inline ::Pathfinding::NavGraph___c* New_ctor() ;

/// @brief Method <DestroyAllNodes>b__25_0, addr 0x5e6d0dc, size 0x18, virtual false, abstract: false, final false
inline void _DestroyAllNodes_b__25_0(::Pathfinding::GraphNode*  node) ;

/// @brief Method .ctor, addr 0x5e6d0d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Pathfinding::NavGraph___c* getStaticF___9() ;

static inline ::System::Action_1<::Pathfinding::GraphNode*>* getStaticF___9__25_0() ;

static inline void setStaticF___9(::Pathfinding::NavGraph___c*  value) ;

static inline void setStaticF___9__25_0(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavGraph___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavGraph___c(NavGraph___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavGraph___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavGraph___c(NavGraph___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21289};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::NavGraph___c) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
