#pragma once
// IWYU pragma private; include "GorillaTag/TemporaryCosmeticUnlocksEnableDisable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TemporaryCosmeticUnlocksEnableDisable)
namespace GlobalNamespace {
class CosmeticWardrobe;
}
namespace GorillaTag {
class TickSystemTimer;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTag {
class TemporaryCosmeticUnlocksEnableDisable;
}
// Write type traits
MARK_REF_T(::GorillaTag::TemporaryCosmeticUnlocksEnableDisable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::TemporaryCosmeticUnlocksEnableDisable*, "GorillaTag", "TemporaryCosmeticUnlocksEnableDisable");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.TemporaryCosmeticUnlocksEnableDisable
class CORDL_TYPE TemporaryCosmeticUnlocksEnableDisable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_cosmeticAreaTrigger, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_cosmeticAreaTrigger, put=__cordl_internal_set_m_cosmeticAreaTrigger)) ::UnityW<::UnityEngine::GameObject>  m_cosmeticAreaTrigger;

/// @brief Field m_timer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_timer, put=__cordl_internal_set_m_timer)) ::GorillaTag::TickSystemTimer*  m_timer;

/// @brief Field m_wardrobe, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_wardrobe, put=__cordl_internal_set_m_wardrobe)) ::UnityW<::GlobalNamespace::CosmeticWardrobe>  m_wardrobe;

/// @brief Method Awake, addr 0x5d295c8, size 0x208, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckWardrobeRady, addr 0x5d29890, size 0xfc, virtual false, abstract: false, final false
inline void CheckWardrobeRady() ;

static inline ::GorillaTag::TemporaryCosmeticUnlocksEnableDisable* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d297d0, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_cosmeticAreaTrigger() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_cosmeticAreaTrigger() ;

constexpr ::GorillaTag::TickSystemTimer* const& __cordl_internal_get_m_timer() const;

constexpr ::GorillaTag::TickSystemTimer*& __cordl_internal_get_m_timer() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticWardrobe> const& __cordl_internal_get_m_wardrobe() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticWardrobe>& __cordl_internal_get_m_wardrobe() ;

constexpr void __cordl_internal_set_m_cosmeticAreaTrigger(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_timer(::GorillaTag::TickSystemTimer*  value) ;

constexpr void __cordl_internal_set_m_wardrobe(::UnityW<::GlobalNamespace::CosmeticWardrobe>  value) ;

/// @brief Method .ctor, addr 0x5d2998c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemporaryCosmeticUnlocksEnableDisable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemporaryCosmeticUnlocksEnableDisable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TemporaryCosmeticUnlocksEnableDisable(TemporaryCosmeticUnlocksEnableDisable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemporaryCosmeticUnlocksEnableDisable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemporaryCosmeticUnlocksEnableDisable(TemporaryCosmeticUnlocksEnableDisable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4632};

/// [SerializeField]
/// @brief Field m_wardrobe, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticWardrobe>  ___m_wardrobe;

/// [SerializeField]
/// @brief Field m_cosmeticAreaTrigger, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_cosmeticAreaTrigger;

/// @brief Field m_timer, offset: 0x30, size: 0x8, def value: None
 ::GorillaTag::TickSystemTimer*  ___m_timer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::TemporaryCosmeticUnlocksEnableDisable, ___m_wardrobe) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TemporaryCosmeticUnlocksEnableDisable, ___m_cosmeticAreaTrigger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TemporaryCosmeticUnlocksEnableDisable, ___m_timer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::TemporaryCosmeticUnlocksEnableDisable) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag
