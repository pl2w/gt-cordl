#pragma once
// IWYU pragma private; include "GlobalNamespace/ListReportsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListReportsRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace GlobalNamespace {
class StringVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class ListReportsRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListReportsRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListReportsRequest*, "", "ListReportsRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListReportsRequest
class CORDL_TYPE ListReportsRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_category, put=set_category)) int32_t  category;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_reports_against, put=set_reports_against)) ::GlobalNamespace::StringVector*  reports_against;

 __declspec(property(get=get_reports_by, put=set_reports_by)) ::GlobalNamespace::StringVector*  reports_by;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x5476964, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ListReportsRequest* New_ctor() ;

static inline ::GlobalNamespace::ListReportsRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5476ad0, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x54774d8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x54767d4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5476888, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ListReportsRequest*  obj) ;

/// @brief Method get_category, addr 0x5477404, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_category() ;

/// @brief Method get_env_id, addr 0x5476e60, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_reports_against, addr 0x5477220, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_reports_against() ;

/// @brief Method get_reports_by, addr 0x5477024, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_reports_by() ;

/// @brief Method get_title_id, addr 0x5476cb4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_category, addr 0x547732c, size 0xd8, virtual false, abstract: false, final false
inline void set_category(int32_t  value) ;

/// @brief Method set_env_id, addr 0x5476d88, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_reports_against, addr 0x5477130, size 0xf0, virtual false, abstract: false, final false
inline void set_reports_against(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_reports_by, addr 0x5476f34, size 0xf0, virtual false, abstract: false, final false
inline void set_reports_by(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_title_id, addr 0x5476bdc, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x54768c8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ListReportsRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListReportsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListReportsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListReportsRequest(ListReportsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListReportsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListReportsRequest(ListReportsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9235};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListReportsRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListReportsRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
