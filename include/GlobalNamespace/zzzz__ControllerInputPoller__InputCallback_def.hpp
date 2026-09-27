#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerInputPoller__InputCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EControllerInputPressFlags_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ControllerInputPoller__InputCallback)
namespace GlobalNamespace {
struct EControllerInputPressFlags;
}
namespace GlobalNamespace {
struct EHandednessFlags;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ControllerInputPoller__InputCallback;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ControllerInputPoller__InputCallback);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerInputPoller__InputCallback, "", "ControllerInputPoller/_InputCallback");
// Dependencies EControllerInputPressFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: ControllerInputPoller/_InputCallback
struct CORDL_TYPE ControllerInputPoller__InputCallback {
public:
// Declarations
/// @brief Method .ctor, addr 0x57e7118, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControllerInputPoller__InputCallback() ;

// Ctor Parameters [CppParam { name: "flags", ty: "::GlobalNamespace::EControllerInputPressFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "callback", ty: "::System::Action_1<::GlobalNamespace::EHandednessFlags>*", modifiers: "", def_value: None, comment: None }]
constexpr ControllerInputPoller__InputCallback(::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1658};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field flags, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::EControllerInputPressFlags  flags;

/// @brief Field callback, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerInputPoller__InputCallback, flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller__InputCallback, callback) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerInputPoller__InputCallback) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
