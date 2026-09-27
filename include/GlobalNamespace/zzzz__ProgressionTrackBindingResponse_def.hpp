#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionTrackBindingResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProgressionTrackBindingResponse)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressionTrackBindingResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProgressionTrackBindingResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionTrackBindingResponse*, "", "ProgressionTrackBindingResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionTrackBindingResponse
class CORDL_TYPE ProgressionTrackBindingResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_deployment_id, put=set_deployment_id)) ::StringW  deployment_id;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_progression_track_id, put=set_progression_track_id)) ::StringW  progression_track_id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_visible, put=set_visible)) bool  visible;

/// @brief Method Dispose, addr 0x52fe6a0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ProgressionTrackBindingResponse* New_ctor() ;

static inline ::GlobalNamespace::ProgressionTrackBindingResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52ff214, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52ff2f8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52fe510, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52fe5c4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ProgressionTrackBindingResponse*  obj) ;

/// @brief Method get_deployment_id, addr 0x52fede8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deployment_id() ;

/// @brief Method get_env_id, addr 0x52fec3c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_id, addr 0x52fe8e4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_progression_track_id, addr 0x52fef94, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_progression_track_id() ;

/// @brief Method get_title_id, addr 0x52fea90, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_visible, addr 0x52ff140, size 0xd4, virtual false, abstract: false, final false
inline bool get_visible() ;

/// @brief Method set_deployment_id, addr 0x52fed10, size 0xd8, virtual false, abstract: false, final false
inline void set_deployment_id(::StringW  value) ;

/// @brief Method set_env_id, addr 0x52feb64, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_id, addr 0x52fe80c, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_progression_track_id, addr 0x52feebc, size 0xd8, virtual false, abstract: false, final false
inline void set_progression_track_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x52fe9b8, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_visible, addr 0x52ff068, size 0xd8, virtual false, abstract: false, final false
inline void set_visible(bool  value) ;

/// @brief Method swigRelease, addr 0x52fe604, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ProgressionTrackBindingResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionTrackBindingResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionTrackBindingResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionTrackBindingResponse(ProgressionTrackBindingResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionTrackBindingResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionTrackBindingResponse(ProgressionTrackBindingResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9437};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionTrackBindingResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionTrackBindingResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
