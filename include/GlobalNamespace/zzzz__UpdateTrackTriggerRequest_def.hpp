#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateTrackTriggerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateTrackTriggerRequest)
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
class UpdateTrackTriggerRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateTrackTriggerRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateTrackTriggerRequest*, "", "UpdateTrackTriggerRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateTrackTriggerRequest
class CORDL_TYPE UpdateTrackTriggerRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_prerequisiteEntitlementId, put=set_prerequisiteEntitlementId)) ::StringW  prerequisiteEntitlementId;

 __declspec(property(get=get_progressionAmount, put=set_progressionAmount)) int32_t  progressionAmount;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_trackId, put=set_trackId)) ::StringW  trackId;

 __declspec(property(get=get_transactionId, put=set_transactionId)) ::StringW  transactionId;

 __declspec(property(get=get_triggerId, put=set_triggerId)) ::StringW  triggerId;

/// @brief Method Dispose, addr 0x53961cc, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateTrackTriggerRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateTrackTriggerRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5396338, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53971a4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x539603c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53960f0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateTrackTriggerRequest*  obj) ;

/// @brief Method get_envId, addr 0x53966c8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_name, addr 0x5396a20, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_prerequisiteEntitlementId, addr 0x53970d0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_prerequisiteEntitlementId() ;

/// @brief Method get_progressionAmount, addr 0x5396f24, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_progressionAmount() ;

/// @brief Method get_titleId, addr 0x539651c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_trackId, addr 0x5396874, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_trackId() ;

/// @brief Method get_transactionId, addr 0x5396bcc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_transactionId() ;

/// @brief Method get_triggerId, addr 0x5396d78, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_triggerId() ;

/// @brief Method set_envId, addr 0x53965f0, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_name, addr 0x5396948, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_prerequisiteEntitlementId, addr 0x5396ff8, size 0xd8, virtual false, abstract: false, final false
inline void set_prerequisiteEntitlementId(::StringW  value) ;

/// @brief Method set_progressionAmount, addr 0x5396e4c, size 0xd8, virtual false, abstract: false, final false
inline void set_progressionAmount(int32_t  value) ;

/// @brief Method set_titleId, addr 0x5396444, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_trackId, addr 0x539679c, size 0xd8, virtual false, abstract: false, final false
inline void set_trackId(::StringW  value) ;

/// @brief Method set_transactionId, addr 0x5396af4, size 0xd8, virtual false, abstract: false, final false
inline void set_transactionId(::StringW  value) ;

/// @brief Method set_triggerId, addr 0x5396ca0, size 0xd8, virtual false, abstract: false, final false
inline void set_triggerId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5396130, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateTrackTriggerRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateTrackTriggerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateTrackTriggerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateTrackTriggerRequest(UpdateTrackTriggerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateTrackTriggerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateTrackTriggerRequest(UpdateTrackTriggerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9700};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateTrackTriggerRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateTrackTriggerRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
