#pragma once
// IWYU pragma private; include "GlobalNamespace/LoginResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoginResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class StringVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class LoginResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LoginResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LoginResponse*, "", "LoginResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: LoginResponse
class CORDL_TYPE LoginResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_ExpirationTime, put=set_ExpirationTime)) int64_t  ExpirationTime;

 __declspec(property(get=get_ExternalAccountId, put=set_ExternalAccountId)) ::StringW  ExternalAccountId;

 __declspec(property(get=get_ExternalAccountNickname, put=set_ExternalAccountNickname)) ::StringW  ExternalAccountNickname;

 __declspec(property(get=get_MothershipPlayerId, put=set_MothershipPlayerId)) ::StringW  MothershipPlayerId;

 __declspec(property(get=get_ServerTime, put=set_ServerTime)) int64_t  ServerTime;

 __declspec(property(get=get_Tags, put=set_Tags)) ::GlobalNamespace::StringVector*  Tags;

 __declspec(property(get=get_Token, put=set_Token)) ::StringW  Token;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x548bb70, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x548c9c4, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LoginResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::LoginResponse* New_ctor() ;

static inline ::GlobalNamespace::LoginResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x548bcdc, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x548cadc, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x548b9e0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x548ba94, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::LoginResponse*  obj) ;

/// @brief Method get_ExpirationTime, addr 0x548c548, size 0xd4, virtual false, abstract: false, final false
inline int64_t get_ExpirationTime() ;

/// @brief Method get_ExternalAccountId, addr 0x548c1f0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ExternalAccountId() ;

/// @brief Method get_ExternalAccountNickname, addr 0x548c044, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ExternalAccountNickname() ;

/// @brief Method get_MothershipPlayerId, addr 0x548be98, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_MothershipPlayerId() ;

/// @brief Method get_ServerTime, addr 0x548c39c, size 0xd4, virtual false, abstract: false, final false
inline int64_t get_ServerTime() ;

/// @brief Method get_Tags, addr 0x548c70c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_Tags() ;

/// @brief Method get_Token, addr 0x548c8f0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Token() ;

/// @brief Method set_ExpirationTime, addr 0x548c470, size 0xd8, virtual false, abstract: false, final false
inline void set_ExpirationTime(int64_t  value) ;

/// @brief Method set_ExternalAccountId, addr 0x548c118, size 0xd8, virtual false, abstract: false, final false
inline void set_ExternalAccountId(::StringW  value) ;

/// @brief Method set_ExternalAccountNickname, addr 0x548bf6c, size 0xd8, virtual false, abstract: false, final false
inline void set_ExternalAccountNickname(::StringW  value) ;

/// @brief Method set_MothershipPlayerId, addr 0x548bdc0, size 0xd8, virtual false, abstract: false, final false
inline void set_MothershipPlayerId(::StringW  value) ;

/// @brief Method set_ServerTime, addr 0x548c2c4, size 0xd8, virtual false, abstract: false, final false
inline void set_ServerTime(int64_t  value) ;

/// @brief Method set_Tags, addr 0x548c61c, size 0xf0, virtual false, abstract: false, final false
inline void set_Tags(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_Token, addr 0x548c818, size 0xd8, virtual false, abstract: false, final false
inline void set_Token(::StringW  value) ;

/// @brief Method swigRelease, addr 0x548bad4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::LoginResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginResponse(LoginResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginResponse(LoginResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9275};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LoginResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LoginResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
