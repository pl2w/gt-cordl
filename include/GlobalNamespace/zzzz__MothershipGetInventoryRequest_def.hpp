#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetInventoryRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestShared_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipGetInventoryRequest)
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
class MothershipGetInventoryRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipGetInventoryRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipGetInventoryRequest*, "", "MothershipGetInventoryRequest");
// Dependencies MothershipRequestShared, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipGetInventoryRequest
class CORDL_TYPE MothershipGetInventoryRequest : public ::GlobalNamespace::MothershipRequestShared {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_user_id, put=set_user_id)) ::StringW  user_id;

/// @brief Method Dispose, addr 0x52a0698, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipGetInventoryRequest* New_ctor() ;

static inline ::GlobalNamespace::MothershipGetInventoryRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x52a0e54, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52a0f60, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52a0460, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52a05c0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipGetInventoryRequest*  obj) ;

/// @brief Method get_env_id, addr 0x52a0d80, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_title_id, addr 0x52a0bd4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_user_id, addr 0x52a0a28, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_user_id() ;

/// @brief Method set_env_id, addr 0x52a0ca8, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x52a0afc, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_user_id, addr 0x52a0950, size 0xd8, virtual false, abstract: false, final false
inline void set_user_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52a0600, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipGetInventoryRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipGetInventoryRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetInventoryRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipGetInventoryRequest(MothershipGetInventoryRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetInventoryRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipGetInventoryRequest(MothershipGetInventoryRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9324};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipGetInventoryRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipGetInventoryRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
