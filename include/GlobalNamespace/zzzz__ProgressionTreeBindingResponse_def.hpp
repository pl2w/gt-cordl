#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionTreeBindingResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProgressionTreeBindingResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressionTreeBindingResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProgressionTreeBindingResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionTreeBindingResponse*, "", "ProgressionTreeBindingResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionTreeBindingResponse
class CORDL_TYPE ProgressionTreeBindingResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_deployment_id, put=set_deployment_id)) ::StringW  deployment_id;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_progression_tree_id, put=set_progression_tree_id)) ::StringW  progression_tree_id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_visible, put=set_visible)) bool  visible;

/// @brief Method Dispose, addr 0x5302bc4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5302d30, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ProgressionTreeBindingResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::ProgressionTreeBindingResponse* New_ctor() ;

static inline ::GlobalNamespace::ProgressionTreeBindingResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5303850, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5303934, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5302a34, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5302ae8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ProgressionTreeBindingResponse*  obj) ;

/// @brief Method get_deployment_id, addr 0x5303424, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deployment_id() ;

/// @brief Method get_env_id, addr 0x5303278, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_id, addr 0x5302f20, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_progression_tree_id, addr 0x53035d0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_progression_tree_id() ;

/// @brief Method get_title_id, addr 0x53030cc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_visible, addr 0x530377c, size 0xd4, virtual false, abstract: false, final false
inline bool get_visible() ;

/// @brief Method set_deployment_id, addr 0x530334c, size 0xd8, virtual false, abstract: false, final false
inline void set_deployment_id(::StringW  value) ;

/// @brief Method set_env_id, addr 0x53031a0, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_id, addr 0x5302e48, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_progression_tree_id, addr 0x53034f8, size 0xd8, virtual false, abstract: false, final false
inline void set_progression_tree_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x5302ff4, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_visible, addr 0x53036a4, size 0xd8, virtual false, abstract: false, final false
inline void set_visible(bool  value) ;

/// @brief Method swigRelease, addr 0x5302b28, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ProgressionTreeBindingResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionTreeBindingResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionTreeBindingResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionTreeBindingResponse(ProgressionTreeBindingResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionTreeBindingResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionTreeBindingResponse(ProgressionTreeBindingResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9441};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionTreeBindingResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionTreeBindingResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
