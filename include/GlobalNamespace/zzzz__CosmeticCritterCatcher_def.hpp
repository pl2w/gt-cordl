#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterCatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritterHoldable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticCritterCatcher)
namespace GlobalNamespace {
struct CosmeticCritterAction;
}
namespace GlobalNamespace {
class CosmeticCritterSpawner;
}
namespace GlobalNamespace {
class CosmeticCritter;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterCatcher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterCatcher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterCatcher*, "", "CosmeticCritterCatcher");
// Dependencies CosmeticCritterHoldable
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterCatcher
class CORDL_TYPE CosmeticCritterCatcher : public ::GlobalNamespace::CosmeticCritterHoldable {
public:
// Declarations
/// @brief Field optionalLinkedSpawner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_optionalLinkedSpawner, put=__cordl_internal_set_optionalLinkedSpawner)) ::UnityW<::GlobalNamespace::CosmeticCritterSpawner>  optionalLinkedSpawner;

/// @brief Method GetLinkedSpawner, addr 0x57e8074, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::CosmeticCritterSpawner> GetLinkedSpawner() ;

/// @brief Method GetLocalCatchAction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::CosmeticCritterAction GetLocalCatchAction(::GlobalNamespace::CosmeticCritter*  critter) ;

static inline ::GlobalNamespace::CosmeticCritterCatcher* New_ctor() ;

/// @brief Method OnCatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCatch(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime) ;

/// @brief Method OnDisable, addr 0x57e81a0, size 0x58, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57e8094, size 0x5c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ValidateRemoteCatchAction, addr 0x57e807c, size 0x18, virtual true, abstract: false, final false
inline bool ValidateRemoteCatchAction(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime) ;

constexpr ::UnityW<::GlobalNamespace::CosmeticCritterSpawner> const& __cordl_internal_get_optionalLinkedSpawner() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticCritterSpawner>& __cordl_internal_get_optionalLinkedSpawner() ;

constexpr void __cordl_internal_set_optionalLinkedSpawner(::UnityW<::GlobalNamespace::CosmeticCritterSpawner>  value) ;

/// @brief Method .ctor, addr 0x57e8274, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterCatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterCatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterCatcher(CosmeticCritterCatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterCatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterCatcher(CosmeticCritterCatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1665};

/// [SerializeField]
/// [Tooltip("If this catcher is capable of spawning immediately after catching, the linked spawner must be assigned here.")]
/// @brief Field optionalLinkedSpawner, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticCritterSpawner>  ___optionalLinkedSpawner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcher, ___optionalLinkedSpawner) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterCatcher) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
