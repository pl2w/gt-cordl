#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateProgressionTreeBindingsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateProgressionTreeBindingsRequest)
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
class UpdateProgressionTreeBindingsRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateProgressionTreeBindingsRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateProgressionTreeBindingsRequest*, "", "UpdateProgressionTreeBindingsRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateProgressionTreeBindingsRequest
class CORDL_TYPE UpdateProgressionTreeBindingsRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_deploymentId, put=set_deploymentId)) ::StringW  deploymentId;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_treeId, put=set_treeId)) ::StringW  treeId;

 __declspec(property(get=get_visible, put=set_visible)) bool  visible;

/// @brief Method Dispose, addr 0x5387c48, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateProgressionTreeBindingsRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateProgressionTreeBindingsRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5387db4, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53888c8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5387ab8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5387b6c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateProgressionTreeBindingsRequest*  obj) ;

/// @brief Method get_deploymentId, addr 0x53882f0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deploymentId() ;

/// @brief Method get_envId, addr 0x5388144, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_id, addr 0x5388648, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_titleId, addr 0x5387f98, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_treeId, addr 0x538849c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_treeId() ;

/// @brief Method get_visible, addr 0x53887f4, size 0xd4, virtual false, abstract: false, final false
inline bool get_visible() ;

/// @brief Method set_deploymentId, addr 0x5388218, size 0xd8, virtual false, abstract: false, final false
inline void set_deploymentId(::StringW  value) ;

/// @brief Method set_envId, addr 0x538806c, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_id, addr 0x5388570, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_titleId, addr 0x5387ec0, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_treeId, addr 0x53883c4, size 0xd8, virtual false, abstract: false, final false
inline void set_treeId(::StringW  value) ;

/// @brief Method set_visible, addr 0x538871c, size 0xd8, virtual false, abstract: false, final false
inline void set_visible(bool  value) ;

/// @brief Method swigRelease, addr 0x5387bac, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateProgressionTreeBindingsRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateProgressionTreeBindingsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateProgressionTreeBindingsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateProgressionTreeBindingsRequest(UpdateProgressionTreeBindingsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateProgressionTreeBindingsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateProgressionTreeBindingsRequest(UpdateProgressionTreeBindingsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9671};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateProgressionTreeBindingsRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateProgressionTreeBindingsRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
