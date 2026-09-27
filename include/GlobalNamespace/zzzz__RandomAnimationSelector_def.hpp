#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomAnimationSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomAnimationSelector)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomAnimationSelector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RandomAnimationSelector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomAnimationSelector*, "", "RandomAnimationSelector");
// [RequireComponent(typeof(UnityEngine.Animator))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomAnimationSelector
class CORDL_TYPE RandomAnimationSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animationChancePerSecond, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationChancePerSecond, put=__cordl_internal_set_animationChancePerSecond)) float_t  animationChancePerSecond;

/// @brief Field animationSelect, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationSelect, put=__cordl_internal_set_animationSelect)) int32_t  animationSelect;

/// @brief Field animationSelectName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationSelectName, put=__cordl_internal_set_animationSelectName)) ::StringW  animationSelectName;

/// @brief Field animationTrigger, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationTrigger, put=__cordl_internal_set_animationTrigger)) int32_t  animationTrigger;

/// @brief Field animationTriggerName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationTriggerName, put=__cordl_internal_set_animationTriggerName)) ::StringW  animationTriggerName;

/// @brief Field animator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field lastSliceUpdateTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSliceUpdateTime, put=__cordl_internal_set_lastSliceUpdateTime)) float_t  lastSliceUpdateTime;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x578f53c, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::RandomAnimationSelector* New_ctor() ;

/// @brief Method OnDisable, addr 0x578f640, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x578f5bc, size 0x84, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x578f64c, size 0xc4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr float_t const& __cordl_internal_get_animationChancePerSecond() const;

constexpr float_t& __cordl_internal_get_animationChancePerSecond() ;

constexpr int32_t const& __cordl_internal_get_animationSelect() const;

constexpr int32_t& __cordl_internal_get_animationSelect() ;

constexpr ::StringW const& __cordl_internal_get_animationSelectName() const;

constexpr ::StringW& __cordl_internal_get_animationSelectName() ;

constexpr int32_t const& __cordl_internal_get_animationTrigger() const;

constexpr int32_t& __cordl_internal_get_animationTrigger() ;

constexpr ::StringW const& __cordl_internal_get_animationTriggerName() const;

constexpr ::StringW& __cordl_internal_get_animationTriggerName() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_lastSliceUpdateTime() const;

constexpr float_t& __cordl_internal_get_lastSliceUpdateTime() ;

constexpr void __cordl_internal_set_animationChancePerSecond(float_t  value) ;

constexpr void __cordl_internal_set_animationSelect(int32_t  value) ;

constexpr void __cordl_internal_set_animationSelectName(::StringW  value) ;

constexpr void __cordl_internal_set_animationTrigger(int32_t  value) ;

constexpr void __cordl_internal_set_animationTriggerName(::StringW  value) ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_lastSliceUpdateTime(float_t  value) ;

/// @brief Method .ctor, addr 0x578f710, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomAnimationSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomAnimationSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomAnimationSelector(RandomAnimationSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomAnimationSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomAnimationSelector(RandomAnimationSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1441};

/// [SerializeField]
/// @brief Field animationTriggerName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___animationTriggerName;

/// @brief Field animationTrigger, offset: 0x28, size: 0x4, def value: None
 int32_t  ___animationTrigger;

/// [SerializeField]
/// @brief Field animationSelectName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___animationSelectName;

/// @brief Field animationSelect, offset: 0x38, size: 0x4, def value: None
 int32_t  ___animationSelect;

/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field animationChancePerSecond, offset: 0x3c, size: 0x4, def value: None
 float_t  ___animationChancePerSecond;

/// @brief Field animator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field lastSliceUpdateTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___lastSliceUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomAnimationSelector, ___animationTriggerName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomAnimationSelector, ___animationTrigger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomAnimationSelector, ___animationSelectName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomAnimationSelector, ___animationSelect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomAnimationSelector, ___animationChancePerSecond) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomAnimationSelector, ___animator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomAnimationSelector, ___lastSliceUpdateTime) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RandomAnimationSelector) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
