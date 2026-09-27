#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/InputManagerProvider_Configuration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(InputManagerProvider_Configuration)
// Forward declare root types
namespace GlobalNamespace {
struct InputManagerProvider_Configuration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputManagerProvider_Configuration);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputManagerProvider_Configuration, "UnityEngine.InputForUI", "InputManagerProvider/Configuration");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.InputManagerProvider/Configuration
struct CORDL_TYPE InputManagerProvider_Configuration {
public:
// Declarations
/// @brief Method GetDefaultConfiguration, addr 0xb662584, size 0x15c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputManagerProvider_Configuration GetDefaultConfiguration() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputManagerProvider_Configuration() ;

// Ctor Parameters [CppParam { name: "HorizontalAxis", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "VerticalAxis", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "SubmitButton", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "CancelButton", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NavigateNextButton", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NavigatePreviousButton", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "InputActionsPerSecond", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RepeatDelay", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr InputManagerProvider_Configuration(::StringW  HorizontalAxis, ::StringW  VerticalAxis, ::StringW  SubmitButton, ::StringW  CancelButton, ::StringW  NavigateNextButton, ::StringW  NavigatePreviousButton, float_t  InputActionsPerSecond, float_t  RepeatDelay) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31887};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field HorizontalAxis, offset: 0x0, size: 0x8, def value: None
 ::StringW  HorizontalAxis;

/// @brief Field VerticalAxis, offset: 0x8, size: 0x8, def value: None
 ::StringW  VerticalAxis;

/// @brief Field SubmitButton, offset: 0x10, size: 0x8, def value: None
 ::StringW  SubmitButton;

/// @brief Field CancelButton, offset: 0x18, size: 0x8, def value: None
 ::StringW  CancelButton;

/// @brief Field NavigateNextButton, offset: 0x20, size: 0x8, def value: None
 ::StringW  NavigateNextButton;

/// @brief Field NavigatePreviousButton, offset: 0x28, size: 0x8, def value: None
 ::StringW  NavigatePreviousButton;

/// @brief Field InputActionsPerSecond, offset: 0x30, size: 0x4, def value: None
 float_t  InputActionsPerSecond;

/// @brief Field RepeatDelay, offset: 0x34, size: 0x4, def value: None
 float_t  RepeatDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputManagerProvider_Configuration, HorizontalAxis) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManagerProvider_Configuration, VerticalAxis) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManagerProvider_Configuration, SubmitButton) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManagerProvider_Configuration, CancelButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManagerProvider_Configuration, NavigateNextButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManagerProvider_Configuration, NavigatePreviousButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManagerProvider_Configuration, InputActionsPerSecond) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManagerProvider_Configuration, RepeatDelay) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputManagerProvider_Configuration) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
