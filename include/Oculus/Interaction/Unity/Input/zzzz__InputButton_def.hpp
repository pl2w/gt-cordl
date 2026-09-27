#pragma once
// IWYU pragma private; include "Oculus/Interaction/Unity/Input/InputButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InputButton)
namespace Oculus::Interaction::Input {
class IButton;
}
// Forward declare root types
namespace Oculus::Interaction::Unity::Input {
class InputButton;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Unity::Input::InputButton*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Unity::Input::InputButton*, "Oculus.Interaction.Unity.Input", "InputButton");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Unity::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Unity.Input.InputButton
class CORDL_TYPE InputButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _buttonName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonName, put=__cordl_internal_set__buttonName)) ::StringW  _buttonName;

/// @brief Convert operator to "::Oculus::Interaction::Input::IButton"
constexpr operator  ::Oculus::Interaction::Input::IButton*() noexcept;

static inline ::Oculus::Interaction::Unity::Input::InputButton* New_ctor() ;

/// @brief Method Value, addr 0xa4928bc, size 0xc, virtual true, abstract: false, final true
inline bool Value() ;

constexpr ::StringW const& __cordl_internal_get__buttonName() const;

constexpr ::StringW& __cordl_internal_get__buttonName() ;

constexpr void __cordl_internal_set__buttonName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa4928c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Input::IButton"
constexpr ::Oculus::Interaction::Input::IButton* i___Oculus__Interaction__Input__IButton() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputButton(InputButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputButton(InputButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16064};

/// [SerializeField]
/// @brief Field _buttonName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____buttonName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Unity::Input::InputButton, ____buttonName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Unity::Input::InputButton) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Unity::Input
