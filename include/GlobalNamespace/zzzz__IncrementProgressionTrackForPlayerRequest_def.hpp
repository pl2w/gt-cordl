#pragma once
// IWYU pragma private; include "GlobalNamespace/IncrementProgressionTrackForPlayerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementProgressionTrackForPlayerRequest)
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
class IncrementProgressionTrackForPlayerRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IncrementProgressionTrackForPlayerRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IncrementProgressionTrackForPlayerRequest*, "", "IncrementProgressionTrackForPlayerRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: IncrementProgressionTrackForPlayerRequest
class CORDL_TYPE IncrementProgressionTrackForPlayerRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_AdditionalProgress, put=set_AdditionalProgress)) int32_t  AdditionalProgress;

 __declspec(property(get=get_EnvId, put=set_EnvId)) ::StringW  EnvId;

 __declspec(property(get=get_PlayerId, put=set_PlayerId)) ::StringW  PlayerId;

 __declspec(property(get=get_TitleId, put=set_TitleId)) ::StringW  TitleId;

 __declspec(property(get=get_TrackId, put=set_TrackId)) ::StringW  TrackId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x543d808, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::IncrementProgressionTrackForPlayerRequest* New_ctor() ;

static inline ::GlobalNamespace::IncrementProgressionTrackForPlayerRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x543d974, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x543e2dc, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x543d678, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x543d72c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::IncrementProgressionTrackForPlayerRequest*  obj) ;

/// @brief Method get_AdditionalProgress, addr 0x543db58, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_AdditionalProgress() ;

/// @brief Method get_EnvId, addr 0x543e208, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_EnvId() ;

/// @brief Method get_PlayerId, addr 0x543dd04, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_PlayerId() ;

/// @brief Method get_TitleId, addr 0x543e05c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_TitleId() ;

/// @brief Method get_TrackId, addr 0x543deb0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_TrackId() ;

/// @brief Method set_AdditionalProgress, addr 0x543da80, size 0xd8, virtual false, abstract: false, final false
inline void set_AdditionalProgress(int32_t  value) ;

/// @brief Method set_EnvId, addr 0x543e130, size 0xd8, virtual false, abstract: false, final false
inline void set_EnvId(::StringW  value) ;

/// @brief Method set_PlayerId, addr 0x543dc2c, size 0xd8, virtual false, abstract: false, final false
inline void set_PlayerId(::StringW  value) ;

/// @brief Method set_TitleId, addr 0x543df84, size 0xd8, virtual false, abstract: false, final false
inline void set_TitleId(::StringW  value) ;

/// @brief Method set_TrackId, addr 0x543ddd8, size 0xd8, virtual false, abstract: false, final false
inline void set_TrackId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x543d76c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::IncrementProgressionTrackForPlayerRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IncrementProgressionTrackForPlayerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IncrementProgressionTrackForPlayerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IncrementProgressionTrackForPlayerRequest(IncrementProgressionTrackForPlayerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IncrementProgressionTrackForPlayerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IncrementProgressionTrackForPlayerRequest(IncrementProgressionTrackForPlayerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9134};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IncrementProgressionTrackForPlayerRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IncrementProgressionTrackForPlayerRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
