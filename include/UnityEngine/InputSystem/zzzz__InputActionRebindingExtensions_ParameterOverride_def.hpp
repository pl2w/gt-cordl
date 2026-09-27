#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionRebindingExtensions_ParameterOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionRebindingExtensions_ParameterOverride)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionRebindingExtensions_ParameterOverride;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterOverride");
// Dependencies UnityEngine.InputSystem.InputBinding, UnityEngine.InputSystem.Utilities.PrimitiveValue
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride
struct CORDL_TYPE InputActionRebindingExtensions_ParameterOverride {
public:
// Declarations
 __declspec(property(get=get_objectType)) ::System::Type*  objectType;

/// @brief Method Find, addr 0xaf17360, size 0x1a8, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride> Find(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::by_ref<::UnityEngine::InputSystem::InputBinding>  binding, ::StringW  parameterName, ::StringW  objectRegistrationName) ;

/// @brief Method Find, addr 0xaf1c244, size 0x1f4, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride> Find(::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>  overrides, int32_t  overrideCount, ::by_ref<::UnityEngine::InputSystem::InputBinding>  binding, ::StringW  parameterName, ::StringW  objectRegistrationName) ;

/// @brief Method PickMoreSpecificOne, addr 0xaf1c438, size 0x2a8, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride> PickMoreSpecificOne(::System::Nullable_1<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>  first, ::System::Nullable_1<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>  second) ;

/// @brief Method .ctor, addr 0xaf1c1dc, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  objectRegistrationName, ::StringW  parameterName, ::UnityEngine::InputSystem::InputBinding  bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method .ctor, addr 0xaf16238, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::StringW  parameterName, ::UnityEngine::InputSystem::InputBinding  bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method get_objectType, addr 0xaf1bc70, size 0xb4, virtual false, abstract: false, final false
inline ::System::Type* get_objectType() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionRebindingExtensions_ParameterOverride() ;

// Ctor Parameters [CppParam { name: "objectRegistrationName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "parameter", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None, comment: None }]
constexpr InputActionRebindingExtensions_ParameterOverride(::StringW  objectRegistrationName, ::StringW  parameter, ::UnityEngine::InputSystem::InputBinding  bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13366};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field objectRegistrationName, offset: 0x0, size: 0x8, def value: None
 ::StringW  objectRegistrationName;

/// @brief Field parameter, offset: 0x8, size: 0x8, def value: None
 ::StringW  parameter;

/// @brief Field bindingMask, offset: 0x10, size: 0x58, def value: None
 ::UnityEngine::InputSystem::InputBinding  bindingMask;

/// @brief Field value, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride, objectRegistrationName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride, parameter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride, bindingMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride, value) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
