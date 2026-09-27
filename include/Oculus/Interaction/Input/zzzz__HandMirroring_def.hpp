#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandMirroring.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandSpace_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HandMirroring)
namespace GlobalNamespace {
struct HandMirroring_HandSpace;
}
namespace GlobalNamespace {
struct HandMirroring_HandsSpace;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HandMirroring;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandMirroring*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandMirroring*, "Oculus.Interaction.Input", "HandMirroring");
// Dependencies Oculus.Interaction.Input.HandMirroring::HandSpace, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandMirroring
class CORDL_TYPE HandMirroring : public ::System::Object {
public:
// Declarations
using HandSpace = ::GlobalNamespace::HandMirroring_HandSpace;

using HandsSpace = ::GlobalNamespace::HandMirroring_HandsSpace;

/// @brief Field LeftHandSpace, offset 0xffffffff, size 0x34 
 __declspec(property(get=getStaticF_LeftHandSpace, put=setStaticF_LeftHandSpace)) ::GlobalNamespace::HandMirroring_HandSpace  LeftHandSpace;

/// @brief Field RightHandSpace, offset 0xffffffff, size 0x34 
 __declspec(property(get=getStaticF_RightHandSpace, put=setStaticF_RightHandSpace)) ::GlobalNamespace::HandMirroring_HandSpace  RightHandSpace;

/// @brief Method Mirror, addr 0xa50f084, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose Mirror(::UnityEngine::Pose  pose) ;

/// @brief Method Mirror, addr 0xa50f170, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Mirror(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method Mirror, addr 0xa50f110, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Mirror(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  position) ;

/// @brief Method Reflect, addr 0xa50f538, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Reflect(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation, ::UnityEngine::Vector3  normal) ;

/// @brief Method TransformPose, addr 0xa50f718, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose TransformPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  fromHand, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  toHand) ;

/// @brief Method TransformPosition, addr 0xa50f1d0, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TransformPosition(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  position, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  fromHand, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  toHand) ;

/// @brief Method TransformRotation, addr 0xa50f274, size 0x2c4, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion TransformRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  fromHand, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  toHand) ;

static inline ::GlobalNamespace::HandMirroring_HandSpace getStaticF_LeftHandSpace() ;

static inline ::GlobalNamespace::HandMirroring_HandSpace getStaticF_RightHandSpace() ;

static inline void setStaticF_LeftHandSpace(::GlobalNamespace::HandMirroring_HandSpace  value) ;

static inline void setStaticF_RightHandSpace(::GlobalNamespace::HandMirroring_HandSpace  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandMirroring() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandMirroring", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandMirroring(HandMirroring && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandMirroring", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandMirroring(HandMirroring const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16493};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::HandMirroring) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
