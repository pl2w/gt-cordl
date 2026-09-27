#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomCarveableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomCarveableObject)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
struct RandomCarveableObject__SpawnCarveable_d__30;
}
namespace GlobalNamespace {
class RigEventVolume;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomCarveableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RandomCarveableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomCarveableObject*, "", "RandomCarveableObject");
// [NetworkBehaviourWeaved(0)]
// Dependencies NetworkComponent, Unity.Mathematics.int3, UnityEngine.BoundsInt, UnityEngine.GameObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomCarveableObject
class CORDL_TYPE RandomCarveableObject : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using _SpawnCarveable_d__30 = ::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30;

 __declspec(property(get=get_HasAuthority)) bool  HasAuthority;

/// @brief Field _buttonConfigured, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__buttonConfigured, put=__cordl_internal_set__buttonConfigured)) bool  _buttonConfigured;

/// @brief Field _canRequestNewCarveable, offset 0x111, size 0x1 
 __declspec(property(get=__cordl_internal_get__canRequestNewCarveable, put=__cordl_internal_set__canRequestNewCarveable)) bool  _canRequestNewCarveable;

/// @brief Field _carveable, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__carveable, put=__cordl_internal_set__carveable)) ::UnityW<::UnityEngine::GameObject>  _carveable;

/// @brief Field _carveableIndex, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__carveableIndex, put=__cordl_internal_set__carveableIndex)) int32_t  _carveableIndex;

/// @brief Field _version, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get__version, put=__cordl_internal_set__version)) int32_t  _version;

/// @brief Field _voxelBounds, offset 0xf8, size 0x18 
 __declspec(property(get=__cordl_internal_get__voxelBounds, put=__cordl_internal_set__voxelBounds)) ::UnityEngine::BoundsInt  _voxelBounds;

/// @brief Field _voxels, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__voxels, put=__cordl_internal_set__voxels)) ::ArrayW<::Unity::Mathematics::int3>  _voxels;

/// @brief Field button, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  button;

/// @brief Field materialId, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_materialId, put=__cordl_internal_set_materialId)) uint8_t  materialId;

/// @brief Field prefabs, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabs, put=__cordl_internal_set_prefabs)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  prefabs;

/// @brief Field proximityTrigger, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_proximityTrigger, put=__cordl_internal_set_proximityTrigger)) ::UnityW<::GlobalNamespace::RigEventVolume>  proximityTrigger;

/// @brief Field spamCheck, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_spamCheck, put=__cordl_internal_set_spamCheck)) ::GlobalNamespace::CallLimiter*  spamCheck;

/// @brief Field spawnFX, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnFX, put=__cordl_internal_set_spawnFX)) ::UnityW<::UnityEngine::GameObject>  spawnFX;

/// @brief Field spawnPoint, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPoint, put=__cordl_internal_set_spawnPoint)) ::UnityW<::UnityEngine::Transform>  spawnPoint;

/// @brief Field world, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_world, put=__cordl_internal_set_world)) ::UnityW<::Voxels::VoxelWorld>  world;

/// @brief Method ClearWorld, addr 0x5d177b8, size 0xa4, virtual false, abstract: false, final false
inline void ClearWorld() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5d18014, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5d1801c, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method FillBounds, addr 0x5d1785c, size 0x8, virtual false, abstract: false, final false
inline void FillBounds() ;

/// @brief Method IncrementVersion, addr 0x5d17d98, size 0x10, virtual false, abstract: false, final false
inline void IncrementVersion() ;

/// @brief Method Init, addr 0x5d17524, size 0x58, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method IsValidAuthorityRPC, addr 0x5d17c50, size 0x8c, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method IsValidPrefab, addr 0x5d176d4, size 0x2c, virtual false, abstract: false, final false
inline bool IsValidPrefab(int32_t  index) ;

static inline ::GlobalNamespace::RandomCarveableObject* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d1757c, size 0x124, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPlayerCountChanged, addr 0x5d174f0, size 0x34, virtual false, abstract: false, final false
inline void OnPlayerCountChanged() ;

/// @brief Method OnStateChange, addr 0x5d17f0c, size 0x2c, virtual false, abstract: false, final false
inline void OnStateChange(int32_t  newIndex, int32_t  newVersion) ;

/// [PunRPC]
/// @brief Method RPC_SpawnRandomCarveable, addr 0x5d17cdc, size 0xbc, virtual false, abstract: false, final false
inline void RPC_SpawnRandomCarveable(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadDataFusion, addr 0x5d17dac, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5d17e2c, size 0xe0, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestSpawnRandomCarveable, addr 0x5d17b18, size 0x138, virtual false, abstract: false, final false
inline void RequestSpawnRandomCarveable() ;

/// @brief Method SetBoundsDensity, addr 0x5d17864, size 0x80, virtual false, abstract: false, final false
inline void SetBoundsDensity(uint8_t  density) ;

/// @brief Method SetCanRequestNewCarveable, addr 0x5d17ac0, size 0x58, virtual false, abstract: false, final false
inline void SetCanRequestNewCarveable(bool  active) ;

/// @brief Method SetCarveable, addr 0x5d178e4, size 0x1dc, virtual false, abstract: false, final false
inline void SetCarveable(int32_t  index) ;

/// [AsyncStateMachine(typeof(RandomCarveableObject::<SpawnCarveable>d__30))]
/// @brief Method SpawnCarveable, addr 0x5d17700, size 0xb8, virtual false, abstract: false, final false
inline void SpawnCarveable(int32_t  index) ;

/// @brief Method SpawnRandomCarveable, addr 0x5d176a0, size 0x34, virtual false, abstract: false, final false
inline void SpawnRandomCarveable() ;

/// @brief Method Start, addr 0x5d173bc, size 0x134, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method WriteDataFusion, addr 0x5d17da8, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5d17db0, size 0x7c, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [CompilerGenerated]
/// @brief Method <SpawnCarveable>b__30_0, addr 0x5d17fb8, size 0x18, virtual false, abstract: false, final false
inline bool _SpawnCarveable_b__30_0() ;

/// [CompilerGenerated]
/// @brief Method <SpawnCarveable>b__30_1, addr 0x5d17fd0, size 0x44, virtual false, abstract: false, final false
inline bool _SpawnCarveable_b__30_1() ;

constexpr bool const& __cordl_internal_get__buttonConfigured() const;

constexpr bool& __cordl_internal_get__buttonConfigured() ;

constexpr bool const& __cordl_internal_get__canRequestNewCarveable() const;

constexpr bool& __cordl_internal_get__canRequestNewCarveable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__carveable() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__carveable() ;

constexpr int32_t const& __cordl_internal_get__carveableIndex() const;

constexpr int32_t& __cordl_internal_get__carveableIndex() ;

constexpr int32_t const& __cordl_internal_get__version() const;

constexpr int32_t& __cordl_internal_get__version() ;

constexpr ::UnityEngine::BoundsInt const& __cordl_internal_get__voxelBounds() const;

constexpr ::UnityEngine::BoundsInt& __cordl_internal_get__voxelBounds() ;

constexpr ::ArrayW<::Unity::Mathematics::int3> const& __cordl_internal_get__voxels() const;

constexpr ::ArrayW<::Unity::Mathematics::int3>& __cordl_internal_get__voxels() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_button() ;

constexpr uint8_t const& __cordl_internal_get_materialId() const;

constexpr uint8_t& __cordl_internal_get_materialId() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_prefabs() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_prefabs() ;

constexpr ::UnityW<::GlobalNamespace::RigEventVolume> const& __cordl_internal_get_proximityTrigger() const;

constexpr ::UnityW<::GlobalNamespace::RigEventVolume>& __cordl_internal_get_proximityTrigger() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_spamCheck() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_spamCheck() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spawnFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spawnFX() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnPoint() ;

constexpr ::UnityW<::Voxels::VoxelWorld> const& __cordl_internal_get_world() const;

constexpr ::UnityW<::Voxels::VoxelWorld>& __cordl_internal_get_world() ;

constexpr void __cordl_internal_set__buttonConfigured(bool  value) ;

constexpr void __cordl_internal_set__canRequestNewCarveable(bool  value) ;

constexpr void __cordl_internal_set__carveable(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__carveableIndex(int32_t  value) ;

constexpr void __cordl_internal_set__version(int32_t  value) ;

constexpr void __cordl_internal_set__voxelBounds(::UnityEngine::BoundsInt  value) ;

constexpr void __cordl_internal_set__voxels(::ArrayW<::Unity::Mathematics::int3>  value) ;

constexpr void __cordl_internal_set_button(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_materialId(uint8_t  value) ;

constexpr void __cordl_internal_set_prefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_proximityTrigger(::UnityW<::GlobalNamespace::RigEventVolume>  value) ;

constexpr void __cordl_internal_set_spamCheck(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_spawnFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spawnPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_world(::UnityW<::Voxels::VoxelWorld>  value) ;

/// @brief Method .ctor, addr 0x5d17f38, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasAuthority, addr 0x5d1736c, size 0x50, virtual false, abstract: false, final false
inline bool get_HasAuthority() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomCarveableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomCarveableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomCarveableObject(RandomCarveableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomCarveableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomCarveableObject(RandomCarveableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{492};

/// [SerializeField]
/// @brief Field spawnPoint, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnPoint;

/// [SerializeField]
/// @brief Field prefabs, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___prefabs;

/// [SerializeField]
/// @brief Field materialId, offset: 0xb0, size: 0x1, def value: None
 uint8_t  ___materialId;

/// [SerializeField]
/// @brief Field world, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::Voxels::VoxelWorld>  ___world;

/// [SerializeField]
/// @brief Field spawnFX, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spawnFX;

/// [SerializeField]
/// @brief Field spamCheck, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___spamCheck;

/// [SerializeField]
/// @brief Field proximityTrigger, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigEventVolume>  ___proximityTrigger;

/// [SerializeField]
/// @brief Field button, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___button;

/// @brief Field _carveableIndex, offset: 0xe0, size: 0x4, def value: None
 int32_t  ____carveableIndex;

/// @brief Field _version, offset: 0xe4, size: 0x4, def value: None
 int32_t  ____version;

/// @brief Field _carveable, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____carveable;

/// @brief Field _voxels, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<::Unity::Mathematics::int3>  ____voxels;

/// @brief Field _voxelBounds, offset: 0xf8, size: 0x18, def value: None
 ::UnityEngine::BoundsInt  ____voxelBounds;

/// @brief Field _buttonConfigured, offset: 0x110, size: 0x1, def value: None
 bool  ____buttonConfigured;

/// @brief Field _canRequestNewCarveable, offset: 0x111, size: 0x1, def value: None
 bool  ____canRequestNewCarveable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ___spawnPoint) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ___prefabs) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ___materialId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ___world) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ___spawnFX) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ___spamCheck) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ___proximityTrigger) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ___button) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ____carveableIndex) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ____version) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ____carveable) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ____voxels) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ____voxelBounds) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ____buttonConfigured) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomCarveableObject, ____canRequestNewCarveable) == 0x111, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RandomCarveableObject) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
