#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_MultiAnchorDelegatePair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRSpatialAnchor_MultiAnchorDelegatePair)
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpatialAnchor_MultiAnchorDelegatePair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair, "", "OVRSpatialAnchor/MultiAnchorDelegatePair");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/MultiAnchorDelegatePair
struct CORDL_TYPE OVRSpatialAnchor_MultiAnchorDelegatePair {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor_MultiAnchorDelegatePair() ;

// Ctor Parameters [CppParam { name: "Anchors", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Delegate", ty: "::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpatialAnchor_MultiAnchorDelegatePair(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  Anchors, ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  Delegate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12460};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Anchors, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  Anchors;

/// @brief Field Delegate, offset: 0x8, size: 0x8, def value: None
 ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  Delegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair, Anchors) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair, Delegate) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
