#pragma once
// IWYU pragma private; include "GlobalNamespace/LogInWithAppleRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LoginRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogInWithAppleRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class LogInWithAppleRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LogInWithAppleRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LogInWithAppleRequest*, "", "LogInWithAppleRequest");
// Dependencies LoginRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: LogInWithAppleRequest
class CORDL_TYPE LogInWithAppleRequest : public ::GlobalNamespace::LoginRequest {
public:
// Declarations
 __declspec(property(get=get_CertUri, put=set_CertUri)) ::StringW  CertUri;

 __declspec(property(get=get_GamePlayerId, put=set_GamePlayerId)) ::StringW  GamePlayerId;

 __declspec(property(get=get_Salt, put=set_Salt)) ::StringW  Salt;

 __declspec(property(get=get_Signature, put=set_Signature)) ::StringW  Signature;

 __declspec(property(get=get_TeamPlayerId, put=set_TeamPlayerId)) ::StringW  TeamPlayerId;

 __declspec(property(get=get_Timestamp, put=set_Timestamp)) ::StringW  Timestamp;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x548cd34, size 0x168, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::LogInWithAppleRequest* New_ctor() ;

static inline ::GlobalNamespace::LogInWithAppleRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x548d8a4, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x548d9b0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x548cba8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x548cc58, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::LogInWithAppleRequest*  obj) ;

/// @brief Method get_CertUri, addr 0x548d2cc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_CertUri() ;

/// @brief Method get_GamePlayerId, addr 0x548d7d0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_GamePlayerId() ;

/// @brief Method get_Salt, addr 0x548d478, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Salt() ;

/// @brief Method get_Signature, addr 0x548cf74, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Signature() ;

/// @brief Method get_TeamPlayerId, addr 0x548d120, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_TeamPlayerId() ;

/// @brief Method get_Timestamp, addr 0x548d624, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Timestamp() ;

/// @brief Method set_CertUri, addr 0x548d1f4, size 0xd8, virtual false, abstract: false, final false
inline void set_CertUri(::StringW  value) ;

/// @brief Method set_GamePlayerId, addr 0x548d6f8, size 0xd8, virtual false, abstract: false, final false
inline void set_GamePlayerId(::StringW  value) ;

/// @brief Method set_Salt, addr 0x548d3a0, size 0xd8, virtual false, abstract: false, final false
inline void set_Salt(::StringW  value) ;

/// @brief Method set_Signature, addr 0x548ce9c, size 0xd8, virtual false, abstract: false, final false
inline void set_Signature(::StringW  value) ;

/// @brief Method set_TeamPlayerId, addr 0x548d048, size 0xd8, virtual false, abstract: false, final false
inline void set_TeamPlayerId(::StringW  value) ;

/// @brief Method set_Timestamp, addr 0x548d54c, size 0xd8, virtual false, abstract: false, final false
inline void set_Timestamp(::StringW  value) ;

/// @brief Method swigRelease, addr 0x548cc98, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::LogInWithAppleRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogInWithAppleRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogInWithAppleRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogInWithAppleRequest(LogInWithAppleRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogInWithAppleRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogInWithAppleRequest(LogInWithAppleRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9276};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LogInWithAppleRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LogInWithAppleRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
