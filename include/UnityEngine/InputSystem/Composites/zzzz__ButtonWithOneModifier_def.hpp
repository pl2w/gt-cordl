#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/ButtonWithOneModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Composites/zzzz__ButtonWithOneModifier_ModifiersOrder_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonWithOneModifier)
namespace GlobalNamespace {
struct ButtonWithOneModifier_ModifiersOrder;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
class ButtonWithOneModifier;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*, "UnityEngine.InputSystem.Composites", "ButtonWithOneModifier");
// [DesignTimeVisible(false)]
// [DisplayStringFormat("{modifier}+{button}")]
// Dependencies UnityEngine.InputSystem.Composites.ButtonWithOneModifier::ModifiersOrder, UnityEngine.InputSystem.InputBindingComposite`1<TValue>
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Composites.ButtonWithOneModifier
class CORDL_TYPE ButtonWithOneModifier : public ::UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
// Declarations
using ModifiersOrder = ::GlobalNamespace::ButtonWithOneModifier_ModifiersOrder;

/// @brief Field button, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) int32_t  button;

/// @brief Field modifier, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_modifier, put=__cordl_internal_set_modifier)) int32_t  modifier;

/// @brief Field modifiersOrder, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_modifiersOrder, put=__cordl_internal_set_modifiersOrder)) ::GlobalNamespace::ButtonWithOneModifier_ModifiersOrder  modifiersOrder;

/// @brief Field overrideModifiersNeedToBePressedFirst, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideModifiersNeedToBePressedFirst, put=__cordl_internal_set_overrideModifiersNeedToBePressedFirst)) bool  overrideModifiersNeedToBePressedFirst;

/// @brief Method EvaluateMagnitude, addr 0xaf46dc8, size 0xc, virtual true, abstract: false, final false
inline float_t EvaluateMagnitude(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method FinishSetup, addr 0xaf46dd4, size 0x8c, virtual true, abstract: false, final false
inline void FinishSetup(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method ModifierIsPressed, addr 0xaf46d44, size 0x84, virtual false, abstract: false, final false
inline bool ModifierIsPressed(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

static inline ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier* New_ctor() ;

/// @brief Method ReadValue, addr 0xaf46cd4, size 0x70, virtual true, abstract: false, final false
inline float_t ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

constexpr int32_t const& __cordl_internal_get_button() const;

constexpr int32_t& __cordl_internal_get_button() ;

constexpr int32_t const& __cordl_internal_get_modifier() const;

constexpr int32_t& __cordl_internal_get_modifier() ;

constexpr ::GlobalNamespace::ButtonWithOneModifier_ModifiersOrder const& __cordl_internal_get_modifiersOrder() const;

constexpr ::GlobalNamespace::ButtonWithOneModifier_ModifiersOrder& __cordl_internal_get_modifiersOrder() ;

constexpr bool const& __cordl_internal_get_overrideModifiersNeedToBePressedFirst() const;

constexpr bool& __cordl_internal_get_overrideModifiersNeedToBePressedFirst() ;

constexpr void __cordl_internal_set_button(int32_t  value) ;

constexpr void __cordl_internal_set_modifier(int32_t  value) ;

constexpr void __cordl_internal_set_modifiersOrder(::GlobalNamespace::ButtonWithOneModifier_ModifiersOrder  value) ;

constexpr void __cordl_internal_set_overrideModifiersNeedToBePressedFirst(bool  value) ;

/// @brief Method .ctor, addr 0xaf46e60, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonWithOneModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithOneModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonWithOneModifier(ButtonWithOneModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithOneModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonWithOneModifier(ButtonWithOneModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13941};

/// [InputControl(layout = "Button")]
/// @brief Field modifier, offset: 0x10, size: 0x4, def value: None
 int32_t  ___modifier;

/// [InputControl(layout = "Button")]
/// @brief Field button, offset: 0x14, size: 0x4, def value: None
 int32_t  ___button;

/// [Tooltip("Obsolete please use modifiers Order. If enabled, this will override the Input Consumption setting, allowing the modifier keys to be pressed after the button and the composite will still trigger.")]
/// [Obsolete("Use ModifiersOrder.Unordered with \'modifiersOrder\' instead")]
/// @brief Field overrideModifiersNeedToBePressedFirst, offset: 0x18, size: 0x1, def value: None
 bool  ___overrideModifiersNeedToBePressedFirst;

/// [Tooltip("By default it follows the Input Consumption setting to determine if the modifers keys need to be pressed first.")]
/// @brief Field modifiersOrder, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::ButtonWithOneModifier_ModifiersOrder  ___modifiersOrder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, ___modifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, ___button) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, ___overrideModifiersNeedToBePressedFirst) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, ___modifiersOrder) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Composites
