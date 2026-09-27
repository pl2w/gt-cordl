#pragma once
// IWYU pragma private; include "Oculus/Interaction/BecomeChildOfTargetOnStart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BecomeChildOfTargetOnStart)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class BecomeChildOfTargetOnStart;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::BecomeChildOfTargetOnStart*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::BecomeChildOfTargetOnStart*, "Oculus.Interaction", "BecomeChildOfTargetOnStart");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.BecomeChildOfTargetOnStart
class CORDL_TYPE BecomeChildOfTargetOnStart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _keepWorldPosition, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__keepWorldPosition, put=__cordl_internal_set__keepWorldPosition)) bool  _keepWorldPosition;

/// @brief Field _target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Transform>  _target;

/// @brief Method InjectAllChildToTransform, addr 0xa46d97c, size 0x8, virtual false, abstract: false, final false
inline void InjectAllChildToTransform(::UnityEngine::Transform*  target) ;

/// @brief Method InjectOptionalKeepWorldPosition, addr 0xa46d98c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalKeepWorldPosition(bool  keepWorldPosition) ;

/// @brief Method InjectTarget, addr 0xa46d984, size 0x8, virtual false, abstract: false, final false
inline void InjectTarget(::UnityEngine::Transform*  target) ;

static inline ::Oculus::Interaction::BecomeChildOfTargetOnStart* New_ctor() ;

/// @brief Method Start, addr 0xa46d950, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__keepWorldPosition() const;

constexpr bool& __cordl_internal_get__keepWorldPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__keepWorldPosition(bool  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa46d994, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BecomeChildOfTargetOnStart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BecomeChildOfTargetOnStart", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BecomeChildOfTargetOnStart(BecomeChildOfTargetOnStart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BecomeChildOfTargetOnStart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BecomeChildOfTargetOnStart(BecomeChildOfTargetOnStart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15916};

/// [SerializeField]
/// @brief Field _target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____target;

/// [SerializeField]
/// @brief Field _keepWorldPosition, offset: 0x28, size: 0x1, def value: None
 bool  ____keepWorldPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::BecomeChildOfTargetOnStart, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::BecomeChildOfTargetOnStart, ____keepWorldPosition) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::BecomeChildOfTargetOnStart) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
