#pragma once
// IWYU pragma private; include "GlobalNamespace/TitleResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TitleResult)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class TitleResult;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TitleResult*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleResult*, "", "TitleResult");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: TitleResult
class CORDL_TYPE TitleResult : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_title_name, put=set_title_name)) ::StringW  title_name;

/// @brief Method Dispose, addr 0x53602d0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::TitleResult* New_ctor() ;

static inline ::GlobalNamespace::TitleResult* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::TitleResult* New_ctor(::StringW  titleId, ::StringW  titleName) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x536043c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5360140, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x5360508, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::StringW  titleId, ::StringW  titleName) ;

/// @brief Method getCPtr, addr 0x53601f4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::TitleResult*  obj) ;

/// @brief Method get_title_id, addr 0x53606c4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_title_name, addr 0x5360870, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_name() ;

/// @brief Method set_title_id, addr 0x53605ec, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_title_name, addr 0x5360798, size 0xd8, virtual false, abstract: false, final false
inline void set_title_name(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5360234, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::TitleResult*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleResult(TitleResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleResult(TitleResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9602};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleResult, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleResult) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
