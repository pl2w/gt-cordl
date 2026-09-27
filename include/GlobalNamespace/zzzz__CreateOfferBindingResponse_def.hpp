#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateOfferBindingResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateOfferBindingResponse)
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
class CreateOfferBindingResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateOfferBindingResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateOfferBindingResponse*, "", "CreateOfferBindingResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateOfferBindingResponse
class CORDL_TYPE CreateOfferBindingResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_committed, put=set_committed)) bool  committed;

/// @brief Field committed_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_committed_name, put=setStaticF_committed_name)) ::StringW  committed_name;

 __declspec(property(get=get_deployment_id, put=set_deployment_id)) ::StringW  deployment_id;

/// @brief Field deployment_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deployment_id_name, put=setStaticF_deployment_id_name)) ::StringW  deployment_id_name;

 __declspec(property(get=get_display_index, put=set_display_index)) int32_t  display_index;

/// @brief Field display_index_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_display_index_name, put=setStaticF_display_index_name)) ::StringW  display_index_name;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

/// @brief Field env_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_env_id_name, put=setStaticF_env_id_name)) ::StringW  env_id_name;

 __declspec(property(get=get_offer_binding_id, put=set_offer_binding_id)) ::StringW  offer_binding_id;

/// @brief Field offer_binding_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offer_binding_id_name, put=setStaticF_offer_binding_id_name)) ::StringW  offer_binding_id_name;

 __declspec(property(get=get_offer_display_id, put=set_offer_display_id)) ::StringW  offer_display_id;

/// @brief Field offer_display_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offer_display_id_name, put=setStaticF_offer_display_id_name)) ::StringW  offer_display_id_name;

 __declspec(property(get=get_offer_id, put=set_offer_id)) ::StringW  offer_id;

/// @brief Field offer_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offer_id_name, put=setStaticF_offer_id_name)) ::StringW  offer_id_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Field title_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_title_id_name, put=setStaticF_title_id_name)) ::StringW  title_id_name;

/// @brief Method Dispose, addr 0x528f370, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x528f5c0, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CreateOfferBindingResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::CreateOfferBindingResponse* New_ctor() ;

static inline ::GlobalNamespace::CreateOfferBindingResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x528f4dc, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5290438, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x528f1e0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x528f294, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateOfferBindingResponse*  obj) ;

static inline ::StringW getStaticF_committed_name() ;

static inline ::StringW getStaticF_deployment_id_name() ;

static inline ::StringW getStaticF_display_index_name() ;

static inline ::StringW getStaticF_env_id_name() ;

static inline ::StringW getStaticF_offer_binding_id_name() ;

static inline ::StringW getStaticF_offer_display_id_name() ;

static inline ::StringW getStaticF_offer_id_name() ;

static inline ::StringW getStaticF_title_id_name() ;

/// @brief Method get_committed, addr 0x52901b8, size 0xd4, virtual false, abstract: false, final false
inline bool get_committed() ;

/// @brief Method get_deployment_id, addr 0x528fcb4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deployment_id() ;

/// @brief Method get_display_index, addr 0x5290364, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_display_index() ;

/// @brief Method get_env_id, addr 0x528fb08, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_offer_binding_id, addr 0x528f7b0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_binding_id() ;

/// @brief Method get_offer_display_id, addr 0x528fe60, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_display_id() ;

/// @brief Method get_offer_id, addr 0x529000c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_id() ;

/// @brief Method get_title_id, addr 0x528f95c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

static inline void setStaticF_committed_name(::StringW  value) ;

static inline void setStaticF_deployment_id_name(::StringW  value) ;

static inline void setStaticF_display_index_name(::StringW  value) ;

static inline void setStaticF_env_id_name(::StringW  value) ;

static inline void setStaticF_offer_binding_id_name(::StringW  value) ;

static inline void setStaticF_offer_display_id_name(::StringW  value) ;

static inline void setStaticF_offer_id_name(::StringW  value) ;

static inline void setStaticF_title_id_name(::StringW  value) ;

/// @brief Method set_committed, addr 0x52900e0, size 0xd8, virtual false, abstract: false, final false
inline void set_committed(bool  value) ;

/// @brief Method set_deployment_id, addr 0x528fbdc, size 0xd8, virtual false, abstract: false, final false
inline void set_deployment_id(::StringW  value) ;

/// @brief Method set_display_index, addr 0x529028c, size 0xd8, virtual false, abstract: false, final false
inline void set_display_index(int32_t  value) ;

/// @brief Method set_env_id, addr 0x528fa30, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_offer_binding_id, addr 0x528f6d8, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_binding_id(::StringW  value) ;

/// @brief Method set_offer_display_id, addr 0x528fd88, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_display_id(::StringW  value) ;

/// @brief Method set_offer_id, addr 0x528ff34, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x528f884, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x528f2d4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateOfferBindingResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateOfferBindingResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateOfferBindingResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateOfferBindingResponse(CreateOfferBindingResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateOfferBindingResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateOfferBindingResponse(CreateOfferBindingResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8868};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateOfferBindingResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateOfferBindingResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
