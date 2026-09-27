#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderShelf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderShelf)
namespace GlobalNamespace {
class BuilderResources;
}
namespace GlobalNamespace {
class BuilderShelf_BuildPieceSpawn;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderShelf;
}
namespace GlobalNamespace {
class BuilderShelf_BuildPieceSpawn;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderShelf*);
MARK_REF_T(::GlobalNamespace::BuilderShelf_BuildPieceSpawn*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderShelf*, "", "BuilderShelf");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderShelf_BuildPieceSpawn*, "", "BuilderShelf/BuildPieceSpawn");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderShelf
class CORDL_TYPE BuilderShelf : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BuildPieceSpawn = ::GlobalNamespace::BuilderShelf_BuildPieceSpawn;

/// @brief Field buildPieceSpawnIndex, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_buildPieceSpawnIndex, put=__cordl_internal_set_buildPieceSpawnIndex)) int32_t  buildPieceSpawnIndex;

/// @brief Field buildPieceSpawns, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_buildPieceSpawns, put=__cordl_internal_set_buildPieceSpawns)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderShelf_BuildPieceSpawn*>*  buildPieceSpawns;

/// @brief Field center, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityW<::UnityEngine::Transform>  center;

/// @brief Field count, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field separation, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_separation, put=__cordl_internal_set_separation)) float_t  separation;

/// @brief Field shelfSlot, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_shelfSlot, put=__cordl_internal_set_shelfSlot)) int32_t  shelfSlot;

/// @brief Field spawnCosts, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnCosts, put=__cordl_internal_set_spawnCosts)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResources>>*  spawnCosts;

/// @brief Field spawnCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnCount, put=__cordl_internal_set_spawnCount)) int32_t  spawnCount;

/// @brief Method BuildItems, addr 0x57e2454, size 0x224, virtual false, abstract: false, final false
inline void BuildItems(::GorillaTagScripts::BuilderTable*  table) ;

/// @brief Method BuildNextPiece, addr 0x57e1df8, size 0x2d0, virtual false, abstract: false, final false
inline void BuildNextPiece(::GorillaTagScripts::BuilderTable*  table) ;

/// @brief Method GetSpawnLocation, addr 0x57e20c8, size 0x2ec, virtual false, abstract: false, final false
inline void GetSpawnLocation(int32_t  slot, ::GlobalNamespace::BuilderShelf_BuildPieceSpawn*  spawn, ::by_ref<::UnityEngine::Vector3>  spawnPosition, ::by_ref<::UnityEngine::Quaternion>  spawnRotation) ;

/// @brief Method HasOpenSlot, addr 0x57e1de4, size 0x14, virtual false, abstract: false, final false
inline bool HasOpenSlot() ;

/// @brief Method Init, addr 0x57e1c1c, size 0x1c8, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method InitCount, addr 0x57e23b4, size 0xa0, virtual false, abstract: false, final false
inline void InitCount() ;

static inline ::GlobalNamespace::BuilderShelf* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_buildPieceSpawnIndex() const;

constexpr int32_t& __cordl_internal_get_buildPieceSpawnIndex() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderShelf_BuildPieceSpawn*>* const& __cordl_internal_get_buildPieceSpawns() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderShelf_BuildPieceSpawn*>*& __cordl_internal_get_buildPieceSpawns() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_center() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_center() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr float_t const& __cordl_internal_get_separation() const;

constexpr float_t& __cordl_internal_get_separation() ;

constexpr int32_t const& __cordl_internal_get_shelfSlot() const;

constexpr int32_t& __cordl_internal_get_shelfSlot() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResources>>* const& __cordl_internal_get_spawnCosts() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResources>>*& __cordl_internal_get_spawnCosts() ;

constexpr int32_t const& __cordl_internal_get_spawnCount() const;

constexpr int32_t& __cordl_internal_get_spawnCount() ;

constexpr void __cordl_internal_set_buildPieceSpawnIndex(int32_t  value) ;

constexpr void __cordl_internal_set_buildPieceSpawns(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderShelf_BuildPieceSpawn*>*  value) ;

constexpr void __cordl_internal_set_center(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_separation(float_t  value) ;

constexpr void __cordl_internal_set_shelfSlot(int32_t  value) ;

constexpr void __cordl_internal_set_spawnCosts(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResources>>*  value) ;

constexpr void __cordl_internal_set_spawnCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x57e2678, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderShelf() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderShelf", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderShelf(BuilderShelf && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderShelf", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderShelf(BuilderShelf const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1647};

/// @brief Field count, offset: 0x20, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field separation, offset: 0x24, size: 0x4, def value: None
 float_t  ___separation;

/// @brief Field center, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___center;

/// @brief Field buildPieceSpawns, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderShelf_BuildPieceSpawn*>*  ___buildPieceSpawns;

/// @brief Field spawnCosts, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResources>>*  ___spawnCosts;

/// @brief Field shelfSlot, offset: 0x40, size: 0x4, def value: None
 int32_t  ___shelfSlot;

/// @brief Field buildPieceSpawnIndex, offset: 0x44, size: 0x4, def value: None
 int32_t  ___buildPieceSpawnIndex;

/// @brief Field spawnCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___spawnCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderShelf, ___count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderShelf, ___separation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderShelf, ___center) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderShelf, ___buildPieceSpawns) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderShelf, ___spawnCosts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderShelf, ___shelfSlot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderShelf, ___buildPieceSpawnIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderShelf, ___spawnCount) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderShelf) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderShelf/BuildPieceSpawn
class CORDL_TYPE BuilderShelf_BuildPieceSpawn : public ::System::Object {
public:
// Declarations
/// @brief Field buildPiecePrefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buildPiecePrefab, put=__cordl_internal_set_buildPiecePrefab)) ::UnityW<::UnityEngine::GameObject>  buildPiecePrefab;

/// @brief Field count, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field localAxis, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_localAxis, put=__cordl_internal_set_localAxis)) ::UnityEngine::Vector3  localAxis;

/// @brief Field materialID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialID, put=__cordl_internal_set_materialID)) ::StringW  materialID;

/// @brief Field previewMesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_previewMesh, put=__cordl_internal_set_previewMesh)) ::UnityW<::UnityEngine::Mesh>  previewMesh;

static inline ::GlobalNamespace::BuilderShelf_BuildPieceSpawn* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_buildPiecePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_buildPiecePrefab() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localAxis() ;

constexpr ::StringW const& __cordl_internal_get_materialID() const;

constexpr ::StringW& __cordl_internal_get_materialID() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_previewMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_previewMesh() ;

constexpr void __cordl_internal_set_buildPiecePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_localAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_materialID(::StringW  value) ;

constexpr void __cordl_internal_set_previewMesh(::UnityW<::UnityEngine::Mesh>  value) ;

/// @brief Method .ctor, addr 0x57e2680, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderShelf_BuildPieceSpawn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderShelf_BuildPieceSpawn", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderShelf_BuildPieceSpawn(BuilderShelf_BuildPieceSpawn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderShelf_BuildPieceSpawn", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderShelf_BuildPieceSpawn(BuilderShelf_BuildPieceSpawn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1646};

/// @brief Field buildPiecePrefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___buildPiecePrefab;

/// @brief Field materialID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___materialID;

/// @brief Field count, offset: 0x20, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field localAxis, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localAxis;

/// [Tooltip("Optional Editor Visual")]
/// @brief Field previewMesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___previewMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderShelf_BuildPieceSpawn, ___buildPiecePrefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderShelf_BuildPieceSpawn, ___materialID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderShelf_BuildPieceSpawn, ___count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderShelf_BuildPieceSpawn, ___localAxis) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderShelf_BuildPieceSpawn, ___previewMesh) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderShelf_BuildPieceSpawn) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
