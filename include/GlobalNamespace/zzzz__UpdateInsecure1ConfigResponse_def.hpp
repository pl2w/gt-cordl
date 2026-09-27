#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateInsecure1ConfigResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateInsecure1ConfigResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class MothershipTitleEnvironment;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class UpdateInsecure1ConfigResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateInsecure1ConfigResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateInsecure1ConfigResponse*, "", "UpdateInsecure1ConfigResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateInsecure1ConfigResponse
class CORDL_TYPE UpdateInsecure1ConfigResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_env, put=set_env)) ::GlobalNamespace::MothershipTitleEnvironment*  env;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x537f264, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x537f4b4, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UpdateInsecure1ConfigResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::UpdateInsecure1ConfigResponse* New_ctor() ;

static inline ::GlobalNamespace::UpdateInsecure1ConfigResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x537f3d0, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x537f7c8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x537f0d4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x537f188, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateInsecure1ConfigResponse*  obj) ;

/// @brief Method get_env, addr 0x537f6bc, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipTitleEnvironment* get_env() ;

/// @brief Method set_env, addr 0x537f5cc, size 0xf0, virtual false, abstract: false, final false
inline void set_env(::GlobalNamespace::MothershipTitleEnvironment*  value) ;

/// @brief Method swigRelease, addr 0x537f1c8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateInsecure1ConfigResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateInsecure1ConfigResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateInsecure1ConfigResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateInsecure1ConfigResponse(UpdateInsecure1ConfigResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateInsecure1ConfigResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateInsecure1ConfigResponse(UpdateInsecure1ConfigResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9653};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateInsecure1ConfigResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateInsecure1ConfigResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
