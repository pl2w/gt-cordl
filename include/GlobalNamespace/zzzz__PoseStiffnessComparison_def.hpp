#pragma once
// IWYU pragma private; include "GlobalNamespace/PoseStiffnessComparison.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PoseStiffnessComparison)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PoseStiffnessComparison;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PoseStiffnessComparison*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PoseStiffnessComparison*, "", "PoseStiffnessComparison");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PoseStiffnessComparison
class CORDL_TYPE PoseStiffnessComparison : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BonesA, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_BonesA, put=__cordl_internal_set_BonesA)) ::UnityW<::UnityEngine::Transform>  BonesA;

/// @brief Field BonesB, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_BonesB, put=__cordl_internal_set_BonesB)) ::UnityW<::UnityEngine::Transform>  BonesB;

/// @brief Field Period, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Period, put=__cordl_internal_set_Period)) float_t  Period;

/// @brief Field Rest, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Rest, put=__cordl_internal_set_Rest)) float_t  Rest;

/// @brief Field Run, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Run, put=__cordl_internal_set_Run)) float_t  Run;

/// @brief Field Tilt, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tilt, put=__cordl_internal_set_Tilt)) float_t  Tilt;

/// @brief Field m_timer, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_timer, put=__cordl_internal_set_m_timer)) float_t  m_timer;

/// @brief Field m_yA, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_yA, put=__cordl_internal_set_m_yA)) float_t  m_yA;

/// @brief Field m_yB, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_yB, put=__cordl_internal_set_m_yB)) float_t  m_yB;

/// @brief Method FixedUpdate, addr 0x55e6a8c, size 0x618, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::PoseStiffnessComparison* New_ctor() ;

/// @brief Method Start, addr 0x55e6a4c, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_BonesA() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_BonesA() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_BonesB() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_BonesB() ;

constexpr float_t const& __cordl_internal_get_Period() const;

constexpr float_t& __cordl_internal_get_Period() ;

constexpr float_t const& __cordl_internal_get_Rest() const;

constexpr float_t& __cordl_internal_get_Rest() ;

constexpr float_t const& __cordl_internal_get_Run() const;

constexpr float_t& __cordl_internal_get_Run() ;

constexpr float_t const& __cordl_internal_get_Tilt() const;

constexpr float_t& __cordl_internal_get_Tilt() ;

constexpr float_t const& __cordl_internal_get_m_timer() const;

constexpr float_t& __cordl_internal_get_m_timer() ;

constexpr float_t const& __cordl_internal_get_m_yA() const;

constexpr float_t& __cordl_internal_get_m_yA() ;

constexpr float_t const& __cordl_internal_get_m_yB() const;

constexpr float_t& __cordl_internal_get_m_yB() ;

constexpr void __cordl_internal_set_BonesA(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_BonesB(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_Period(float_t  value) ;

constexpr void __cordl_internal_set_Rest(float_t  value) ;

constexpr void __cordl_internal_set_Run(float_t  value) ;

constexpr void __cordl_internal_set_Tilt(float_t  value) ;

constexpr void __cordl_internal_set_m_timer(float_t  value) ;

constexpr void __cordl_internal_set_m_yA(float_t  value) ;

constexpr void __cordl_internal_set_m_yB(float_t  value) ;

/// @brief Method .ctor, addr 0x55e70a4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseStiffnessComparison() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseStiffnessComparison", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseStiffnessComparison(PoseStiffnessComparison && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseStiffnessComparison", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseStiffnessComparison(PoseStiffnessComparison const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23};

/// @brief Field Run, offset: 0x20, size: 0x4, def value: None
 float_t  ___Run;

/// @brief Field Tilt, offset: 0x24, size: 0x4, def value: None
 float_t  ___Tilt;

/// @brief Field Period, offset: 0x28, size: 0x4, def value: None
 float_t  ___Period;

/// @brief Field Rest, offset: 0x2c, size: 0x4, def value: None
 float_t  ___Rest;

/// @brief Field BonesA, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___BonesA;

/// @brief Field BonesB, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___BonesB;

/// @brief Field m_yA, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_yA;

/// @brief Field m_yB, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_yB;

/// @brief Field m_timer, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_timer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PoseStiffnessComparison, ___Run) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseStiffnessComparison, ___Tilt) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseStiffnessComparison, ___Period) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseStiffnessComparison, ___Rest) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseStiffnessComparison, ___BonesA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseStiffnessComparison, ___BonesB) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseStiffnessComparison, ___m_yA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseStiffnessComparison, ___m_yB) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseStiffnessComparison, ___m_timer) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PoseStiffnessComparison) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
