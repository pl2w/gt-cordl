#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveForcedLeaveRoomVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaTagCompetitiveForcedLeaveRoomVolume)
namespace GlobalNamespace {
class GorillaTagCompetitiveManager;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagCompetitiveForcedLeaveRoomVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*, "", "GorillaTagCompetitiveForcedLeaveRoomVolume");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveForcedLeaveRoomVolume
class CORDL_TYPE GorillaTagCompetitiveForcedLeaveRoomVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field CompetitiveManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompetitiveManager, put=__cordl_internal_set_CompetitiveManager)) ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  CompetitiveManager;

/// @brief Field VolumeCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_VolumeCollider, put=__cordl_internal_set_VolumeCollider)) ::UnityW<::UnityEngine::Collider>  VolumeCollider;

/// @brief Method ContainsPoint, addr 0x5925b4c, size 0x1b0, virtual false, abstract: false, final false
inline bool ContainsPoint(::UnityEngine::Vector3  position) ;

static inline ::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5925a70, size 0x84, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5925804, size 0x188, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager> const& __cordl_internal_get_CompetitiveManager() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>& __cordl_internal_get_CompetitiveManager() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_VolumeCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_VolumeCollider() ;

constexpr void __cordl_internal_set_CompetitiveManager(::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  value) ;

constexpr void __cordl_internal_set_VolumeCollider(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x5925cfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveForcedLeaveRoomVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveForcedLeaveRoomVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveForcedLeaveRoomVolume(GorillaTagCompetitiveForcedLeaveRoomVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveForcedLeaveRoomVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveForcedLeaveRoomVolume(GorillaTagCompetitiveForcedLeaveRoomVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2218};

/// @brief Field CompetitiveManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  ___CompetitiveManager;

/// @brief Field VolumeCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___VolumeCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume, ___CompetitiveManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume, ___VolumeCollider) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
