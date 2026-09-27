#pragma once
// IWYU pragma private; include "GlobalNamespace/LegacyWorldShareableItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
CORDL_MODULE_EXPORT(LegacyWorldShareableItem)
// Forward declare root types
namespace GlobalNamespace {
class LegacyWorldShareableItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LegacyWorldShareableItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegacyWorldShareableItem*, "", "LegacyWorldShareableItem");
// Dependencies Photon.Pun.MonoBehaviourPunCallbacks
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegacyWorldShareableItem
class CORDL_TYPE LegacyWorldShareableItem : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
static inline ::GlobalNamespace::LegacyWorldShareableItem* New_ctor() ;

/// @brief Method .ctor, addr 0x5736954, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyWorldShareableItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyWorldShareableItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyWorldShareableItem(LegacyWorldShareableItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyWorldShareableItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyWorldShareableItem(LegacyWorldShareableItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1210};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LegacyWorldShareableItem) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
