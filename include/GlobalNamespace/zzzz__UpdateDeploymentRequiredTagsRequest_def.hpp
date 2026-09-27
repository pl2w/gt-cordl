#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateDeploymentRequiredTagsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateDeploymentRequiredTagsRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
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
class UpdateDeploymentRequiredTagsRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateDeploymentRequiredTagsRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateDeploymentRequiredTagsRequest*, "", "UpdateDeploymentRequiredTagsRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateDeploymentRequiredTagsRequest
class CORDL_TYPE UpdateDeploymentRequiredTagsRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_deploymentId, put=set_deploymentId)) ::StringW  deploymentId;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_tags, put=set_tags)) ::GlobalNamespace::StringVector*  tags;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

/// @brief Method Dispose, addr 0x537254c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateDeploymentRequiredTagsRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateDeploymentRequiredTagsRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53726b8, size 0x108, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5372ec0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53723bc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5372470, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateDeploymentRequiredTagsRequest*  obj) ;

/// @brief Method get_deploymentId, addr 0x5372bf0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deploymentId() ;

/// @brief Method get_envId, addr 0x5372a44, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_tags, addr 0x5372db4, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_tags() ;

/// @brief Method get_titleId, addr 0x5372898, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method set_deploymentId, addr 0x5372b18, size 0xd8, virtual false, abstract: false, final false
inline void set_deploymentId(::StringW  value) ;

/// @brief Method set_envId, addr 0x537296c, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_tags, addr 0x5372cc4, size 0xf0, virtual false, abstract: false, final false
inline void set_tags(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_titleId, addr 0x53727c0, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53724b0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateDeploymentRequiredTagsRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateDeploymentRequiredTagsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateDeploymentRequiredTagsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateDeploymentRequiredTagsRequest(UpdateDeploymentRequiredTagsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateDeploymentRequiredTagsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateDeploymentRequiredTagsRequest(UpdateDeploymentRequiredTagsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9628};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateDeploymentRequiredTagsRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateDeploymentRequiredTagsRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
