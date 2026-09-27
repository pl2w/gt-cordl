#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHasUITransformFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaUITransformFollow_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GorillaHasUITransformFollow)
// Forward declare root types
namespace GlobalNamespace {
class GorillaHasUITransformFollow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHasUITransformFollow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHasUITransformFollow*, "", "GorillaHasUITransformFollow");
// Dependencies GorillaUITransformFollow, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHasUITransformFollow
class CORDL_TYPE GorillaHasUITransformFollow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field transformFollowers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformFollowers, put=__cordl_internal_set_transformFollowers)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaUITransformFollow>>  transformFollowers;

/// @brief Method Awake, addr 0x590e03c, size 0x9c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaHasUITransformFollow* New_ctor() ;

/// @brief Method OnDestroy, addr 0x590e0d8, size 0xb8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x590e200, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x590e190, size 0x70, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaUITransformFollow>> const& __cordl_internal_get_transformFollowers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaUITransformFollow>>& __cordl_internal_get_transformFollowers() ;

constexpr void __cordl_internal_set_transformFollowers(::ArrayW<::UnityW<::GlobalNamespace::GorillaUITransformFollow>>  value) ;

/// @brief Method .ctor, addr 0x590e270, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHasUITransformFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHasUITransformFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHasUITransformFollow(GorillaHasUITransformFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHasUITransformFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHasUITransformFollow(GorillaHasUITransformFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2174};

/// @brief Field transformFollowers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaUITransformFollow>>  ___transformFollowers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHasUITransformFollow, ___transformFollowers) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHasUITransformFollow) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
