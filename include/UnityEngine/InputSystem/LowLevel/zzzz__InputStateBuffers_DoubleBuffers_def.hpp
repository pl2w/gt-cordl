#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateBuffers_DoubleBuffers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateBuffers_DoubleBuffers)
// Forward declare root types
namespace GlobalNamespace {
struct InputStateBuffers_DoubleBuffers;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputStateBuffers_DoubleBuffers);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputStateBuffers_DoubleBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers/DoubleBuffers");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers
struct CORDL_TYPE InputStateBuffers_DoubleBuffers {
public:
// Declarations
 __declspec(property(get=get_valid)) bool  valid;

/// @brief Method GetBackBuffer, addr 0xaffabe4, size 0x28, virtual false, abstract: false, final false
inline void* GetBackBuffer(int32_t  deviceIndex) ;

/// @brief Method GetFrontBuffer, addr 0xaffab54, size 0x24, virtual false, abstract: false, final false
inline void* GetFrontBuffer(int32_t  deviceIndex) ;

/// @brief Method SetBackBuffer, addr 0xaffae08, size 0x20, virtual false, abstract: false, final false
inline void SetBackBuffer(int32_t  deviceIndex, void*  ptr) ;

/// @brief Method SetFrontBuffer, addr 0xaffadec, size 0x1c, virtual false, abstract: false, final false
inline void SetFrontBuffer(int32_t  deviceIndex, void*  ptr) ;

/// @brief Method SwapBuffers, addr 0xaffb408, size 0x34, virtual false, abstract: false, final false
inline void SwapBuffers(int32_t  deviceIndex) ;

/// @brief Method get_valid, addr 0xaffb3f8, size 0x10, virtual false, abstract: false, final false
inline bool get_valid() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputStateBuffers_DoubleBuffers() ;

// Ctor Parameters [CppParam { name: "deviceToBufferMapping", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "deviceCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputStateBuffers_DoubleBuffers(void*  deviceToBufferMapping, int32_t  deviceCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13791};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field deviceToBufferMapping, offset: 0x0, size: 0x8, def value: None
 void*  deviceToBufferMapping;

/// @brief Field deviceCount, offset: 0x8, size: 0x4, def value: None
 int32_t  deviceCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputStateBuffers_DoubleBuffers, deviceToBufferMapping) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputStateBuffers_DoubleBuffers, deviceCount) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputStateBuffers_DoubleBuffers) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
