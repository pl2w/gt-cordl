#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceBuilder_RefInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(InputDeviceBuilder_RefInstance)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputDeviceBuilder_RefInstance;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputDeviceBuilder_RefInstance);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputDeviceBuilder_RefInstance, "UnityEngine.InputSystem.Layouts", "InputDeviceBuilder/RefInstance");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceBuilder/RefInstance
#pragma pack(push, 0)
struct CORDL_TYPE InputDeviceBuilder_RefInstance {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xaf31c9c, size 0x8c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputDeviceBuilder_RefInstance() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13841};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::InputDeviceBuilder_RefInstance) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
