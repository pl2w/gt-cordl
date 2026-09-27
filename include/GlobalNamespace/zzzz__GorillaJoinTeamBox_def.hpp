#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaJoinTeamBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
CORDL_MODULE_EXPORT(GorillaJoinTeamBox)
// Forward declare root types
namespace GlobalNamespace {
class GorillaJoinTeamBox;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaJoinTeamBox*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaJoinTeamBox*, "", "GorillaJoinTeamBox");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaJoinTeamBox
class CORDL_TYPE GorillaJoinTeamBox : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field joinRedTeam, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_joinRedTeam, put=__cordl_internal_set_joinRedTeam)) bool  joinRedTeam;

static inline ::GlobalNamespace::GorillaJoinTeamBox* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x5919a40, size 0xf0, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr bool const& __cordl_internal_get_joinRedTeam() const;

constexpr bool& __cordl_internal_get_joinRedTeam() ;

constexpr void __cordl_internal_set_joinRedTeam(bool  value) ;

/// @brief Method .ctor, addr 0x5919b30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaJoinTeamBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaJoinTeamBox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaJoinTeamBox(GorillaJoinTeamBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaJoinTeamBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaJoinTeamBox(GorillaJoinTeamBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2194};

/// @brief Field joinRedTeam, offset: 0x20, size: 0x1, def value: None
 bool  ___joinRedTeam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaJoinTeamBox, ___joinRedTeam) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaJoinTeamBox) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
