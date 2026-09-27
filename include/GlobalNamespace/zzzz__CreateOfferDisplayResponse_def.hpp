#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateOfferDisplayResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateOfferDisplayResponse)
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
class CreateOfferDisplayResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateOfferDisplayResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateOfferDisplayResponse*, "", "CreateOfferDisplayResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateOfferDisplayResponse
class CORDL_TYPE CreateOfferDisplayResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

/// @brief Field env_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_env_id_name, put=setStaticF_env_id_name)) ::StringW  env_id_name;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field name_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_name_name, put=setStaticF_name_name)) ::StringW  name_name;

 __declspec(property(get=get_offer_display_id, put=set_offer_display_id)) ::StringW  offer_display_id;

/// @brief Field offer_display_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offer_display_id_name, put=setStaticF_offer_display_id_name)) ::StringW  offer_display_id_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Field title_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_title_id_name, put=setStaticF_title_id_name)) ::StringW  title_id_name;

/// @brief Method Dispose, addr 0x52954e0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5295730, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CreateOfferDisplayResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::CreateOfferDisplayResponse* New_ctor() ;

static inline ::GlobalNamespace::CreateOfferDisplayResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x529564c, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5295ef8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5295350, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5295404, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateOfferDisplayResponse*  obj) ;

static inline ::StringW getStaticF_env_id_name() ;

static inline ::StringW getStaticF_name_name() ;

static inline ::StringW getStaticF_offer_display_id_name() ;

static inline ::StringW getStaticF_title_id_name() ;

/// @brief Method get_env_id, addr 0x5295c78, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_name, addr 0x5295e24, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_offer_display_id, addr 0x5295920, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_display_id() ;

/// @brief Method get_title_id, addr 0x5295acc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

static inline void setStaticF_env_id_name(::StringW  value) ;

static inline void setStaticF_name_name(::StringW  value) ;

static inline void setStaticF_offer_display_id_name(::StringW  value) ;

static inline void setStaticF_title_id_name(::StringW  value) ;

/// @brief Method set_env_id, addr 0x5295ba0, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_name, addr 0x5295d4c, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_offer_display_id, addr 0x5295848, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_display_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x52959f4, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5295444, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateOfferDisplayResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateOfferDisplayResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateOfferDisplayResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateOfferDisplayResponse(CreateOfferDisplayResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateOfferDisplayResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateOfferDisplayResponse(CreateOfferDisplayResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8876};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateOfferDisplayResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateOfferDisplayResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
