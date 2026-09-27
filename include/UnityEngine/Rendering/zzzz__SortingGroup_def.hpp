#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortingGroup)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SortingGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::SortingGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SortingGroup*, "UnityEngine.Rendering", "SortingGroup");
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeType(Header = "Runtime/2D/Sorting/SortingGroup.h")]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SortingGroup
class CORDL_TYPE SortingGroup : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_sortingLayerID)) int32_t  sortingLayerID;

 __declspec(property(get=get_sortingOrder)) int32_t  sortingOrder;

/// [StaticAccessor("SortingGroup", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetSortingGroupByIndex, addr 0xb6050c4, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::SortingGroup> GetSortingGroupByIndex(int32_t  index) ;

/// @brief Method GetSortingGroupByIndex_Injected, addr 0xb605130, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSortingGroupByIndex_Injected(int32_t  index) ;

/// @brief Method get_invalidSortingGroupID, addr 0xb60509c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_invalidSortingGroupID() ;

/// @brief Method get_sortingLayerID, addr 0xb60516c, size 0x70, virtual false, abstract: false, final false
inline int32_t get_sortingLayerID() ;

/// @brief Method get_sortingLayerID_Injected, addr 0xb6051dc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_sortingLayerID_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sortingOrder, addr 0xb605218, size 0x70, virtual false, abstract: false, final false
inline int32_t get_sortingOrder() ;

/// @brief Method get_sortingOrder_Injected, addr 0xb605288, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_sortingOrder_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SortingGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SortingGroup(SortingGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortingGroup(SortingGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15435};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::SortingGroup) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
