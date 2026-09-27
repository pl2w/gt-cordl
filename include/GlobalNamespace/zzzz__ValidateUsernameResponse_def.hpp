#pragma once
// IWYU pragma private; include "GlobalNamespace/ValidateUsernameResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ValidateUsernameResponse)
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
class ValidateUsernameResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ValidateUsernameResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ValidateUsernameResponse*, "", "ValidateUsernameResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ValidateUsernameResponse
class CORDL_TYPE ValidateUsernameResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_recent_flagged_usernames, put=set_recent_flagged_usernames)) ::GlobalNamespace::StringVector*  recent_flagged_usernames;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_user_id, put=set_user_id)) ::StringW  user_id;

 __declspec(property(get=get_username, put=set_username)) ::StringW  username;

/// @brief Method Dispose, addr 0x53b4094, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53b4838, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ValidateUsernameResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::ValidateUsernameResponse* New_ctor() ;

static inline ::GlobalNamespace::ValidateUsernameResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x53b4754, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53b4950, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53b3f04, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53b3fb8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ValidateUsernameResponse*  obj) ;

/// @brief Method get_recent_flagged_usernames, addr 0x53b4648, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_recent_flagged_usernames() ;

/// @brief Method get_user_id, addr 0x53b4484, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_user_id() ;

/// @brief Method get_username, addr 0x53b42d8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_username() ;

/// @brief Method set_recent_flagged_usernames, addr 0x53b4558, size 0xf0, virtual false, abstract: false, final false
inline void set_recent_flagged_usernames(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_user_id, addr 0x53b43ac, size 0xd8, virtual false, abstract: false, final false
inline void set_user_id(::StringW  value) ;

/// @brief Method set_username, addr 0x53b4200, size 0xd8, virtual false, abstract: false, final false
inline void set_username(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53b3ff8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ValidateUsernameResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValidateUsernameResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValidateUsernameResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidateUsernameResponse(ValidateUsernameResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidateUsernameResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidateUsernameResponse(ValidateUsernameResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9736};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ValidateUsernameResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ValidateUsernameResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
