#pragma once
// IWYU pragma private; include "GlobalNamespace/GetSingleProgressionTreeBindingResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetSingleProgressionTreeBindingResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class ProgressionTreeBindingResponse;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class GetSingleProgressionTreeBindingResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetSingleProgressionTreeBindingResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetSingleProgressionTreeBindingResponse*, "", "GetSingleProgressionTreeBindingResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetSingleProgressionTreeBindingResponse
class CORDL_TYPE GetSingleProgressionTreeBindingResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Results, put=set_Results)) ::GlobalNamespace::ProgressionTreeBindingResponse*  Results;

/// @brief Field Results_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Results_name, put=setStaticF_Results_name)) ::StringW  Results_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5425300, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5425550, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GetSingleProgressionTreeBindingResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::GetSingleProgressionTreeBindingResponse* New_ctor() ;

static inline ::GlobalNamespace::GetSingleProgressionTreeBindingResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x542546c, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5425864, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5425170, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5425224, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::GetSingleProgressionTreeBindingResponse*  obj) ;

static inline ::StringW getStaticF_Results_name() ;

/// @brief Method get_Results, addr 0x5425758, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ProgressionTreeBindingResponse* get_Results() ;

static inline void setStaticF_Results_name(::StringW  value) ;

/// @brief Method set_Results, addr 0x5425668, size 0xf0, virtual false, abstract: false, final false
inline void set_Results(::GlobalNamespace::ProgressionTreeBindingResponse*  value) ;

/// @brief Method swigRelease, addr 0x5425264, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::GetSingleProgressionTreeBindingResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetSingleProgressionTreeBindingResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetSingleProgressionTreeBindingResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetSingleProgressionTreeBindingResponse(GetSingleProgressionTreeBindingResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetSingleProgressionTreeBindingResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetSingleProgressionTreeBindingResponse(GetSingleProgressionTreeBindingResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9089};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetSingleProgressionTreeBindingResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetSingleProgressionTreeBindingResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
