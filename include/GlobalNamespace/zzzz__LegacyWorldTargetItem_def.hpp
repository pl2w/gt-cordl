#pragma once
// IWYU pragma private; include "GlobalNamespace/LegacyWorldTargetItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LegacyWorldTargetItem)
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace GlobalNamespace {
class LegacyWorldTargetItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LegacyWorldTargetItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegacyWorldTargetItem*, "", "LegacyWorldTargetItem");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegacyWorldTargetItem
class CORDL_TYPE LegacyWorldTargetItem : public ::System::Object {
public:
// Declarations
/// @brief Field itemIdx, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_itemIdx, put=__cordl_internal_set_itemIdx)) int32_t  itemIdx;

/// @brief Field owner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) ::Photon::Realtime::Player*  owner;

/// @brief Method Invalidate, addr 0x5736938, size 0x14, virtual false, abstract: false, final false
inline void Invalidate() ;

/// @brief Method IsValid, addr 0x5736914, size 0x24, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::GlobalNamespace::LegacyWorldTargetItem* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_itemIdx() const;

constexpr int32_t& __cordl_internal_get_itemIdx() ;

constexpr ::Photon::Realtime::Player* const& __cordl_internal_get_owner() const;

constexpr ::Photon::Realtime::Player*& __cordl_internal_get_owner() ;

constexpr void __cordl_internal_set_itemIdx(int32_t  value) ;

constexpr void __cordl_internal_set_owner(::Photon::Realtime::Player*  value) ;

/// @brief Method .ctor, addr 0x573694c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyWorldTargetItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyWorldTargetItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyWorldTargetItem(LegacyWorldTargetItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyWorldTargetItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyWorldTargetItem(LegacyWorldTargetItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1209};

/// @brief Field owner, offset: 0x10, size: 0x8, def value: None
 ::Photon::Realtime::Player*  ___owner;

/// @brief Field itemIdx, offset: 0x18, size: 0x4, def value: None
 int32_t  ___itemIdx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegacyWorldTargetItem, ___owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyWorldTargetItem, ___itemIdx) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegacyWorldTargetItem) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
