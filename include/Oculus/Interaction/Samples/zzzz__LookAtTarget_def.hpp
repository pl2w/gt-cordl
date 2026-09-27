#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/LookAtTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LookAtTarget)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class LookAtTarget;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::LookAtTarget*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::LookAtTarget*, "Oculus.Interaction.Samples", "LookAtTarget");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.LookAtTarget
class CORDL_TYPE LookAtTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Transform>  _target;

/// @brief Field _toRotate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__toRotate, put=__cordl_internal_set__toRotate)) ::UnityW<::UnityEngine::Transform>  _toRotate;

static inline ::Oculus::Interaction::Samples::LookAtTarget* New_ctor() ;

/// @brief Method Start, addr 0xa439924, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa439928, size 0x184, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__target() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__toRotate() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__toRotate() ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__toRotate(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa439aac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LookAtTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LookAtTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LookAtTarget(LookAtTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LookAtTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LookAtTarget(LookAtTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28308};

/// [SerializeField]
/// @brief Field _toRotate, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____toRotate;

/// [SerializeField]
/// @brief Field _target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::LookAtTarget, ____toRotate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LookAtTarget, ____target) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::LookAtTarget) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
