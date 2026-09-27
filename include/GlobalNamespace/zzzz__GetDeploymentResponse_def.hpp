#pragma once
// IWYU pragma private; include "GlobalNamespace/GetDeploymentResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetDeploymentResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class MothershipTitleEnvDeployment;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class GetDeploymentResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetDeploymentResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetDeploymentResponse*, "", "GetDeploymentResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetDeploymentResponse
class CORDL_TYPE GetDeploymentResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_deployment, put=set_deployment)) ::GlobalNamespace::MothershipTitleEnvDeployment*  deployment;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5406c6c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5406ebc, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GetDeploymentResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::GetDeploymentResponse* New_ctor() ;

static inline ::GlobalNamespace::GetDeploymentResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5406dd8, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x54071d0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5406adc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5406b90, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::GetDeploymentResponse*  obj) ;

/// @brief Method get_deployment, addr 0x54070c4, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipTitleEnvDeployment* get_deployment() ;

/// @brief Method set_deployment, addr 0x5406fd4, size 0xf0, virtual false, abstract: false, final false
inline void set_deployment(::GlobalNamespace::MothershipTitleEnvDeployment*  value) ;

/// @brief Method swigRelease, addr 0x5406bd0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::GetDeploymentResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetDeploymentResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetDeploymentResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetDeploymentResponse(GetDeploymentResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetDeploymentResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetDeploymentResponse(GetDeploymentResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9020};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetDeploymentResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetDeploymentResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
