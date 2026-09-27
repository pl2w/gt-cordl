#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemForceField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ParticleSystemForceField)
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurveBlittable;
}
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurve;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct ParticleSystemForceFieldShape;
}
namespace UnityEngine {
class Texture3D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystemForceField;
}
// Write type traits
MARK_REF_T(::UnityEngine::ParticleSystemForceField*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemForceField*, "UnityEngine", "ParticleSystemForceField");
// [NativeHeader("ParticleSystemScriptingClasses.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemScriptBindings.h")]
// [NativeHeader("Modules/ParticleSystem/ParticleSystemForceFieldManager.h")]
// [NativeHeader("Modules/ParticleSystem/ParticleSystemForceField.h")]
// [NativeHeader("Modules/ParticleSystem/ParticleSystem.h")]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticleSystemForceField
class CORDL_TYPE ParticleSystemForceField : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_directionX, put=set_directionX)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  directionX;

/// @brief [NativeName("DirectionX")]
 __declspec(property(get=get_directionXBlittable, put=set_directionXBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  directionXBlittable;

 __declspec(property(get=get_directionY, put=set_directionY)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  directionY;

/// @brief [NativeName("DirectionY")]
 __declspec(property(get=get_directionYBlittable, put=set_directionYBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  directionYBlittable;

 __declspec(property(get=get_directionZ, put=set_directionZ)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  directionZ;

/// @brief [NativeName("DirectionZ")]
 __declspec(property(get=get_directionZBlittable, put=set_directionZBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  directionZBlittable;

 __declspec(property(get=get_drag, put=set_drag)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  drag;

/// @brief [NativeName("Drag")]
 __declspec(property(get=get_dragBlittable, put=set_dragBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  dragBlittable;

 __declspec(property(get=get_endRange, put=set_endRange)) float_t  endRange;

 __declspec(property(get=get_gravity, put=set_gravity)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  gravity;

/// @brief [NativeName("Gravity")]
 __declspec(property(get=get_gravityBlittable, put=set_gravityBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  gravityBlittable;

 __declspec(property(get=get_gravityFocus, put=set_gravityFocus)) float_t  gravityFocus;

 __declspec(property(get=get_length, put=set_length)) float_t  length;

 __declspec(property(get=get_multiplyDragByParticleSize, put=set_multiplyDragByParticleSize)) bool  multiplyDragByParticleSize;

 __declspec(property(get=get_multiplyDragByParticleVelocity, put=set_multiplyDragByParticleVelocity)) bool  multiplyDragByParticleVelocity;

 __declspec(property(get=get_rotationAttraction, put=set_rotationAttraction)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  rotationAttraction;

/// @brief [NativeName("RotationAttraction")]
 __declspec(property(get=get_rotationAttractionBlittable, put=set_rotationAttractionBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  rotationAttractionBlittable;

 __declspec(property(get=get_rotationRandomness, put=set_rotationRandomness)) ::UnityEngine::Vector2  rotationRandomness;

 __declspec(property(get=get_rotationSpeed, put=set_rotationSpeed)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  rotationSpeed;

/// @brief [NativeName("RotationSpeed")]
 __declspec(property(get=get_rotationSpeedBlittable, put=set_rotationSpeedBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  rotationSpeedBlittable;

/// @brief [NativeName("ForceShape")]
 __declspec(property(get=get_shape, put=set_shape)) ::UnityEngine::ParticleSystemForceFieldShape  shape;

 __declspec(property(get=get_startRange, put=set_startRange)) float_t  startRange;

 __declspec(property(get=get_vectorField, put=set_vectorField)) ::UnityW<::UnityEngine::Texture3D>  vectorField;

 __declspec(property(get=get_vectorFieldAttraction, put=set_vectorFieldAttraction)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  vectorFieldAttraction;

/// @brief [NativeName("VectorFieldAttraction")]
 __declspec(property(get=get_vectorFieldAttractionBlittable, put=set_vectorFieldAttractionBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  vectorFieldAttractionBlittable;

 __declspec(property(get=get_vectorFieldSpeed, put=set_vectorFieldSpeed)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  vectorFieldSpeed;

/// @brief [NativeName("VectorFieldSpeed")]
 __declspec(property(get=get_vectorFieldSpeedBlittable, put=set_vectorFieldSpeedBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  vectorFieldSpeedBlittable;

static inline ::UnityEngine::ParticleSystemForceField* New_ctor() ;

/// @brief Method .ctor, addr 0xb6791ac, size 0x858, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_directionX, addr 0xb677ed4, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_directionX() ;

/// @brief Method get_directionXBlittable, addr 0xb677f08, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_directionXBlittable() ;

/// @brief Method get_directionXBlittable_Injected, addr 0xb678064, size 0x44, virtual false, abstract: false, final false
static inline void get_directionXBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_directionY, addr 0xb6780ec, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_directionY() ;

/// @brief Method get_directionYBlittable, addr 0xb678120, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_directionYBlittable() ;

/// @brief Method get_directionYBlittable_Injected, addr 0xb67827c, size 0x44, virtual false, abstract: false, final false
static inline void get_directionYBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_directionZ, addr 0xb678304, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_directionZ() ;

/// @brief Method get_directionZBlittable, addr 0xb678338, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_directionZBlittable() ;

/// @brief Method get_directionZBlittable_Injected, addr 0xb678494, size 0x44, virtual false, abstract: false, final false
static inline void get_directionZBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_drag, addr 0xb678b64, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_drag() ;

/// @brief Method get_dragBlittable, addr 0xb678b98, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_dragBlittable() ;

/// @brief Method get_dragBlittable_Injected, addr 0xb678cf4, size 0x44, virtual false, abstract: false, final false
static inline void get_dragBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_endRange, addr 0xb6773f0, size 0x78, virtual false, abstract: false, final false
inline float_t get_endRange() ;

/// @brief Method get_endRange_Injected, addr 0xb677468, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_endRange_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_gravity, addr 0xb67851c, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_gravity() ;

/// @brief Method get_gravityBlittable, addr 0xb678550, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_gravityBlittable() ;

/// @brief Method get_gravityBlittable_Injected, addr 0xb6786ac, size 0x44, virtual false, abstract: false, final false
static inline void get_gravityBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_gravityFocus, addr 0xb677700, size 0x78, virtual false, abstract: false, final false
inline float_t get_gravityFocus() ;

/// @brief Method get_gravityFocus_Injected, addr 0xb677778, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_gravityFocus_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_length, addr 0xb677578, size 0x78, virtual false, abstract: false, final false
inline float_t get_length() ;

/// @brief Method get_length_Injected, addr 0xb6775f0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_length_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_multiplyDragByParticleSize, addr 0xb677a1c, size 0x78, virtual false, abstract: false, final false
inline bool get_multiplyDragByParticleSize() ;

/// @brief Method get_multiplyDragByParticleSize_Injected, addr 0xb677a94, size 0x3c, virtual false, abstract: false, final false
static inline bool get_multiplyDragByParticleSize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_multiplyDragByParticleVelocity, addr 0xb677b94, size 0x78, virtual false, abstract: false, final false
inline bool get_multiplyDragByParticleVelocity() ;

/// @brief Method get_multiplyDragByParticleVelocity_Injected, addr 0xb677c0c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_multiplyDragByParticleVelocity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rotationAttraction, addr 0xb67894c, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_rotationAttraction() ;

/// @brief Method get_rotationAttractionBlittable, addr 0xb678980, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_rotationAttractionBlittable() ;

/// @brief Method get_rotationAttractionBlittable_Injected, addr 0xb678adc, size 0x44, virtual false, abstract: false, final false
static inline void get_rotationAttractionBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_rotationRandomness, addr 0xb677888, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_rotationRandomness() ;

/// @brief Method get_rotationRandomness_Injected, addr 0xb677910, size 0x44, virtual false, abstract: false, final false
static inline void get_rotationRandomness_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_rotationSpeed, addr 0xb678734, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_rotationSpeed() ;

/// @brief Method get_rotationSpeedBlittable, addr 0xb678768, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_rotationSpeedBlittable() ;

/// @brief Method get_rotationSpeedBlittable_Injected, addr 0xb6788c4, size 0x44, virtual false, abstract: false, final false
static inline void get_rotationSpeedBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_shape, addr 0xb6770f0, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystemForceFieldShape get_shape() ;

/// @brief Method get_shape_Injected, addr 0xb677168, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::ParticleSystemForceFieldShape get_shape_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_startRange, addr 0xb677268, size 0x78, virtual false, abstract: false, final false
inline float_t get_startRange() ;

/// @brief Method get_startRange_Injected, addr 0xb6772e0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_startRange_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vectorField, addr 0xb677d0c, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture3D> get_vectorField() ;

/// @brief Method get_vectorFieldAttraction, addr 0xb678f94, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_vectorFieldAttraction() ;

/// @brief Method get_vectorFieldAttractionBlittable, addr 0xb678fc8, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_vectorFieldAttractionBlittable() ;

/// @brief Method get_vectorFieldAttractionBlittable_Injected, addr 0xb679124, size 0x44, virtual false, abstract: false, final false
static inline void get_vectorFieldAttractionBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_vectorFieldSpeed, addr 0xb678d7c, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_vectorFieldSpeed() ;

/// @brief Method get_vectorFieldSpeedBlittable, addr 0xb678db0, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_vectorFieldSpeedBlittable() ;

/// @brief Method get_vectorFieldSpeedBlittable_Injected, addr 0xb678f0c, size 0x44, virtual false, abstract: false, final false
static inline void get_vectorFieldSpeedBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_vectorField_Injected, addr 0xb677da0, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_vectorField_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_directionX, addr 0xb677fa4, size 0x40, virtual false, abstract: false, final false
inline void set_directionX(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// @brief Method set_directionXBlittable, addr 0xb677fe4, size 0x80, virtual false, abstract: false, final false
inline void set_directionXBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_directionXBlittable_Injected, addr 0xb6780a8, size 0x44, virtual false, abstract: false, final false
static inline void set_directionXBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_directionY, addr 0xb6781bc, size 0x40, virtual false, abstract: false, final false
inline void set_directionY(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// @brief Method set_directionYBlittable, addr 0xb6781fc, size 0x80, virtual false, abstract: false, final false
inline void set_directionYBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_directionYBlittable_Injected, addr 0xb6782c0, size 0x44, virtual false, abstract: false, final false
static inline void set_directionYBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_directionZ, addr 0xb6783d4, size 0x40, virtual false, abstract: false, final false
inline void set_directionZ(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// @brief Method set_directionZBlittable, addr 0xb678414, size 0x80, virtual false, abstract: false, final false
inline void set_directionZBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_directionZBlittable_Injected, addr 0xb6784d8, size 0x44, virtual false, abstract: false, final false
static inline void set_directionZBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_drag, addr 0xb678c34, size 0x40, virtual false, abstract: false, final false
inline void set_drag(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// @brief Method set_dragBlittable, addr 0xb678c74, size 0x80, virtual false, abstract: false, final false
inline void set_dragBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_dragBlittable_Injected, addr 0xb678d38, size 0x44, virtual false, abstract: false, final false
static inline void set_dragBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_endRange, addr 0xb6774a4, size 0x88, virtual false, abstract: false, final false
inline void set_endRange(float_t  value) ;

/// @brief Method set_endRange_Injected, addr 0xb67752c, size 0x4c, virtual false, abstract: false, final false
static inline void set_endRange_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_gravity, addr 0xb6785ec, size 0x40, virtual false, abstract: false, final false
inline void set_gravity(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// @brief Method set_gravityBlittable, addr 0xb67862c, size 0x80, virtual false, abstract: false, final false
inline void set_gravityBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_gravityBlittable_Injected, addr 0xb6786f0, size 0x44, virtual false, abstract: false, final false
static inline void set_gravityBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_gravityFocus, addr 0xb6777b4, size 0x88, virtual false, abstract: false, final false
inline void set_gravityFocus(float_t  value) ;

/// @brief Method set_gravityFocus_Injected, addr 0xb67783c, size 0x4c, virtual false, abstract: false, final false
static inline void set_gravityFocus_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_length, addr 0xb67762c, size 0x88, virtual false, abstract: false, final false
inline void set_length(float_t  value) ;

/// @brief Method set_length_Injected, addr 0xb6776b4, size 0x4c, virtual false, abstract: false, final false
static inline void set_length_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_multiplyDragByParticleSize, addr 0xb677ad0, size 0x80, virtual false, abstract: false, final false
inline void set_multiplyDragByParticleSize(bool  value) ;

/// @brief Method set_multiplyDragByParticleSize_Injected, addr 0xb677b50, size 0x44, virtual false, abstract: false, final false
static inline void set_multiplyDragByParticleSize_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_multiplyDragByParticleVelocity, addr 0xb677c48, size 0x80, virtual false, abstract: false, final false
inline void set_multiplyDragByParticleVelocity(bool  value) ;

/// @brief Method set_multiplyDragByParticleVelocity_Injected, addr 0xb677cc8, size 0x44, virtual false, abstract: false, final false
static inline void set_multiplyDragByParticleVelocity_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_rotationAttraction, addr 0xb678a1c, size 0x40, virtual false, abstract: false, final false
inline void set_rotationAttraction(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// @brief Method set_rotationAttractionBlittable, addr 0xb678a5c, size 0x80, virtual false, abstract: false, final false
inline void set_rotationAttractionBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_rotationAttractionBlittable_Injected, addr 0xb678b20, size 0x44, virtual false, abstract: false, final false
static inline void set_rotationAttractionBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_rotationRandomness, addr 0xb677954, size 0x84, virtual false, abstract: false, final false
inline void set_rotationRandomness(::UnityEngine::Vector2  value) ;

/// @brief Method set_rotationRandomness_Injected, addr 0xb6779d8, size 0x44, virtual false, abstract: false, final false
static inline void set_rotationRandomness_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_rotationSpeed, addr 0xb678804, size 0x40, virtual false, abstract: false, final false
inline void set_rotationSpeed(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// @brief Method set_rotationSpeedBlittable, addr 0xb678844, size 0x80, virtual false, abstract: false, final false
inline void set_rotationSpeedBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_rotationSpeedBlittable_Injected, addr 0xb678908, size 0x44, virtual false, abstract: false, final false
static inline void set_rotationSpeedBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_shape, addr 0xb6771a4, size 0x80, virtual false, abstract: false, final false
inline void set_shape(::UnityEngine::ParticleSystemForceFieldShape  value) ;

/// @brief Method set_shape_Injected, addr 0xb677224, size 0x44, virtual false, abstract: false, final false
static inline void set_shape_Injected(::System::IntPtr  _unity_self, ::UnityEngine::ParticleSystemForceFieldShape  value) ;

/// @brief Method set_startRange, addr 0xb67731c, size 0x88, virtual false, abstract: false, final false
inline void set_startRange(float_t  value) ;

/// @brief Method set_startRange_Injected, addr 0xb6773a4, size 0x4c, virtual false, abstract: false, final false
static inline void set_startRange_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_vectorField, addr 0xb677ddc, size 0xb4, virtual false, abstract: false, final false
inline void set_vectorField(::UnityEngine::Texture3D*  value) ;

/// @brief Method set_vectorFieldAttraction, addr 0xb679064, size 0x40, virtual false, abstract: false, final false
inline void set_vectorFieldAttraction(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// @brief Method set_vectorFieldAttractionBlittable, addr 0xb6790a4, size 0x80, virtual false, abstract: false, final false
inline void set_vectorFieldAttractionBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_vectorFieldAttractionBlittable_Injected, addr 0xb679168, size 0x44, virtual false, abstract: false, final false
static inline void set_vectorFieldAttractionBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_vectorFieldSpeed, addr 0xb678e4c, size 0x40, virtual false, abstract: false, final false
inline void set_vectorFieldSpeed(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// @brief Method set_vectorFieldSpeedBlittable, addr 0xb678e8c, size 0x80, virtual false, abstract: false, final false
inline void set_vectorFieldSpeedBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_vectorFieldSpeedBlittable_Injected, addr 0xb678f50, size 0x44, virtual false, abstract: false, final false
static inline void set_vectorFieldSpeedBlittable_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_vectorField_Injected, addr 0xb677e90, size 0x44, virtual false, abstract: false, final false
static inline void set_vectorField_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemForceField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemForceField", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystemForceField(ParticleSystemForceField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemForceField", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystemForceField(ParticleSystemForceField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30856};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ParticleSystemForceField) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
