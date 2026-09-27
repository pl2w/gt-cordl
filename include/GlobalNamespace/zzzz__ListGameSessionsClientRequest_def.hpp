#pragma once
// IWYU pragma private; include "GlobalNamespace/ListGameSessionsClientRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListGameSessionsClientRequest)
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
class ListGameSessionsClientRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListGameSessionsClientRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListGameSessionsClientRequest*, "", "ListGameSessionsClientRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListGameSessionsClientRequest
class CORDL_TYPE ListGameSessionsClientRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_max_empty_slots, put=set_max_empty_slots)) int32_t  max_empty_slots;

 __declspec(property(get=get_min_empty_slots, put=set_min_empty_slots)) int32_t  min_empty_slots;

 __declspec(property(get=get_page_offset, put=set_page_offset)) int32_t  page_offset;

 __declspec(property(get=get_page_size, put=set_page_size)) int32_t  page_size;

 __declspec(property(get=get_partition, put=set_partition)) ::StringW  partition;

 __declspec(property(get=get_region, put=set_region)) ::StringW  region;

 __declspec(property(get=get_session_name_search, put=set_session_name_search)) ::StringW  session_name_search;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5460dc8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ListGameSessionsClientRequest* New_ctor() ;

static inline ::GlobalNamespace::ListGameSessionsClientRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5461ae8, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5461bf4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5460c38, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5460cec, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ListGameSessionsClientRequest*  obj) ;

/// @brief Method get_max_empty_slots, addr 0x5461868, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_max_empty_slots() ;

/// @brief Method get_min_empty_slots, addr 0x54616bc, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_min_empty_slots() ;

/// @brief Method get_page_offset, addr 0x54611b8, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_page_offset() ;

/// @brief Method get_page_size, addr 0x546100c, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_page_size() ;

/// @brief Method get_partition, addr 0x5461510, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_partition() ;

/// @brief Method get_region, addr 0x5461364, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_region() ;

/// @brief Method get_session_name_search, addr 0x5461a14, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_session_name_search() ;

/// @brief Method set_max_empty_slots, addr 0x5461790, size 0xd8, virtual false, abstract: false, final false
inline void set_max_empty_slots(int32_t  value) ;

/// @brief Method set_min_empty_slots, addr 0x54615e4, size 0xd8, virtual false, abstract: false, final false
inline void set_min_empty_slots(int32_t  value) ;

/// @brief Method set_page_offset, addr 0x54610e0, size 0xd8, virtual false, abstract: false, final false
inline void set_page_offset(int32_t  value) ;

/// @brief Method set_page_size, addr 0x5460f34, size 0xd8, virtual false, abstract: false, final false
inline void set_page_size(int32_t  value) ;

/// @brief Method set_partition, addr 0x5461438, size 0xd8, virtual false, abstract: false, final false
inline void set_partition(::StringW  value) ;

/// @brief Method set_region, addr 0x546128c, size 0xd8, virtual false, abstract: false, final false
inline void set_region(::StringW  value) ;

/// @brief Method set_session_name_search, addr 0x546193c, size 0xd8, virtual false, abstract: false, final false
inline void set_session_name_search(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5460d2c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ListGameSessionsClientRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListGameSessionsClientRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListGameSessionsClientRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListGameSessionsClientRequest(ListGameSessionsClientRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListGameSessionsClientRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListGameSessionsClientRequest(ListGameSessionsClientRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9188};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListGameSessionsClientRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListGameSessionsClientRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
