#pragma once
// IWYU pragma private; include "GlobalNamespace/VerifyTokenResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VerifyTokenResponse)
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
class VerifyTokenResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VerifyTokenResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VerifyTokenResponse*, "", "VerifyTokenResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: VerifyTokenResponse
class CORDL_TYPE VerifyTokenResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_ExternalAccountId, put=set_ExternalAccountId)) ::StringW  ExternalAccountId;

 __declspec(property(get=get_ExternalAccountNickname, put=set_ExternalAccountNickname)) ::StringW  ExternalAccountNickname;

 __declspec(property(get=get_ExternalAccountOrgScopedId, put=set_ExternalAccountOrgScopedId)) ::StringW  ExternalAccountOrgScopedId;

 __declspec(property(get=get_ExternalAccountType, put=set_ExternalAccountType)) ::StringW  ExternalAccountType;

 __declspec(property(get=get_MothershipPlayerId, put=set_MothershipPlayerId)) ::StringW  MothershipPlayerId;

 __declspec(property(get=get_Tags, put=set_Tags)) ::GlobalNamespace::StringVector*  Tags;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53b65d0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53b6820, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::VerifyTokenResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::VerifyTokenResponse* New_ctor() ;

static inline ::GlobalNamespace::VerifyTokenResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x53b673c, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53b7390, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53b6440, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53b64f4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::VerifyTokenResponse*  obj) ;

/// @brief Method get_ExternalAccountId, addr 0x53b6d68, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ExternalAccountId() ;

/// @brief Method get_ExternalAccountNickname, addr 0x53b6bbc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ExternalAccountNickname() ;

/// @brief Method get_ExternalAccountOrgScopedId, addr 0x53b6f14, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ExternalAccountOrgScopedId() ;

/// @brief Method get_ExternalAccountType, addr 0x53b70c0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ExternalAccountType() ;

/// @brief Method get_MothershipPlayerId, addr 0x53b6a10, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_MothershipPlayerId() ;

/// @brief Method get_Tags, addr 0x53b7284, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_Tags() ;

/// @brief Method set_ExternalAccountId, addr 0x53b6c90, size 0xd8, virtual false, abstract: false, final false
inline void set_ExternalAccountId(::StringW  value) ;

/// @brief Method set_ExternalAccountNickname, addr 0x53b6ae4, size 0xd8, virtual false, abstract: false, final false
inline void set_ExternalAccountNickname(::StringW  value) ;

/// @brief Method set_ExternalAccountOrgScopedId, addr 0x53b6e3c, size 0xd8, virtual false, abstract: false, final false
inline void set_ExternalAccountOrgScopedId(::StringW  value) ;

/// @brief Method set_ExternalAccountType, addr 0x53b6fe8, size 0xd8, virtual false, abstract: false, final false
inline void set_ExternalAccountType(::StringW  value) ;

/// @brief Method set_MothershipPlayerId, addr 0x53b6938, size 0xd8, virtual false, abstract: false, final false
inline void set_MothershipPlayerId(::StringW  value) ;

/// @brief Method set_Tags, addr 0x53b7194, size 0xf0, virtual false, abstract: false, final false
inline void set_Tags(::GlobalNamespace::StringVector*  value) ;

/// @brief Method swigRelease, addr 0x53b6534, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::VerifyTokenResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VerifyTokenResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VerifyTokenResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VerifyTokenResponse(VerifyTokenResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VerifyTokenResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VerifyTokenResponse(VerifyTokenResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9741};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VerifyTokenResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VerifyTokenResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
