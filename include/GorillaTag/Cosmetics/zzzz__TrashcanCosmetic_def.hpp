#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/TrashcanCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrashcanCosmetic)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class TrashcanCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::TrashcanCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::TrashcanCosmetic*, "GorillaTag.Cosmetics", "TrashcanCosmetic");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.TrashcanCosmetic
class CORDL_TYPE TrashcanCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnScored, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnScored, put=__cordl_internal_set_OnScored)) ::UnityEngine::Events::UnityEvent*  OnScored;

/// @brief Field minScoringDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minScoringDistance, put=__cordl_internal_set_minScoringDistance)) float_t  minScoringDistance;

static inline ::GorillaTag::Cosmetics::TrashcanCosmetic* New_ctor() ;

/// @brief Method OnBasket, addr 0x5d7b420, size 0xa8, virtual false, abstract: false, final false
inline void OnBasket(bool  isLeftHand, ::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnScored() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnScored() ;

constexpr float_t const& __cordl_internal_get_minScoringDistance() const;

constexpr float_t& __cordl_internal_get_minScoringDistance() ;

constexpr void __cordl_internal_set_OnScored(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_minScoringDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x5d7b4c8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrashcanCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrashcanCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrashcanCosmetic(TrashcanCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrashcanCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrashcanCosmetic(TrashcanCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4868};

/// @brief Field minScoringDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ___minScoringDistance;

/// @brief Field OnScored, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnScored;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::TrashcanCosmetic, ___minScoringDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::TrashcanCosmetic, ___OnScored) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::TrashcanCosmetic) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
