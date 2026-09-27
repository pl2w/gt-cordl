#pragma once
// IWYU pragma private; include "GlobalNamespace/ObservableBehaviorRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(ObservableBehaviorRule)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class ObservableBehaviorRule;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ObservableBehaviorRule*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObservableBehaviorRule*, "", "ObservableBehaviorRule");
// [CreateAssetMenu(fileName = "ObservableBehaviorRule", menuName = "Utilities/ObservableBehaviorRule")]
// Dependencies UnityEngine.ScriptableObject, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObservableBehaviorRule
class CORDL_TYPE ObservableBehaviorRule : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_InverseObservable)) bool  InverseObservable;

 __declspec(property(get=get_ObservableDistanceRange)) ::UnityEngine::Vector2  ObservableDistanceRange;

 __declspec(property(get=get_ObservableDotRange)) ::UnityEngine::Vector2  ObservableDotRange;

/// @brief Field inverseObservable, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_inverseObservable, put=__cordl_internal_set_inverseObservable)) bool  inverseObservable;

/// @brief Field observableDistanceRange, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_observableDistanceRange, put=__cordl_internal_set_observableDistanceRange)) ::UnityEngine::Vector2  observableDistanceRange;

/// @brief Field observableDotRange, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_observableDotRange, put=__cordl_internal_set_observableDotRange)) ::UnityEngine::Vector2  observableDotRange;

static inline ::GlobalNamespace::ObservableBehaviorRule* New_ctor() ;

constexpr bool const& __cordl_internal_get_inverseObservable() const;

constexpr bool& __cordl_internal_get_inverseObservable() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_observableDistanceRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_observableDistanceRange() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_observableDotRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_observableDotRange() ;

constexpr void __cordl_internal_set_inverseObservable(bool  value) ;

constexpr void __cordl_internal_set_observableDistanceRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_observableDotRange(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x5b0da30, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InverseObservable, addr 0x5b0da28, size 0x8, virtual false, abstract: false, final false
inline bool get_InverseObservable() ;

/// @brief Method get_ObservableDistanceRange, addr 0x5b0da18, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_ObservableDistanceRange() ;

/// @brief Method get_ObservableDotRange, addr 0x5b0da20, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_ObservableDotRange() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObservableBehaviorRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObservableBehaviorRule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObservableBehaviorRule(ObservableBehaviorRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObservableBehaviorRule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObservableBehaviorRule(ObservableBehaviorRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3526};

/// [SerializeField]
/// @brief Field observableDistanceRange, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___observableDistanceRange;

/// [SerializeField]
/// @brief Field observableDotRange, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___observableDotRange;

/// [SerializeField]
/// @brief Field inverseObservable, offset: 0x28, size: 0x1, def value: None
 bool  ___inverseObservable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObservableBehaviorRule, ___observableDistanceRange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservableBehaviorRule, ___observableDotRange) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservableBehaviorRule, ___inverseObservable) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObservableBehaviorRule) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
