#pragma once
// IWYU pragma private; include "UnityEngine/HingeJoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HingeJoint)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct JointLimits;
}
namespace UnityEngine {
struct JointMotor;
}
namespace UnityEngine {
struct JointSpring;
}
// Forward declare root types
namespace UnityEngine {
class HingeJoint;
}
// Write type traits
MARK_REF_T(::UnityEngine::HingeJoint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::HingeJoint*, "UnityEngine", "HingeJoint");
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// [NativeHeader("Modules/Physics/HingeJoint.h")]
// [NativeClass("Unity::HingeJoint")]
// Dependencies UnityEngine.Joint
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.HingeJoint
class CORDL_TYPE HingeJoint : public ::UnityEngine::Joint {
public:
// Declarations
 __declspec(property(get=get_angle)) float_t  angle;

 __declspec(property(get=get_extendedLimits, put=set_extendedLimits)) bool  extendedLimits;

 __declspec(property(get=get_limits, put=set_limits)) ::UnityEngine::JointLimits  limits;

 __declspec(property(get=get_motor, put=set_motor)) ::UnityEngine::JointMotor  motor;

 __declspec(property(get=get_spring, put=set_spring)) ::UnityEngine::JointSpring  spring;

 __declspec(property(get=get_useAcceleration, put=set_useAcceleration)) bool  useAcceleration;

 __declspec(property(get=get_useLimits, put=set_useLimits)) bool  useLimits;

 __declspec(property(get=get_useMotor, put=set_useMotor)) bool  useMotor;

 __declspec(property(get=get_useSpring, put=set_useSpring)) bool  useSpring;

 __declspec(property(get=get_velocity)) float_t  velocity;

static inline ::UnityEngine::HingeJoint* New_ctor() ;

/// @brief Method .ctor, addr 0xb68bad4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_angle, addr 0xb68b8a8, size 0x78, virtual false, abstract: false, final false
inline float_t get_angle() ;

/// @brief Method get_angle_Injected, addr 0xb68b920, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_angle_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_extendedLimits, addr 0xb68b504, size 0x78, virtual false, abstract: false, final false
inline bool get_extendedLimits() ;

/// @brief Method get_extendedLimits_Injected, addr 0xb68b57c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_extendedLimits_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_limits, addr 0xb68aeb4, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::JointLimits get_limits() ;

/// @brief Method get_limits_Injected, addr 0xb68af5c, size 0x44, virtual false, abstract: false, final false
static inline void get_limits_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::JointLimits>  ret) ;

/// @brief Method get_motor, addr 0xb68ad04, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::JointMotor get_motor() ;

/// @brief Method get_motor_Injected, addr 0xb68ad9c, size 0x44, virtual false, abstract: false, final false
static inline void get_motor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::JointMotor>  ret) ;

/// @brief Method get_spring, addr 0xb68b064, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::JointSpring get_spring() ;

/// @brief Method get_spring_Injected, addr 0xb68b0fc, size 0x44, virtual false, abstract: false, final false
static inline void get_spring_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::JointSpring>  ret) ;

/// @brief Method get_useAcceleration, addr 0xb68b95c, size 0x78, virtual false, abstract: false, final false
inline bool get_useAcceleration() ;

/// @brief Method get_useAcceleration_Injected, addr 0xb68b9d4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useAcceleration_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useLimits, addr 0xb68b38c, size 0x78, virtual false, abstract: false, final false
inline bool get_useLimits() ;

/// @brief Method get_useLimits_Injected, addr 0xb68b404, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useLimits_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useMotor, addr 0xb68b214, size 0x78, virtual false, abstract: false, final false
inline bool get_useMotor() ;

/// @brief Method get_useMotor_Injected, addr 0xb68b28c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useMotor_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useSpring, addr 0xb68b67c, size 0x78, virtual false, abstract: false, final false
inline bool get_useSpring() ;

/// @brief Method get_useSpring_Injected, addr 0xb68b6f4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useSpring_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_velocity, addr 0xb68b7f4, size 0x78, virtual false, abstract: false, final false
inline float_t get_velocity() ;

/// @brief Method get_velocity_Injected, addr 0xb68b86c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_velocity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_extendedLimits, addr 0xb68b5b8, size 0x80, virtual false, abstract: false, final false
inline void set_extendedLimits(bool  value) ;

/// @brief Method set_extendedLimits_Injected, addr 0xb68b638, size 0x44, virtual false, abstract: false, final false
static inline void set_extendedLimits_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_limits, addr 0xb68afa0, size 0x80, virtual false, abstract: false, final false
inline void set_limits(::UnityEngine::JointLimits  value) ;

/// @brief Method set_limits_Injected, addr 0xb68b020, size 0x44, virtual false, abstract: false, final false
static inline void set_limits_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::JointLimits>  value) ;

/// @brief Method set_motor, addr 0xb68ade0, size 0x90, virtual false, abstract: false, final false
inline void set_motor(::UnityEngine::JointMotor  value) ;

/// @brief Method set_motor_Injected, addr 0xb68ae70, size 0x44, virtual false, abstract: false, final false
static inline void set_motor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::JointMotor>  value) ;

/// @brief Method set_spring, addr 0xb68b140, size 0x90, virtual false, abstract: false, final false
inline void set_spring(::UnityEngine::JointSpring  value) ;

/// @brief Method set_spring_Injected, addr 0xb68b1d0, size 0x44, virtual false, abstract: false, final false
static inline void set_spring_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::JointSpring>  value) ;

/// @brief Method set_useAcceleration, addr 0xb68ba10, size 0x80, virtual false, abstract: false, final false
inline void set_useAcceleration(bool  value) ;

/// @brief Method set_useAcceleration_Injected, addr 0xb68ba90, size 0x44, virtual false, abstract: false, final false
static inline void set_useAcceleration_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_useLimits, addr 0xb68b440, size 0x80, virtual false, abstract: false, final false
inline void set_useLimits(bool  value) ;

/// @brief Method set_useLimits_Injected, addr 0xb68b4c0, size 0x44, virtual false, abstract: false, final false
static inline void set_useLimits_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_useMotor, addr 0xb68b2c8, size 0x80, virtual false, abstract: false, final false
inline void set_useMotor(bool  value) ;

/// @brief Method set_useMotor_Injected, addr 0xb68b348, size 0x44, virtual false, abstract: false, final false
static inline void set_useMotor_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_useSpring, addr 0xb68b730, size 0x80, virtual false, abstract: false, final false
inline void set_useSpring(bool  value) ;

/// @brief Method set_useSpring_Injected, addr 0xb68b7b0, size 0x44, virtual false, abstract: false, final false
static inline void set_useSpring_Injected(::System::IntPtr  _unity_self, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HingeJoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HingeJoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HingeJoint(HingeJoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HingeJoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HingeJoint(HingeJoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30574};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::HingeJoint) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
