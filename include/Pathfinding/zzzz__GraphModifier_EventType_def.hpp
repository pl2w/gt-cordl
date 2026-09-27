#pragma once
// IWYU pragma private; include "Pathfinding/GraphModifier_EventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphModifier_EventType)
// Forward declare root types
namespace GlobalNamespace {
struct GraphModifier_EventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GraphModifier_EventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GraphModifier_EventType, "Pathfinding", "GraphModifier/EventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.GraphModifier/EventType
struct CORDL_TYPE GraphModifier_EventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphModifier_EventType_Unwrapped
enum struct __GraphModifier_EventType_Unwrapped : int32_t {
__E_PostScan = static_cast<int32_t>(0x1),
__E_PreScan = static_cast<int32_t>(0x2),
__E_LatePostScan = static_cast<int32_t>(0x4),
__E_PreUpdate = static_cast<int32_t>(0x8),
__E_PostUpdate = static_cast<int32_t>(0x10),
__E_PostCacheLoad = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphModifier_EventType_Unwrapped () const noexcept {
return static_cast<__GraphModifier_EventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphModifier_EventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GraphModifier_EventType(int32_t  value__) noexcept;

/// @brief Field LatePostScan value: I32(4)
static ::GlobalNamespace::GraphModifier_EventType const LatePostScan;

/// @brief Field PostCacheLoad value: I32(32)
static ::GlobalNamespace::GraphModifier_EventType const PostCacheLoad;

/// @brief Field PostScan value: I32(1)
static ::GlobalNamespace::GraphModifier_EventType const PostScan;

/// @brief Field PostUpdate value: I32(16)
static ::GlobalNamespace::GraphModifier_EventType const PostUpdate;

/// @brief Field PreScan value: I32(2)
static ::GlobalNamespace::GraphModifier_EventType const PreScan;

/// @brief Field PreUpdate value: I32(8)
static ::GlobalNamespace::GraphModifier_EventType const PreUpdate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21244};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphModifier_EventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GraphModifier_EventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
