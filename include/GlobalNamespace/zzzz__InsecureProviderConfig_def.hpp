#pragma once
// IWYU pragma private; include "GlobalNamespace/InsecureProviderConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InsecureProviderConfig)
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
class InsecureProviderConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InsecureProviderConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InsecureProviderConfig*, "", "InsecureProviderConfig");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: InsecureProviderConfig
class CORDL_TYPE InsecureProviderConfig : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_isSet, put=set_isSet)) bool  isSet;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x544243c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5442538, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x54424a8, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::InsecureProviderConfig* New_ctor() ;

static inline ::GlobalNamespace::InsecureProviderConfig* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x54429dc, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5442304, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5442364, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::InsecureProviderConfig*  obj) ;

/// @brief Method get_enabled, addr 0x5442908, size 0xd4, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_isSet, addr 0x544275c, size 0xd4, virtual false, abstract: false, final false
inline bool get_isSet() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_enabled, addr 0x5442830, size 0xd8, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_isSet, addr 0x5442684, size 0xd8, virtual false, abstract: false, final false
inline void set_isSet(bool  value) ;

/// @brief Method swigRelease, addr 0x54423a4, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::InsecureProviderConfig*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsecureProviderConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsecureProviderConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsecureProviderConfig(InsecureProviderConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsecureProviderConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsecureProviderConfig(InsecureProviderConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9143};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InsecureProviderConfig, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InsecureProviderConfig, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InsecureProviderConfig) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
