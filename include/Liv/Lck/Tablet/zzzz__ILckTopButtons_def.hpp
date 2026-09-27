#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/ILckTopButtons.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckTopButtons)
// Forward declare root types
namespace Liv::Lck::Tablet {
class ILckTopButtons;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::ILckTopButtons*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::ILckTopButtons*, "Liv.Lck.Tablet", "ILckTopButtons");
// Dependencies 
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.ILckTopButtons
class CORDL_TYPE ILckTopButtons {
public:
// Declarations
/// @brief Method HideButtons, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HideButtons() ;

/// @brief Method SetCameraPageVisualsManually, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetCameraPageVisualsManually() ;

/// @brief Method ShowButtons, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ShowButtons() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckTopButtons", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckTopButtons(ILckTopButtons const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24927};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Tablet
