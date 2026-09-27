#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdatePlayerTagsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdatePlayerTagsResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class PlayerTagsUpdateMap;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class UpdatePlayerTagsResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdatePlayerTagsResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdatePlayerTagsResponse*, "", "UpdatePlayerTagsResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdatePlayerTagsResponse
class CORDL_TYPE UpdatePlayerTagsResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_playersToTags, put=set_playersToTags)) ::GlobalNamespace::PlayerTagsUpdateMap*  playersToTags;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5383404, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5383654, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UpdatePlayerTagsResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::UpdatePlayerTagsResponse* New_ctor() ;

static inline ::GlobalNamespace::UpdatePlayerTagsResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5383570, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5383968, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5383274, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5383328, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdatePlayerTagsResponse*  obj) ;

/// @brief Method get_playersToTags, addr 0x538385c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerTagsUpdateMap* get_playersToTags() ;

/// @brief Method set_playersToTags, addr 0x538376c, size 0xf0, virtual false, abstract: false, final false
inline void set_playersToTags(::GlobalNamespace::PlayerTagsUpdateMap*  value) ;

/// @brief Method swigRelease, addr 0x5383368, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdatePlayerTagsResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdatePlayerTagsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdatePlayerTagsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdatePlayerTagsResponse(UpdatePlayerTagsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdatePlayerTagsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdatePlayerTagsResponse(UpdatePlayerTagsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9662};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdatePlayerTagsResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdatePlayerTagsResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
