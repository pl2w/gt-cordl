#pragma once
// IWYU pragma private; include "GlobalNamespace/SingleMuteResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SingleMuteResponse)
namespace GlobalNamespace {
class MothershipMuteData;
}
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
class SingleMuteResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SingleMuteResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SingleMuteResponse*, "", "SingleMuteResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SingleMuteResponse
class CORDL_TYPE SingleMuteResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Mute, put=set_Mute)) ::GlobalNamespace::MothershipMuteData*  Mute;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x533b190, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x533b5dc, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SingleMuteResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::SingleMuteResponse* New_ctor() ;

static inline ::GlobalNamespace::SingleMuteResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x533b4f8, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x533b6f4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x533b000, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x533b0b4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SingleMuteResponse*  obj) ;

/// @brief Method get_Mute, addr 0x533b3ec, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipMuteData* get_Mute() ;

/// @brief Method set_Mute, addr 0x533b2fc, size 0xf0, virtual false, abstract: false, final false
inline void set_Mute(::GlobalNamespace::MothershipMuteData*  value) ;

/// @brief Method swigRelease, addr 0x533b0f4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SingleMuteResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleMuteResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleMuteResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleMuteResponse(SingleMuteResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleMuteResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleMuteResponse(SingleMuteResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9543};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SingleMuteResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SingleMuteResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
