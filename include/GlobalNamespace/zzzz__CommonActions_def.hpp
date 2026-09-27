#pragma once
// IWYU pragma private; include "GlobalNamespace/CommonActions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommonActions)
// Forward declare root types
namespace GlobalNamespace {
class CommonActions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CommonActions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommonActions*, "", "CommonActions");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CommonActions
class CORDL_TYPE CommonActions : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method LoadNextOutfit, addr 0x55eeab0, size 0xd0, virtual false, abstract: false, final false
inline void LoadNextOutfit() ;

/// @brief Method LoadPrevOutfit, addr 0x55ee9e0, size 0xd0, virtual false, abstract: false, final false
inline void LoadPrevOutfit() ;

/// @brief Method LoadSavedOutfit, addr 0x55ee900, size 0xe0, virtual false, abstract: false, final false
inline void LoadSavedOutfit(int32_t  index) ;

static inline ::GlobalNamespace::CommonActions* New_ctor() ;

/// @brief Method .ctor, addr 0x55eeb80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommonActions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommonActions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CommonActions(CommonActions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommonActions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommonActions(CommonActions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{61};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CommonActions) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
