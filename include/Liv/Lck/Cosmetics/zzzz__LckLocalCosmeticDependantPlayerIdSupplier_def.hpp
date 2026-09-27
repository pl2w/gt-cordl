#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckLocalCosmeticDependantPlayerIdSupplier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckLocalCosmeticDependantPlayerIdSupplier)
namespace Liv::Lck::Cosmetics {
class ILckCosmeticDependantPlayerIdSupplier;
}
namespace Liv::Lck::Cosmetics {
class PlayerIdUpdatedEvent;
}
// Forward declare root types
namespace Liv::Lck::Cosmetics {
class LckLocalCosmeticDependantPlayerIdSupplier;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::LckLocalCosmeticDependantPlayerIdSupplier*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckLocalCosmeticDependantPlayerIdSupplier*, "Liv.Lck.Cosmetics", "LckLocalCosmeticDependantPlayerIdSupplier");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckLocalCosmeticDependantPlayerIdSupplier
class CORDL_TYPE LckLocalCosmeticDependantPlayerIdSupplier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PlayerIdUpdated, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerIdUpdated, put=__cordl_internal_set_PlayerIdUpdated)) ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  PlayerIdUpdated;

/// @brief Field _playerId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerId, put=__cordl_internal_set__playerId)) ::StringW  _playerId;

/// @brief Convert operator to "::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier"
constexpr operator  ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*() noexcept;

/// @brief Method GetPlayerId, addr 0x9d05cb0, size 0x8, virtual true, abstract: false, final false
inline ::StringW GetPlayerId() ;

static inline ::Liv::Lck::Cosmetics::LckLocalCosmeticDependantPlayerIdSupplier* New_ctor() ;

/// @brief Method Start, addr 0x9d05c94, size 0x1c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdatePlayerId, addr 0x9d05cb8, size 0x1c, virtual true, abstract: false, final true
inline void UpdatePlayerId() ;

constexpr ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent* const& __cordl_internal_get_PlayerIdUpdated() const;

constexpr ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*& __cordl_internal_get_PlayerIdUpdated() ;

constexpr ::StringW const& __cordl_internal_get__playerId() const;

constexpr ::StringW& __cordl_internal_get__playerId() ;

constexpr void __cordl_internal_set_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value) ;

constexpr void __cordl_internal_set__playerId(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d05cd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_PlayerIdUpdated, addr 0x9d05b5c, size 0x9c, virtual true, abstract: false, final true
inline void add_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value) ;

/// @brief Convert to "::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier"
constexpr ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier* i___Liv__Lck__Cosmetics__ILckCosmeticDependantPlayerIdSupplier() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_PlayerIdUpdated, addr 0x9d05bf8, size 0x9c, virtual true, abstract: false, final true
inline void remove_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckLocalCosmeticDependantPlayerIdSupplier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckLocalCosmeticDependantPlayerIdSupplier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckLocalCosmeticDependantPlayerIdSupplier(LckLocalCosmeticDependantPlayerIdSupplier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckLocalCosmeticDependantPlayerIdSupplier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckLocalCosmeticDependantPlayerIdSupplier(LckLocalCosmeticDependantPlayerIdSupplier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31958};

/// [SerializeField]
/// @brief Field _playerId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____playerId;

/// [CompilerGenerated]
/// @brief Field PlayerIdUpdated, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  ___PlayerIdUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Cosmetics::LckLocalCosmeticDependantPlayerIdSupplier, ____playerId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckLocalCosmeticDependantPlayerIdSupplier, ___PlayerIdUpdated) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Cosmetics::LckLocalCosmeticDependantPlayerIdSupplier) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
