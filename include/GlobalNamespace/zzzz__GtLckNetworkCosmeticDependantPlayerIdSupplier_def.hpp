#pragma once
// IWYU pragma private; include "GlobalNamespace/GtLckNetworkCosmeticDependantPlayerIdSupplier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GtLckNetworkCosmeticDependantPlayerIdSupplier)
namespace GlobalNamespace {
class VRRig;
}
namespace Liv::Lck::Cosmetics {
class ILckCosmeticDependantPlayerIdSupplier;
}
namespace Liv::Lck::Cosmetics {
class PlayerIdUpdatedEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class GtLckNetworkCosmeticDependantPlayerIdSupplier;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*, "", "GtLckNetworkCosmeticDependantPlayerIdSupplier");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GtLckNetworkCosmeticDependantPlayerIdSupplier
class CORDL_TYPE GtLckNetworkCosmeticDependantPlayerIdSupplier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PlayerIdUpdated, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerIdUpdated, put=__cordl_internal_set_PlayerIdUpdated)) ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  PlayerIdUpdated;

/// @brief Field vrrig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrrig, put=__cordl_internal_set_vrrig)) ::UnityW<::GlobalNamespace::VRRig>  vrrig;

/// @brief Convert operator to "::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier"
constexpr operator  ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*() noexcept;

/// @brief Method GetPlayerId, addr 0x56c1fb4, size 0x28, virtual true, abstract: false, final true
inline ::StringW GetPlayerId() ;

static inline ::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier* New_ctor() ;

/// @brief Method UpdatePlayerId, addr 0x56c1fdc, size 0x1c, virtual true, abstract: false, final true
inline void UpdatePlayerId() ;

constexpr ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent* const& __cordl_internal_get_PlayerIdUpdated() const;

constexpr ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*& __cordl_internal_get_PlayerIdUpdated() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_vrrig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_vrrig() ;

constexpr void __cordl_internal_set_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value) ;

constexpr void __cordl_internal_set_vrrig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x56c1ff8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_PlayerIdUpdated, addr 0x56c1e7c, size 0x9c, virtual true, abstract: false, final true
inline void add_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value) ;

/// @brief Convert to "::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier"
constexpr ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier* i___Liv__Lck__Cosmetics__ILckCosmeticDependantPlayerIdSupplier() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_PlayerIdUpdated, addr 0x56c1f18, size 0x9c, virtual true, abstract: false, final true
inline void remove_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtLckNetworkCosmeticDependantPlayerIdSupplier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtLckNetworkCosmeticDependantPlayerIdSupplier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtLckNetworkCosmeticDependantPlayerIdSupplier(GtLckNetworkCosmeticDependantPlayerIdSupplier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtLckNetworkCosmeticDependantPlayerIdSupplier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtLckNetworkCosmeticDependantPlayerIdSupplier(GtLckNetworkCosmeticDependantPlayerIdSupplier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1006};

/// [SerializeField]
/// @brief Field vrrig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___vrrig;

/// [CompilerGenerated]
/// @brief Field PlayerIdUpdated, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  ___PlayerIdUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier, ___vrrig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier, ___PlayerIdUpdated) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
