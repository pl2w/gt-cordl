#pragma once
// IWYU pragma private; include "GlobalNamespace/ObservableBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObservableBehavior)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class ObservableBehaviorRule;
}
namespace GlobalNamespace {
class RigEventVolume;
}
// Forward declare root types
namespace GlobalNamespace {
class ObservableBehavior;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ObservableBehavior*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObservableBehavior*, "", "ObservableBehavior");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObservableBehavior
class CORDL_TYPE ObservableBehavior : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Distance)) float_t  Distance;

 __declspec(property(get=get_ObservableBehaviorRule, put=set_ObservableBehaviorRule)) ::UnityW<::GlobalNamespace::ObservableBehaviorRule>  ObservableBehaviorRule;

/// @brief Field dist, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_dist, put=__cordl_internal_set_dist)) float_t  dist;

/// @brief Field firstFrame, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstFrame, put=__cordl_internal_set_firstFrame)) bool  firstFrame;

/// @brief Field observable, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_observable, put=__cordl_internal_set_observable)) bool  observable;

/// @brief Field observableBehaviorRule, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_observableBehaviorRule, put=__cordl_internal_set_observableBehaviorRule)) ::UnityW<::GlobalNamespace::ObservableBehaviorRule>  observableBehaviorRule;

/// @brief Field observableVolume, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_observableVolume, put=__cordl_internal_set_observableVolume)) ::UnityW<::GlobalNamespace::RigEventVolume>  observableVolume;

/// @brief Field triggerLostObservableIfSpawnedUnobservable, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerLostObservableIfSpawnedUnobservable, put=__cordl_internal_set_triggerLostObservableIfSpawnedUnobservable)) bool  triggerLostObservableIfSpawnedUnobservable;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method BuildValidationCheck, addr 0x5b0d790, size 0x168, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method IGorillaSliceableSimple.SliceUpdate, addr 0x5b0d2e0, size 0x4a8, virtual true, abstract: false, final true
inline void IGorillaSliceableSimple_SliceUpdate() ;

static inline ::GlobalNamespace::ObservableBehavior* New_ctor() ;

/// @brief Method ObservableSliceUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ObservableSliceUpdate() ;

/// @brief Method OnBecameObservable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnBecameObservable() ;

/// @brief Method OnDestroy, addr 0x5b0d2c4, size 0x1c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5b0d280, size 0x44, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5b0d8f8, size 0x110, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5b0d258, size 0x28, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLostObservable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnLostObservable() ;

/// @brief Method UnityOnDisable, addr 0x5b0d78c, size 0x4, virtual true, abstract: false, final false
inline void UnityOnDisable() ;

/// @brief Method UnityOnEnable, addr 0x5b0d788, size 0x4, virtual true, abstract: false, final false
inline void UnityOnEnable() ;

constexpr float_t const& __cordl_internal_get_dist() const;

constexpr float_t& __cordl_internal_get_dist() ;

constexpr bool const& __cordl_internal_get_firstFrame() const;

constexpr bool& __cordl_internal_get_firstFrame() ;

constexpr bool const& __cordl_internal_get_observable() const;

constexpr bool& __cordl_internal_get_observable() ;

constexpr ::UnityW<::GlobalNamespace::ObservableBehaviorRule> const& __cordl_internal_get_observableBehaviorRule() const;

constexpr ::UnityW<::GlobalNamespace::ObservableBehaviorRule>& __cordl_internal_get_observableBehaviorRule() ;

constexpr ::UnityW<::GlobalNamespace::RigEventVolume> const& __cordl_internal_get_observableVolume() const;

constexpr ::UnityW<::GlobalNamespace::RigEventVolume>& __cordl_internal_get_observableVolume() ;

constexpr bool const& __cordl_internal_get_triggerLostObservableIfSpawnedUnobservable() const;

constexpr bool& __cordl_internal_get_triggerLostObservableIfSpawnedUnobservable() ;

constexpr void __cordl_internal_set_dist(float_t  value) ;

constexpr void __cordl_internal_set_firstFrame(bool  value) ;

constexpr void __cordl_internal_set_observable(bool  value) ;

constexpr void __cordl_internal_set_observableBehaviorRule(::UnityW<::GlobalNamespace::ObservableBehaviorRule>  value) ;

constexpr void __cordl_internal_set_observableVolume(::UnityW<::GlobalNamespace::RigEventVolume>  value) ;

constexpr void __cordl_internal_set_triggerLostObservableIfSpawnedUnobservable(bool  value) ;

/// @brief Method .ctor, addr 0x5b0da08, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Distance, addr 0x5b0d250, size 0x8, virtual false, abstract: false, final false
inline float_t get_Distance() ;

/// @brief Method get_ObservableBehaviorRule, addr 0x5b0d224, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::ObservableBehaviorRule> get_ObservableBehaviorRule() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Method set_ObservableBehaviorRule, addr 0x5b0d22c, size 0x24, virtual false, abstract: false, final false
inline void set_ObservableBehaviorRule(::GlobalNamespace::ObservableBehaviorRule*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObservableBehavior() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObservableBehavior", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObservableBehavior(ObservableBehavior && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObservableBehavior", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObservableBehavior(ObservableBehavior const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3525};

/// @brief Field firstFrame, offset: 0x20, size: 0x1, def value: None
 bool  ___firstFrame;

/// @brief Field observable, offset: 0x21, size: 0x1, def value: None
 bool  ___observable;

/// [SerializeField]
/// @brief Field observableBehaviorRule, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObservableBehaviorRule>  ___observableBehaviorRule;

/// [SerializeField]
/// @brief Field observableVolume, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigEventVolume>  ___observableVolume;

/// @brief Field dist, offset: 0x38, size: 0x4, def value: None
 float_t  ___dist;

/// [SerializeField]
/// @brief Field triggerLostObservableIfSpawnedUnobservable, offset: 0x3c, size: 0x1, def value: None
 bool  ___triggerLostObservableIfSpawnedUnobservable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObservableBehavior, ___firstFrame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservableBehavior, ___observable) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservableBehavior, ___observableBehaviorRule) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservableBehavior, ___observableVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservableBehavior, ___dist) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservableBehavior, ___triggerLostObservableIfSpawnedUnobservable) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObservableBehavior) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
