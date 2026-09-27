#pragma once
// IWYU pragma private; include "GlobalNamespace/ScannableIDCard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ScannableIDCard)
// Forward declare root types
namespace GlobalNamespace {
class ScannableIDCard;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScannableIDCard*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScannableIDCard*, "", "ScannableIDCard");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScannableIDCard
class CORDL_TYPE ScannableIDCard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::ScannableIDCard* New_ctor() ;

/// @brief Method .ctor, addr 0x5d0c6dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScannableIDCard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScannableIDCard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScannableIDCard(ScannableIDCard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScannableIDCard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScannableIDCard(ScannableIDCard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{463};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ScannableIDCard) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
