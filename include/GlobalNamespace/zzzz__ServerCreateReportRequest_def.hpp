#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerCreateReportRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerCreateReportRequest)
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
class ServerCreateReportRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ServerCreateReportRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ServerCreateReportRequest*, "", "ServerCreateReportRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerCreateReportRequest
class CORDL_TYPE ServerCreateReportRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_category, put=set_category)) int32_t  category;

 __declspec(property(get=get_metadata, put=set_metadata)) ::StringW  metadata;

 __declspec(property(get=get_modded_client, put=set_modded_client)) bool  modded_client;

 __declspec(property(get=get_platform, put=set_platform)) ::StringW  platform;

 __declspec(property(get=get_reported_user_id, put=set_reported_user_id)) ::StringW  reported_user_id;

 __declspec(property(get=get_reporting_user_id, put=set_reporting_user_id)) ::StringW  reporting_user_id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5325890, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ServerCreateReportRequest* New_ctor() ;

static inline ::GlobalNamespace::ServerCreateReportRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53259fc, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5326510, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5325700, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53257b4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ServerCreateReportRequest*  obj) ;

/// @brief Method get_category, addr 0x5325f38, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_category() ;

/// @brief Method get_metadata, addr 0x532643c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_metadata() ;

/// @brief Method get_modded_client, addr 0x5326290, size 0xd4, virtual false, abstract: false, final false
inline bool get_modded_client() ;

/// @brief Method get_platform, addr 0x53260e4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_platform() ;

/// @brief Method get_reported_user_id, addr 0x5325d8c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_reported_user_id() ;

/// @brief Method get_reporting_user_id, addr 0x5325be0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_reporting_user_id() ;

/// @brief Method set_category, addr 0x5325e60, size 0xd8, virtual false, abstract: false, final false
inline void set_category(int32_t  value) ;

/// @brief Method set_metadata, addr 0x5326364, size 0xd8, virtual false, abstract: false, final false
inline void set_metadata(::StringW  value) ;

/// @brief Method set_modded_client, addr 0x53261b8, size 0xd8, virtual false, abstract: false, final false
inline void set_modded_client(bool  value) ;

/// @brief Method set_platform, addr 0x532600c, size 0xd8, virtual false, abstract: false, final false
inline void set_platform(::StringW  value) ;

/// @brief Method set_reported_user_id, addr 0x5325cb4, size 0xd8, virtual false, abstract: false, final false
inline void set_reported_user_id(::StringW  value) ;

/// @brief Method set_reporting_user_id, addr 0x5325b08, size 0xd8, virtual false, abstract: false, final false
inline void set_reporting_user_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53257f4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ServerCreateReportRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerCreateReportRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerCreateReportRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerCreateReportRequest(ServerCreateReportRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerCreateReportRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerCreateReportRequest(ServerCreateReportRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9504};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerCreateReportRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ServerCreateReportRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
