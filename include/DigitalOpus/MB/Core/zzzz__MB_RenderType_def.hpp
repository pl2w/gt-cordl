#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_RenderType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB_RenderType)
// Forward declare root types
namespace DigitalOpus::MB::Core {
struct MB_RenderType;
}
// Write type traits
MARK_VAL_T(::DigitalOpus::MB::Core::MB_RenderType);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_RenderType, "DigitalOpus.MB.Core", "MB_RenderType");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB_RenderType
struct CORDL_TYPE MB_RenderType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB_RenderType_Unwrapped
enum struct __MB_RenderType_Unwrapped : int32_t {
__E_meshRenderer = static_cast<int32_t>(0x0),
__E_skinnedMeshRenderer = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB_RenderType_Unwrapped () const noexcept {
return static_cast<__MB_RenderType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB_RenderType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB_RenderType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22596};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field meshRenderer value: I32(0)
static ::DigitalOpus::MB::Core::MB_RenderType const meshRenderer;

/// @brief Field skinnedMeshRenderer value: I32(1)
static ::DigitalOpus::MB::Core::MB_RenderType const skinnedMeshRenderer;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB_RenderType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB_RenderType) == 0x4, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
