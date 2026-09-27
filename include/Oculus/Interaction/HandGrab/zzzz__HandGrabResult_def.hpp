#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Grab/zzzz__GrabPoseScore_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
CORDL_MODULE_EXPORT(HandGrabResult)
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class HandGrabResult;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabResult*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabResult*, "Oculus.Interaction.HandGrab", "HandGrabResult");
// Dependencies Oculus.Interaction.Grab.GrabPoseScore, System.Object, UnityEngine.Pose
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabResult
class CORDL_TYPE HandGrabResult : public ::System::Object {
public:
// Declarations
/// @brief Field HandPose, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandPose, put=__cordl_internal_set_HandPose)) ::Oculus::Interaction::HandGrab::HandPose*  HandPose;

/// @brief Field HasHandPose, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_HasHandPose, put=__cordl_internal_set_HasHandPose)) bool  HasHandPose;

/// @brief Field RelativePose, offset 0x20, size 0x1c 
 __declspec(property(get=__cordl_internal_get_RelativePose, put=__cordl_internal_set_RelativePose)) ::UnityEngine::Pose  RelativePose;

/// @brief Field Score, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_Score, put=__cordl_internal_set_Score)) ::Oculus::Interaction::Grab::GrabPoseScore  Score;

/// @brief Method CopyFrom, addr 0xa4e215c, size 0x60, virtual false, abstract: false, final false
inline void CopyFrom(::Oculus::Interaction::HandGrab::HandGrabResult*  other) ;

static inline ::Oculus::Interaction::HandGrab::HandGrabResult* New_ctor() ;

constexpr ::Oculus::Interaction::HandGrab::HandPose* const& __cordl_internal_get_HandPose() const;

constexpr ::Oculus::Interaction::HandGrab::HandPose*& __cordl_internal_get_HandPose() ;

constexpr bool const& __cordl_internal_get_HasHandPose() const;

constexpr bool& __cordl_internal_get_HasHandPose() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_RelativePose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_RelativePose() ;

constexpr ::Oculus::Interaction::Grab::GrabPoseScore const& __cordl_internal_get_Score() const;

constexpr ::Oculus::Interaction::Grab::GrabPoseScore& __cordl_internal_get_Score() ;

constexpr void __cordl_internal_set_HandPose(::Oculus::Interaction::HandGrab::HandPose*  value) ;

constexpr void __cordl_internal_set_HasHandPose(bool  value) ;

constexpr void __cordl_internal_set_RelativePose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_Score(::Oculus::Interaction::Grab::GrabPoseScore  value) ;

/// @brief Method .ctor, addr 0xa4dca98, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabResult(HandGrabResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabResult(HandGrabResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16326};

/// @brief Field HasHandPose, offset: 0x10, size: 0x1, def value: None
 bool  ___HasHandPose;

/// @brief Field HandPose, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandPose*  ___HandPose;

/// @brief Field RelativePose, offset: 0x20, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___RelativePose;

/// @brief Field Score, offset: 0x3c, size: 0xc, def value: None
 ::Oculus::Interaction::Grab::GrabPoseScore  ___Score;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabResult, ___HasHandPose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabResult, ___HandPose) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabResult, ___RelativePose) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabResult, ___Score) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabResult) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
