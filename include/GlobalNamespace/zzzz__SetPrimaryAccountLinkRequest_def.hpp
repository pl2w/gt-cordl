#pragma once
// IWYU pragma private; include "GlobalNamespace/SetPrimaryAccountLinkRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetPrimaryAccountLinkRequest)
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
class SetPrimaryAccountLinkRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetPrimaryAccountLinkRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetPrimaryAccountLinkRequest*, "", "SetPrimaryAccountLinkRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetPrimaryAccountLinkRequest
class CORDL_TYPE SetPrimaryAccountLinkRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_LinkId, put=set_LinkId)) ::StringW  LinkId;

 __declspec(property(get=get_TargetPlayer, put=set_TargetPlayer)) ::StringW  TargetPlayer;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

/// @brief Field linkId_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_linkId_name, put=setStaticF_linkId_name)) ::StringW  linkId_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Field targetPlayer_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_targetPlayer_name, put=setStaticF_targetPlayer_name)) ::StringW  targetPlayer_name;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

/// @brief Method Dispose, addr 0x532f10c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::SetPrimaryAccountLinkRequest* New_ctor() ;

static inline ::GlobalNamespace::SetPrimaryAccountLinkRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x532f278, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x532fa34, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x532ef7c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x532f030, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SetPrimaryAccountLinkRequest*  obj) ;

static inline ::StringW getStaticF_linkId_name() ;

static inline ::StringW getStaticF_targetPlayer_name() ;

/// @brief Method get_LinkId, addr 0x532f7b4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_LinkId() ;

/// @brief Method get_TargetPlayer, addr 0x532f960, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_TargetPlayer() ;

/// @brief Method get_envId, addr 0x532f608, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_titleId, addr 0x532f45c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

static inline void setStaticF_linkId_name(::StringW  value) ;

static inline void setStaticF_targetPlayer_name(::StringW  value) ;

/// @brief Method set_LinkId, addr 0x532f6dc, size 0xd8, virtual false, abstract: false, final false
inline void set_LinkId(::StringW  value) ;

/// @brief Method set_TargetPlayer, addr 0x532f888, size 0xd8, virtual false, abstract: false, final false
inline void set_TargetPlayer(::StringW  value) ;

/// @brief Method set_envId, addr 0x532f530, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_titleId, addr 0x532f384, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x532f070, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SetPrimaryAccountLinkRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetPrimaryAccountLinkRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetPrimaryAccountLinkRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetPrimaryAccountLinkRequest(SetPrimaryAccountLinkRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetPrimaryAccountLinkRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetPrimaryAccountLinkRequest(SetPrimaryAccountLinkRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9525};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetPrimaryAccountLinkRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetPrimaryAccountLinkRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
