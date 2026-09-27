#pragma once
// IWYU pragma private; include "GlobalNamespace/RacingScoreboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RacingScoreboard)
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class RacingScoreboard;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RacingScoreboard*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RacingScoreboard*, "", "RacingScoreboard");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RacingScoreboard
class CORDL_TYPE RacingScoreboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field mainDisplay, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainDisplay, put=__cordl_internal_set_mainDisplay)) ::UnityW<::TMPro::TextMeshPro>  mainDisplay;

/// @brief Field timesDisplay, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_timesDisplay, put=__cordl_internal_set_timesDisplay)) ::UnityW<::TMPro::TextMeshPro>  timesDisplay;

static inline ::GlobalNamespace::RacingScoreboard* New_ctor() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_mainDisplay() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_mainDisplay() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_timesDisplay() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_timesDisplay() ;

constexpr void __cordl_internal_set_mainDisplay(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_timesDisplay(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x5693250, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RacingScoreboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RacingScoreboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RacingScoreboard(RacingScoreboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RacingScoreboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RacingScoreboard(RacingScoreboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{886};

/// [SerializeField]
/// @brief Field mainDisplay, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___mainDisplay;

/// [SerializeField]
/// @brief Field timesDisplay, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___timesDisplay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RacingScoreboard, ___mainDisplay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingScoreboard, ___timesDisplay) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RacingScoreboard) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
