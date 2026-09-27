#pragma once
// IWYU pragma private; include "GlobalNamespace/AddPlayerAccountLinkResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AddPlayerAccountLinkResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class PlayerIdentityVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class AddPlayerAccountLinkResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AddPlayerAccountLinkResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AddPlayerAccountLinkResponse*, "", "AddPlayerAccountLinkResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: AddPlayerAccountLinkResponse
class CORDL_TYPE AddPlayerAccountLinkResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Identities, put=set_Identities)) ::GlobalNamespace::PlayerIdentityVector*  Identities;

/// @brief Field identities_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_identities_name, put=setStaticF_identities_name)) ::StringW  identities_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52606b4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5260904, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AddPlayerAccountLinkResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::AddPlayerAccountLinkResponse* New_ctor() ;

static inline ::GlobalNamespace::AddPlayerAccountLinkResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5260820, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5260c18, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5260524, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52605d8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::AddPlayerAccountLinkResponse*  obj) ;

static inline ::StringW getStaticF_identities_name() ;

/// @brief Method get_Identities, addr 0x5260b0c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerIdentityVector* get_Identities() ;

static inline void setStaticF_identities_name(::StringW  value) ;

/// @brief Method set_Identities, addr 0x5260a1c, size 0xf0, virtual false, abstract: false, final false
inline void set_Identities(::GlobalNamespace::PlayerIdentityVector*  value) ;

/// @brief Method swigRelease, addr 0x5260618, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::AddPlayerAccountLinkResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddPlayerAccountLinkResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddPlayerAccountLinkResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddPlayerAccountLinkResponse(AddPlayerAccountLinkResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddPlayerAccountLinkResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddPlayerAccountLinkResponse(AddPlayerAccountLinkResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8778};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AddPlayerAccountLinkResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AddPlayerAccountLinkResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
