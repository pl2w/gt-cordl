#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineSmoother.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CinemachineSplineSmoother)
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineSplineSmoother;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineSplineSmoother*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineSplineSmoother*, "Unity.Cinemachine", "CinemachineSplineSmoother");
// [ExecuteAlways]
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Spline Smoother")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineSplineSmoother.html")]
// [RequireComponent(typeof(UnityEngine.Splines.SplineContainer))]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineSplineSmoother
class CORDL_TYPE CinemachineSplineSmoother : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AutoSmooth, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoSmooth, put=__cordl_internal_set_AutoSmooth)) bool  AutoSmooth;

static inline ::Unity::Cinemachine::CinemachineSplineSmoother* New_ctor() ;

/// @brief Method SmoothSplineNow, addr 0xaee0400, size 0x494, virtual false, abstract: false, final false
inline void SmoothSplineNow() ;

constexpr bool const& __cordl_internal_get_AutoSmooth() const;

constexpr bool& __cordl_internal_get_AutoSmooth() ;

constexpr void __cordl_internal_set_AutoSmooth(bool  value) ;

/// @brief Method .ctor, addr 0xaee0894, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineSmoother() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSplineSmoother", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineSplineSmoother(CinemachineSplineSmoother && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSplineSmoother", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineSplineSmoother(CinemachineSplineSmoother const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22460};

/// [Tooltip("If checked, the spline will be automatically smoothed whenever it is modified (editor only).")]
/// @brief Field AutoSmooth, offset: 0x20, size: 0x1, def value: None
 bool  ___AutoSmooth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineSmoother, ___AutoSmooth) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineSplineSmoother) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
