#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/HandExpressionCapture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(HandExpressionCapture)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
class HandExpressionCapture;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands", "HandExpressionCapture");
// Dependencies UnityEngine.Pose, UnityEngine.ScriptableObject
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionCapture
class CORDL_TYPE HandExpressionCapture : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_icon, put=set_icon)) ::UnityW<::UnityEngine::Sprite>  icon;

 __declspec(property(get=get_leftHandCapturedPoses, put=set_leftHandCapturedPoses)) ::ArrayW<::UnityEngine::Pose>  leftHandCapturedPoses;

/// @brief Field m_Icon, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Icon, put=__cordl_internal_set_m_Icon)) ::UnityW<::UnityEngine::Sprite>  m_Icon;

/// @brief Field m_LeftCapturedPoses, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftCapturedPoses, put=__cordl_internal_set_m_LeftCapturedPoses)) ::ArrayW<::UnityEngine::Pose>  m_LeftCapturedPoses;

/// @brief Field m_RightCapturedPoses, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightCapturedPoses, put=__cordl_internal_set_m_RightCapturedPoses)) ::ArrayW<::UnityEngine::Pose>  m_RightCapturedPoses;

 __declspec(property(get=get_rightHandCapturedPoses, put=set_rightHandCapturedPoses)) ::ArrayW<::UnityEngine::Pose>  rightHandCapturedPoses;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_m_Icon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_m_Icon() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get_m_LeftCapturedPoses() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get_m_LeftCapturedPoses() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get_m_RightCapturedPoses() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get_m_RightCapturedPoses() ;

constexpr void __cordl_internal_set_m_Icon(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_m_LeftCapturedPoses(::ArrayW<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set_m_RightCapturedPoses(::ArrayW<::UnityEngine::Pose>  value) ;

/// @brief Method .ctor, addr 0xb4c89a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_icon, addr 0xb4c8970, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_icon() ;

/// @brief Method get_leftHandCapturedPoses, addr 0xb4c8980, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Pose> get_leftHandCapturedPoses() ;

/// @brief Method get_rightHandCapturedPoses, addr 0xb4c8990, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Pose> get_rightHandCapturedPoses() ;

/// @brief Method set_icon, addr 0xb4c8978, size 0x8, virtual false, abstract: false, final false
inline void set_icon(::UnityEngine::Sprite*  value) ;

/// @brief Method set_leftHandCapturedPoses, addr 0xb4c8988, size 0x8, virtual false, abstract: false, final false
inline void set_leftHandCapturedPoses(::ArrayW<::UnityEngine::Pose>  value) ;

/// @brief Method set_rightHandCapturedPoses, addr 0xb4c8998, size 0x8, virtual false, abstract: false, final false
inline void set_rightHandCapturedPoses(::ArrayW<::UnityEngine::Pose>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandExpressionCapture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandExpressionCapture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandExpressionCapture(HandExpressionCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandExpressionCapture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandExpressionCapture(HandExpressionCapture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11640};

/// [SerializeField]
/// [Tooltip("An icon to represent the hand expression.")]
/// @brief Field m_Icon, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___m_Icon;

/// [SerializeField]
/// [Tooltip("The captured left hand joint poses.")]
/// @brief Field m_LeftCapturedPoses, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ___m_LeftCapturedPoses;

/// [SerializeField]
/// [Tooltip("The captured right hand joint poses.")]
/// @brief Field m_RightCapturedPoses, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ___m_RightCapturedPoses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture, ___m_Icon) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture, ___m_LeftCapturedPoses) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture, ___m_RightCapturedPoses) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands
