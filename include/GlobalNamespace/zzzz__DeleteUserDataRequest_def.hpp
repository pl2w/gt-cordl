#pragma once
// IWYU pragma private; include "GlobalNamespace/DeleteUserDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestShared_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteUserDataRequest)
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
class DeleteUserDataRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeleteUserDataRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeleteUserDataRequest*, "", "DeleteUserDataRequest");
// Dependencies MothershipRequestShared, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeleteUserDataRequest
class CORDL_TYPE DeleteUserDataRequest : public ::GlobalNamespace::MothershipRequestShared {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_key_name, put=set_key_name)) ::StringW  key_name;

 __declspec(property(get=get_metadata_id, put=set_metadata_id)) ::StringW  metadata_id;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_user_id, put=set_user_id)) ::StringW  user_id;

/// @brief Method Dispose, addr 0x53f34f4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::DeleteUserDataRequest* New_ctor() ;

static inline ::GlobalNamespace::DeleteUserDataRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53f3660, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53f3fc8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53f3364, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53f3418, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::DeleteUserDataRequest*  obj) ;

/// @brief Method get_env_id, addr 0x53f39f0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_key_name, addr 0x53f3b9c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_name() ;

/// @brief Method get_metadata_id, addr 0x53f3d48, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_metadata_id() ;

/// @brief Method get_title_id, addr 0x53f3844, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_user_id, addr 0x53f3ef4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_user_id() ;

/// @brief Method set_env_id, addr 0x53f3918, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_key_name, addr 0x53f3ac4, size 0xd8, virtual false, abstract: false, final false
inline void set_key_name(::StringW  value) ;

/// @brief Method set_metadata_id, addr 0x53f3c70, size 0xd8, virtual false, abstract: false, final false
inline void set_metadata_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x53f376c, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_user_id, addr 0x53f3e1c, size 0xd8, virtual false, abstract: false, final false
inline void set_user_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53f3458, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::DeleteUserDataRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteUserDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteUserDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteUserDataRequest(DeleteUserDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteUserDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteUserDataRequest(DeleteUserDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8984};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeleteUserDataRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeleteUserDataRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
