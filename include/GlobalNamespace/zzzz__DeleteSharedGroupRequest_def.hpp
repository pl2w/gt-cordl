#pragma once
// IWYU pragma private; include "GlobalNamespace/DeleteSharedGroupRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteSharedGroupRequest)
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
class DeleteSharedGroupRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeleteSharedGroupRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeleteSharedGroupRequest*, "", "DeleteSharedGroupRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeleteSharedGroupRequest
class CORDL_TYPE DeleteSharedGroupRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_sharedGroupId, put=set_sharedGroupId)) ::StringW  sharedGroupId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53eaff4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::DeleteSharedGroupRequest* New_ctor() ;

static inline ::GlobalNamespace::DeleteSharedGroupRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53eb30c, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53eb418, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53eae64, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53eaf18, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::DeleteSharedGroupRequest*  obj) ;

/// @brief Method get_sharedGroupId, addr 0x53eb238, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_sharedGroupId() ;

/// @brief Method set_sharedGroupId, addr 0x53eb160, size 0xd8, virtual false, abstract: false, final false
inline void set_sharedGroupId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53eaf58, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::DeleteSharedGroupRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteSharedGroupRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteSharedGroupRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteSharedGroupRequest(DeleteSharedGroupRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteSharedGroupRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteSharedGroupRequest(DeleteSharedGroupRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8965};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeleteSharedGroupRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeleteSharedGroupRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
