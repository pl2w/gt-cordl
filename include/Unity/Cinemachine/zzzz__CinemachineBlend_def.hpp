#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBlend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineBlend)
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineBlend_IBlender;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineBlend;
}
namespace Unity::Cinemachine {
class CinemachineBlend_IBlender;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineBlend*);
MARK_REF_T(::Unity::Cinemachine::CinemachineBlend_IBlender*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineBlend*, "Unity.Cinemachine", "CinemachineBlend");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineBlend_IBlender*, "Unity.Cinemachine", "CinemachineBlend/IBlender");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineBlend
class CORDL_TYPE CinemachineBlend : public ::System::Object {
public:
// Declarations
using IBlender = ::Unity::Cinemachine::CinemachineBlend_IBlender;

/// @brief Field BlendCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlendCurve, put=__cordl_internal_set_BlendCurve)) ::UnityEngine::AnimationCurve*  BlendCurve;

 __declspec(property(get=get_BlendWeight)) float_t  BlendWeight;

/// @brief Field CamA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CamA, put=__cordl_internal_set_CamA)) ::Unity::Cinemachine::ICinemachineCamera*  CamA;

/// @brief Field CamB, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CamB, put=__cordl_internal_set_CamB)) ::Unity::Cinemachine::ICinemachineCamera*  CamB;

 __declspec(property(get=get_CustomBlender, put=set_CustomBlender)) ::Unity::Cinemachine::CinemachineBlend_IBlender*  CustomBlender;

 __declspec(property(get=get_Description)) ::StringW  Description;

/// @brief Field Duration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Duration, put=__cordl_internal_set_Duration)) float_t  Duration;

 __declspec(property(get=get_IsComplete)) bool  IsComplete;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Field TimeInBlend, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_TimeInBlend, put=__cordl_internal_set_TimeInBlend)) float_t  TimeInBlend;

/// @brief Field <CustomBlender>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__CustomBlender_k__BackingField, put=__cordl_internal_set__CustomBlender_k__BackingField)) ::Unity::Cinemachine::CinemachineBlend_IBlender*  _CustomBlender_k__BackingField;

/// @brief Method ClearBlend, addr 0xaeae874, size 0x40, virtual false, abstract: false, final false
inline void ClearBlend() ;

/// @brief Method CopyFrom, addr 0xaeae808, size 0x6c, virtual false, abstract: false, final false
inline void CopyFrom(::Unity::Cinemachine::CinemachineBlend*  src) ;

static inline ::Unity::Cinemachine::CinemachineBlend* New_ctor() ;

/// @brief Method UpdateCameraState, addr 0xaeae8b4, size 0x22c, virtual false, abstract: false, final false
inline void UpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method Uses, addr 0xaeae704, size 0x104, virtual false, abstract: false, final false
inline bool Uses(::Unity::Cinemachine::ICinemachineCamera*  cam) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_BlendCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_BlendCurve() ;

constexpr ::Unity::Cinemachine::ICinemachineCamera* const& __cordl_internal_get_CamA() const;

constexpr ::Unity::Cinemachine::ICinemachineCamera*& __cordl_internal_get_CamA() ;

constexpr ::Unity::Cinemachine::ICinemachineCamera* const& __cordl_internal_get_CamB() const;

constexpr ::Unity::Cinemachine::ICinemachineCamera*& __cordl_internal_get_CamB() ;

constexpr float_t const& __cordl_internal_get_Duration() const;

constexpr float_t& __cordl_internal_get_Duration() ;

constexpr float_t const& __cordl_internal_get_TimeInBlend() const;

constexpr float_t& __cordl_internal_get_TimeInBlend() ;

constexpr ::Unity::Cinemachine::CinemachineBlend_IBlender* const& __cordl_internal_get__CustomBlender_k__BackingField() const;

constexpr ::Unity::Cinemachine::CinemachineBlend_IBlender*& __cordl_internal_get__CustomBlender_k__BackingField() ;

constexpr void __cordl_internal_set_BlendCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_CamA(::Unity::Cinemachine::ICinemachineCamera*  value) ;

constexpr void __cordl_internal_set_CamB(::Unity::Cinemachine::ICinemachineCamera*  value) ;

constexpr void __cordl_internal_set_Duration(float_t  value) ;

constexpr void __cordl_internal_set_TimeInBlend(float_t  value) ;

constexpr void __cordl_internal_set__CustomBlender_k__BackingField(::Unity::Cinemachine::CinemachineBlend_IBlender*  value) ;

/// @brief Method .ctor, addr 0xaeaabb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BlendWeight, addr 0xaeae364, size 0x8c, virtual false, abstract: false, final false
inline float_t get_BlendWeight() ;

/// [CompilerGenerated]
/// @brief Method get_CustomBlender, addr 0xaeae420, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlend_IBlender* get_CustomBlender() ;

/// @brief Method get_Description, addr 0xaeae430, size 0x2d4, virtual false, abstract: false, final false
inline ::StringW get_Description() ;

/// @brief Method get_IsComplete, addr 0xaeae3f0, size 0x30, virtual false, abstract: false, final false
inline bool get_IsComplete() ;

/// @brief Method get_IsValid, addr 0xaeaac3c, size 0x120, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_State, addr 0xaeaeae0, size 0x46c, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CameraState get_State() ;

/// [CompilerGenerated]
/// @brief Method set_CustomBlender, addr 0xaeae428, size 0x8, virtual false, abstract: false, final false
inline void set_CustomBlender(::Unity::Cinemachine::CinemachineBlend_IBlender*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBlend() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBlend", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineBlend(CinemachineBlend && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBlend", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineBlend(CinemachineBlend const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22265};

/// @brief Field CamA, offset: 0x10, size: 0x8, def value: None
 ::Unity::Cinemachine::ICinemachineCamera*  ___CamA;

/// @brief Field CamB, offset: 0x18, size: 0x8, def value: None
 ::Unity::Cinemachine::ICinemachineCamera*  ___CamB;

/// @brief Field BlendCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___BlendCurve;

/// @brief Field TimeInBlend, offset: 0x28, size: 0x4, def value: None
 float_t  ___TimeInBlend;

/// [CompilerGenerated]
/// @brief Field <CustomBlender>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineBlend_IBlender*  ____CustomBlender_k__BackingField;

/// @brief Field Duration, offset: 0x38, size: 0x4, def value: None
 float_t  ___Duration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineBlend, ___CamA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBlend, ___CamB) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBlend, ___BlendCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBlend, ___TimeInBlend) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBlend, ____CustomBlender_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBlend, ___Duration) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineBlend) == 0x40, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineBlend/IBlender
class CORDL_TYPE CinemachineBlend_IBlender {
public:
// Declarations
/// @brief Method GetIntermediateState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::Cinemachine::CameraState GetIntermediateState(::Unity::Cinemachine::ICinemachineCamera*  CamA, ::Unity::Cinemachine::ICinemachineCamera*  CamB, float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBlend_IBlender", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineBlend_IBlender(CinemachineBlend_IBlender const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22264};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
