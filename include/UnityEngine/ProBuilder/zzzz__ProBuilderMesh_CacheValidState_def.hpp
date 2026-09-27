#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ProBuilderMesh_CacheValidState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProBuilderMesh_CacheValidState)
// Forward declare root types
namespace GlobalNamespace {
struct ProBuilderMesh_CacheValidState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProBuilderMesh_CacheValidState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProBuilderMesh_CacheValidState, "UnityEngine.ProBuilder", "ProBuilderMesh/CacheValidState");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh/CacheValidState
struct CORDL_TYPE ProBuilderMesh_CacheValidState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ProBuilderMesh_CacheValidState_Unwrapped
enum struct __ProBuilderMesh_CacheValidState_Unwrapped : uint8_t {
__E_SharedVertex = static_cast<uint8_t>(0x1u),
__E_SharedTexture = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProBuilderMesh_CacheValidState_Unwrapped () const noexcept {
return static_cast<__ProBuilderMesh_CacheValidState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProBuilderMesh_CacheValidState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ProBuilderMesh_CacheValidState(uint8_t  value__) noexcept;

/// @brief Field SharedTexture value: U8(2)
static ::GlobalNamespace::ProBuilderMesh_CacheValidState const SharedTexture;

/// @brief Field SharedVertex value: U8(1)
static ::GlobalNamespace::ProBuilderMesh_CacheValidState const SharedVertex;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24256};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProBuilderMesh_CacheValidState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProBuilderMesh_CacheValidState) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
