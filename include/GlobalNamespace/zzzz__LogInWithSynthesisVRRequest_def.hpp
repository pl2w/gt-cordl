#pragma once
// IWYU pragma private; include "GlobalNamespace/LogInWithSynthesisVRRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LoginRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LogInWithSynthesisVRRequest)
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
class LogInWithSynthesisVRRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LogInWithSynthesisVRRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LogInWithSynthesisVRRequest*, "", "LogInWithSynthesisVRRequest");
// Dependencies LoginRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: LogInWithSynthesisVRRequest
class CORDL_TYPE LogInWithSynthesisVRRequest : public ::GlobalNamespace::LoginRequest {
public:
// Declarations
 __declspec(property(get=get_DeviceId, put=set_DeviceId)) int64_t  DeviceId;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x557bb78, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::LogInWithSynthesisVRRequest* New_ctor() ;

static inline ::GlobalNamespace::LogInWithSynthesisVRRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x557be80, size 0x104, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x557bf84, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x557b9e8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x557ba9c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::LogInWithSynthesisVRRequest*  obj) ;

/// @brief Method get_DeviceId, addr 0x557bdb4, size 0xcc, virtual false, abstract: false, final false
inline int64_t get_DeviceId() ;

/// @brief Method set_DeviceId, addr 0x557bce4, size 0xd0, virtual false, abstract: false, final false
inline void set_DeviceId(int64_t  value) ;

/// @brief Method swigRelease, addr 0x557badc, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::LogInWithSynthesisVRRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogInWithSynthesisVRRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogInWithSynthesisVRRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogInWithSynthesisVRRequest(LogInWithSynthesisVRRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogInWithSynthesisVRRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogInWithSynthesisVRRequest(LogInWithSynthesisVRRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9283};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LogInWithSynthesisVRRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LogInWithSynthesisVRRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
