#pragma once
// IWYU pragma private; include "Oculus/Interaction/IInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IInteractable)
namespace Oculus::Interaction {
class IInteractableView;
}
// Forward declare root types
namespace Oculus::Interaction {
class IInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IInteractable*, "Oculus.Interaction", "IInteractable");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IInteractable
class CORDL_TYPE IInteractable {
public:
// Declarations
 __declspec(property(get=get_MaxInteractors, put=set_MaxInteractors)) int32_t  MaxInteractors;

 __declspec(property(get=get_MaxSelectingInteractors, put=set_MaxSelectingInteractors)) int32_t  MaxSelectingInteractors;

/// @brief Convert operator to "::Oculus::Interaction::IInteractableView"
constexpr operator  ::Oculus::Interaction::IInteractableView*() noexcept;

/// @brief Method Disable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Enable() ;

/// @brief Method RemoveInteractorByIdentifier, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveInteractorByIdentifier(int32_t  id) ;

/// @brief Method get_MaxInteractors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_MaxInteractors() ;

/// @brief Method get_MaxSelectingInteractors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_MaxSelectingInteractors() ;

/// @brief Convert to "::Oculus::Interaction::IInteractableView"
constexpr ::Oculus::Interaction::IInteractableView* i___Oculus__Interaction__IInteractableView() noexcept;

/// @brief Method set_MaxInteractors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_MaxInteractors(int32_t  value) ;

/// @brief Method set_MaxSelectingInteractors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_MaxSelectingInteractors(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInteractable(IInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15767};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
