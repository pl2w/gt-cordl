#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderQueue)
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderQueue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderQueue);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderQueue, "UnityEngine.Rendering", "RenderQueue");
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderQueue
struct CORDL_TYPE RenderQueue {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderQueue_Unwrapped
enum struct __RenderQueue_Unwrapped : int32_t {
__E_Background = static_cast<int32_t>(0x3e8),
__E_Geometry = static_cast<int32_t>(0x7d0),
__E_AlphaTest = static_cast<int32_t>(0x992),
__E_GeometryLast = static_cast<int32_t>(0x9c4),
__E_Transparent = static_cast<int32_t>(0xbb8),
__E_Overlay = static_cast<int32_t>(0xfa0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderQueue_Unwrapped () const noexcept {
return static_cast<__RenderQueue_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderQueue() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderQueue(int32_t  value__) noexcept;

/// @brief Field AlphaTest value: I32(2450)
static ::UnityEngine::Rendering::RenderQueue const AlphaTest;

/// @brief Field Background value: I32(1000)
static ::UnityEngine::Rendering::RenderQueue const Background;

/// @brief Field Geometry value: I32(2000)
static ::UnityEngine::Rendering::RenderQueue const Geometry;

/// @brief Field GeometryLast value: I32(2500)
static ::UnityEngine::Rendering::RenderQueue const GeometryLast;

/// @brief Field Overlay value: I32(4000)
static ::UnityEngine::Rendering::RenderQueue const Overlay;

/// @brief Field Transparent value: I32(3000)
static ::UnityEngine::Rendering::RenderQueue const Transparent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15448};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderQueue, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderQueue) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
