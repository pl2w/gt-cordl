#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketMessageDelegateWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MothershipWebSocketMessageDelegateWrapper)
namespace GlobalNamespace {
class MothershipWebSocketMessage;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipWebSocketMessageDelegateWrapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipWebSocketMessageDelegateWrapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWebSocketMessageDelegateWrapper*, "", "MothershipWebSocketMessageDelegateWrapper");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipWebSocketMessageDelegateWrapper
class CORDL_TYPE MothershipWebSocketMessageDelegateWrapper : public ::System::Object {
public:
// Declarations
/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52d1934, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52d1a30, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52d19a0, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipWebSocketMessageDelegateWrapper* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method OnCloseCallback, addr 0x52d1d50, size 0xd8, virtual true, abstract: false, final false
inline void OnCloseCallback(::System::IntPtr  userData) ;

/// @brief Method OnErrorCallback, addr 0x52d1e28, size 0xd8, virtual true, abstract: false, final false
inline void OnErrorCallback(::System::IntPtr  userData) ;

/// @brief Method OnMessageCallback, addr 0x52d1c54, size 0xfc, virtual true, abstract: false, final false
inline void OnMessageCallback(::GlobalNamespace::MothershipWebSocketMessage*  message, ::System::IntPtr  userData) ;

/// @brief Method OnOpenCallback, addr 0x52d1b7c, size 0xd8, virtual true, abstract: false, final false
inline void OnOpenCallback(::System::IntPtr  userData) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52d17fc, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52d185c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipWebSocketMessageDelegateWrapper*  obj) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method swigRelease, addr 0x52d189c, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipWebSocketMessageDelegateWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipWebSocketMessageDelegateWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketMessageDelegateWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipWebSocketMessageDelegateWrapper(MothershipWebSocketMessageDelegateWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketMessageDelegateWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipWebSocketMessageDelegateWrapper(MothershipWebSocketMessageDelegateWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9385};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipWebSocketMessageDelegateWrapper, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketMessageDelegateWrapper, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipWebSocketMessageDelegateWrapper) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
