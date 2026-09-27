#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipTitleDataShort.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipTitleDataShort)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipTitleDataShort;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipTitleDataShort*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipTitleDataShort*, "", "MothershipTitleDataShort");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipTitleDataShort
class CORDL_TYPE MothershipTitleDataShort : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_data, put=set_data)) ::StringW  data;

 __declspec(property(get=get_key, put=set_key)) ::StringW  key;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52c664c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipTitleDataShort* New_ctor() ;

static inline ::GlobalNamespace::MothershipTitleDataShort* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52c6b10, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52c6bf4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52c64bc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52c6570, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipTitleDataShort*  obj) ;

/// @brief Method get_data, addr 0x52c6a3c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_data() ;

/// @brief Method get_key, addr 0x52c6890, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key() ;

/// @brief Method set_data, addr 0x52c6964, size 0xd8, virtual false, abstract: false, final false
inline void set_data(::StringW  value) ;

/// @brief Method set_key, addr 0x52c67b8, size 0xd8, virtual false, abstract: false, final false
inline void set_key(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52c65b0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipTitleDataShort*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipTitleDataShort() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipTitleDataShort", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipTitleDataShort(MothershipTitleDataShort && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipTitleDataShort", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipTitleDataShort(MothershipTitleDataShort const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9371};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipTitleDataShort, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipTitleDataShort) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
