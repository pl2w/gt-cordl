#pragma once
// IWYU pragma private; include "Oculus/Interaction/IInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInteractor)
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
class IUpdateDriver;
}
// Forward declare root types
namespace Oculus::Interaction {
class IInteractor;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IInteractor*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IInteractor*, "Oculus.Interaction", "IInteractor");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IInteractor
class CORDL_TYPE IInteractor {
public:
// Declarations
 __declspec(property(get=get_ShouldHover)) bool  ShouldHover;

 __declspec(property(get=get_ShouldSelect)) bool  ShouldSelect;

 __declspec(property(get=get_ShouldUnhover)) bool  ShouldUnhover;

 __declspec(property(get=get_ShouldUnselect)) bool  ShouldUnselect;

/// @brief Convert operator to "::Oculus::Interaction::IInteractorView"
constexpr operator  ::Oculus::Interaction::IInteractorView*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IUpdateDriver"
constexpr operator  ::Oculus::Interaction::IUpdateDriver*() noexcept;

/// @brief Method Disable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Enable() ;

/// @brief Method Hover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Hover() ;

/// @brief Method Postprocess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Postprocess() ;

/// @brief Method Preprocess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Preprocess() ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Process() ;

/// @brief Method ProcessCandidate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ProcessCandidate() ;

/// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Select() ;

/// @brief Method Unhover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Unhover() ;

/// @brief Method Unselect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Unselect() ;

/// @brief Method get_ShouldHover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ShouldHover() ;

/// @brief Method get_ShouldSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ShouldSelect() ;

/// @brief Method get_ShouldUnhover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ShouldUnhover() ;

/// @brief Method get_ShouldUnselect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ShouldUnselect() ;

/// @brief Convert to "::Oculus::Interaction::IInteractorView"
constexpr ::Oculus::Interaction::IInteractorView* i___Oculus__Interaction__IInteractorView() noexcept;

/// @brief Convert to "::Oculus::Interaction::IUpdateDriver"
constexpr ::Oculus::Interaction::IUpdateDriver* i___Oculus__Interaction__IUpdateDriver() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInteractor(IInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
