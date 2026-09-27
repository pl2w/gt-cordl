#pragma once
// IWYU pragma private; include "GlobalNamespace/DeleteSharedGroupError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeleteSharedGroupError)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class DeleteSharedGroupError;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeleteSharedGroupError*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeleteSharedGroupError*, "", "DeleteSharedGroupError");
// Dependencies MothershipError, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeleteSharedGroupError
class CORDL_TYPE DeleteSharedGroupError : public ::GlobalNamespace::MothershipError {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53eaa24, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::DeleteSharedGroupError* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::DeleteSharedGroupError* New_ctor(::StringW  message, int32_t  statusCode) ;

static inline ::GlobalNamespace::DeleteSharedGroupError* New_ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId) ;

static inline ::GlobalNamespace::DeleteSharedGroupError* New_ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId, ::StringW  mothershipErrorCode) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53ea894, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x53ead80, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, int32_t  statusCode) ;

/// @brief Method .ctor, addr 0x53eac8c, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId) ;

/// @brief Method .ctor, addr 0x53eab90, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId, ::StringW  mothershipErrorCode) ;

/// @brief Method getCPtr, addr 0x53ea948, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::DeleteSharedGroupError*  obj) ;

/// @brief Method swigRelease, addr 0x53ea988, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::DeleteSharedGroupError*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteSharedGroupError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteSharedGroupError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteSharedGroupError(DeleteSharedGroupError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteSharedGroupError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteSharedGroupError(DeleteSharedGroupError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8964};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeleteSharedGroupError, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeleteSharedGroupError) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
