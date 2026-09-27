#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateTitleResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateTitleResponse)
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
class CreateTitleResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateTitleResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateTitleResponse*, "", "CreateTitleResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateTitleResponse
class CORDL_TYPE CreateTitleResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_title_name, put=set_title_name)) ::StringW  title_name;

/// @brief Method Dispose, addr 0x53d25f0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53d2840, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CreateTitleResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::CreateTitleResponse* New_ctor() ;

static inline ::GlobalNamespace::CreateTitleResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x53d275c, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53d2cb0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53d2460, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53d2514, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateTitleResponse*  obj) ;

/// @brief Method get_title_id, addr 0x53d2a30, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_title_name, addr 0x53d2bdc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_name() ;

/// @brief Method set_title_id, addr 0x53d2958, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_title_name, addr 0x53d2b04, size 0xd8, virtual false, abstract: false, final false
inline void set_title_name(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53d2554, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateTitleResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateTitleResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateTitleResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateTitleResponse(CreateTitleResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateTitleResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateTitleResponse(CreateTitleResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8915};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateTitleResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateTitleResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
