#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomMuteEnforcer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RoomMuteEnforcer)
namespace GlobalNamespace {
class RigContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomMuteEnforcer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoomMuteEnforcer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomMuteEnforcer*, "", "RoomMuteEnforcer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomMuteEnforcer
class CORDL_TYPE RoomMuteEnforcer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::RoomMuteEnforcer* New_ctor() ;

/// @brief Method OnDisable, addr 0x5adb484, size 0x1f8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5adb28c, size 0x1f8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetRoomMute, addr 0x5adb67c, size 0x354, virtual false, abstract: false, final false
inline void SetRoomMute(::StringW  userId, bool  muted) ;

/// @brief Method SyncAllRoomMutes, addr 0x5adbb28, size 0x2f4, virtual false, abstract: false, final false
inline void SyncAllRoomMutes() ;

/// @brief Method SyncRoomMute, addr 0x5adb9d0, size 0x158, virtual false, abstract: false, final false
inline void SyncRoomMute(::GlobalNamespace::RigContainer*  rig) ;

/// @brief Method .ctor, addr 0x5adbe1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomMuteEnforcer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomMuteEnforcer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomMuteEnforcer(RoomMuteEnforcer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomMuteEnforcer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomMuteEnforcer(RoomMuteEnforcer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3402};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RoomMuteEnforcer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
