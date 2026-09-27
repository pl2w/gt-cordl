#pragma once
// IWYU pragma private; include "GlobalNamespace/PuppetFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PuppetFollow)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PuppetFollow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PuppetFollow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PuppetFollow*, "", "PuppetFollow");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PuppetFollow
class CORDL_TYPE PuppetFollow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field puppetBase, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_puppetBase, put=__cordl_internal_set_puppetBase)) ::UnityW<::UnityEngine::Transform>  puppetBase;

/// @brief Field sourceBase, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceBase, put=__cordl_internal_set_sourceBase)) ::UnityW<::UnityEngine::Transform>  sourceBase;

/// @brief Field sourceTarget, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceTarget, put=__cordl_internal_set_sourceTarget)) ::UnityW<::UnityEngine::Transform>  sourceTarget;

/// @brief Method FixedUpdate, addr 0x5745bcc, size 0xe4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::PuppetFollow* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_puppetBase() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_puppetBase() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_sourceBase() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_sourceBase() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_sourceTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_sourceTarget() ;

constexpr void __cordl_internal_set_puppetBase(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_sourceBase(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_sourceTarget(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5745cb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PuppetFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PuppetFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PuppetFollow(PuppetFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PuppetFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PuppetFollow(PuppetFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1266};

/// @brief Field sourceTarget, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___sourceTarget;

/// @brief Field sourceBase, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___sourceBase;

/// @brief Field puppetBase, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___puppetBase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PuppetFollow, ___sourceTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PuppetFollow, ___sourceBase) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PuppetFollow, ___puppetBase) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PuppetFollow) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
