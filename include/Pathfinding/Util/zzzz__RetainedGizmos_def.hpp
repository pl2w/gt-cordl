#pragma once
// IWYU pragma private; include "Pathfinding/Util/RetainedGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RetainedGizmos)
namespace GlobalNamespace {
class AstarPath;
}
namespace GlobalNamespace {
struct RetainedGizmos_Hasher;
}
namespace GlobalNamespace {
struct RetainedGizmos_MeshWithHash;
}
namespace Pathfinding::Util {
class GraphGizmoHelper;
}
namespace Pathfinding::Util {
class GraphTransform;
}
namespace Pathfinding::Util {
class IAstarPooledObject;
}
namespace Pathfinding::Util {
class RetainedGizmos_Builder;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Util {
class RetainedGizmos;
}
namespace Pathfinding::Util {
class RetainedGizmos_Builder;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::RetainedGizmos*);
MARK_REF_T(::Pathfinding::Util::RetainedGizmos_Builder*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::RetainedGizmos*, "Pathfinding.Util", "RetainedGizmos");
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::RetainedGizmos_Builder*, "Pathfinding.Util", "RetainedGizmos/Builder");
// Dependencies System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.RetainedGizmos
class CORDL_TYPE RetainedGizmos : public ::System::Object {
public:
// Declarations
using Hasher = ::GlobalNamespace::RetainedGizmos_Hasher;

using MeshWithHash = ::GlobalNamespace::RetainedGizmos_MeshWithHash;

using Builder = ::Pathfinding::Util::RetainedGizmos_Builder;

/// @brief Field cachedMeshes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedMeshes, put=__cordl_internal_set_cachedMeshes)) ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Mesh>>*  cachedMeshes;

/// @brief Field existingHashes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_existingHashes, put=__cordl_internal_set_existingHashes)) ::System::Collections::Generic::HashSet_1<uint64_t>*  existingHashes;

/// @brief Field lineMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineMaterial, put=__cordl_internal_set_lineMaterial)) ::UnityW<::UnityEngine::Material>  lineMaterial;

/// @brief Field meshes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshes, put=__cordl_internal_set_meshes)) ::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>*  meshes;

/// @brief Field surfaceMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceMaterial, put=__cordl_internal_set_surfaceMaterial)) ::UnityW<::UnityEngine::Material>  surfaceMaterial;

/// @brief Field usedHashes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_usedHashes, put=__cordl_internal_set_usedHashes)) ::System::Collections::Generic::HashSet_1<uint64_t>*  usedHashes;

/// @brief Method ClearCache, addr 0x5ee1834, size 0xe4, virtual false, abstract: false, final false
inline void ClearCache() ;

/// @brief Method Draw, addr 0x5ee100c, size 0x84, virtual false, abstract: false, final false
inline bool Draw(::GlobalNamespace::RetainedGizmos_Hasher  hasher) ;

/// @brief Method DrawExisting, addr 0x5ee1294, size 0xc0, virtual false, abstract: false, final false
inline void DrawExisting() ;

/// @brief Method FinalizeDraw, addr 0x5ee1354, size 0x300, virtual false, abstract: false, final false
inline void FinalizeDraw() ;

/// @brief Method GetGizmoHelper, addr 0x5ee1090, size 0x90, virtual false, abstract: false, final false
inline ::Pathfinding::Util::GraphGizmoHelper* GetGizmoHelper(::GlobalNamespace::AstarPath*  active, ::GlobalNamespace::RetainedGizmos_Hasher  hasher) ;

/// @brief Method GetMesh, addr 0x5ee1188, size 0xb4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> GetMesh() ;

/// @brief Method GetSingleFrameGizmoHelper, addr 0x5ee0f7c, size 0x70, virtual false, abstract: false, final false
inline ::Pathfinding::Util::GraphGizmoHelper* GetSingleFrameGizmoHelper(::GlobalNamespace::AstarPath*  active) ;

/// @brief Method HasCachedMesh, addr 0x5ee123c, size 0x58, virtual false, abstract: false, final false
inline bool HasCachedMesh(::GlobalNamespace::RetainedGizmos_Hasher  hasher) ;

static inline ::Pathfinding::Util::RetainedGizmos* New_ctor() ;

/// @brief Method PoolMesh, addr 0x5ee1120, size 0x68, virtual false, abstract: false, final false
inline void PoolMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method RemoveUnusedMeshes, addr 0x5ee1654, size 0x1e0, virtual false, abstract: false, final false
inline void RemoveUnusedMeshes(::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>*  meshList) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_cachedMeshes() const;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_cachedMeshes() ;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& __cordl_internal_get_existingHashes() const;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& __cordl_internal_get_existingHashes() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lineMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lineMaterial() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>* const& __cordl_internal_get_meshes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>*& __cordl_internal_get_meshes() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_surfaceMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_surfaceMaterial() ;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& __cordl_internal_get_usedHashes() const;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& __cordl_internal_get_usedHashes() ;

constexpr void __cordl_internal_set_cachedMeshes(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_existingHashes(::System::Collections::Generic::HashSet_1<uint64_t>*  value) ;

constexpr void __cordl_internal_set_lineMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_meshes(::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>*  value) ;

constexpr void __cordl_internal_set_surfaceMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_usedHashes(::System::Collections::Generic::HashSet_1<uint64_t>*  value) ;

/// @brief Method .ctor, addr 0x5ee1918, size 0x154, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RetainedGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RetainedGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RetainedGizmos(RetainedGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RetainedGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RetainedGizmos(RetainedGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21491};

/// @brief Field meshes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>*  ___meshes;

/// @brief Field usedHashes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<uint64_t>*  ___usedHashes;

/// @brief Field existingHashes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<uint64_t>*  ___existingHashes;

/// @brief Field cachedMeshes, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Mesh>>*  ___cachedMeshes;

/// @brief Field surfaceMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___surfaceMaterial;

/// @brief Field lineMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___lineMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::RetainedGizmos, ___meshes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::RetainedGizmos, ___usedHashes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::RetainedGizmos, ___existingHashes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::RetainedGizmos, ___cachedMeshes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::RetainedGizmos, ___surfaceMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::RetainedGizmos, ___lineMaterial) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::RetainedGizmos) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Util
// Dependencies System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.RetainedGizmos/Builder
class CORDL_TYPE RetainedGizmos_Builder : public ::System::Object {
public:
// Declarations
/// @brief Field lineColors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineColors, put=__cordl_internal_set_lineColors)) ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  lineColors;

/// @brief Field lines, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_lines, put=__cordl_internal_set_lines)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  lines;

/// @brief Field meshes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshes, put=__cordl_internal_set_meshes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  meshes;

/// @brief Convert operator to "::Pathfinding::Util::IAstarPooledObject"
constexpr operator  ::Pathfinding::Util::IAstarPooledObject*() noexcept;

/// @brief Method DrawLine, addr 0x5ee0730, size 0x264, virtual false, abstract: false, final false
inline void DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color) ;

/// @brief Method DrawMesh, addr 0x5ee0c90, size 0x124, virtual false, abstract: false, final false
inline void DrawMesh(::Pathfinding::Util::RetainedGizmos*  gizmos, ::ArrayW<::UnityEngine::Vector3>  vertices, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::ArrayW<::UnityEngine::Color>  colors) ;

/// @brief Method DrawWireCube, addr 0x5ee1ca8, size 0x5c4, virtual false, abstract: false, final false
inline void DrawWireCube(::Pathfinding::Util::GraphTransform*  tr, ::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color) ;

static inline ::Pathfinding::Util::RetainedGizmos_Builder* New_ctor() ;

/// @brief Method Pathfinding.Util.IAstarPooledObject.OnEnterPool, addr 0x5ee3054, size 0xb0, virtual true, abstract: false, final true
inline void Pathfinding_Util_IAstarPooledObject_OnEnterPool() ;

/// @brief Method Submit, addr 0x5ee0ee8, size 0x34, virtual false, abstract: false, final false
inline void Submit(::Pathfinding::Util::RetainedGizmos*  gizmos, ::GlobalNamespace::RetainedGizmos_Hasher  hasher) ;

/// @brief Method SubmitLines, addr 0x5ee226c, size 0xc48, virtual false, abstract: false, final false
inline void SubmitLines(::Pathfinding::Util::RetainedGizmos*  gizmos, uint64_t  hash) ;

/// @brief Method SubmitMeshes, addr 0x5ee2eb4, size 0x1a0, virtual false, abstract: false, final false
inline void SubmitMeshes(::Pathfinding::Util::RetainedGizmos*  gizmos, uint64_t  hash) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>* const& __cordl_internal_get_lineColors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>*& __cordl_internal_get_lineColors() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_lines() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_lines() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_meshes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_meshes() ;

constexpr void __cordl_internal_set_lineColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  value) ;

constexpr void __cordl_internal_set_lines(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_meshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

/// @brief Method .ctor, addr 0x5ee3104, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Pathfinding::Util::IAstarPooledObject"
constexpr ::Pathfinding::Util::IAstarPooledObject* i___Pathfinding__Util__IAstarPooledObject() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RetainedGizmos_Builder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RetainedGizmos_Builder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RetainedGizmos_Builder(RetainedGizmos_Builder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RetainedGizmos_Builder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RetainedGizmos_Builder(RetainedGizmos_Builder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21489};

/// @brief Field lines, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___lines;

/// @brief Field lineColors, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  ___lineColors;

/// @brief Field meshes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ___meshes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::RetainedGizmos_Builder, ___lines) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::RetainedGizmos_Builder, ___lineColors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::RetainedGizmos_Builder, ___meshes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::RetainedGizmos_Builder) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Util
