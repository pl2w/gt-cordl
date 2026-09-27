#pragma once
// IWYU pragma private; include "GlobalNamespace/AutomationGetSubscriptionsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AutomationGetSubscriptionsRequest)
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
class AutomationGetSubscriptionsRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AutomationGetSubscriptionsRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutomationGetSubscriptionsRequest*, "", "AutomationGetSubscriptionsRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: AutomationGetSubscriptionsRequest
class CORDL_TYPE AutomationGetSubscriptionsRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_mothership_player_id, put=set_mothership_player_id)) ::StringW  mothership_player_id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

/// @brief Method Dispose, addr 0x526c5fc, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::AutomationGetSubscriptionsRequest* New_ctor() ;

static inline ::GlobalNamespace::AutomationGetSubscriptionsRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x526c768, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x526cd78, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x526c46c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x526c520, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::AutomationGetSubscriptionsRequest*  obj) ;

/// @brief Method get_envId, addr 0x526caf8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_mothership_player_id, addr 0x526cca4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_mothership_player_id() ;

/// @brief Method get_titleId, addr 0x526c94c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method set_envId, addr 0x526ca20, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_mothership_player_id, addr 0x526cbcc, size 0xd8, virtual false, abstract: false, final false
inline void set_mothership_player_id(::StringW  value) ;

/// @brief Method set_titleId, addr 0x526c874, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x526c560, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::AutomationGetSubscriptionsRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutomationGetSubscriptionsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutomationGetSubscriptionsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutomationGetSubscriptionsRequest(AutomationGetSubscriptionsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutomationGetSubscriptionsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutomationGetSubscriptionsRequest(AutomationGetSubscriptionsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8798};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutomationGetSubscriptionsRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutomationGetSubscriptionsRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
