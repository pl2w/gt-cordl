#pragma once
// IWYU pragma private; include "GlobalNamespace/UserHydratedProgressionTreeResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserHydratedProgressionTreeResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class ProgressionTree;
}
namespace GlobalNamespace {
class UserHydratedNodeVector;
}
namespace GlobalNamespace {
class UserHydratedProgressionTrackResponse;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class UserHydratedProgressionTreeResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UserHydratedProgressionTreeResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UserHydratedProgressionTreeResponse*, "", "UserHydratedProgressionTreeResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UserHydratedProgressionTreeResponse
class CORDL_TYPE UserHydratedProgressionTreeResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_InventoryRefreshRequired, put=set_InventoryRefreshRequired)) bool  InventoryRefreshRequired;

 __declspec(property(get=get_Nodes, put=set_Nodes)) ::GlobalNamespace::UserHydratedNodeVector*  Nodes;

 __declspec(property(get=get_PlayerId, put=set_PlayerId)) ::StringW  PlayerId;

 __declspec(property(get=get_Track, put=set_Track)) ::GlobalNamespace::UserHydratedProgressionTrackResponse*  Track;

 __declspec(property(get=get_Tree, put=set_Tree)) ::GlobalNamespace::ProgressionTree*  Tree;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53aa8d8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53aaa44, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UserHydratedProgressionTreeResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::UserHydratedProgressionTreeResponse* New_ctor() ;

static inline ::GlobalNamespace::UserHydratedProgressionTreeResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x53ab498, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53ab57c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53aa748, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53aa7fc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UserHydratedProgressionTreeResponse*  obj) ;

/// @brief Method get_InventoryRefreshRequired, addr 0x53ab3c4, size 0xd4, virtual false, abstract: false, final false
inline bool get_InventoryRefreshRequired() ;

/// @brief Method get_Nodes, addr 0x53aae44, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::UserHydratedNodeVector* get_Nodes() ;

/// @brief Method get_PlayerId, addr 0x53ab218, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_PlayerId() ;

/// @brief Method get_Track, addr 0x53ab038, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::UserHydratedProgressionTrackResponse* get_Track() ;

/// @brief Method get_Tree, addr 0x53aac4c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ProgressionTree* get_Tree() ;

/// @brief Method set_InventoryRefreshRequired, addr 0x53ab2ec, size 0xd8, virtual false, abstract: false, final false
inline void set_InventoryRefreshRequired(bool  value) ;

/// @brief Method set_Nodes, addr 0x53aad58, size 0xec, virtual false, abstract: false, final false
inline void set_Nodes(::GlobalNamespace::UserHydratedNodeVector*  value) ;

/// @brief Method set_PlayerId, addr 0x53ab140, size 0xd8, virtual false, abstract: false, final false
inline void set_PlayerId(::StringW  value) ;

/// @brief Method set_Track, addr 0x53aaf4c, size 0xec, virtual false, abstract: false, final false
inline void set_Track(::GlobalNamespace::UserHydratedProgressionTrackResponse*  value) ;

/// @brief Method set_Tree, addr 0x53aab5c, size 0xf0, virtual false, abstract: false, final false
inline void set_Tree(::GlobalNamespace::ProgressionTree*  value) ;

/// @brief Method swigRelease, addr 0x53aa83c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UserHydratedProgressionTreeResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserHydratedProgressionTreeResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserHydratedProgressionTreeResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserHydratedProgressionTreeResponse(UserHydratedProgressionTreeResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserHydratedProgressionTreeResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserHydratedProgressionTreeResponse(UserHydratedProgressionTreeResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9725};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UserHydratedProgressionTreeResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UserHydratedProgressionTreeResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
