#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions_DeviceBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlExtensions_DeviceBuilder)
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlExtensions_DeviceBuilder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlExtensions_DeviceBuilder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlExtensions_DeviceBuilder, "UnityEngine.InputSystem", "InputControlExtensions/DeviceBuilder");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlExtensions/DeviceBuilder
struct CORDL_TYPE InputControlExtensions_DeviceBuilder {
public:
// Declarations
 __declspec(property(get=get_device, put=set_device)) ::UnityEngine::InputSystem::InputDevice*  device;

/// @brief Method Finish, addr 0xaf56d8c, size 0x270, virtual false, abstract: false, final false
inline void Finish() ;

/// @brief Method IsNoisy, addr 0xaf56af0, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder IsNoisy(bool  value) ;

/// @brief Method WithChildren, addr 0xaf56ab8, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder WithChildren(int32_t  startIndex, int32_t  count) ;

/// @brief Method WithControlAlias, addr 0xaf56bcc, size 0x48, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder WithControlAlias(int32_t  controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString  alias) ;

/// @brief Method WithControlTree, addr 0xaf56c40, size 0x14c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder WithControlTree(::ArrayW<uint8_t>  controlTreeNodes, ::ArrayW<uint16_t>  controlTreeIndicies) ;

/// @brief Method WithControlUsage, addr 0xaf56b18, size 0xb4, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder WithControlUsage(int32_t  controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString  usage, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method WithDisplayName, addr 0xaf569d4, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder WithDisplayName(::StringW  displayName) ;

/// @brief Method WithLayout, addr 0xaf56a8c, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder WithLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method WithName, addr 0xaf56980, size 0x54, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder WithName(::StringW  name) ;

/// @brief Method WithShortDisplayName, addr 0xaf56a30, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder WithShortDisplayName(::StringW  shortDisplayName) ;

/// @brief Method WithStateBlock, addr 0xaf56ad4, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock  stateBlock) ;

/// @brief Method WithStateOffsetToControlIndexMap, addr 0xaf56c14, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder WithStateOffsetToControlIndexMap(::ArrayW<uint32_t>  map) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_device, addr 0xaf56970, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* get_device() ;

/// [CompilerGenerated]
/// @brief Method set_device, addr 0xaf56978, size 0x8, virtual false, abstract: false, final false
inline void set_device(::UnityEngine::InputSystem::InputDevice*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlExtensions_DeviceBuilder() ;

// Ctor Parameters [CppParam { name: "_device_k__BackingField", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None, comment: None }]
constexpr InputControlExtensions_DeviceBuilder(::UnityEngine::InputSystem::InputDevice*  _device_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <device>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  _device_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlExtensions_DeviceBuilder, _device_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlExtensions_DeviceBuilder) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
