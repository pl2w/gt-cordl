#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceMatcher_MatcherJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_MatcherJson_Capability_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputDeviceMatcher_MatcherJson)
namespace GlobalNamespace {
struct MatcherJson_InputDeviceMatcher_Capability;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputDeviceMatcher_MatcherJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputDeviceMatcher_MatcherJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputDeviceMatcher_MatcherJson, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/MatcherJson");
// Dependencies UnityEngine.InputSystem.Layouts.InputDeviceMatcher::MatcherJson::Capability
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceMatcher/MatcherJson
struct CORDL_TYPE InputDeviceMatcher_MatcherJson {
public:
// Declarations
using Capability = ::GlobalNamespace::MatcherJson_InputDeviceMatcher_Capability;

/// @brief Method FromMatcher, addr 0xaf34100, size 0x314, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputDeviceMatcher_MatcherJson FromMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method ToMatcher, addr 0xaf34434, size 0x498, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher ToMatcher() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputDeviceMatcher_MatcherJson() ;

// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "interfaces", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "deviceClass", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "deviceClasses", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "manufacturerContains", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "manufacturers", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "products", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "versions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "capabilities", ty: "::ArrayW<::GlobalNamespace::MatcherJson_InputDeviceMatcher_Capability>", modifiers: "", def_value: None, comment: None }]
constexpr InputDeviceMatcher_MatcherJson(::StringW  interface, ::ArrayW<::StringW>  interfaces, ::StringW  deviceClass, ::ArrayW<::StringW>  deviceClasses, ::StringW  manufacturer, ::StringW  manufacturerContains, ::ArrayW<::StringW>  manufacturers, ::StringW  product, ::ArrayW<::StringW>  products, ::StringW  version, ::ArrayW<::StringW>  versions, ::ArrayW<::GlobalNamespace::MatcherJson_InputDeviceMatcher_Capability>  capabilities) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13846};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field interface, offset: 0x0, size: 0x8, def value: None
 ::StringW  interface;

/// @brief Field interfaces, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::StringW>  interfaces;

/// @brief Field deviceClass, offset: 0x10, size: 0x8, def value: None
 ::StringW  deviceClass;

/// @brief Field deviceClasses, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  deviceClasses;

/// @brief Field manufacturer, offset: 0x20, size: 0x8, def value: None
 ::StringW  manufacturer;

/// @brief Field manufacturerContains, offset: 0x28, size: 0x8, def value: None
 ::StringW  manufacturerContains;

/// @brief Field manufacturers, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  manufacturers;

/// @brief Field product, offset: 0x38, size: 0x8, def value: None
 ::StringW  product;

/// @brief Field products, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::StringW>  products;

/// @brief Field version, offset: 0x48, size: 0x8, def value: None
 ::StringW  version;

/// @brief Field versions, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::StringW>  versions;

/// @brief Field capabilities, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MatcherJson_InputDeviceMatcher_Capability>  capabilities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, interface) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, interfaces) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, deviceClass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, deviceClasses) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, manufacturer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, manufacturerContains) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, manufacturers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, product) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, products) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, version) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, versions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceMatcher_MatcherJson, capabilities) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputDeviceMatcher_MatcherJson) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
