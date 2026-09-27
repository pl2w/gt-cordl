#pragma once
// IWYU pragma private; include "GlobalNamespace/ExplicitAccountLinkRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ExplicitAccountLinkRequest)
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
class ExplicitAccountLinkRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ExplicitAccountLinkRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExplicitAccountLinkRequest*, "", "ExplicitAccountLinkRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ExplicitAccountLinkRequest
class CORDL_TYPE ExplicitAccountLinkRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_AppScopedAccountId, put=set_AppScopedAccountId)) ::StringW  AppScopedAccountId;

 __declspec(property(get=get_ExternalServiceName, put=set_ExternalServiceName)) ::StringW  ExternalServiceName;

 __declspec(property(get=get_OrgScopedAccountId, put=set_OrgScopedAccountId)) ::StringW  OrgScopedAccountId;

 __declspec(property(get=get_TargetPlayerId, put=set_TargetPlayerId)) ::StringW  TargetPlayerId;

 __declspec(property(get=get_Username, put=set_Username)) ::StringW  Username;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

/// @brief Method Dispose, addr 0x53f5b8c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ExplicitAccountLinkRequest* New_ctor() ;

static inline ::GlobalNamespace::ExplicitAccountLinkRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53f5cf8, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53f69b8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53f59fc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53f5ab0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ExplicitAccountLinkRequest*  obj) ;

/// @brief Method get_AppScopedAccountId, addr 0x53f63e0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_AppScopedAccountId() ;

/// @brief Method get_ExternalServiceName, addr 0x53f6234, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ExternalServiceName() ;

/// @brief Method get_OrgScopedAccountId, addr 0x53f658c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_OrgScopedAccountId() ;

/// @brief Method get_TargetPlayerId, addr 0x53f68e4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_TargetPlayerId() ;

/// @brief Method get_Username, addr 0x53f6738, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Username() ;

/// @brief Method get_envId, addr 0x53f6088, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_titleId, addr 0x53f5edc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method set_AppScopedAccountId, addr 0x53f6308, size 0xd8, virtual false, abstract: false, final false
inline void set_AppScopedAccountId(::StringW  value) ;

/// @brief Method set_ExternalServiceName, addr 0x53f615c, size 0xd8, virtual false, abstract: false, final false
inline void set_ExternalServiceName(::StringW  value) ;

/// @brief Method set_OrgScopedAccountId, addr 0x53f64b4, size 0xd8, virtual false, abstract: false, final false
inline void set_OrgScopedAccountId(::StringW  value) ;

/// @brief Method set_TargetPlayerId, addr 0x53f680c, size 0xd8, virtual false, abstract: false, final false
inline void set_TargetPlayerId(::StringW  value) ;

/// @brief Method set_Username, addr 0x53f6660, size 0xd8, virtual false, abstract: false, final false
inline void set_Username(::StringW  value) ;

/// @brief Method set_envId, addr 0x53f5fb0, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_titleId, addr 0x53f5e04, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53f5af0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ExplicitAccountLinkRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExplicitAccountLinkRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExplicitAccountLinkRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExplicitAccountLinkRequest(ExplicitAccountLinkRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExplicitAccountLinkRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExplicitAccountLinkRequest(ExplicitAccountLinkRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8989};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExplicitAccountLinkRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ExplicitAccountLinkRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
