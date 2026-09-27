#pragma once
// IWYU pragma private; include "GlobalNamespace/SetMothershipTitleDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetMothershipTitleDataRequest)
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
class SetMothershipTitleDataRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetMothershipTitleDataRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetMothershipTitleDataRequest*, "", "SetMothershipTitleDataRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetMothershipTitleDataRequest
class CORDL_TYPE SetMothershipTitleDataRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_data, put=set_data)) ::StringW  data;

 __declspec(property(get=get_deployment_id, put=set_deployment_id)) ::StringW  deployment_id;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_key, put=set_key)) ::StringW  key;

 __declspec(property(get=get_server_only, put=set_server_only)) bool  server_only;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x532ce44, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::SetMothershipTitleDataRequest* New_ctor() ;

static inline ::GlobalNamespace::SetMothershipTitleDataRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x532cfb0, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x532dac4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x532ccb4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x532cd68, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SetMothershipTitleDataRequest*  obj) ;

/// @brief Method get_data, addr 0x532d844, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_data() ;

/// @brief Method get_deployment_id, addr 0x532d4ec, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deployment_id() ;

/// @brief Method get_env_id, addr 0x532d340, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_key, addr 0x532d698, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key() ;

/// @brief Method get_server_only, addr 0x532d9f0, size 0xd4, virtual false, abstract: false, final false
inline bool get_server_only() ;

/// @brief Method get_title_id, addr 0x532d194, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_data, addr 0x532d76c, size 0xd8, virtual false, abstract: false, final false
inline void set_data(::StringW  value) ;

/// @brief Method set_deployment_id, addr 0x532d414, size 0xd8, virtual false, abstract: false, final false
inline void set_deployment_id(::StringW  value) ;

/// @brief Method set_env_id, addr 0x532d268, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_key, addr 0x532d5c0, size 0xd8, virtual false, abstract: false, final false
inline void set_key(::StringW  value) ;

/// @brief Method set_server_only, addr 0x532d918, size 0xd8, virtual false, abstract: false, final false
inline void set_server_only(bool  value) ;

/// @brief Method set_title_id, addr 0x532d0bc, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x532cda8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SetMothershipTitleDataRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetMothershipTitleDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetMothershipTitleDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetMothershipTitleDataRequest(SetMothershipTitleDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetMothershipTitleDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetMothershipTitleDataRequest(SetMothershipTitleDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9521};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetMothershipTitleDataRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetMothershipTitleDataRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
