#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_CacheRefInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(InputControlLayout_CacheRefInstance)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlLayout_CacheRefInstance;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlLayout_CacheRefInstance);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlLayout_CacheRefInstance, "UnityEngine.InputSystem.Layouts", "InputControlLayout/CacheRefInstance");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CORDL_TYPE InputControlLayout_CacheRefInstance {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb008220, size 0x98, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout_CacheRefInstance() ;

// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr InputControlLayout_CacheRefInstance(bool  valid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13837};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field valid, offset: 0x0, size: 0x1, def value: None
 bool  valid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlLayout_CacheRefInstance, valid) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlLayout_CacheRefInstance) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
