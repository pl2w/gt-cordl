#pragma once
// IWYU pragma private; include "GlobalNamespace/UserHydratedNodeDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TreeNodeDefinition_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserHydratedNodeDefinition)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class TreeNodeDefinition;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class UserHydratedNodeDefinition;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UserHydratedNodeDefinition*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UserHydratedNodeDefinition*, "", "UserHydratedNodeDefinition");
// Dependencies System.Runtime.InteropServices.HandleRef, TreeNodeDefinition
namespace GlobalNamespace {
// Is value type: false
// CS Name: UserHydratedNodeDefinition
class CORDL_TYPE UserHydratedNodeDefinition : public ::GlobalNamespace::TreeNodeDefinition {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_unlocked, put=set_unlocked)) bool  unlocked;

/// @brief Method Dispose, addr 0x53a39dc, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53a3b48, size 0x11c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TreeNodeDefinition* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::UserHydratedNodeDefinition* New_ctor() ;

static inline ::GlobalNamespace::UserHydratedNodeDefinition* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x53a3e10, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53a3ef4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53a384c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53a3900, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UserHydratedNodeDefinition*  obj) ;

/// @brief Method get_unlocked, addr 0x53a3d3c, size 0xd4, virtual false, abstract: false, final false
inline bool get_unlocked() ;

/// @brief Method set_unlocked, addr 0x53a3c64, size 0xd8, virtual false, abstract: false, final false
inline void set_unlocked(bool  value) ;

/// @brief Method swigRelease, addr 0x53a3940, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UserHydratedNodeDefinition*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserHydratedNodeDefinition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserHydratedNodeDefinition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserHydratedNodeDefinition(UserHydratedNodeDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserHydratedNodeDefinition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserHydratedNodeDefinition(UserHydratedNodeDefinition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9719};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UserHydratedNodeDefinition, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UserHydratedNodeDefinition) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
