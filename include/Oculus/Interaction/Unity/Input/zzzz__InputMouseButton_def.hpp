#pragma once
// IWYU pragma private; include "Oculus/Interaction/Unity/Input/InputMouseButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputMouseButton)
namespace Oculus::Interaction::Input {
class IButton;
}
// Forward declare root types
namespace Oculus::Interaction::Unity::Input {
class InputMouseButton;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Unity::Input::InputMouseButton*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Unity::Input::InputMouseButton*, "Oculus.Interaction.Unity.Input", "InputMouseButton");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Unity::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Unity.Input.InputMouseButton
class CORDL_TYPE InputMouseButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _button, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) int32_t  _button;

/// @brief Convert operator to "::Oculus::Interaction::Input::IButton"
constexpr operator  ::Oculus::Interaction::Input::IButton*() noexcept;

static inline ::Oculus::Interaction::Unity::Input::InputMouseButton* New_ctor() ;

/// @brief Method Value, addr 0xa4928e4, size 0xc, virtual true, abstract: false, final true
inline bool Value() ;

constexpr int32_t const& __cordl_internal_get__button() const;

constexpr int32_t& __cordl_internal_get__button() ;

constexpr void __cordl_internal_set__button(int32_t  value) ;

/// @brief Method .ctor, addr 0xa4928f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Input::IButton"
constexpr ::Oculus::Interaction::Input::IButton* i___Oculus__Interaction__Input__IButton() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMouseButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMouseButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMouseButton(InputMouseButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMouseButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMouseButton(InputMouseButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16066};

/// [SerializeField]
/// @brief Field _button, offset: 0x20, size: 0x4, def value: None
 int32_t  ____button;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Unity::Input::InputMouseButton, ____button) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Unity::Input::InputMouseButton) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Unity::Input
