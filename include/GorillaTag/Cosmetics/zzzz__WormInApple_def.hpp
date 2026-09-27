#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/WormInApple.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(WormInApple)
namespace GorillaTag::Cosmetics {
class UpdateBlendShapeCosmetic;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class WormInApple;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::WormInApple*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::WormInApple*, "GorillaTag.Cosmetics", "WormInApple");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.WormInApple
class CORDL_TYPE WormInApple : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnHandTapped, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHandTapped, put=__cordl_internal_set_OnHandTapped)) ::UnityEngine::Events::UnityEvent*  OnHandTapped;

/// @brief Field blendShapeCosmetic, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blendShapeCosmetic, put=__cordl_internal_set_blendShapeCosmetic)) ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>  blendShapeCosmetic;

static inline ::GorillaTag::Cosmetics::WormInApple* New_ctor() ;

/// @brief Method OnHandTap, addr 0x5da62e4, size 0x98, virtual false, abstract: false, final false
inline void OnHandTap() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnHandTapped() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnHandTapped() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic> const& __cordl_internal_get_blendShapeCosmetic() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>& __cordl_internal_get_blendShapeCosmetic() ;

constexpr void __cordl_internal_set_OnHandTapped(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_blendShapeCosmetic(::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>  value) ;

/// @brief Method .ctor, addr 0x5da637c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WormInApple() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WormInApple", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WormInApple(WormInApple && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WormInApple", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WormInApple(WormInApple const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4987};

/// [SerializeField]
/// @brief Field blendShapeCosmetic, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>  ___blendShapeCosmetic;

/// @brief Field OnHandTapped, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnHandTapped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::WormInApple, ___blendShapeCosmetic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::WormInApple, ___OnHandTapped) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::WormInApple) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
