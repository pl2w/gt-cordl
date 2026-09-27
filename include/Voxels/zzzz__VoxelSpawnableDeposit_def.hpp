#pragma once
// IWYU pragma private; include "Voxels/VoxelSpawnableDeposit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelSpawnableDeposit)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace Voxels {
class VoxelSpawnableDeposit;
}
// Write type traits
MARK_REF_T(::Voxels::VoxelSpawnableDeposit*);
DEFINE_IL2CPP_CLASS(::Voxels::VoxelSpawnableDeposit*, "Voxels", "VoxelSpawnableDeposit");
// [RequireComponent(typeof(GameEntity))]
// Dependencies UnityEngine.MonoBehaviour
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelSpawnableDeposit
class CORDL_TYPE VoxelSpawnableDeposit : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field fx, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fx, put=__cordl_internal_set_fx)) ::UnityW<::UnityEngine::ParticleSystem>  fx;

/// @brief Field text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::TMPro::TMP_Text>  text;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

static inline ::Voxels::VoxelSpawnableDeposit* New_ctor() ;

/// @brief Method OnDisable, addr 0x5dd0274, size 0xe8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5dd018c, size 0xe8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityDestroy, addr 0x5dd0430, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x5dd042c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x5dd0434, size 0xc0, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

/// @brief Method OnLeftRoom, addr 0x5dd035c, size 0x1c, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnTriggerEnter, addr 0x5dd0378, size 0xb4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method Reset, addr 0x5dd0040, size 0xfc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetCounter, addr 0x5dd0144, size 0x48, virtual false, abstract: false, final false
inline void SetCounter(int32_t  count) ;

/// @brief Method Start, addr 0x5dd013c, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_fx() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_fx() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_fx(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5dd04f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelSpawnableDeposit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelSpawnableDeposit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelSpawnableDeposit(VoxelSpawnableDeposit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelSpawnableDeposit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelSpawnableDeposit(VoxelSpawnableDeposit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5079};

/// [SerializeField]
/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// [SerializeField]
/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___text;

/// [SerializeField]
/// @brief Field fx, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___fx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelSpawnableDeposit, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnableDeposit, ___text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnableDeposit, ___fx) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelSpawnableDeposit) == 0x38, "Size mismatch!");

} // namespace end def Voxels
