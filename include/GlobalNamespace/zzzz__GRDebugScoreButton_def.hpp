#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDebugScoreButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRDebugScoreButton)
// Forward declare root types
namespace GlobalNamespace {
class GRDebugScoreButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRDebugScoreButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDebugScoreButton*, "", "GRDebugScoreButton");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDebugScoreButton
class CORDL_TYPE GRDebugScoreButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method AddScore, addr 0x5875860, size 0x4, virtual false, abstract: false, final false
inline void AddScore() ;

/// @brief Method AttemptPurchaseShiftCredit, addr 0x5875868, size 0x4, virtual false, abstract: false, final false
inline void AttemptPurchaseShiftCredit() ;

/// @brief Method AttemptPurchaseShiftCreditIncrease, addr 0x5875864, size 0x4, virtual false, abstract: false, final false
inline void AttemptPurchaseShiftCreditIncrease() ;

/// @brief Method GetShiftCredit, addr 0x587586c, size 0x4, virtual false, abstract: false, final false
inline void GetShiftCredit() ;

static inline ::GlobalNamespace::GRDebugScoreButton* New_ctor() ;

/// @brief Method .ctor, addr 0x5875870, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDebugScoreButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDebugScoreButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDebugScoreButton(GRDebugScoreButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDebugScoreButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDebugScoreButton(GRDebugScoreButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1904};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GRDebugScoreButton) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
