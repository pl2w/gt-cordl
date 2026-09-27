#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFixedSignal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__SignalSourceAsset_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineFixedSignal)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineFixedSignal;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineFixedSignal*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFixedSignal*, "Unity.Cinemachine", "CinemachineFixedSignal");
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineImpulseFixedSignals.html")]
// Dependencies Unity.Cinemachine.SignalSourceAsset
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFixedSignal
class CORDL_TYPE CinemachineFixedSignal : public ::Unity::Cinemachine::SignalSourceAsset {
public:
// Declarations
 __declspec(property(get=get_SignalDuration)) float_t  SignalDuration;

/// @brief Field XCurve, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_XCurve, put=__cordl_internal_set_XCurve)) ::UnityEngine::AnimationCurve*  XCurve;

/// @brief Field YCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_YCurve, put=__cordl_internal_set_YCurve)) ::UnityEngine::AnimationCurve*  YCurve;

/// @brief Field ZCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZCurve, put=__cordl_internal_set_ZCurve)) ::UnityEngine::AnimationCurve*  ZCurve;

/// @brief Method AxisDuration, addr 0xaee2120, size 0xc0, virtual false, abstract: false, final false
inline float_t AxisDuration(::UnityEngine::AnimationCurve*  axis) ;

/// @brief Method AxisValue, addr 0xaee2288, size 0x4c, virtual false, abstract: false, final false
inline float_t AxisValue(::UnityEngine::AnimationCurve*  axis, float_t  time) ;

/// @brief Method GetSignal, addr 0xaee21e0, size 0xa8, virtual true, abstract: false, final false
inline void GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

static inline ::Unity::Cinemachine::CinemachineFixedSignal* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_XCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_XCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_YCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_YCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_ZCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_ZCurve() ;

constexpr void __cordl_internal_set_XCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_YCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_ZCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0xaee22d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SignalDuration, addr 0xaee20d8, size 0x48, virtual true, abstract: false, final false
inline float_t get_SignalDuration() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFixedSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFixedSignal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFixedSignal(CinemachineFixedSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFixedSignal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFixedSignal(CinemachineFixedSignal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22468};

/// [Tooltip("The raw signal shape along the X axis")]
/// [FormerlySerializedAs("m_XCurve")]
/// @brief Field XCurve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___XCurve;

/// [Tooltip("The raw signal shape along the Y axis")]
/// [FormerlySerializedAs("m_YCurve")]
/// @brief Field YCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___YCurve;

/// [Tooltip("The raw signal shape along the Z axis")]
/// [FormerlySerializedAs("m_ZCurve")]
/// @brief Field ZCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___ZCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFixedSignal, ___XCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFixedSignal, ___YCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFixedSignal, ___ZCurve) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFixedSignal) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
