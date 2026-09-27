#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateUserDataMetadataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateUserDataMetadataRequest)
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
class UpdateUserDataMetadataRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateUserDataMetadataRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateUserDataMetadataRequest*, "", "UpdateUserDataMetadataRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateUserDataMetadataRequest
class CORDL_TYPE UpdateUserDataMetadataRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_key_name, put=set_key_name)) ::StringW  key_name;

 __declspec(property(get=get_key_permissions, put=set_key_permissions)) ::StringW  key_permissions;

 __declspec(property(get=get_metadata_id, put=set_metadata_id)) ::StringW  metadata_id;

 __declspec(property(get=get_privacy_notes, put=set_privacy_notes)) ::StringW  privacy_notes;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x539cff4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateUserDataMetadataRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateUserDataMetadataRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x539d160, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x539dc74, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x539ce64, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x539cf18, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateUserDataMetadataRequest*  obj) ;

/// @brief Method get_env_id, addr 0x539d4f0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_key_name, addr 0x539d69c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_name() ;

/// @brief Method get_key_permissions, addr 0x539d9f4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_permissions() ;

/// @brief Method get_metadata_id, addr 0x539d848, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_metadata_id() ;

/// @brief Method get_privacy_notes, addr 0x539dba0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_privacy_notes() ;

/// @brief Method get_title_id, addr 0x539d344, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_env_id, addr 0x539d418, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_key_name, addr 0x539d5c4, size 0xd8, virtual false, abstract: false, final false
inline void set_key_name(::StringW  value) ;

/// @brief Method set_key_permissions, addr 0x539d91c, size 0xd8, virtual false, abstract: false, final false
inline void set_key_permissions(::StringW  value) ;

/// @brief Method set_metadata_id, addr 0x539d770, size 0xd8, virtual false, abstract: false, final false
inline void set_metadata_id(::StringW  value) ;

/// @brief Method set_privacy_notes, addr 0x539dac8, size 0xd8, virtual false, abstract: false, final false
inline void set_privacy_notes(::StringW  value) ;

/// @brief Method set_title_id, addr 0x539d26c, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x539cf58, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateUserDataMetadataRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateUserDataMetadataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateUserDataMetadataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateUserDataMetadataRequest(UpdateUserDataMetadataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateUserDataMetadataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateUserDataMetadataRequest(UpdateUserDataMetadataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9713};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateUserDataMetadataRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateUserDataMetadataRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
