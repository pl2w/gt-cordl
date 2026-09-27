#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRSkeletonData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Skeleton2_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRSkeletonData)
// Forward declare root types
namespace Oculus::Interaction::Input {
class OVRSkeletonData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::OVRSkeletonData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OVRSkeletonData*, "Oculus.Interaction.Input", "OVRSkeletonData");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRPlugin::Skeleton2, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.OVRSkeletonData
class CORDL_TYPE OVRSkeletonData : public ::System::Object {
public:
// Declarations
/// @brief Field LeftSkeleton, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_LeftSkeleton, put=setStaticF_LeftSkeleton)) ::GlobalNamespace::OVRPlugin_Skeleton2  LeftSkeleton;

/// @brief Field RightSkeleton, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_RightSkeleton, put=setStaticF_RightSkeleton)) ::GlobalNamespace::OVRPlugin_Skeleton2  RightSkeleton;

static inline ::Oculus::Interaction::Input::OVRSkeletonData* New_ctor() ;

/// @brief Method .ctor, addr 0xa41fecc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::OVRPlugin_Skeleton2 getStaticF_LeftSkeleton() ;

static inline ::GlobalNamespace::OVRPlugin_Skeleton2 getStaticF_RightSkeleton() ;

static inline void setStaticF_LeftSkeleton(::GlobalNamespace::OVRPlugin_Skeleton2  value) ;

static inline void setStaticF_RightSkeleton(::GlobalNamespace::OVRPlugin_Skeleton2  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSkeletonData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSkeletonData(OVRSkeletonData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSkeletonData(OVRSkeletonData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31153};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::OVRSkeletonData) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
