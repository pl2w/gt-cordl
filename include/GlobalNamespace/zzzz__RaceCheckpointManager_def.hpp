#pragma once
// IWYU pragma private; include "GlobalNamespace/RaceCheckpointManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RaceCheckpoint_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RaceCheckpointManager)
namespace GlobalNamespace {
class RaceVisual;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GlobalNamespace {
class RaceCheckpointManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RaceCheckpointManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RaceCheckpointManager*, "", "RaceCheckpointManager");
// Dependencies RaceCheckpoint, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RaceCheckpointManager
class CORDL_TYPE RaceCheckpointManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field checkpoints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkpoints, put=__cordl_internal_set_checkpoints)) ::ArrayW<::UnityW<::GlobalNamespace::RaceCheckpoint>>  checkpoints;

/// @brief Field visual, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_visual, put=__cordl_internal_set_visual)) ::UnityW<::GlobalNamespace::RaceVisual>  visual;

/// @brief Method IsPlayerNearCheckpoint, addr 0x568e8e0, size 0x68, virtual false, abstract: false, final false
inline bool IsPlayerNearCheckpoint(::GlobalNamespace::VRRig*  player, int32_t  checkpointIdx) ;

static inline ::GlobalNamespace::RaceCheckpointManager* New_ctor() ;

/// @brief Method OnCheckpointReached, addr 0x568e624, size 0x94, virtual false, abstract: false, final false
inline void OnCheckpointReached(int32_t  index, ::GlobalNamespace::SoundBankPlayer*  checkpointSound) ;

/// @brief Method OnRaceEnd, addr 0x568e788, size 0x60, virtual false, abstract: false, final false
inline void OnRaceEnd() ;

/// @brief Method OnRaceStart, addr 0x568e7e8, size 0x64, virtual false, abstract: false, final false
inline void OnRaceStart() ;

/// @brief Method Start, addr 0x568e6c0, size 0xc8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::RaceCheckpoint>> const& __cordl_internal_get_checkpoints() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::RaceCheckpoint>>& __cordl_internal_get_checkpoints() ;

constexpr ::UnityW<::GlobalNamespace::RaceVisual> const& __cordl_internal_get_visual() const;

constexpr ::UnityW<::GlobalNamespace::RaceVisual>& __cordl_internal_get_visual() ;

constexpr void __cordl_internal_set_checkpoints(::ArrayW<::UnityW<::GlobalNamespace::RaceCheckpoint>>  value) ;

constexpr void __cordl_internal_set_visual(::UnityW<::GlobalNamespace::RaceVisual>  value) ;

/// @brief Method .ctor, addr 0x568e948, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RaceCheckpointManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RaceCheckpointManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RaceCheckpointManager(RaceCheckpointManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaceCheckpointManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaceCheckpointManager(RaceCheckpointManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{877};

/// [SerializeField]
/// @brief Field checkpoints, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::RaceCheckpoint>>  ___checkpoints;

/// @brief Field visual, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RaceVisual>  ___visual;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RaceCheckpointManager, ___checkpoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceCheckpointManager, ___visual) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RaceCheckpointManager) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
