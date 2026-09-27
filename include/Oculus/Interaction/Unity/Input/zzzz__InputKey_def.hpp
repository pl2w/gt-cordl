#pragma once
// IWYU pragma private; include "Oculus/Interaction/Unity/Input/InputKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InputKey)
namespace Oculus::Interaction::Input {
class IButton;
}
// Forward declare root types
namespace Oculus::Interaction::Unity::Input {
class InputKey;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Unity::Input::InputKey*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Unity::Input::InputKey*, "Oculus.Interaction.Unity.Input", "InputKey");
// Dependencies UnityEngine.KeyCode, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Unity::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Unity.Input.InputKey
class CORDL_TYPE InputKey : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _key, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__key, put=__cordl_internal_set__key)) ::UnityEngine::KeyCode  _key;

/// @brief Convert operator to "::Oculus::Interaction::Input::IButton"
constexpr operator  ::Oculus::Interaction::Input::IButton*() noexcept;

static inline ::Oculus::Interaction::Unity::Input::InputKey* New_ctor() ;

/// @brief Method Value, addr 0xa4928d0, size 0xc, virtual true, abstract: false, final true
inline bool Value() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get__key() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get__key() ;

constexpr void __cordl_internal_set__key(::UnityEngine::KeyCode  value) ;

/// @brief Method .ctor, addr 0xa4928dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Input::IButton"
constexpr ::Oculus::Interaction::Input::IButton* i___Oculus__Interaction__Input__IButton() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputKey", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputKey(InputKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputKey", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputKey(InputKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16065};

/// [SerializeField]
/// @brief Field _key, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ____key;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Unity::Input::InputKey, ____key) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Unity::Input::InputKey) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Unity::Input
