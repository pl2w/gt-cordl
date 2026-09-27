#pragma once
// IWYU pragma private; include "GlobalNamespace/GrowOnEnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AnimationCurves_EaseType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GrowOnEnable)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class GrowOnEnable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GrowOnEnable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrowOnEnable*, "", "GrowOnEnable");
// Dependencies AnimationCurves::EaseType, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrowOnEnable
class CORDL_TYPE GrowOnEnable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _curve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _lerpVal, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lerpVal, put=__cordl_internal_set__lerpVal)) float_t  _lerpVal;

/// @brief Field _targetScale, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetScale, put=__cordl_internal_set__targetScale)) ::UnityEngine::Vector3  _targetScale;

/// @brief Field easeType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_easeType, put=__cordl_internal_set_easeType)) ::GlobalNamespace::AnimationCurves_EaseType  easeType;

/// @brief Field growDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_growDuration, put=__cordl_internal_set_growDuration)) float_t  growDuration;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x59d967c, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GrowOnEnable* New_ctor() ;

/// @brief Method OnDisable, addr 0x59d97e0, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59d96ac, size 0xc4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Tick, addr 0x59d9880, size 0xcc, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateScale, addr 0x59d9770, size 0x70, virtual false, abstract: false, final false
inline void UpdateScale() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr float_t const& __cordl_internal_get__lerpVal() const;

constexpr float_t& __cordl_internal_get__lerpVal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetScale() ;

constexpr ::GlobalNamespace::AnimationCurves_EaseType const& __cordl_internal_get_easeType() const;

constexpr ::GlobalNamespace::AnimationCurves_EaseType& __cordl_internal_get_easeType() ;

constexpr float_t const& __cordl_internal_get_growDuration() const;

constexpr float_t& __cordl_internal_get_growDuration() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__lerpVal(float_t  value) ;

constexpr void __cordl_internal_set__targetScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_easeType(::GlobalNamespace::AnimationCurves_EaseType  value) ;

constexpr void __cordl_internal_set_growDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x59d994c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x59d9870, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x59d9878, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrowOnEnable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrowOnEnable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrowOnEnable(GrowOnEnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrowOnEnable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrowOnEnable(GrowOnEnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{307};

/// [SerializeField]
/// @brief Field growDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___growDuration;

/// [SerializeField]
/// @brief Field easeType, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::AnimationCurves_EaseType  ___easeType;

/// @brief Field _curve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

/// @brief Field _targetScale, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetScale;

/// @brief Field _lerpVal, offset: 0x3c, size: 0x4, def value: None
 float_t  ____lerpVal;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrowOnEnable, ___growDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowOnEnable, ___easeType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowOnEnable, ____curve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowOnEnable, ____targetScale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowOnEnable, ____lerpVal) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowOnEnable, ____TickRunning_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrowOnEnable) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
