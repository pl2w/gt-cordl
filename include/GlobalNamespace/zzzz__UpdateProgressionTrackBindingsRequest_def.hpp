#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateProgressionTrackBindingsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateProgressionTrackBindingsRequest)
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
class UpdateProgressionTrackBindingsRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateProgressionTrackBindingsRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateProgressionTrackBindingsRequest*, "", "UpdateProgressionTrackBindingsRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateProgressionTrackBindingsRequest
class CORDL_TYPE UpdateProgressionTrackBindingsRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_deploymentId, put=set_deploymentId)) ::StringW  deploymentId;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_trackId, put=set_trackId)) ::StringW  trackId;

 __declspec(property(get=get_visible, put=set_visible)) bool  visible;

/// @brief Method Dispose, addr 0x53847ec, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateProgressionTrackBindingsRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateProgressionTrackBindingsRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5384958, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x538546c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x538465c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5384710, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateProgressionTrackBindingsRequest*  obj) ;

/// @brief Method get_deploymentId, addr 0x5384e94, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deploymentId() ;

/// @brief Method get_envId, addr 0x5384ce8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_id, addr 0x53851ec, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_titleId, addr 0x5384b3c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_trackId, addr 0x5385040, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_trackId() ;

/// @brief Method get_visible, addr 0x5385398, size 0xd4, virtual false, abstract: false, final false
inline bool get_visible() ;

/// @brief Method set_deploymentId, addr 0x5384dbc, size 0xd8, virtual false, abstract: false, final false
inline void set_deploymentId(::StringW  value) ;

/// @brief Method set_envId, addr 0x5384c10, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_id, addr 0x5385114, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_titleId, addr 0x5384a64, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_trackId, addr 0x5384f68, size 0xd8, virtual false, abstract: false, final false
inline void set_trackId(::StringW  value) ;

/// @brief Method set_visible, addr 0x53852c0, size 0xd8, virtual false, abstract: false, final false
inline void set_visible(bool  value) ;

/// @brief Method swigRelease, addr 0x5384750, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateProgressionTrackBindingsRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateProgressionTrackBindingsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateProgressionTrackBindingsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateProgressionTrackBindingsRequest(UpdateProgressionTrackBindingsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateProgressionTrackBindingsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateProgressionTrackBindingsRequest(UpdateProgressionTrackBindingsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9665};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateProgressionTrackBindingsRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateProgressionTrackBindingsRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
