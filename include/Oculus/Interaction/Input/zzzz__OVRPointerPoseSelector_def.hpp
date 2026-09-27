#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRPointerPoseSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPointerPoseSelector)
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
struct OVRPointerPoseSelector;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::OVRPointerPoseSelector);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OVRPointerPoseSelector, "Oculus.Interaction.Input", "OVRPointerPoseSelector");
// Dependencies UnityEngine.Pose
namespace Oculus::Interaction::Input {
// Is value type: true
// CS Name: Oculus.Interaction.Input.OVRPointerPoseSelector
struct CORDL_TYPE OVRPointerPoseSelector {
public:
// Declarations
 __declspec(property(get=get_LocalPointerPose, put=set_LocalPointerPose)) ::UnityEngine::Pose  LocalPointerPose;

/// @brief Field QUEST1_POINTERS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_QUEST1_POINTERS, put=setStaticF_QUEST1_POINTERS)) ::ArrayW<::UnityEngine::Pose>  QUEST1_POINTERS;

/// @brief Field QUEST2_POINTERS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_QUEST2_POINTERS, put=setStaticF_QUEST2_POINTERS)) ::ArrayW<::UnityEngine::Pose>  QUEST2_POINTERS;

/// @brief Method .ctor, addr 0xa41bfe0, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::Handedness  handedness) ;

static inline ::ArrayW<::UnityEngine::Pose> getStaticF_QUEST1_POINTERS() ;

static inline ::ArrayW<::UnityEngine::Pose> getStaticF_QUEST2_POINTERS() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_LocalPointerPose, addr 0xa41bfb0, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_LocalPointerPose() ;

static inline void setStaticF_QUEST1_POINTERS(::ArrayW<::UnityEngine::Pose>  value) ;

static inline void setStaticF_QUEST2_POINTERS(::ArrayW<::UnityEngine::Pose>  value) ;

/// [CompilerGenerated]
/// @brief Method set_LocalPointerPose, addr 0xa41bfc4, size 0x1c, virtual false, abstract: false, final false
inline void set_LocalPointerPose(::UnityEngine::Pose  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPointerPoseSelector() ;

// Ctor Parameters [CppParam { name: "_LocalPointerPose_k__BackingField", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }]
constexpr OVRPointerPoseSelector(::UnityEngine::Pose  _LocalPointerPose_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31141};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// [CompilerGenerated]
/// @brief Field <LocalPointerPose>k__BackingField, offset: 0x0, size: 0x1c, def value: None
 ::UnityEngine::Pose  _LocalPointerPose_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::OVRPointerPoseSelector, _LocalPointerPose_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::OVRPointerPoseSelector) == 0x1c, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
