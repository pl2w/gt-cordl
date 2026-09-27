#pragma once
// IWYU pragma private; include "GorillaNetworking/BroadcastMyRoomRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BroadcastMyRoomRequest)
// Forward declare root types
namespace GorillaNetworking {
class BroadcastMyRoomRequest;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::BroadcastMyRoomRequest*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::BroadcastMyRoomRequest*, "GorillaNetworking", "BroadcastMyRoomRequest");
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.BroadcastMyRoomRequest
class CORDL_TYPE BroadcastMyRoomRequest : public ::System::Object {
public:
// Declarations
/// @brief Field KeyToFollow, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeyToFollow, put=__cordl_internal_set_KeyToFollow)) ::StringW  KeyToFollow;

/// @brief Field RoomToJoin, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomToJoin, put=__cordl_internal_set_RoomToJoin)) ::StringW  RoomToJoin;

/// @brief Field Set, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Set, put=__cordl_internal_set_Set)) bool  Set;

static inline ::GorillaNetworking::BroadcastMyRoomRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_KeyToFollow() const;

constexpr ::StringW& __cordl_internal_get_KeyToFollow() ;

constexpr ::StringW const& __cordl_internal_get_RoomToJoin() const;

constexpr ::StringW& __cordl_internal_get_RoomToJoin() ;

constexpr bool const& __cordl_internal_get_Set() const;

constexpr bool& __cordl_internal_get_Set() ;

constexpr void __cordl_internal_set_KeyToFollow(::StringW  value) ;

constexpr void __cordl_internal_set_RoomToJoin(::StringW  value) ;

constexpr void __cordl_internal_set_Set(bool  value) ;

/// @brief Method .ctor, addr 0x5c8c24c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BroadcastMyRoomRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BroadcastMyRoomRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BroadcastMyRoomRequest(BroadcastMyRoomRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BroadcastMyRoomRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BroadcastMyRoomRequest(BroadcastMyRoomRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4350};

/// @brief Field KeyToFollow, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___KeyToFollow;

/// @brief Field RoomToJoin, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___RoomToJoin;

/// @brief Field Set, offset: 0x20, size: 0x1, def value: None
 bool  ___Set;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::BroadcastMyRoomRequest, ___KeyToFollow) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::BroadcastMyRoomRequest, ___RoomToJoin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::BroadcastMyRoomRequest, ___Set) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::BroadcastMyRoomRequest) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
