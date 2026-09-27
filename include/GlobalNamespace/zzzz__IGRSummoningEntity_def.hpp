#pragma once
// IWYU pragma private; include "GlobalNamespace/IGRSummoningEntity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGRSummoningEntity)
namespace GlobalNamespace {
class GameEntity;
}
// Forward declare root types
namespace GlobalNamespace {
class IGRSummoningEntity;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGRSummoningEntity*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGRSummoningEntity*, "", "IGRSummoningEntity");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGRSummoningEntity
class CORDL_TYPE IGRSummoningEntity {
public:
// Declarations
/// @brief Method OnSummonedEntityDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSummonedEntityDestroy(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnSummonedEntityInit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSummonedEntityInit(::GlobalNamespace::GameEntity*  entity) ;

// Ctor Parameters [CppParam { name: "", ty: "IGRSummoningEntity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGRSummoningEntity(IGRSummoningEntity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2047};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
