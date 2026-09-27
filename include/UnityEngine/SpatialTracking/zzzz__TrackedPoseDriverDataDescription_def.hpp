#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriverDataDescription.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TrackedPoseDriverDataDescription)
namespace GlobalNamespace {
struct TrackedPoseDriverDataDescription_PoseData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
class TrackedPoseDriverDataDescription;
}
// Write type traits
MARK_REF_T(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription");
// Dependencies System.Object
namespace UnityEngine::SpatialTracking {
// Is value type: false
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
class CORDL_TYPE TrackedPoseDriverDataDescription : public ::System::Object {
public:
// Declarations
using PoseData = ::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData;

/// @brief Field DeviceData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeviceData, put=setStaticF_DeviceData)) ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData>*  DeviceData;

static inline ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription* New_ctor() ;

/// @brief Method .ctor, addr 0xb6aca48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData>* getStaticF_DeviceData() ;

static inline void setStaticF_DeviceData(::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedPoseDriverDataDescription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriverDataDescription", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedPoseDriverDataDescription(TrackedPoseDriverDataDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriverDataDescription", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedPoseDriverDataDescription(TrackedPoseDriverDataDescription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::SpatialTracking
