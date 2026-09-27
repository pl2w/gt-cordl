#pragma once
// IWYU pragma private; include "GlobalNamespace/SIScannableHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SIScannableHand)
namespace GlobalNamespace {
class SIPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class SIScannableHand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIScannableHand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIScannableHand*, "", "SIScannableHand");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIScannableHand
class CORDL_TYPE SIScannableHand : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field parentPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentPlayer, put=__cordl_internal_set_parentPlayer)) ::UnityW<::GlobalNamespace::SIPlayer>  parentPlayer;

/// @brief Method Awake, addr 0x5aed264, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SIScannableHand* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::SIPlayer> const& __cordl_internal_get_parentPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SIPlayer>& __cordl_internal_get_parentPlayer() ;

constexpr void __cordl_internal_set_parentPlayer(::UnityW<::GlobalNamespace::SIPlayer>  value) ;

/// @brief Method .ctor, addr 0x5aed2bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIScannableHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIScannableHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIScannableHand(SIScannableHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIScannableHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIScannableHand(SIScannableHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{355};

/// @brief Field parentPlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIPlayer>  ___parentPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIScannableHand, ___parentPlayer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIScannableHand) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
