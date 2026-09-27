#pragma once
// IWYU pragma private; include "CosmeticRoom/ItemScripts/TrickTreatHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
CORDL_MODULE_EXPORT(TrickTreatHoldable)
namespace UnityEngine {
class MeshCollider;
}
// Forward declare root types
namespace CosmeticRoom::ItemScripts {
class TrickTreatHoldable;
}
// Write type traits
MARK_REF_T(::CosmeticRoom::ItemScripts::TrickTreatHoldable*);
DEFINE_IL2CPP_CLASS(::CosmeticRoom::ItemScripts::TrickTreatHoldable*, "CosmeticRoom.ItemScripts", "TrickTreatHoldable");
// Dependencies TransferrableObject
namespace CosmeticRoom::ItemScripts {
// Is value type: false
// CS Name: CosmeticRoom.ItemScripts.TrickTreatHoldable
class CORDL_TYPE TrickTreatHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field candyCollider, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_candyCollider, put=__cordl_internal_set_candyCollider)) ::UnityW<::UnityEngine::MeshCollider>  candyCollider;

/// @brief Method LateUpdateLocal, addr 0x5c4eb20, size 0xc8, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

static inline ::CosmeticRoom::ItemScripts::TrickTreatHoldable* New_ctor() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get_candyCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get_candyCollider() ;

constexpr void __cordl_internal_set_candyCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

/// @brief Method .ctor, addr 0x5c4ebe8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrickTreatHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrickTreatHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrickTreatHoldable(TrickTreatHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrickTreatHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrickTreatHoldable(TrickTreatHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4243};

/// @brief Field candyCollider, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ___candyCollider;

/// @brief Size padding 0x370 - 0x340 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CosmeticRoom::ItemScripts::TrickTreatHoldable, ___candyCollider) == 0x338, "Offset mismatch!");

static_assert(sizeof(::CosmeticRoom::ItemScripts::TrickTreatHoldable) == 0x370, "Size mismatch!");

} // namespace end def CosmeticRoom::ItemScripts
