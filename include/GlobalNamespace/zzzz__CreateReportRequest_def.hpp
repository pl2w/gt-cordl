#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateReportRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateReportRequest)
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
class CreateReportRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateReportRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateReportRequest*, "", "CreateReportRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateReportRequest
class CORDL_TYPE CreateReportRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_category, put=set_category)) int32_t  category;

 __declspec(property(get=get_metadata, put=set_metadata)) ::StringW  metadata;

 __declspec(property(get=get_modded_client, put=set_modded_client)) bool  modded_client;

 __declspec(property(get=get_platform, put=set_platform)) ::StringW  platform;

 __declspec(property(get=get_reported_user_id, put=set_reported_user_id)) ::StringW  reported_user_id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53ca938, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::CreateReportRequest* New_ctor() ;

static inline ::GlobalNamespace::CreateReportRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53caaa4, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53cb40c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53ca7a8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53ca85c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateReportRequest*  obj) ;

/// @brief Method get_category, addr 0x53cae34, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_category() ;

/// @brief Method get_metadata, addr 0x53cb338, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_metadata() ;

/// @brief Method get_modded_client, addr 0x53cb18c, size 0xd4, virtual false, abstract: false, final false
inline bool get_modded_client() ;

/// @brief Method get_platform, addr 0x53cafe0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_platform() ;

/// @brief Method get_reported_user_id, addr 0x53cac88, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_reported_user_id() ;

/// @brief Method set_category, addr 0x53cad5c, size 0xd8, virtual false, abstract: false, final false
inline void set_category(int32_t  value) ;

/// @brief Method set_metadata, addr 0x53cb260, size 0xd8, virtual false, abstract: false, final false
inline void set_metadata(::StringW  value) ;

/// @brief Method set_modded_client, addr 0x53cb0b4, size 0xd8, virtual false, abstract: false, final false
inline void set_modded_client(bool  value) ;

/// @brief Method set_platform, addr 0x53caf08, size 0xd8, virtual false, abstract: false, final false
inline void set_platform(::StringW  value) ;

/// @brief Method set_reported_user_id, addr 0x53cabb0, size 0xd8, virtual false, abstract: false, final false
inline void set_reported_user_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53ca89c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateReportRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateReportRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateReportRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateReportRequest(CreateReportRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateReportRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateReportRequest(CreateReportRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8897};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateReportRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateReportRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
