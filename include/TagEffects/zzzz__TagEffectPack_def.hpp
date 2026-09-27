#pragma once
// IWYU pragma private; include "TagEffects/TagEffectPack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(TagEffectPack)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace TagEffects {
class TagEffectPack;
}
// Write type traits
MARK_REF_T(::TagEffects::TagEffectPack*);
DEFINE_IL2CPP_CLASS(::TagEffects::TagEffectPack*, "TagEffects", "TagEffectPack");
// [CreateAssetMenu(fileName = "New Tag Effect Pack", menuName = "Tag Effect Pack")]
// Dependencies UnityEngine.ScriptableObject
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.TagEffectPack
class CORDL_TYPE TagEffectPack : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field firstPerson, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstPerson, put=__cordl_internal_set_firstPerson)) ::UnityW<::UnityEngine::GameObject>  firstPerson;

/// @brief Field firstPersonParentEffect, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstPersonParentEffect, put=__cordl_internal_set_firstPersonParentEffect)) bool  firstPersonParentEffect;

/// @brief Field fistBump, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_fistBump, put=__cordl_internal_set_fistBump)) ::UnityW<::UnityEngine::GameObject>  fistBump;

/// @brief Field fistBumpParentEffect, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_fistBumpParentEffect, put=__cordl_internal_set_fistBumpParentEffect)) bool  fistBumpParentEffect;

/// @brief Field highFive, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_highFive, put=__cordl_internal_set_highFive)) ::UnityW<::UnityEngine::GameObject>  highFive;

/// @brief Field highFiveParentEffect, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_highFiveParentEffect, put=__cordl_internal_set_highFiveParentEffect)) bool  highFiveParentEffect;

/// @brief Field shouldFaceTagger, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldFaceTagger, put=__cordl_internal_set_shouldFaceTagger)) bool  shouldFaceTagger;

/// @brief Field thirdPerson, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_thirdPerson, put=__cordl_internal_set_thirdPerson)) ::UnityW<::UnityEngine::GameObject>  thirdPerson;

/// @brief Field thirdPersonParentEffect, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_thirdPersonParentEffect, put=__cordl_internal_set_thirdPersonParentEffect)) bool  thirdPersonParentEffect;

static inline ::TagEffects::TagEffectPack* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_firstPerson() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_firstPerson() ;

constexpr bool const& __cordl_internal_get_firstPersonParentEffect() const;

constexpr bool& __cordl_internal_get_firstPersonParentEffect() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fistBump() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fistBump() ;

constexpr bool const& __cordl_internal_get_fistBumpParentEffect() const;

constexpr bool& __cordl_internal_get_fistBumpParentEffect() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_highFive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_highFive() ;

constexpr bool const& __cordl_internal_get_highFiveParentEffect() const;

constexpr bool& __cordl_internal_get_highFiveParentEffect() ;

constexpr bool const& __cordl_internal_get_shouldFaceTagger() const;

constexpr bool& __cordl_internal_get_shouldFaceTagger() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_thirdPerson() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_thirdPerson() ;

constexpr bool const& __cordl_internal_get_thirdPersonParentEffect() const;

constexpr bool& __cordl_internal_get_thirdPersonParentEffect() ;

constexpr void __cordl_internal_set_firstPerson(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_firstPersonParentEffect(bool  value) ;

constexpr void __cordl_internal_set_fistBump(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_fistBumpParentEffect(bool  value) ;

constexpr void __cordl_internal_set_highFive(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_highFiveParentEffect(bool  value) ;

constexpr void __cordl_internal_set_shouldFaceTagger(bool  value) ;

constexpr void __cordl_internal_set_thirdPerson(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_thirdPersonParentEffect(bool  value) ;

/// @brief Method .ctor, addr 0x5cd8490, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TagEffectPack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagEffectPack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagEffectPack(TagEffectPack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagEffectPack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagEffectPack(TagEffectPack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4485};

/// @brief Field thirdPerson, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___thirdPerson;

/// @brief Field thirdPersonParentEffect, offset: 0x20, size: 0x1, def value: None
 bool  ___thirdPersonParentEffect;

/// @brief Field firstPerson, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___firstPerson;

/// @brief Field firstPersonParentEffect, offset: 0x30, size: 0x1, def value: None
 bool  ___firstPersonParentEffect;

/// @brief Field highFive, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___highFive;

/// @brief Field highFiveParentEffect, offset: 0x40, size: 0x1, def value: None
 bool  ___highFiveParentEffect;

/// @brief Field fistBump, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fistBump;

/// @brief Field fistBumpParentEffect, offset: 0x50, size: 0x1, def value: None
 bool  ___fistBumpParentEffect;

/// @brief Field shouldFaceTagger, offset: 0x51, size: 0x1, def value: None
 bool  ___shouldFaceTagger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TagEffects::TagEffectPack, ___thirdPerson) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectPack, ___thirdPersonParentEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectPack, ___firstPerson) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectPack, ___firstPersonParentEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectPack, ___highFive) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectPack, ___highFiveParentEffect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectPack, ___fistBump) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectPack, ___fistBumpParentEffect) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectPack, ___shouldFaceTagger) == 0x51, "Offset mismatch!");

static_assert(sizeof(::TagEffects::TagEffectPack) == 0x58, "Size mismatch!");

} // namespace end def TagEffects
