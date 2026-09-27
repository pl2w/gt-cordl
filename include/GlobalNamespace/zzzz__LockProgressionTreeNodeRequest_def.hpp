#pragma once
// IWYU pragma private; include "GlobalNamespace/LockProgressionTreeNodeRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LockProgressionTreeNodeRequest)
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
class LockProgressionTreeNodeRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LockProgressionTreeNodeRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LockProgressionTreeNodeRequest*, "", "LockProgressionTreeNodeRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: LockProgressionTreeNodeRequest
class CORDL_TYPE LockProgressionTreeNodeRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_mothership_player_id, put=set_mothership_player_id)) ::StringW  mothership_player_id;

 __declspec(property(get=get_node_id, put=set_node_id)) ::StringW  node_id;

 __declspec(property(get=get_refund_costs, put=set_refund_costs)) bool  refund_costs;

 __declspec(property(get=get_rewind_rewards, put=set_rewind_rewards)) bool  rewind_rewards;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_treeId, put=set_treeId)) ::StringW  treeId;

/// @brief Method Dispose, addr 0x5488d50, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::LockProgressionTreeNodeRequest* New_ctor() ;

static inline ::GlobalNamespace::LockProgressionTreeNodeRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5488ebc, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5489b7c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5488bc0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5488c74, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::LockProgressionTreeNodeRequest*  obj) ;

/// @brief Method get_envId, addr 0x548924c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_mothership_player_id, addr 0x5489750, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_mothership_player_id() ;

/// @brief Method get_node_id, addr 0x54895a4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_node_id() ;

/// @brief Method get_refund_costs, addr 0x54898fc, size 0xd4, virtual false, abstract: false, final false
inline bool get_refund_costs() ;

/// @brief Method get_rewind_rewards, addr 0x5489aa8, size 0xd4, virtual false, abstract: false, final false
inline bool get_rewind_rewards() ;

/// @brief Method get_titleId, addr 0x54890a0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_treeId, addr 0x54893f8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_treeId() ;

/// @brief Method set_envId, addr 0x5489174, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_mothership_player_id, addr 0x5489678, size 0xd8, virtual false, abstract: false, final false
inline void set_mothership_player_id(::StringW  value) ;

/// @brief Method set_node_id, addr 0x54894cc, size 0xd8, virtual false, abstract: false, final false
inline void set_node_id(::StringW  value) ;

/// @brief Method set_refund_costs, addr 0x5489824, size 0xd8, virtual false, abstract: false, final false
inline void set_refund_costs(bool  value) ;

/// @brief Method set_rewind_rewards, addr 0x54899d0, size 0xd8, virtual false, abstract: false, final false
inline void set_rewind_rewards(bool  value) ;

/// @brief Method set_titleId, addr 0x5488fc8, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_treeId, addr 0x5489320, size 0xd8, virtual false, abstract: false, final false
inline void set_treeId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5488cb4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::LockProgressionTreeNodeRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LockProgressionTreeNodeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LockProgressionTreeNodeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LockProgressionTreeNodeRequest(LockProgressionTreeNodeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LockProgressionTreeNodeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LockProgressionTreeNodeRequest(LockProgressionTreeNodeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9269};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LockProgressionTreeNodeRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LockProgressionTreeNodeRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
