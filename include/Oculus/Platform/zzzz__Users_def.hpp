#pragma once
// IWYU pragma private; include "Oculus/Platform/Users.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Users)
namespace Oculus::Platform::Models {
class BlockedUserList;
}
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
namespace Oculus::Platform::Models {
class OrgScopedID;
}
namespace Oculus::Platform::Models {
class SdkAccountList;
}
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
class UserOptions;
}
// Forward declare root types
namespace Oculus::Platform {
class Users;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::Users*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Users*, "Oculus.Platform", "Users");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Users
class CORDL_TYPE Users : public ::System::Object {
public:
// Declarations
/// @brief Method Get, addr 0xa545400, size 0x17c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* Get(uint64_t  userID) ;

/// @brief Method GetAccessToken, addr 0xa54557c, size 0x174, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::StringW>* GetAccessToken() ;

/// @brief Method GetBlockedUsers, addr 0xa5456f0, size 0x174, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* GetBlockedUsers() ;

/// @brief Method GetLinkedAccounts, addr 0xa545864, size 0x198, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>* GetLinkedAccounts(::Oculus::Platform::UserOptions*  userOptions) ;

/// @brief Method GetLoggedInUser, addr 0xa5459fc, size 0x174, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* GetLoggedInUser() ;

/// @brief Method GetLoggedInUserFriends, addr 0xa545b70, size 0x174, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetLoggedInUserFriends() ;

/// @brief Method GetLoggedInUserID, addr 0xa5451e8, size 0x12c, virtual false, abstract: false, final false
static inline uint64_t GetLoggedInUserID() ;

/// @brief Method GetLoggedInUserLocale, addr 0xa545314, size 0xec, virtual false, abstract: false, final false
static inline ::StringW GetLoggedInUserLocale() ;

/// @brief Method GetLoggedInUserManagedInfo, addr 0xa545ce4, size 0x174, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* GetLoggedInUserManagedInfo() ;

/// @brief Method GetNextBlockedUserListPage, addr 0xa546730, size 0x1fc, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* GetNextBlockedUserListPage(::Oculus::Platform::Models::BlockedUserList*  list) ;

/// @brief Method GetNextUserCapabilityListPage, addr 0xa546b28, size 0x1fc, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserCapabilityList*>* GetNextUserCapabilityListPage(::Oculus::Platform::Models::UserCapabilityList*  list) ;

/// @brief Method GetNextUserListPage, addr 0xa54692c, size 0x1fc, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetNextUserListPage(::Oculus::Platform::Models::UserList*  list) ;

/// @brief Method GetOrgScopedID, addr 0xa545e58, size 0x17c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::OrgScopedID*>* GetOrgScopedID(uint64_t  userID) ;

/// @brief Method GetSdkAccounts, addr 0xa545fd4, size 0x174, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SdkAccountList*>* GetSdkAccounts() ;

/// @brief Method GetUserProof, addr 0xa546148, size 0x174, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserProof*>* GetUserProof() ;

/// @brief Method LaunchBlockFlow, addr 0xa5462bc, size 0x17c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchBlockFlowResult*>* LaunchBlockFlow(uint64_t  userID) ;

/// @brief Method LaunchFriendRequestFlow, addr 0xa546438, size 0x17c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>* LaunchFriendRequestFlow(uint64_t  userID) ;

/// @brief Method LaunchUnblockFlow, addr 0xa5465b4, size 0x17c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchUnblockFlowResult*>* LaunchUnblockFlow(uint64_t  userID) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Users() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Users", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Users(Users && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Users", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Users(Users const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26873};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::Users) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Platform
