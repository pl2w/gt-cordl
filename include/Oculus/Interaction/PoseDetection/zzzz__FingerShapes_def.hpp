#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerShapes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FingerShapes)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::PoseDetection {
struct FingerFeature;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class FingerShapes;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerShapes*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerShapes*, "Oculus.Interaction.PoseDetection", "FingerShapes");
// Dependencies Oculus.Interaction.Input.HandJointId, System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerShapes
class CORDL_TYPE FingerShapes : public ::System::Object {
public:
// Declarations
/// @brief Field ABDUCTION_LINE_JOINTS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ABDUCTION_LINE_JOINTS, put=setStaticF_ABDUCTION_LINE_JOINTS)) ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  ABDUCTION_LINE_JOINTS;

/// @brief Field CURL_ANGLE_JOINTS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CURL_ANGLE_JOINTS, put=setStaticF_CURL_ANGLE_JOINTS)) ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  CURL_ANGLE_JOINTS;

/// @brief Field CURL_LINE_JOINTS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CURL_LINE_JOINTS, put=setStaticF_CURL_LINE_JOINTS)) ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  CURL_LINE_JOINTS;

/// @brief Field FLEXION_LINE_JOINTS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FLEXION_LINE_JOINTS, put=setStaticF_FLEXION_LINE_JOINTS)) ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  FLEXION_LINE_JOINTS;

/// @brief Field OPPOSITION_LINE_JOINTS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OPPOSITION_LINE_JOINTS, put=setStaticF_OPPOSITION_LINE_JOINTS)) ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  OPPOSITION_LINE_JOINTS;

/// @brief Method GetAbductionValue, addr 0xa49cdb4, size 0x284, virtual false, abstract: false, final false
inline float_t GetAbductionValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method GetCurlValue, addr 0xa49caa0, size 0xa8, virtual false, abstract: false, final false
inline float_t GetCurlValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method GetFlexionValue, addr 0xa49cb48, size 0x26c, virtual false, abstract: false, final false
inline float_t GetFlexionValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method GetJointsAffected, addr 0xa49d6a4, size 0x128, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>* GetJointsAffected(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  feature) ;

/// @brief Method GetOppositionValue, addr 0xa49d038, size 0x19c, virtual false, abstract: false, final false
inline float_t GetOppositionValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method GetValue, addr 0xa49ca54, size 0x4c, virtual true, abstract: false, final false
inline float_t GetValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method JointsCurlValue, addr 0xa49d494, size 0x210, virtual false, abstract: false, final false
inline float_t JointsCurlValue(::ArrayW<::Oculus::Interaction::Input::HandJointId>  joints, ::Oculus::Interaction::Input::IHand*  hand) ;

static inline ::Oculus::Interaction::PoseDetection::FingerShapes* New_ctor() ;

/// @brief Method PosesCurlValue, addr 0xa49d1d4, size 0x138, virtual false, abstract: false, final false
static inline float_t PosesCurlValue(::UnityEngine::Pose  p0, ::UnityEngine::Pose  p1, ::UnityEngine::Pose  p2) ;

/// @brief Method PosesListCurlValue, addr 0xa49d30c, size 0x188, virtual false, abstract: false, final false
static inline float_t PosesListCurlValue(::ArrayW<::UnityEngine::Pose>  poses) ;

/// @brief Method .ctor, addr 0xa49c7e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> getStaticF_ABDUCTION_LINE_JOINTS() ;

static inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> getStaticF_CURL_ANGLE_JOINTS() ;

static inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> getStaticF_CURL_LINE_JOINTS() ;

static inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> getStaticF_FLEXION_LINE_JOINTS() ;

static inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> getStaticF_OPPOSITION_LINE_JOINTS() ;

static inline void setStaticF_ABDUCTION_LINE_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value) ;

static inline void setStaticF_CURL_ANGLE_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value) ;

static inline void setStaticF_CURL_LINE_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value) ;

static inline void setStaticF_FLEXION_LINE_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value) ;

static inline void setStaticF_OPPOSITION_LINE_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerShapes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerShapes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerShapes(FingerShapes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerShapes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerShapes(FingerShapes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerShapes) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
