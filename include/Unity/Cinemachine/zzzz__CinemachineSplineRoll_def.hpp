#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineRoll.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineSplineRoll)
namespace GlobalNamespace {
struct CinemachineSplineRoll_LerpRollDataWithEasing;
}
namespace GlobalNamespace {
struct CinemachineSplineRoll_LerpRollData;
}
namespace GlobalNamespace {
struct CinemachineSplineRoll_RollCache;
}
namespace GlobalNamespace {
struct CinemachineSplineRoll_RollData;
}
namespace UnityEngine::Splines {
template<typename T>
class IInterpolator_1;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineSplineRoll;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineSplineRoll*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineSplineRoll*, "Unity.Cinemachine", "CinemachineSplineRoll");
// [ExecuteInEditMode]
// [DisallowMultipleComponent]
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Spline Roll")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineSplineRoll.html")]
// [SaveDuringPlay]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineSplineRoll
class CORDL_TYPE CinemachineSplineRoll : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LerpRollData = ::GlobalNamespace::CinemachineSplineRoll_LerpRollData;

using LerpRollDataWithEasing = ::GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing;

using RollCache = ::GlobalNamespace::CinemachineSplineRoll_RollCache;

using RollData = ::GlobalNamespace::CinemachineSplineRoll_RollData;

/// @brief Field Easing, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Easing, put=__cordl_internal_set_Easing)) bool  Easing;

/// @brief Field Roll, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Roll, put=__cordl_internal_set_Roll)) ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineRoll_RollData>*  Roll;

/// @brief Field m_StreamingVersion, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StreamingVersion, put=__cordl_internal_set_m_StreamingVersion)) int32_t  m_StreamingVersion;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method GetInterpolator, addr 0xae98590, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>* GetInterpolator() ;

static inline ::Unity::Cinemachine::CinemachineSplineRoll* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xae98760, size 0x3c, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xae9875c, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method OnEnable, addr 0xae98758, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PerformLegacyUpgrade, addr 0xae98608, size 0xf4, virtual false, abstract: false, final false
inline void PerformLegacyUpgrade(int32_t  streamedVersion) ;

/// @brief Method Reset, addr 0xae98700, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get_Easing() const;

constexpr bool& __cordl_internal_get_Easing() ;

constexpr ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineRoll_RollData>* const& __cordl_internal_get_Roll() const;

constexpr ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineRoll_RollData>*& __cordl_internal_get_Roll() ;

constexpr int32_t const& __cordl_internal_get_m_StreamingVersion() const;

constexpr int32_t& __cordl_internal_get_m_StreamingVersion() ;

constexpr void __cordl_internal_set_Easing(bool  value) ;

constexpr void __cordl_internal_set_Roll(::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineRoll_RollData>*  value) ;

constexpr void __cordl_internal_set_m_StreamingVersion(int32_t  value) ;

/// @brief Method .ctor, addr 0xae9879c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineRoll() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSplineRoll", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineSplineRoll(CinemachineSplineRoll && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSplineRoll", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineSplineRoll(CinemachineSplineRoll const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22205};

/// [Tooltip("When enabled, roll eases into and out of the data point values.  Otherwise, interpolation is linear.")]
/// @brief Field Easing, offset: 0x20, size: 0x1, def value: None
 bool  ___Easing;

/// [HideFoldout]
/// @brief Field Roll, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineRoll_RollData>*  ___Roll;

/// [HideInInspector]
/// [SerializeField]
/// [NoSaveDuringPlay]
/// @brief Field m_StreamingVersion, offset: 0x30, size: 0x4, def value: None
 int32_t  ___m_StreamingVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineRoll, ___Easing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineRoll, ___Roll) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineRoll, ___m_StreamingVersion) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineSplineRoll) == 0x38, "Size mismatch!");

} // namespace end def Unity::Cinemachine
