#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsTerminalScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomMapsTerminalScreen)
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
struct CustomMapKeyboardBinding;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class CustomMapsKeyboard;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsTerminalScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsTerminalScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsTerminalScreen*, "", "CustomMapsTerminalScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsTerminalScreen
class CORDL_TYPE CustomMapsTerminalScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activationTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationTime, put=__cordl_internal_set_activationTime)) float_t  activationTime;

/// @brief Field showTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_showTime, put=__cordl_internal_set_showTime)) float_t  showTime;

/// @brief Field terminalKeyboard, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_terminalKeyboard, put=__cordl_internal_set_terminalKeyboard)) ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard>  terminalKeyboard;

/// @brief Method Hide, addr 0x5a05778, size 0xd4, virtual true, abstract: false, final false
inline void Hide() ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Initialize() ;

static inline ::GlobalNamespace::CustomMapsTerminalScreen* New_ctor() ;

/// @brief Method PressButton, addr 0x5a099b8, size 0x4, virtual true, abstract: false, final false
inline void PressButton(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  pressedButton) ;

/// @brief Method Show, addr 0x5a05670, size 0xdc, virtual true, abstract: false, final false
inline void Show() ;

constexpr float_t const& __cordl_internal_get_activationTime() const;

constexpr float_t& __cordl_internal_get_activationTime() ;

constexpr float_t const& __cordl_internal_get_showTime() const;

constexpr float_t& __cordl_internal_get_showTime() ;

constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard> const& __cordl_internal_get_terminalKeyboard() const;

constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard>& __cordl_internal_get_terminalKeyboard() ;

constexpr void __cordl_internal_set_activationTime(float_t  value) ;

constexpr void __cordl_internal_set_showTime(float_t  value) ;

constexpr void __cordl_internal_set_terminalKeyboard(::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard>  value) ;

/// @brief Method .ctor, addr 0x5a06844, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsTerminalScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsTerminalScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsTerminalScreen(CustomMapsTerminalScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsTerminalScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsTerminalScreen(CustomMapsTerminalScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2765};

/// @brief Field terminalKeyboard, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard>  ___terminalKeyboard;

/// [SerializeField]
/// @brief Field activationTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___activationTime;

/// @brief Field showTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___showTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalScreen, ___terminalKeyboard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalScreen, ___activationTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalScreen, ___showTime) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsTerminalScreen) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
