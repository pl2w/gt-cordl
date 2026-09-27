#pragma once
// IWYU pragma private; include "GlobalNamespace/DeleteTrackTriggerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteTrackTriggerRequest)
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
class DeleteTrackTriggerRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeleteTrackTriggerRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeleteTrackTriggerRequest*, "", "DeleteTrackTriggerRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeleteTrackTriggerRequest
class CORDL_TYPE DeleteTrackTriggerRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_trackId, put=set_trackId)) ::StringW  trackId;

 __declspec(property(get=get_triggerId, put=set_triggerId)) ::StringW  triggerId;

/// @brief Method Dispose, addr 0x53ee00c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::DeleteTrackTriggerRequest* New_ctor() ;

static inline ::GlobalNamespace::DeleteTrackTriggerRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53ee178, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53ee934, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53ede7c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53edf30, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::DeleteTrackTriggerRequest*  obj) ;

/// @brief Method get_envId, addr 0x53ee508, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_titleId, addr 0x53ee35c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_trackId, addr 0x53ee6b4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_trackId() ;

/// @brief Method get_triggerId, addr 0x53ee860, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_triggerId() ;

/// @brief Method set_envId, addr 0x53ee430, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_titleId, addr 0x53ee284, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_trackId, addr 0x53ee5dc, size 0xd8, virtual false, abstract: false, final false
inline void set_trackId(::StringW  value) ;

/// @brief Method set_triggerId, addr 0x53ee788, size 0xd8, virtual false, abstract: false, final false
inline void set_triggerId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53edf70, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::DeleteTrackTriggerRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteTrackTriggerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteTrackTriggerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteTrackTriggerRequest(DeleteTrackTriggerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteTrackTriggerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteTrackTriggerRequest(DeleteTrackTriggerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8972};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeleteTrackTriggerRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeleteTrackTriggerRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
