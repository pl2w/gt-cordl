#pragma once
// IWYU pragma private; include "Liv/NGFX/EventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventType)
// Forward declare root types
namespace Liv::NGFX {
struct EventType;
}
// Write type traits
MARK_VAL_T(::Liv::NGFX::EventType);
DEFINE_IL2CPP_CLASS(::Liv::NGFX::EventType, "Liv.NGFX", "EventType");
// Dependencies 
namespace Liv::NGFX {
// Is value type: true
// CS Name: Liv.NGFX.EventType
struct CORDL_TYPE EventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EventType_Unwrapped
enum struct __EventType_Unwrapped : int32_t {
__E_GraphicsBufferCreate = static_cast<int32_t>(0x0),
__E_GraphicsBufferCopy = static_cast<int32_t>(0x1),
__E_TextureCreate = static_cast<int32_t>(0x2),
__E_RenderBufferCreate = static_cast<int32_t>(0x3),
__E_ResourceDestroy = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventType_Unwrapped () const noexcept {
return static_cast<__EventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EventType(int32_t  value__) noexcept;

/// @brief Field GraphicsBufferCopy value: I32(1)
static ::Liv::NGFX::EventType const GraphicsBufferCopy;

/// @brief Field GraphicsBufferCreate value: I32(0)
static ::Liv::NGFX::EventType const GraphicsBufferCreate;

/// @brief Field RenderBufferCreate value: I32(3)
static ::Liv::NGFX::EventType const RenderBufferCreate;

/// @brief Field ResourceDestroy value: I32(4)
static ::Liv::NGFX::EventType const ResourceDestroy;

/// @brief Field TextureCreate value: I32(2)
static ::Liv::NGFX::EventType const TextureCreate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24663};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::NGFX::EventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::NGFX::EventType) == 0x4, "Size mismatch!");

} // namespace end def Liv::NGFX
