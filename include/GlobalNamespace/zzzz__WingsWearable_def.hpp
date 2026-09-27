#pragma once
// IWYU pragma private; include "GlobalNamespace/WingsWearable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WingsWearable)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class WingsWearable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WingsWearable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WingsWearable*, "", "WingsWearable");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: WingsWearable
class CORDL_TYPE WingsWearable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field flapSpeedCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_flapSpeedCurve, put=__cordl_internal_set_flapSpeedCurve)) ::UnityEngine::AnimationCurve*  flapSpeedCurve;

/// @brief Field flapSpeedParamID, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_flapSpeedParamID, put=__cordl_internal_set_flapSpeedParamID)) int32_t  flapSpeedParamID;

/// @brief Field lastSliceTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSliceTime, put=__cordl_internal_set_lastSliceTime)) float_t  lastSliceTime;

/// @brief Field oldPos, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_oldPos, put=__cordl_internal_set_oldPos)) ::UnityEngine::Vector3  oldPos;

/// @brief Field xform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_xform, put=__cordl_internal_set_xform)) ::UnityW<::UnityEngine::Transform>  xform;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5e062e8, size 0x138, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::WingsWearable* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e06464, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e06420, size 0x44, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5e06470, size 0x13c, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_flapSpeedCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_flapSpeedCurve() ;

constexpr int32_t const& __cordl_internal_get_flapSpeedParamID() const;

constexpr int32_t& __cordl_internal_get_flapSpeedParamID() ;

constexpr float_t const& __cordl_internal_get_lastSliceTime() const;

constexpr float_t& __cordl_internal_get_lastSliceTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_oldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_oldPos() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_xform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_xform() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_flapSpeedCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_flapSpeedParamID(int32_t  value) ;

constexpr void __cordl_internal_set_lastSliceTime(float_t  value) ;

constexpr void __cordl_internal_set_oldPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_xform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5e065ac, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WingsWearable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WingsWearable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WingsWearable(WingsWearable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WingsWearable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WingsWearable(WingsWearable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{527};

/// [Tooltip("This animator must have a parameter called \'FlapSpeed\'")]
/// @brief Field animator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// [Tooltip("X axis is move speed, Y axis is flap speed")]
/// @brief Field flapSpeedCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___flapSpeedCurve;

/// @brief Field xform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___xform;

/// @brief Field oldPos, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___oldPos;

/// @brief Field lastSliceTime, offset: 0x44, size: 0x4, def value: None
 float_t  ___lastSliceTime;

/// @brief Field flapSpeedParamID, offset: 0x48, size: 0x4, def value: None
 int32_t  ___flapSpeedParamID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WingsWearable, ___animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WingsWearable, ___flapSpeedCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WingsWearable, ___xform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WingsWearable, ___oldPos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WingsWearable, ___lastSliceTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WingsWearable, ___flapSpeedParamID) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WingsWearable) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
