#pragma once
// IWYU pragma private; include "GlobalNamespace/HydratedProgressionTreeResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HydratedProgressionTreeResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class ProgressionTrack;
}
namespace GlobalNamespace {
class ProgressionTree;
}
namespace GlobalNamespace {
class TreeNodeVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class HydratedProgressionTreeResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HydratedProgressionTreeResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HydratedProgressionTreeResponse*, "", "HydratedProgressionTreeResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: HydratedProgressionTreeResponse
class CORDL_TYPE HydratedProgressionTreeResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Nodes, put=set_Nodes)) ::GlobalNamespace::TreeNodeVector*  Nodes;

 __declspec(property(get=get_Track, put=set_Track)) ::GlobalNamespace::ProgressionTrack*  Track;

 __declspec(property(get=get_Tree, put=set_Tree)) ::GlobalNamespace::ProgressionTree*  Tree;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5439174, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x54392e0, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::HydratedProgressionTreeResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::HydratedProgressionTreeResponse* New_ctor() ;

static inline ::GlobalNamespace::HydratedProgressionTreeResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x54399ec, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5439ad0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5438fe4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5439098, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::HydratedProgressionTreeResponse*  obj) ;

/// @brief Method get_Nodes, addr 0x54396e4, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::TreeNodeVector* get_Nodes() ;

/// @brief Method get_Track, addr 0x54398e0, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ProgressionTrack* get_Track() ;

/// @brief Method get_Tree, addr 0x54394e8, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ProgressionTree* get_Tree() ;

/// @brief Method set_Nodes, addr 0x54395f4, size 0xf0, virtual false, abstract: false, final false
inline void set_Nodes(::GlobalNamespace::TreeNodeVector*  value) ;

/// @brief Method set_Track, addr 0x54397f0, size 0xf0, virtual false, abstract: false, final false
inline void set_Track(::GlobalNamespace::ProgressionTrack*  value) ;

/// @brief Method set_Tree, addr 0x54393f8, size 0xf0, virtual false, abstract: false, final false
inline void set_Tree(::GlobalNamespace::ProgressionTree*  value) ;

/// @brief Method swigRelease, addr 0x54390d8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::HydratedProgressionTreeResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HydratedProgressionTreeResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HydratedProgressionTreeResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HydratedProgressionTreeResponse(HydratedProgressionTreeResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HydratedProgressionTreeResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HydratedProgressionTreeResponse(HydratedProgressionTreeResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9128};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HydratedProgressionTreeResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HydratedProgressionTreeResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
