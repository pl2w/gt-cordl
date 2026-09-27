#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest_AuthorizationState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__HttpWebRequest_NtlmAuthState_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HttpWebRequest_AuthorizationState)
namespace GlobalNamespace {
struct HttpWebRequest_NtlmAuthState;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class WebResponse;
}
// Forward declare root types
namespace GlobalNamespace {
struct HttpWebRequest_AuthorizationState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HttpWebRequest_AuthorizationState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HttpWebRequest_AuthorizationState, "System.Net", "HttpWebRequest/AuthorizationState");
// Dependencies System.Net.HttpWebRequest::NtlmAuthState
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.HttpWebRequest/AuthorizationState
struct CORDL_TYPE HttpWebRequest_AuthorizationState {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_IsNtlmAuthenticated)) bool  IsNtlmAuthenticated;

 __declspec(property(get=get_NtlmAuthState)) ::GlobalNamespace::HttpWebRequest_NtlmAuthState  NtlmAuthState;

/// @brief Method CheckAuthorization, addr 0xaca5ddc, size 0x320, virtual false, abstract: false, final false
inline bool CheckAuthorization(::System::Net::WebResponse*  response, ::System::Net::HttpStatusCode  code) ;

/// @brief Method Reset, addr 0xaca678c, size 0x84, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ToString, addr 0xaca6a7c, size 0xec, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xaca0be8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Net::HttpWebRequest*  request, bool  isProxy) ;

/// @brief Method get_IsCompleted, addr 0xaca6a4c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Method get_IsNtlmAuthenticated, addr 0xaca6a5c, size 0x20, virtual false, abstract: false, final false
inline bool get_IsNtlmAuthenticated() ;

/// @brief Method get_NtlmAuthState, addr 0xaca6a54, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::HttpWebRequest_NtlmAuthState get_NtlmAuthState() ;

// Ctor Parameters []
// @brief default ctor
constexpr HttpWebRequest_AuthorizationState() ;

// Ctor Parameters [CppParam { name: "request", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "isProxy", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isCompleted", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ntlm_auth_state", ty: "::GlobalNamespace::HttpWebRequest_NtlmAuthState", modifiers: "", def_value: None, comment: None }]
constexpr HttpWebRequest_AuthorizationState(::System::Net::HttpWebRequest*  request, bool  isProxy, bool  isCompleted, ::GlobalNamespace::HttpWebRequest_NtlmAuthState  ntlm_auth_state) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10692};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field request, offset: 0x0, size: 0x8, def value: None
 ::System::Net::HttpWebRequest*  request;

/// @brief Field isProxy, offset: 0x8, size: 0x1, def value: None
 bool  isProxy;

/// @brief Field isCompleted, offset: 0x9, size: 0x1, def value: None
 bool  isCompleted;

/// @brief Field ntlm_auth_state, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::HttpWebRequest_NtlmAuthState  ntlm_auth_state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HttpWebRequest_AuthorizationState, request) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest_AuthorizationState, isProxy) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest_AuthorizationState, isCompleted) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest_AuthorizationState, ntlm_auth_state) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HttpWebRequest_AuthorizationState) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
