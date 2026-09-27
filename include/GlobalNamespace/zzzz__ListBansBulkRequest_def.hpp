#pragma once
// IWYU pragma private; include "GlobalNamespace/ListBansBulkRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListBansBulkRequest)
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
class ListBansBulkRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListBansBulkRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListBansBulkRequest*, "", "ListBansBulkRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListBansBulkRequest
class CORDL_TYPE ListBansBulkRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_category, put=set_category)) int32_t  category;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_include_expired, put=set_include_expired)) bool  include_expired;

 __declspec(property(get=get_player_ids, put=set_player_ids)) ::GlobalNamespace::StringVector*  player_ids;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x544ddf0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ListBansBulkRequest* New_ctor() ;

static inline ::GlobalNamespace::ListBansBulkRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x544df5c, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x544e914, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x544dc60, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x544dd14, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ListBansBulkRequest*  obj) ;

/// @brief Method get_category, addr 0x544e694, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_category() ;

/// @brief Method get_env_id, addr 0x544e2ec, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_include_expired, addr 0x544e840, size 0xd4, virtual false, abstract: false, final false
inline bool get_include_expired() ;

/// @brief Method get_player_ids, addr 0x544e4b0, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_player_ids() ;

/// @brief Method get_title_id, addr 0x544e140, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_category, addr 0x544e5bc, size 0xd8, virtual false, abstract: false, final false
inline void set_category(int32_t  value) ;

/// @brief Method set_env_id, addr 0x544e214, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_include_expired, addr 0x544e768, size 0xd8, virtual false, abstract: false, final false
inline void set_include_expired(bool  value) ;

/// @brief Method set_player_ids, addr 0x544e3c0, size 0xf0, virtual false, abstract: false, final false
inline void set_player_ids(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_title_id, addr 0x544e068, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x544dd54, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ListBansBulkRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListBansBulkRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListBansBulkRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListBansBulkRequest(ListBansBulkRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListBansBulkRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListBansBulkRequest(ListBansBulkRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9159};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListBansBulkRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListBansBulkRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
