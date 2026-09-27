#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatorReset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnimatorReset)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimatorReset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimatorReset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimatorReset*, "", "AnimatorReset");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimatorReset
class CORDL_TYPE AnimatorReset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field onDisable, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_onDisable, put=__cordl_internal_set_onDisable)) bool  onDisable;

/// @brief Field onEnable, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_onEnable, put=__cordl_internal_set_onEnable)) bool  onEnable;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Animator>  target;

static inline ::GlobalNamespace::AnimatorReset* New_ctor() ;

/// @brief Method OnDisable, addr 0x579fcf8, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x579fce8, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reset, addr 0x579fc54, size 0x94, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get_onDisable() const;

constexpr bool& __cordl_internal_get_onDisable() ;

constexpr bool const& __cordl_internal_get_onEnable() const;

constexpr bool& __cordl_internal_get_onEnable() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_onDisable(bool  value) ;

constexpr void __cordl_internal_set_onEnable(bool  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Animator>  value) ;

/// @brief Method .ctor, addr 0x579fd08, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatorReset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatorReset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorReset(AnimatorReset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorReset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorReset(AnimatorReset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1525};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___target;

/// @brief Field onEnable, offset: 0x28, size: 0x1, def value: None
 bool  ___onEnable;

/// @brief Field onDisable, offset: 0x29, size: 0x1, def value: None
 bool  ___onDisable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimatorReset, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorReset, ___onEnable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorReset, ___onDisable) == 0x29, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimatorReset) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
