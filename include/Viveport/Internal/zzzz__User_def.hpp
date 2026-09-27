#pragma once
// IWYU pragma private; include "Viveport/Internal/User.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(User)
namespace Viveport::Internal {
class StatusCallback;
}
// Forward declare root types
namespace Viveport::Internal {
class User;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::User*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::User*, "Viveport.Internal", "User");
// Dependencies System.Object
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.User
class CORDL_TYPE User : public ::System::Object {
public:
// Declarations
/// @brief Method GetUserAvatarUrl, addr 0x5b4d4f0, size 0xe4, virtual false, abstract: false, final false
static inline ::StringW GetUserAvatarUrl() ;

/// @brief Method GetUserId, addr 0x5b4d2e8, size 0xe4, virtual false, abstract: false, final false
static inline ::StringW GetUserId() ;

/// @brief Method GetUserName, addr 0x5b4d3ec, size 0xe4, virtual false, abstract: false, final false
static inline ::StringW GetUserName() ;

/// @brief Method IsReady, addr 0x5b4d17c, size 0x14c, virtual false, abstract: false, final false
static inline int32_t IsReady(::Viveport::Internal::StatusCallback*  callback) ;

static inline ::Viveport::Internal::User* New_ctor() ;

/// @brief Method .ctor, addr 0x5b59a88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr User() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "User", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
User(User && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "User", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
User(User const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3806};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::User) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Internal
