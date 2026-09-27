#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/ILckCosmeticDependantPlayerIdSupplier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILckCosmeticDependantPlayerIdSupplier)
namespace Liv::Lck::Cosmetics {
class PlayerIdUpdatedEvent;
}
// Forward declare root types
namespace Liv::Lck::Cosmetics {
class ILckCosmeticDependantPlayerIdSupplier;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*, "Liv.Lck.Cosmetics", "ILckCosmeticDependantPlayerIdSupplier");
// Dependencies 
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.ILckCosmeticDependantPlayerIdSupplier
class CORDL_TYPE ILckCosmeticDependantPlayerIdSupplier {
public:
// Declarations
/// @brief Method GetPlayerId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetPlayerId() ;

/// @brief Method UpdatePlayerId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdatePlayerId() ;

/// [CompilerGenerated]
/// @brief Method add_PlayerIdUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_PlayerIdUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckCosmeticDependantPlayerIdSupplier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckCosmeticDependantPlayerIdSupplier(ILckCosmeticDependantPlayerIdSupplier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31957};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Cosmetics
