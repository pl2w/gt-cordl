#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaNetworkLeaveRoomTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaNetworkLeaveRoomTrigger)
namespace GlobalNamespace {
struct GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2;
}
// Forward declare root types
namespace GorillaNetworking {
class GorillaNetworkLeaveRoomTrigger;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaNetworkLeaveRoomTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaNetworkLeaveRoomTrigger*, "GorillaNetworking", "GorillaNetworkLeaveRoomTrigger");
// Dependencies GorillaTriggerBox
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaNetworkLeaveRoomTrigger
class CORDL_TYPE GorillaNetworkLeaveRoomTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
using _DisconnectAfterDelay_d__2 = ::GlobalNamespace::GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2;

/// @brief Field excludePrivateRooms, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_excludePrivateRooms, put=__cordl_internal_set_excludePrivateRooms)) bool  excludePrivateRooms;

/// [AsyncStateMachine(typeof(GorillaNetworking.GorillaNetworkLeaveRoomTrigger::<DisconnectAfterDelay>d__2))]
/// @brief Method DisconnectAfterDelay, addr 0x5c8bc4c, size 0xa4, virtual false, abstract: false, final false
inline void DisconnectAfterDelay(float_t  seconds) ;

static inline ::GorillaNetworking::GorillaNetworkLeaveRoomTrigger* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x5c8ba80, size 0x1cc, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr bool const& __cordl_internal_get_excludePrivateRooms() const;

constexpr bool& __cordl_internal_get_excludePrivateRooms() ;

constexpr void __cordl_internal_set_excludePrivateRooms(bool  value) ;

/// @brief Method .ctor, addr 0x5c8bcf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkLeaveRoomTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkLeaveRoomTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaNetworkLeaveRoomTrigger(GorillaNetworkLeaveRoomTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkLeaveRoomTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaNetworkLeaveRoomTrigger(GorillaNetworkLeaveRoomTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4346};

/// [SerializeField]
/// @brief Field excludePrivateRooms, offset: 0x20, size: 0x1, def value: None
 bool  ___excludePrivateRooms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaNetworkLeaveRoomTrigger, ___excludePrivateRooms) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaNetworkLeaveRoomTrigger) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
