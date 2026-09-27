#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineCart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineSplineCart_UpdateMethods_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_RollCache_def.hpp"
#include "Unity/Cinemachine/zzzz__SplineAutoDolly_def.hpp"
#include "Unity/Cinemachine/zzzz__SplineSettings_def.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineSplineCart)
namespace GlobalNamespace {
struct CinemachineSplineCart_UpdateMethods;
}
namespace Unity::Cinemachine {
class ISplineReferencer;
}
namespace Unity::Cinemachine {
struct SplineSettings;
}
namespace UnityEngine::Splines {
struct PathIndexUnit;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineSplineCart;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineSplineCart*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineSplineCart*, "Unity.Cinemachine", "CinemachineSplineCart");
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Spline Cart")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineSplineCart.html")]
// Dependencies Unity.Cinemachine.CinemachineSplineCart::UpdateMethods, Unity.Cinemachine.CinemachineSplineRoll::RollCache, Unity.Cinemachine.SplineAutoDolly, Unity.Cinemachine.SplineSettings, UnityEngine.MonoBehaviour, UnityEngine.Splines.PathIndexUnit
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineSplineCart
class CORDL_TYPE CinemachineSplineCart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UpdateMethods = ::GlobalNamespace::CinemachineSplineCart_UpdateMethods;

/// @brief Field AutomaticDolly, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_AutomaticDolly, put=__cordl_internal_set_AutomaticDolly)) ::Unity::Cinemachine::SplineAutoDolly  AutomaticDolly;

 __declspec(property(get=get_PositionUnits, put=set_PositionUnits)) ::UnityEngine::Splines::PathIndexUnit  PositionUnits;

 __declspec(property(get=get_Spline, put=set_Spline)) ::UnityW<::UnityEngine::Splines::SplineContainer>  Spline;

 __declspec(property(get=get_SplinePosition, put=set_SplinePosition)) float_t  SplinePosition;

 __declspec(property(get=get_SplineSettings)) ::Unity::Cinemachine::SplineSettings  SplineSettings;

/// @brief Field TrackingTarget, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrackingTarget, put=__cordl_internal_set_TrackingTarget)) ::UnityW<::UnityEngine::Transform>  TrackingTarget;

/// @brief Field UpdateMethod, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpdateMethod, put=__cordl_internal_set_UpdateMethod)) ::GlobalNamespace::CinemachineSplineCart_UpdateMethods  UpdateMethod;

/// @brief Field m_LegacyPosition, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LegacyPosition, put=__cordl_internal_set_m_LegacyPosition)) float_t  m_LegacyPosition;

/// @brief Field m_LegacySpline, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacySpline, put=__cordl_internal_set_m_LegacySpline)) ::UnityW<::UnityEngine::Splines::SplineContainer>  m_LegacySpline;

/// @brief Field m_LegacyUnits, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LegacyUnits, put=__cordl_internal_set_m_LegacyUnits)) ::UnityEngine::Splines::PathIndexUnit  m_LegacyUnits;

/// @brief Field m_RollCache, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RollCache, put=__cordl_internal_set_m_RollCache)) ::GlobalNamespace::CinemachineSplineRoll_RollCache  m_RollCache;

/// @brief Field m_SplineSettings, offset 0x20, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_SplineSettings, put=__cordl_internal_set_m_SplineSettings)) ::Unity::Cinemachine::SplineSettings  m_SplineSettings;

/// @brief Convert operator to "::Unity::Cinemachine::ISplineReferencer"
constexpr operator  ::Unity::Cinemachine::ISplineReferencer*() noexcept;

/// @brief Method FixedUpdate, addr 0xae98124, size 0x14, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate, addr 0xae98454, size 0x8c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Unity::Cinemachine::CinemachineSplineCart* New_ctor() ;

/// @brief Method OnDisable, addr 0xae98118, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xae9805c, size 0xbc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xae97f64, size 0xb0, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PerformLegacyUpgrade, addr 0xae97eac, size 0xb8, virtual false, abstract: false, final false
inline void PerformLegacyUpgrade() ;

/// @brief Method Reset, addr 0xae98014, size 0x48, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetCartPosition, addr 0xae982bc, size 0x198, virtual false, abstract: false, final false
inline void SetCartPosition(float_t  distanceAlongPath) ;

/// @brief Method Update, addr 0xae98234, size 0x88, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCartPosition, addr 0xae98138, size 0xfc, virtual false, abstract: false, final false
inline void UpdateCartPosition() ;

constexpr ::Unity::Cinemachine::SplineAutoDolly const& __cordl_internal_get_AutomaticDolly() const;

constexpr ::Unity::Cinemachine::SplineAutoDolly& __cordl_internal_get_AutomaticDolly() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_TrackingTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_TrackingTarget() ;

constexpr ::GlobalNamespace::CinemachineSplineCart_UpdateMethods const& __cordl_internal_get_UpdateMethod() const;

constexpr ::GlobalNamespace::CinemachineSplineCart_UpdateMethods& __cordl_internal_get_UpdateMethod() ;

constexpr float_t const& __cordl_internal_get_m_LegacyPosition() const;

constexpr float_t& __cordl_internal_get_m_LegacyPosition() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_m_LegacySpline() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_m_LegacySpline() ;

constexpr ::UnityEngine::Splines::PathIndexUnit const& __cordl_internal_get_m_LegacyUnits() const;

constexpr ::UnityEngine::Splines::PathIndexUnit& __cordl_internal_get_m_LegacyUnits() ;

constexpr ::GlobalNamespace::CinemachineSplineRoll_RollCache const& __cordl_internal_get_m_RollCache() const;

constexpr ::GlobalNamespace::CinemachineSplineRoll_RollCache& __cordl_internal_get_m_RollCache() ;

constexpr ::Unity::Cinemachine::SplineSettings const& __cordl_internal_get_m_SplineSettings() const;

constexpr ::Unity::Cinemachine::SplineSettings& __cordl_internal_get_m_SplineSettings() ;

constexpr void __cordl_internal_set_AutomaticDolly(::Unity::Cinemachine::SplineAutoDolly  value) ;

constexpr void __cordl_internal_set_TrackingTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_UpdateMethod(::GlobalNamespace::CinemachineSplineCart_UpdateMethods  value) ;

constexpr void __cordl_internal_set_m_LegacyPosition(float_t  value) ;

constexpr void __cordl_internal_set_m_LegacySpline(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_m_LegacyUnits(::UnityEngine::Splines::PathIndexUnit  value) ;

constexpr void __cordl_internal_set_m_RollCache(::GlobalNamespace::CinemachineSplineRoll_RollCache  value) ;

constexpr void __cordl_internal_set_m_SplineSettings(::Unity::Cinemachine::SplineSettings  value) ;

/// @brief Method .ctor, addr 0xae984e0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PositionUnits, addr 0xae97e98, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::PathIndexUnit get_PositionUnits() ;

/// @brief Method get_Spline, addr 0xae97e78, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_Spline() ;

/// @brief Method get_SplinePosition, addr 0xae97e88, size 0x8, virtual false, abstract: false, final false
inline float_t get_SplinePosition() ;

/// @brief Method get_SplineSettings, addr 0xae97e70, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Unity::Cinemachine::SplineSettings> get_SplineSettings() ;

/// @brief Convert to "::Unity::Cinemachine::ISplineReferencer"
constexpr ::Unity::Cinemachine::ISplineReferencer* i___Unity__Cinemachine__ISplineReferencer() noexcept;

/// @brief Method set_PositionUnits, addr 0xae97ea0, size 0xc, virtual false, abstract: false, final false
inline void set_PositionUnits(::UnityEngine::Splines::PathIndexUnit  value) ;

/// @brief Method set_Spline, addr 0xae97e80, size 0x8, virtual false, abstract: false, final false
inline void set_Spline(::UnityEngine::Splines::SplineContainer*  value) ;

/// @brief Method set_SplinePosition, addr 0xae97e90, size 0x8, virtual false, abstract: false, final false
inline void set_SplinePosition(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineCart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSplineCart", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineSplineCart(CinemachineSplineCart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSplineCart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineSplineCart(CinemachineSplineCart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22200};

/// [SerializeField]
/// [FormerlySerializedAs("SplineSettings")]
/// @brief Field m_SplineSettings, offset: 0x20, size: 0x20, def value: None
 ::Unity::Cinemachine::SplineSettings  ___m_SplineSettings;

/// [Tooltip("When to move the cart, if Speed is non-zero")]
/// @brief Field UpdateMethod, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineSplineCart_UpdateMethods  ___UpdateMethod;

/// [FoldoutWithEnabledButton("Enabled")]
/// [Tooltip("Controls how automatic dollying occurs.  A tracking target may be necessary to use this feature.")]
/// @brief Field AutomaticDolly, offset: 0x48, size: 0x10, def value: None
 ::Unity::Cinemachine::SplineAutoDolly  ___AutomaticDolly;

/// [Tooltip("Used only by Automatic Dolly settings that require it")]
/// @brief Field TrackingTarget, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___TrackingTarget;

/// @brief Field m_RollCache, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::CinemachineSplineRoll_RollCache  ___m_RollCache;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("SplinePosition")]
/// @brief Field m_LegacyPosition, offset: 0x68, size: 0x4, def value: None
 float_t  ___m_LegacyPosition;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("PositionUnits")]
/// @brief Field m_LegacyUnits, offset: 0x6c, size: 0x4, def value: None
 ::UnityEngine::Splines::PathIndexUnit  ___m_LegacyUnits;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("Spline")]
/// @brief Field m_LegacySpline, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___m_LegacySpline;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineCart, ___m_SplineSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineCart, ___UpdateMethod) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineCart, ___AutomaticDolly) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineCart, ___TrackingTarget) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineCart, ___m_RollCache) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineCart, ___m_LegacyPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineCart, ___m_LegacyUnits) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineCart, ___m_LegacySpline) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineSplineCart) == 0x78, "Size mismatch!");

} // namespace end def Unity::Cinemachine
