#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateOfferBindingRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateOfferBindingRequest)
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
class CreateOfferBindingRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateOfferBindingRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateOfferBindingRequest*, "", "CreateOfferBindingRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateOfferBindingRequest
class CORDL_TYPE CreateOfferBindingRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_deploymentId, put=set_deploymentId)) ::StringW  deploymentId;

 __declspec(property(get=get_display_index, put=set_display_index)) int32_t  display_index;

/// @brief Field display_index_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_display_index_name, put=setStaticF_display_index_name)) ::StringW  display_index_name;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_offer_display_id, put=set_offer_display_id)) ::StringW  offer_display_id;

/// @brief Field offer_display_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offer_display_id_name, put=setStaticF_offer_display_id_name)) ::StringW  offer_display_id_name;

 __declspec(property(get=get_offer_id, put=set_offer_id)) ::StringW  offer_id;

/// @brief Field offer_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offer_id_name, put=setStaticF_offer_id_name)) ::StringW  offer_id_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

/// @brief Method Dispose, addr 0x528e3d4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::CreateOfferBindingRequest* New_ctor() ;

static inline ::GlobalNamespace::CreateOfferBindingRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x528e540, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x528f054, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x528e244, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x528e2f8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateOfferBindingRequest*  obj) ;

static inline ::StringW getStaticF_display_index_name() ;

static inline ::StringW getStaticF_offer_display_id_name() ;

static inline ::StringW getStaticF_offer_id_name() ;

/// @brief Method get_deploymentId, addr 0x528ea7c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deploymentId() ;

/// @brief Method get_display_index, addr 0x528ef80, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_display_index() ;

/// @brief Method get_envId, addr 0x528e8d0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_offer_display_id, addr 0x528ec28, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_display_id() ;

/// @brief Method get_offer_id, addr 0x528edd4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_id() ;

/// @brief Method get_titleId, addr 0x528e724, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

static inline void setStaticF_display_index_name(::StringW  value) ;

static inline void setStaticF_offer_display_id_name(::StringW  value) ;

static inline void setStaticF_offer_id_name(::StringW  value) ;

/// @brief Method set_deploymentId, addr 0x528e9a4, size 0xd8, virtual false, abstract: false, final false
inline void set_deploymentId(::StringW  value) ;

/// @brief Method set_display_index, addr 0x528eea8, size 0xd8, virtual false, abstract: false, final false
inline void set_display_index(int32_t  value) ;

/// @brief Method set_envId, addr 0x528e7f8, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_offer_display_id, addr 0x528eb50, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_display_id(::StringW  value) ;

/// @brief Method set_offer_id, addr 0x528ecfc, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_id(::StringW  value) ;

/// @brief Method set_titleId, addr 0x528e64c, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x528e338, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateOfferBindingRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateOfferBindingRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateOfferBindingRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateOfferBindingRequest(CreateOfferBindingRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateOfferBindingRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateOfferBindingRequest(CreateOfferBindingRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8867};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateOfferBindingRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateOfferBindingRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
