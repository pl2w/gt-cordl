#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions_ControlBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlExtensions_ControlBuilder)
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlExtensions_ControlBuilder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlExtensions_ControlBuilder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlExtensions_ControlBuilder, "UnityEngine.InputSystem", "InputControlExtensions/ControlBuilder");
// Dependencies UnityEngine.InputSystem.InputProcessor`1<TValue>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlExtensions/ControlBuilder
struct CORDL_TYPE InputControlExtensions_ControlBuilder {
public:
// Declarations
 __declspec(property(get=get_control, put=set_control)) ::UnityEngine::InputSystem::InputControl*  control;

/// @brief Method At, addr 0xaf56560, size 0x98, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder At(::UnityEngine::InputSystem::InputDevice*  device, int32_t  index) ;

/// @brief Method DontReset, addr 0xaf568ac, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder DontReset(bool  value) ;

/// @brief Method Finish, addr 0xaf56950, size 0x20, virtual false, abstract: false, final false
inline void Finish() ;

/// @brief Method IsButton, addr 0xaf5691c, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder IsButton(bool  value) ;

/// @brief Method IsNoisy, addr 0xaf56850, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder IsNoisy(bool  value) ;

/// @brief Method IsSynthetic, addr 0xaf56878, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder IsSynthetic(bool  value) ;

/// @brief Method WithAliases, addr 0xaf56774, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithAliases(int32_t  startIndex, int32_t  count) ;

/// @brief Method WithChildren, addr 0xaf56790, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithChildren(int32_t  startIndex, int32_t  count) ;

/// @brief Method WithDefaultState, addr 0xaf567c8, size 0x3c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method WithDisplayName, addr 0xaf56674, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithDisplayName(::StringW  displayName) ;

/// @brief Method WithLayout, addr 0xaf5672c, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method WithMinAndMax, addr 0xaf56824, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithMinAndMax(::UnityEngine::InputSystem::Utilities::PrimitiveValue  min, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  max) ;

/// @brief Method WithName, addr 0xaf56620, size 0x54, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithName(::StringW  name) ;

/// @brief Method WithParent, addr 0xaf565f8, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithParent(::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method WithProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TProcessor,typename TValue>
requires(::cordl_internals::type_constraint<TProcessor, ::UnityEngine::InputSystem::InputProcessor_1<TValue>*> && ::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithProcessor(TProcessor  processor) ;

/// @brief Method WithShortDisplayName, addr 0xaf566d0, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithShortDisplayName(::StringW  shortDisplayName) ;

/// @brief Method WithStateBlock, addr 0xaf567ac, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock  stateBlock) ;

/// @brief Method WithUsages, addr 0xaf56758, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder WithUsages(int32_t  startIndex, int32_t  count) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_control, addr 0xaf56550, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* get_control() ;

/// [CompilerGenerated]
/// @brief Method set_control, addr 0xaf56558, size 0x8, virtual false, abstract: false, final false
inline void set_control(::UnityEngine::InputSystem::InputControl*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlExtensions_ControlBuilder() ;

// Ctor Parameters [CppParam { name: "_control_k__BackingField", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None, comment: None }]
constexpr InputControlExtensions_ControlBuilder(::UnityEngine::InputSystem::InputControl*  _control_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13430};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <control>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  _control_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlExtensions_ControlBuilder, _control_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlExtensions_ControlBuilder) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
