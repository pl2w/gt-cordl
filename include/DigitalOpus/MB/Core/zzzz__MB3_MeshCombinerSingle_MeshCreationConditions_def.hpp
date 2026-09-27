#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_MeshCreationConditions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshCombinerSingle_MeshCreationConditions)
// Forward declare root types
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_MeshCreationConditions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MeshCreationConditions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshCreationConditions
struct CORDL_TYPE MB3_MeshCombinerSingle_MeshCreationConditions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB3_MeshCombinerSingle_MeshCreationConditions_Unwrapped
enum struct __MB3_MeshCombinerSingle_MeshCreationConditions_Unwrapped : int32_t {
__E_NoMesh = static_cast<int32_t>(0x0),
__E_CreatedInEditor = static_cast<int32_t>(0x1),
__E_CreatedAtRuntime = static_cast<int32_t>(0x2),
__E_AssignedByUser = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB3_MeshCombinerSingle_MeshCreationConditions_Unwrapped () const noexcept {
return static_cast<__MB3_MeshCombinerSingle_MeshCreationConditions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MeshCreationConditions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB3_MeshCombinerSingle_MeshCreationConditions(int32_t  value__) noexcept;

/// @brief Field AssignedByUser value: I32(3)
static ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions const AssignedByUser;

/// @brief Field CreatedAtRuntime value: I32(2)
static ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions const CreatedAtRuntime;

/// @brief Field CreatedInEditor value: I32(1)
static ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions const CreatedInEditor;

/// @brief Field NoMesh value: I32(0)
static ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions const NoMesh;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22630};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
