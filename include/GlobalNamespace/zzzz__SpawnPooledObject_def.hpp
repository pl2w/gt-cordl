#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnPooledObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnPooledObject)
namespace UnityEngine {
class GameObject;
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
class SpawnPooledObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpawnPooledObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpawnPooledObject*, "", "SpawnPooledObject");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpawnPooledObject
class CORDL_TYPE SpawnPooledObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _pooledObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pooledObject, put=__cordl_internal_set__pooledObject)) ::UnityW<::UnityEngine::GameObject>  _pooledObject;

/// @brief Field _pooledObjectHash, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__pooledObjectHash, put=__cordl_internal_set__pooledObjectHash)) int32_t  _pooledObjectHash;

/// @brief Field _spawnLocation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnLocation, put=__cordl_internal_set__spawnLocation)) ::UnityW<::UnityEngine::Transform>  _spawnLocation;

/// @brief Field chanceToSpawn, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_chanceToSpawn, put=__cordl_internal_set_chanceToSpawn)) int32_t  chanceToSpawn;

/// @brief Field facePlayer, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_facePlayer, put=__cordl_internal_set_facePlayer)) bool  facePlayer;

/// @brief Field offset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

/// @brief Field upright, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_upright, put=__cordl_internal_set_upright)) bool  upright;

/// @brief Method Awake, addr 0x59861e0, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SpawnPooledObject* New_ctor() ;

/// @brief Method ShouldSpawn, addr 0x59863e0, size 0x2c, virtual false, abstract: false, final false
inline bool ShouldSpawn() ;

/// @brief Method SpawnLocation, addr 0x598640c, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 SpawnLocation() ;

/// @brief Method SpawnObject, addr 0x5986258, size 0x188, virtual false, abstract: false, final false
inline void SpawnObject() ;

/// @brief Method SpawnRotation, addr 0x5986450, size 0x168, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion SpawnRotation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pooledObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pooledObject() ;

constexpr int32_t const& __cordl_internal_get__pooledObjectHash() const;

constexpr int32_t& __cordl_internal_get__pooledObjectHash() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__spawnLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__spawnLocation() ;

constexpr int32_t const& __cordl_internal_get_chanceToSpawn() const;

constexpr int32_t& __cordl_internal_get_chanceToSpawn() ;

constexpr bool const& __cordl_internal_get_facePlayer() const;

constexpr bool& __cordl_internal_get_facePlayer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr bool const& __cordl_internal_get_upright() const;

constexpr bool& __cordl_internal_get_upright() ;

constexpr void __cordl_internal_set__pooledObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__pooledObjectHash(int32_t  value) ;

constexpr void __cordl_internal_set__spawnLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_chanceToSpawn(int32_t  value) ;

constexpr void __cordl_internal_set_facePlayer(bool  value) ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_upright(bool  value) ;

/// @brief Method .ctor, addr 0x59865b8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnPooledObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnPooledObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnPooledObject(SpawnPooledObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnPooledObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnPooledObject(SpawnPooledObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2547};

/// [SerializeField]
/// @brief Field _spawnLocation, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____spawnLocation;

/// [SerializeField]
/// @brief Field _pooledObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____pooledObject;

/// [FormerlySerializedAs("_offset")]
/// @brief Field offset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

/// [FormerlySerializedAs("_upright")]
/// @brief Field upright, offset: 0x3c, size: 0x1, def value: None
 bool  ___upright;

/// [FormerlySerializedAs("_facePlayer")]
/// @brief Field facePlayer, offset: 0x3d, size: 0x1, def value: None
 bool  ___facePlayer;

/// [FormerlySerializedAs("_chanceToSpawn")]
/// [Range(0, 100)]
/// @brief Field chanceToSpawn, offset: 0x40, size: 0x4, def value: None
 int32_t  ___chanceToSpawn;

/// @brief Field _pooledObjectHash, offset: 0x44, size: 0x4, def value: None
 int32_t  ____pooledObjectHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpawnPooledObject, ____spawnLocation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnPooledObject, ____pooledObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnPooledObject, ___offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnPooledObject, ___upright) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnPooledObject, ___facePlayer) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnPooledObject, ___chanceToSpawn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnPooledObject, ____pooledObjectHash) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpawnPooledObject) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
