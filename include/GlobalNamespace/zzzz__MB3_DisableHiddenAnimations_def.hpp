#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_DisableHiddenAnimations.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MB3_DisableHiddenAnimations)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class MB3_DisableHiddenAnimations;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB3_DisableHiddenAnimations*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_DisableHiddenAnimations*, "", "MB3_DisableHiddenAnimations");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_DisableHiddenAnimations
class CORDL_TYPE MB3_DisableHiddenAnimations : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animationsToCull, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationsToCull, put=__cordl_internal_set_animationsToCull)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>*  animationsToCull;

static inline ::GlobalNamespace::MB3_DisableHiddenAnimations* New_ctor() ;

/// @brief Method OnBecameInvisible, addr 0x9d7578c, size 0xec, virtual false, abstract: false, final false
inline void OnBecameInvisible() ;

/// @brief Method OnBecameVisible, addr 0x9d756a0, size 0xec, virtual false, abstract: false, final false
inline void OnBecameVisible() ;

/// @brief Method Start, addr 0x9d7557c, size 0x124, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>* const& __cordl_internal_get_animationsToCull() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>*& __cordl_internal_get_animationsToCull() ;

constexpr void __cordl_internal_set_animationsToCull(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>*  value) ;

/// @brief Method .ctor, addr 0x9d75878, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_DisableHiddenAnimations() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_DisableHiddenAnimations", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_DisableHiddenAnimations(MB3_DisableHiddenAnimations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_DisableHiddenAnimations", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_DisableHiddenAnimations(MB3_DisableHiddenAnimations const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22568};

/// @brief Field animationsToCull, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>*  ___animationsToCull;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_DisableHiddenAnimations, ___animationsToCull) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_DisableHiddenAnimations) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
