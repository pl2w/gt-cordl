#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_LayoutJsonNameAndDescriptorOnly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_MatcherJson_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputControlLayout_LayoutJsonNameAndDescriptorOnly)
// Forward declare root types
namespace GlobalNamespace {
struct InputControlLayout_LayoutJsonNameAndDescriptorOnly;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlLayout_LayoutJsonNameAndDescriptorOnly);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlLayout_LayoutJsonNameAndDescriptorOnly, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJsonNameAndDescriptorOnly");
// Dependencies UnityEngine.InputSystem.Layouts.InputDeviceMatcher::MatcherJson
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/LayoutJsonNameAndDescriptorOnly
struct CORDL_TYPE InputControlLayout_LayoutJsonNameAndDescriptorOnly {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout_LayoutJsonNameAndDescriptorOnly() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "device", ty: "::GlobalNamespace::InputDeviceMatcher_MatcherJson", modifiers: "", def_value: None, comment: None }]
constexpr InputControlLayout_LayoutJsonNameAndDescriptorOnly(::StringW  name, ::StringW  extend, ::ArrayW<::StringW>  extendMultiple, ::GlobalNamespace::InputDeviceMatcher_MatcherJson  device) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13826};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field extend, offset: 0x8, size: 0x8, def value: None
 ::StringW  extend;

/// @brief Field extendMultiple, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  extendMultiple;

/// @brief Field device, offset: 0x18, size: 0x60, def value: None
 ::GlobalNamespace::InputDeviceMatcher_MatcherJson  device;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJsonNameAndDescriptorOnly, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJsonNameAndDescriptorOnly, extend) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJsonNameAndDescriptorOnly, extendMultiple) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJsonNameAndDescriptorOnly, device) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlLayout_LayoutJsonNameAndDescriptorOnly) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
