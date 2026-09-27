#pragma once
// IWYU pragma private; include "GlobalNamespace/SingleBanResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SingleBanResponse)
namespace GlobalNamespace {
class MothershipBanData;
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
class SingleBanResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SingleBanResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SingleBanResponse*, "", "SingleBanResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SingleBanResponse
class CORDL_TYPE SingleBanResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Ban, put=set_Ban)) ::GlobalNamespace::MothershipBanData*  Ban;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x533a9d0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x533ae1c, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SingleBanResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::SingleBanResponse* New_ctor() ;

static inline ::GlobalNamespace::SingleBanResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x533ad38, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x533af34, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x533a840, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x533a8f4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SingleBanResponse*  obj) ;

/// @brief Method get_Ban, addr 0x533ac2c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipBanData* get_Ban() ;

/// @brief Method set_Ban, addr 0x533ab3c, size 0xf0, virtual false, abstract: false, final false
inline void set_Ban(::GlobalNamespace::MothershipBanData*  value) ;

/// @brief Method swigRelease, addr 0x533a934, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SingleBanResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleBanResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleBanResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleBanResponse(SingleBanResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleBanResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleBanResponse(SingleBanResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9542};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SingleBanResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SingleBanResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
