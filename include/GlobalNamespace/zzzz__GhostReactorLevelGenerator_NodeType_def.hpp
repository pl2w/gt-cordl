#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelGenerator_NodeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorLevelGenerator_NodeType)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactorLevelGenerator_NodeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactorLevelGenerator_NodeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelGenerator_NodeType, "", "GhostReactorLevelGenerator/NodeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactorLevelGenerator/NodeType
struct CORDL_TYPE GhostReactorLevelGenerator_NodeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GhostReactorLevelGenerator_NodeType_Unwrapped
enum struct __GhostReactorLevelGenerator_NodeType_Unwrapped : int32_t {
__E_Hub = static_cast<int32_t>(0x0),
__E_EndCap = static_cast<int32_t>(0x1),
__E_Blocker = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GhostReactorLevelGenerator_NodeType_Unwrapped () const noexcept {
return static_cast<__GhostReactorLevelGenerator_NodeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelGenerator_NodeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactorLevelGenerator_NodeType(int32_t  value__) noexcept;

/// @brief Field Blocker value: I32(2)
static ::GlobalNamespace::GhostReactorLevelGenerator_NodeType const Blocker;

/// @brief Field EndCap value: I32(1)
static ::GlobalNamespace::GhostReactorLevelGenerator_NodeType const EndCap;

/// @brief Field Hub value: I32(0)
static ::GlobalNamespace::GhostReactorLevelGenerator_NodeType const Hub;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1812};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator_NodeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorLevelGenerator_NodeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
