#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateRiftConfigRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateRiftConfigRequest)
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
class UpdateRiftConfigRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateRiftConfigRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateRiftConfigRequest*, "", "UpdateRiftConfigRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateRiftConfigRequest
class CORDL_TYPE UpdateRiftConfigRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_appId, put=set_appId)) ::StringW  appId;

 __declspec(property(get=get_appSecret, put=set_appSecret)) ::StringW  appSecret;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

/// @brief Method Dispose, addr 0x538eddc, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateRiftConfigRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateRiftConfigRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x538ef48, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x538f8b0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x538ec4c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x538ed00, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateRiftConfigRequest*  obj) ;

/// @brief Method get_appId, addr 0x538f630, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_appId() ;

/// @brief Method get_appSecret, addr 0x538f7dc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_appSecret() ;

/// @brief Method get_enabled, addr 0x538f12c, size 0xd4, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_envId, addr 0x538f484, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_titleId, addr 0x538f2d8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method set_appId, addr 0x538f558, size 0xd8, virtual false, abstract: false, final false
inline void set_appId(::StringW  value) ;

/// @brief Method set_appSecret, addr 0x538f704, size 0xd8, virtual false, abstract: false, final false
inline void set_appSecret(::StringW  value) ;

/// @brief Method set_enabled, addr 0x538f054, size 0xd8, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_envId, addr 0x538f3ac, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_titleId, addr 0x538f200, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x538ed40, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateRiftConfigRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateRiftConfigRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateRiftConfigRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateRiftConfigRequest(UpdateRiftConfigRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateRiftConfigRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateRiftConfigRequest(UpdateRiftConfigRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9685};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateRiftConfigRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateRiftConfigRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
