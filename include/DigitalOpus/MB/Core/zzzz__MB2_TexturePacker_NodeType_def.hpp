#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_TexturePacker_NodeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB2_TexturePacker_NodeType)
// Forward declare root types
namespace GlobalNamespace {
struct MB2_TexturePacker_NodeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB2_TexturePacker_NodeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB2_TexturePacker_NodeType, "DigitalOpus.MB.Core", "MB2_TexturePacker/NodeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB2_TexturePacker/NodeType
struct CORDL_TYPE MB2_TexturePacker_NodeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB2_TexturePacker_NodeType_Unwrapped
enum struct __MB2_TexturePacker_NodeType_Unwrapped : int32_t {
__E_Container = static_cast<int32_t>(0x0),
__E_maxDim = static_cast<int32_t>(0x1),
__E_regular = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB2_TexturePacker_NodeType_Unwrapped () const noexcept {
return static_cast<__MB2_TexturePacker_NodeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePacker_NodeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB2_TexturePacker_NodeType(int32_t  value__) noexcept;

/// @brief Field Container value: I32(0)
static ::GlobalNamespace::MB2_TexturePacker_NodeType const Container;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22753};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field maxDim value: I32(1)
static ::GlobalNamespace::MB2_TexturePacker_NodeType const maxDim;

/// @brief Field regular value: I32(2)
static ::GlobalNamespace::MB2_TexturePacker_NodeType const regular;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB2_TexturePacker_NodeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB2_TexturePacker_NodeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
