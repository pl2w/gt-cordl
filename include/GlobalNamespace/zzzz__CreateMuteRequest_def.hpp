#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateMuteRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateMuteRequest)
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
class CreateMuteRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateMuteRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateMuteRequest*, "", "CreateMuteRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateMuteRequest
class CORDL_TYPE CreateMuteRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_duration_minutes, put=set_duration_minutes)) int32_t  duration_minutes;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_player_id, put=set_player_id)) ::StringW  player_id;

 __declspec(property(get=get_reason, put=set_reason)) ::StringW  reason;

 __declspec(property(get=get_source, put=set_source)) ::StringW  source;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x528c8d0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::CreateMuteRequest* New_ctor() ;

static inline ::GlobalNamespace::CreateMuteRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x528ca3c, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x528d550, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x528c740, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x528c7f4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateMuteRequest*  obj) ;

/// @brief Method get_duration_minutes, addr 0x528d124, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_duration_minutes() ;

/// @brief Method get_env_id, addr 0x528cdcc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_player_id, addr 0x528cf78, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_player_id() ;

/// @brief Method get_reason, addr 0x528d47c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_reason() ;

/// @brief Method get_source, addr 0x528d2d0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_source() ;

/// @brief Method get_title_id, addr 0x528cc20, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_duration_minutes, addr 0x528d04c, size 0xd8, virtual false, abstract: false, final false
inline void set_duration_minutes(int32_t  value) ;

/// @brief Method set_env_id, addr 0x528ccf4, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_player_id, addr 0x528cea0, size 0xd8, virtual false, abstract: false, final false
inline void set_player_id(::StringW  value) ;

/// @brief Method set_reason, addr 0x528d3a4, size 0xd8, virtual false, abstract: false, final false
inline void set_reason(::StringW  value) ;

/// @brief Method set_source, addr 0x528d1f8, size 0xd8, virtual false, abstract: false, final false
inline void set_source(::StringW  value) ;

/// @brief Method set_title_id, addr 0x528cb48, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x528c834, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateMuteRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateMuteRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateMuteRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateMuteRequest(CreateMuteRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateMuteRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateMuteRequest(CreateMuteRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8864};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateMuteRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateMuteRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
