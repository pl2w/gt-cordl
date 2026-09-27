#pragma once
// IWYU pragma private; include "Viveport/User.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(User)
namespace Viveport::Internal {
class StatusCallback;
}
namespace Viveport {
class StatusCallback;
}
// Forward declare root types
namespace Viveport {
class User;
}
// Write type traits
MARK_REF_T(::Viveport::User*);
DEFINE_IL2CPP_CLASS(::Viveport::User*, "Viveport", "User");
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.User
class CORDL_TYPE User : public ::System::Object {
public:
// Declarations
/// @brief Field isReadyIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_isReadyIl2cppCallback, put=setStaticF_isReadyIl2cppCallback)) ::Viveport::Internal::StatusCallback*  isReadyIl2cppCallback;

/// @brief Method GetUserAvatarUrl, addr 0x5b4d4d0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetUserAvatarUrl() ;

/// @brief Method GetUserId, addr 0x5b4d2c8, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetUserId() ;

/// @brief Method GetUserName, addr 0x5b4d3cc, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetUserName() ;

/// @brief Method IsReady, addr 0x5b4cf94, size 0x1e8, virtual false, abstract: false, final false
static inline int32_t IsReady(::Viveport::StatusCallback*  callback) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback))]
/// @brief Method IsReadyIl2cppCallback, addr 0x5b4cf30, size 0x64, virtual false, abstract: false, final false
static inline void IsReadyIl2cppCallback(int32_t  errorCode) ;

static inline ::Viveport::User* New_ctor() ;

/// @brief Method .ctor, addr 0x5b4d5d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Viveport::Internal::StatusCallback* getStaticF_isReadyIl2cppCallback() ;

static inline void setStaticF_isReadyIl2cppCallback(::Viveport::Internal::StatusCallback*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3763};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::User) == 0x10, "Size mismatch!");

} // namespace end def Viveport
