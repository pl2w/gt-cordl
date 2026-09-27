#pragma once
// IWYU pragma private; include "Oculus/Interaction/ISelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISelector)
namespace System {
class Action;
}
// Forward declare root types
namespace Oculus::Interaction {
class ISelector;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ISelector*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ISelector*, "Oculus.Interaction", "ISelector");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ISelector
class CORDL_TYPE ISelector {
public:
// Declarations
/// [CompilerGenerated]
/// @brief Method add_WhenSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenUnselected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenUnselected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenUnselected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenUnselected(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ISelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISelector(ISelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15795};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
