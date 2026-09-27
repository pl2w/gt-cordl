#pragma once
// IWYU pragma private; include "GlobalNamespace/VelocityBasedActivator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VelocityBasedActivator)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
// Forward declare root types
namespace GlobalNamespace {
class VelocityBasedActivator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VelocityBasedActivator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VelocityBasedActivator*, "", "VelocityBasedActivator");
// [RequireComponent(typeof(GorillaVelocityEstimator))]
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VelocityBasedActivator
class CORDL_TYPE VelocityBasedActivator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activationTargets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_activationTargets, put=__cordl_internal_set_activationTargets)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  activationTargets;

/// @brief Field active, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) bool  active;

/// @brief Field decay, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_decay, put=__cordl_internal_set_decay)) float_t  decay;

/// @brief Field k, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_k, put=__cordl_internal_set_k)) float_t  k;

/// @brief Field threshold, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_threshold, put=__cordl_internal_set_threshold)) float_t  threshold;

/// @brief Field velocityEstimator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

static inline ::GlobalNamespace::VelocityBasedActivator* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b3feec, size 0x14, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Start, addr 0x5b3fd70, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5b3fdc8, size 0xb8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_activationTargets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_activationTargets() ;

constexpr bool const& __cordl_internal_get_active() const;

constexpr bool& __cordl_internal_get_active() ;

constexpr float_t const& __cordl_internal_get_decay() const;

constexpr float_t& __cordl_internal_get_decay() ;

constexpr float_t const& __cordl_internal_get_k() const;

constexpr float_t& __cordl_internal_get_k() ;

constexpr float_t const& __cordl_internal_get_threshold() const;

constexpr float_t& __cordl_internal_get_threshold() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set_activationTargets(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_active(bool  value) ;

constexpr void __cordl_internal_set_decay(float_t  value) ;

constexpr void __cordl_internal_set_k(float_t  value) ;

constexpr void __cordl_internal_set_threshold(float_t  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x5b3ff00, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method activate, addr 0x5b3fe80, size 0x6c, virtual false, abstract: false, final false
inline void activate(bool  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VelocityBasedActivator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VelocityBasedActivator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VelocityBasedActivator(VelocityBasedActivator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VelocityBasedActivator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VelocityBasedActivator(VelocityBasedActivator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3715};

/// [SerializeField]
/// @brief Field activationTargets, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___activationTargets;

/// @brief Field velocityEstimator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// @brief Field k, offset: 0x30, size: 0x4, def value: None
 float_t  ___k;

/// @brief Field active, offset: 0x34, size: 0x1, def value: None
 bool  ___active;

/// [SerializeField]
/// @brief Field decay, offset: 0x38, size: 0x4, def value: None
 float_t  ___decay;

/// [SerializeField]
/// @brief Field threshold, offset: 0x3c, size: 0x4, def value: None
 float_t  ___threshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VelocityBasedActivator, ___activationTargets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityBasedActivator, ___velocityEstimator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityBasedActivator, ___k) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityBasedActivator, ___active) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityBasedActivator, ___decay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityBasedActivator, ___threshold) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VelocityBasedActivator) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
