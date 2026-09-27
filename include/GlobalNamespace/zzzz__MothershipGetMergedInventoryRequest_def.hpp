#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetMergedInventoryRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestShared_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipGetMergedInventoryRequest)
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
class MothershipGetMergedInventoryRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipGetMergedInventoryRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipGetMergedInventoryRequest*, "", "MothershipGetMergedInventoryRequest");
// Dependencies MothershipRequestShared, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipGetMergedInventoryRequest
class CORDL_TYPE MothershipGetMergedInventoryRequest : public ::GlobalNamespace::MothershipRequestShared {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_user_id, put=set_user_id)) ::StringW  user_id;

/// @brief Method Dispose, addr 0x52a2c68, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipGetMergedInventoryRequest* New_ctor() ;

static inline ::GlobalNamespace::MothershipGetMergedInventoryRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x52a32c8, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52a33d4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52a2ae0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52a2b90, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipGetMergedInventoryRequest*  obj) ;

/// @brief Method get_env_id, addr 0x52a31f4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_title_id, addr 0x52a3048, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_user_id, addr 0x52a2e9c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_user_id() ;

/// @brief Method set_env_id, addr 0x52a311c, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x52a2f70, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_user_id, addr 0x52a2dc4, size 0xd8, virtual false, abstract: false, final false
inline void set_user_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52a2bd0, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipGetMergedInventoryRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipGetMergedInventoryRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetMergedInventoryRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipGetMergedInventoryRequest(MothershipGetMergedInventoryRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetMergedInventoryRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipGetMergedInventoryRequest(MothershipGetMergedInventoryRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9328};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipGetMergedInventoryRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipGetMergedInventoryRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
