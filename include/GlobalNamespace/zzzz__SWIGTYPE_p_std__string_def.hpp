#pragma once
// IWYU pragma private; include "GlobalNamespace/SWIGTYPE_p_std__string.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SWIGTYPE_p_std__string)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class SWIGTYPE_p_std__string;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SWIGTYPE_p_std__string*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SWIGTYPE_p_std__string*, "", "SWIGTYPE_p_std__string");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SWIGTYPE_p_std__string
class CORDL_TYPE SWIGTYPE_p_std__string : public ::System::Object {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

static inline ::GlobalNamespace::SWIGTYPE_p_std__string* New_ctor() ;

static inline ::GlobalNamespace::SWIGTYPE_p_std__string* New_ctor(::System::IntPtr  cPtr, bool  futureUse) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x535ab18, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x535aac0, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  futureUse) ;

/// @brief Method getCPtr, addr 0x535ab64, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SWIGTYPE_p_std__string*  obj) ;

/// @brief Method swigRelease, addr 0x535aba4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SWIGTYPE_p_std__string*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGTYPE_p_std__string() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGTYPE_p_std__string", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGTYPE_p_std__string(SWIGTYPE_p_std__string && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGTYPE_p_std__string", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGTYPE_p_std__string(SWIGTYPE_p_std__string const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9594};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SWIGTYPE_p_std__string, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SWIGTYPE_p_std__string) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
