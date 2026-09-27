#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/VelocityCalculatorUtilMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VelocityCalculatorUtilMethods)
namespace Oculus::Interaction::Throw {
struct TransformSample;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Throw {
class VelocityCalculatorUtilMethods;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*, "Oculus.Interaction.Throw", "VelocityCalculatorUtilMethods");
// [Obsolete]
// Dependencies System.Object
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.VelocityCalculatorUtilMethods
class CORDL_TYPE VelocityCalculatorUtilMethods : public ::System::Object {
public:
// Declarations
/// @brief Method AngularVelocityToQuat, addr 0xa496808, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion AngularVelocityToQuat(::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method DeltaRotationToAngularVelocity, addr 0xa498a44, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 DeltaRotationToAngularVelocity(::UnityEngine::Quaternion  deltaRotation, float_t  deltaTime) ;

/// @brief Method GetVelocityAndAngularVelocity, addr 0xa498c98, size 0xd4, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> GetVelocityAndAngularVelocity(::Oculus::Interaction::Throw::TransformSample  startSample, ::Oculus::Interaction::Throw::TransformSample  endSample, float_t  duration) ;

static inline ::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods* New_ctor() ;

/// @brief Method QuatToAngleAxis, addr 0xa498b54, size 0x144, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<float_t,::UnityEngine::Vector3> QuatToAngleAxis(::UnityEngine::Quaternion  inputQuat) ;

/// @brief Method QuatToAngularVeloc, addr 0xa496918, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 QuatToAngularVeloc(::UnityEngine::Quaternion  inputQuat) ;

/// @brief Method ToAngularVelocity, addr 0xa498260, size 0x170, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ToAngularVelocity(::UnityEngine::Quaternion  startQuaternion, ::UnityEngine::Quaternion  destinationQuaternion, float_t  deltaTime) ;

/// @brief Method ToLinearVelocity, addr 0xa498960, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ToLinearVelocity(::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  destinationPosition, float_t  deltaTime) ;

/// @brief Method .ctor, addr 0xa498d6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VelocityCalculatorUtilMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VelocityCalculatorUtilMethods", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VelocityCalculatorUtilMethods(VelocityCalculatorUtilMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VelocityCalculatorUtilMethods", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VelocityCalculatorUtilMethods(VelocityCalculatorUtilMethods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16084};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
