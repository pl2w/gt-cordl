#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationEventController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnimationEventController)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimationEventController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimationEventController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationEventController*, "", "AnimationEventController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimationEventController
class CORDL_TYPE AnimationEventController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field fxAttack, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxAttack, put=__cordl_internal_set_fxAttack)) ::UnityW<::UnityEngine::GameObject>  fxAttack;

static inline ::GlobalNamespace::AnimationEventController* New_ctor() ;

/// @brief Method TriggerAttackVFX, addr 0x5c06dac, size 0x38, virtual false, abstract: false, final false
inline void TriggerAttackVFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxAttack() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxAttack() ;

constexpr void __cordl_internal_set_fxAttack(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5c06de4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationEventController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationEventController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationEventController(AnimationEventController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationEventController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationEventController(AnimationEventController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{428};

/// @brief Field fxAttack, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxAttack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationEventController, ___fxAttack) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationEventController) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
