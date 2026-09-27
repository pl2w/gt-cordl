#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateTrackLevelRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateTrackLevelRequest)
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
class UpdateTrackLevelRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateTrackLevelRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateTrackLevelRequest*, "", "UpdateTrackLevelRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateTrackLevelRequest
class CORDL_TYPE UpdateTrackLevelRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_levelId, put=set_levelId)) ::StringW  levelId;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_progressionAmount, put=set_progressionAmount)) int32_t  progressionAmount;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_trackId, put=set_trackId)) ::StringW  trackId;

/// @brief Method Dispose, addr 0x53946c8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateTrackLevelRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateTrackLevelRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5394834, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5395348, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5394538, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53945ec, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateTrackLevelRequest*  obj) ;

/// @brief Method get_envId, addr 0x5394bc4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_levelId, addr 0x53950c8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_levelId() ;

/// @brief Method get_name, addr 0x5394f1c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_progressionAmount, addr 0x5395274, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_progressionAmount() ;

/// @brief Method get_titleId, addr 0x5394a18, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_trackId, addr 0x5394d70, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_trackId() ;

/// @brief Method set_envId, addr 0x5394aec, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_levelId, addr 0x5394ff0, size 0xd8, virtual false, abstract: false, final false
inline void set_levelId(::StringW  value) ;

/// @brief Method set_name, addr 0x5394e44, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_progressionAmount, addr 0x539519c, size 0xd8, virtual false, abstract: false, final false
inline void set_progressionAmount(int32_t  value) ;

/// @brief Method set_titleId, addr 0x5394940, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_trackId, addr 0x5394c98, size 0xd8, virtual false, abstract: false, final false
inline void set_trackId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x539462c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateTrackLevelRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateTrackLevelRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateTrackLevelRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateTrackLevelRequest(UpdateTrackLevelRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateTrackLevelRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateTrackLevelRequest(UpdateTrackLevelRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9697};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateTrackLevelRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateTrackLevelRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
