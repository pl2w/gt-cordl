#pragma once
// IWYU pragma private; include "GlobalNamespace/ChangeCommitStatusOfOfferBindingsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ChangeCommitStatusOfOfferBindingsRequest)
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
class ChangeCommitStatusOfOfferBindingsRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ChangeCommitStatusOfOfferBindingsRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChangeCommitStatusOfOfferBindingsRequest*, "", "ChangeCommitStatusOfOfferBindingsRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ChangeCommitStatusOfOfferBindingsRequest
class CORDL_TYPE ChangeCommitStatusOfOfferBindingsRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_committed, put=set_committed)) bool  committed;

/// @brief Field committed_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_committed_name, put=setStaticF_committed_name)) ::StringW  committed_name;

 __declspec(property(get=get_deploymentId, put=set_deploymentId)) ::StringW  deploymentId;

 __declspec(property(get=get_display_id, put=set_display_id)) ::StringW  display_id;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

/// @brief Method Dispose, addr 0x5275358, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsRequest* New_ctor() ;

static inline ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x52754c4, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5275e2c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52751c8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x527527c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ChangeCommitStatusOfOfferBindingsRequest*  obj) ;

static inline ::StringW getStaticF_committed_name() ;

/// @brief Method get_committed, addr 0x5275d58, size 0xd4, virtual false, abstract: false, final false
inline bool get_committed() ;

/// @brief Method get_deploymentId, addr 0x5275a00, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deploymentId() ;

/// @brief Method get_display_id, addr 0x5275bac, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_display_id() ;

/// @brief Method get_envId, addr 0x5275854, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_titleId, addr 0x52756a8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

static inline void setStaticF_committed_name(::StringW  value) ;

/// @brief Method set_committed, addr 0x5275c80, size 0xd8, virtual false, abstract: false, final false
inline void set_committed(bool  value) ;

/// @brief Method set_deploymentId, addr 0x5275928, size 0xd8, virtual false, abstract: false, final false
inline void set_deploymentId(::StringW  value) ;

/// @brief Method set_display_id, addr 0x5275ad4, size 0xd8, virtual false, abstract: false, final false
inline void set_display_id(::StringW  value) ;

/// @brief Method set_envId, addr 0x527577c, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_titleId, addr 0x52755d0, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52752bc, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ChangeCommitStatusOfOfferBindingsRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeCommitStatusOfOfferBindingsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeCommitStatusOfOfferBindingsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeCommitStatusOfOfferBindingsRequest(ChangeCommitStatusOfOfferBindingsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeCommitStatusOfOfferBindingsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeCommitStatusOfOfferBindingsRequest(ChangeCommitStatusOfOfferBindingsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8818};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChangeCommitStatusOfOfferBindingsRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChangeCommitStatusOfOfferBindingsRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
