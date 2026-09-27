#pragma once
// IWYU pragma private; include "GlobalNamespace/FinalizeSteamSubPurchaseError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FinalizeSteamSubPurchaseError)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class FinalizeSteamSubPurchaseError;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FinalizeSteamSubPurchaseError*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FinalizeSteamSubPurchaseError*, "", "FinalizeSteamSubPurchaseError");
// Dependencies MothershipError, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: FinalizeSteamSubPurchaseError
class CORDL_TYPE FinalizeSteamSubPurchaseError : public ::GlobalNamespace::MothershipError {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53fd47c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::FinalizeSteamSubPurchaseError* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::FinalizeSteamSubPurchaseError* New_ctor(::StringW  message, int32_t  statusCode) ;

static inline ::GlobalNamespace::FinalizeSteamSubPurchaseError* New_ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId) ;

static inline ::GlobalNamespace::FinalizeSteamSubPurchaseError* New_ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId, ::StringW  mothershipErrorCode) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53fd2ec, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x53fd7d8, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, int32_t  statusCode) ;

/// @brief Method .ctor, addr 0x53fd6e4, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId) ;

/// @brief Method .ctor, addr 0x53fd5e8, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId, ::StringW  mothershipErrorCode) ;

/// @brief Method getCPtr, addr 0x53fd3a0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::FinalizeSteamSubPurchaseError*  obj) ;

/// @brief Method swigRelease, addr 0x53fd3e0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::FinalizeSteamSubPurchaseError*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FinalizeSteamSubPurchaseError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FinalizeSteamSubPurchaseError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FinalizeSteamSubPurchaseError(FinalizeSteamSubPurchaseError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FinalizeSteamSubPurchaseError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FinalizeSteamSubPurchaseError(FinalizeSteamSubPurchaseError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9006};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FinalizeSteamSubPurchaseError, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FinalizeSteamSubPurchaseError) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
