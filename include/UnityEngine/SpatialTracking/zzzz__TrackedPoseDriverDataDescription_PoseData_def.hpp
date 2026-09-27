#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriverDataDescription_PoseData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TrackedPoseDriverDataDescription_PoseData)
namespace GlobalNamespace {
struct TrackedPoseDriver_TrackedPose;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct TrackedPoseDriverDataDescription_PoseData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription/PoseData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct CORDL_TYPE TrackedPoseDriverDataDescription_PoseData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TrackedPoseDriverDataDescription_PoseData() ;

// Ctor Parameters [CppParam { name: "PoseNames", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Poses", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriver_TrackedPose>*", modifiers: "", def_value: None, comment: None }]
constexpr TrackedPoseDriverDataDescription_PoseData(::System::Collections::Generic::List_1<::StringW>*  PoseNames, ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriver_TrackedPose>*  Poses) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32919};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field PoseNames, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  PoseNames;

/// @brief Field Poses, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriver_TrackedPose>*  Poses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData, PoseNames) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData, Poses) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
