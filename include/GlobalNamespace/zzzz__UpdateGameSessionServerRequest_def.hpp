#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateGameSessionServerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateGameSessionServerRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace GlobalNamespace {
class StringKeyValueMap;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class UpdateGameSessionServerRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateGameSessionServerRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateGameSessionServerRequest*, "", "UpdateGameSessionServerRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateGameSessionServerRequest
class CORDL_TYPE UpdateGameSessionServerRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_current_player_count, put=set_current_player_count)) int32_t  current_player_count;

 __declspec(property(get=get_extra_properties, put=set_extra_properties)) ::GlobalNamespace::StringKeyValueMap*  extra_properties;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x537c488, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateGameSessionServerRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateGameSessionServerRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x537cb48, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x537cc54, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x537c2f8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x537c3ac, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateGameSessionServerRequest*  obj) ;

/// @brief Method get_current_player_count, addr 0x537c878, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_current_player_count() ;

/// @brief Method get_extra_properties, addr 0x537ca3c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringKeyValueMap* get_extra_properties() ;

/// @brief Method get_id, addr 0x537c6cc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method set_current_player_count, addr 0x537c7a0, size 0xd8, virtual false, abstract: false, final false
inline void set_current_player_count(int32_t  value) ;

/// @brief Method set_extra_properties, addr 0x537c94c, size 0xf0, virtual false, abstract: false, final false
inline void set_extra_properties(::GlobalNamespace::StringKeyValueMap*  value) ;

/// @brief Method set_id, addr 0x537c5f4, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x537c3ec, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateGameSessionServerRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateGameSessionServerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateGameSessionServerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateGameSessionServerRequest(UpdateGameSessionServerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateGameSessionServerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateGameSessionServerRequest(UpdateGameSessionServerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9647};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateGameSessionServerRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateGameSessionServerRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
