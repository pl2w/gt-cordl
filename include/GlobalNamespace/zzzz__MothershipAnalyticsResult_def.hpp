#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipAnalyticsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipAnalyticsResult)
namespace GlobalNamespace {
class AnalyticsResponseVector;
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
class MothershipAnalyticsResult;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipAnalyticsResult*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipAnalyticsResult*, "", "MothershipAnalyticsResult");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipAnalyticsResult
class CORDL_TYPE MothershipAnalyticsResult : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_results, put=set_results)) ::GlobalNamespace::AnalyticsResponseVector*  results;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5587b94, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5587c90, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5587c00, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipAnalyticsResult* New_ctor() ;

static inline ::GlobalNamespace::MothershipAnalyticsResult* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x5587fc8, size 0xdc, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  string_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x55880a4, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5587a5c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5587abc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipAnalyticsResult*  obj) ;

/// @brief Method get_results, addr 0x5587ec4, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::AnalyticsResponseVector* get_results() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_results, addr 0x5587ddc, size 0xe8, virtual false, abstract: false, final false
inline void set_results(::GlobalNamespace::AnalyticsResponseVector*  value) ;

/// @brief Method swigRelease, addr 0x5587afc, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipAnalyticsResult*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipAnalyticsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipAnalyticsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipAnalyticsResult(MothershipAnalyticsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipAnalyticsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipAnalyticsResult(MothershipAnalyticsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9297};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipAnalyticsResult, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAnalyticsResult, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipAnalyticsResult) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
