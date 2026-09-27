#pragma once
// IWYU pragma private; include "GlobalNamespace/TreeNodeDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TreeNodeDefinition)
namespace GlobalNamespace {
class ComplexPrerequisiteNodes;
}
namespace GlobalNamespace {
class HydratedProgressionNodeCost;
}
namespace GlobalNamespace {
class ListEntitlementResultsVector;
}
namespace GlobalNamespace {
class MothershipHydratedTransactionCatalogItem;
}
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class PrerequisiteLevelVector;
}
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__Document;
}
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__Value;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class TreeNodeDefinition;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TreeNodeDefinition*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TreeNodeDefinition*, "", "TreeNodeDefinition");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: TreeNodeDefinition
class CORDL_TYPE TreeNodeDefinition : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_cost, put=set_cost)) ::GlobalNamespace::HydratedProgressionNodeCost*  cost;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_prerequisite_entitlements, put=set_prerequisite_entitlements)) ::GlobalNamespace::ListEntitlementResultsVector*  prerequisite_entitlements;

 __declspec(property(get=get_prerequisite_levels, put=set_prerequisite_levels)) ::GlobalNamespace::PrerequisiteLevelVector*  prerequisite_levels;

 __declspec(property(get=get_prerequisite_nodes, put=set_prerequisite_nodes)) ::GlobalNamespace::ComplexPrerequisiteNodes*  prerequisite_nodes;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_transaction, put=set_transaction)) ::GlobalNamespace::MothershipHydratedTransactionCatalogItem*  transaction;

 __declspec(property(get=get_tree_id, put=set_tree_id)) ::StringW  tree_id;

/// @brief Method Dispose, addr 0x5365d50, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5365ebc, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TreeNodeDefinition* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::TreeNodeDefinition* New_ctor() ;

static inline ::GlobalNamespace::TreeNodeDefinition* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x5366ec4, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

/// @brief Method ToJson, addr 0x5366fa8, size 0x11c, virtual false, abstract: false, final false
inline bool ToJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value*  treeNode, ::GlobalNamespace::SWIGTYPE_p_rapidjson__Document*  body) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53670c4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5365bc0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5365c74, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::TreeNodeDefinition*  obj) ;

/// @brief Method get_cost, addr 0x5366bbc, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::HydratedProgressionNodeCost* get_cost() ;

/// @brief Method get_id, addr 0x53660ac, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_name, addr 0x5366404, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_prerequisite_entitlements, addr 0x53667c4, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ListEntitlementResultsVector* get_prerequisite_entitlements() ;

/// @brief Method get_prerequisite_levels, addr 0x53669c0, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::PrerequisiteLevelVector* get_prerequisite_levels() ;

/// @brief Method get_prerequisite_nodes, addr 0x53665c8, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ComplexPrerequisiteNodes* get_prerequisite_nodes() ;

/// @brief Method get_transaction, addr 0x5366db8, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipHydratedTransactionCatalogItem* get_transaction() ;

/// @brief Method get_tree_id, addr 0x5366258, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_tree_id() ;

/// @brief Method set_cost, addr 0x5366acc, size 0xf0, virtual false, abstract: false, final false
inline void set_cost(::GlobalNamespace::HydratedProgressionNodeCost*  value) ;

/// @brief Method set_id, addr 0x5365fd4, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_name, addr 0x536632c, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_prerequisite_entitlements, addr 0x53666d4, size 0xf0, virtual false, abstract: false, final false
inline void set_prerequisite_entitlements(::GlobalNamespace::ListEntitlementResultsVector*  value) ;

/// @brief Method set_prerequisite_levels, addr 0x53668d0, size 0xf0, virtual false, abstract: false, final false
inline void set_prerequisite_levels(::GlobalNamespace::PrerequisiteLevelVector*  value) ;

/// @brief Method set_prerequisite_nodes, addr 0x53664d8, size 0xf0, virtual false, abstract: false, final false
inline void set_prerequisite_nodes(::GlobalNamespace::ComplexPrerequisiteNodes*  value) ;

/// @brief Method set_transaction, addr 0x5366cc8, size 0xf0, virtual false, abstract: false, final false
inline void set_transaction(::GlobalNamespace::MothershipHydratedTransactionCatalogItem*  value) ;

/// @brief Method set_tree_id, addr 0x5366180, size 0xd8, virtual false, abstract: false, final false
inline void set_tree_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5365cb4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::TreeNodeDefinition*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TreeNodeDefinition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TreeNodeDefinition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TreeNodeDefinition(TreeNodeDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreeNodeDefinition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreeNodeDefinition(TreeNodeDefinition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9607};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TreeNodeDefinition, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TreeNodeDefinition) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
