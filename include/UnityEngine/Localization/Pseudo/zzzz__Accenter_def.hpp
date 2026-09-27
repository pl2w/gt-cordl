#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Accenter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Pseudo/zzzz__CharacterSubstitutor_def.hpp"
CORDL_MODULE_EXPORT(Accenter)
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class Accenter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::Accenter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::Accenter*, "UnityEngine.Localization.Pseudo", "Accenter");
// Dependencies UnityEngine.Localization.Pseudo.CharacterSubstitutor
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.Accenter
class CORDL_TYPE Accenter : public ::UnityEngine::Localization::Pseudo::CharacterSubstitutor {
public:
// Declarations
/// @brief Method AddDefaults, addr 0xb0233dc, size 0x8c8, virtual false, abstract: false, final false
inline void AddDefaults() ;

static inline ::UnityEngine::Localization::Pseudo::Accenter* New_ctor() ;

/// @brief Method .ctor, addr 0xb023274, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Accenter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Accenter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Accenter(Accenter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Accenter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Accenter(Accenter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25121};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Pseudo::Accenter) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
