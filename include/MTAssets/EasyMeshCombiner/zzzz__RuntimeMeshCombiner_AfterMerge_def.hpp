#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/RuntimeMeshCombiner_AfterMerge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeMeshCombiner_AfterMerge)
// Forward declare root types
namespace GlobalNamespace {
struct RuntimeMeshCombiner_AfterMerge;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RuntimeMeshCombiner_AfterMerge);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RuntimeMeshCombiner_AfterMerge, "MTAssets.EasyMeshCombiner", "RuntimeMeshCombiner/AfterMerge");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MTAssets.EasyMeshCombiner.RuntimeMeshCombiner/AfterMerge
struct CORDL_TYPE RuntimeMeshCombiner_AfterMerge {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RuntimeMeshCombiner_AfterMerge_Unwrapped
enum struct __RuntimeMeshCombiner_AfterMerge_Unwrapped : int32_t {
__E_DisableOriginalMeshes = static_cast<int32_t>(0x0),
__E_DeactiveOriginalGameObjects = static_cast<int32_t>(0x1),
__E_DoNothing = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RuntimeMeshCombiner_AfterMerge_Unwrapped () const noexcept {
return static_cast<__RuntimeMeshCombiner_AfterMerge_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RuntimeMeshCombiner_AfterMerge() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeMeshCombiner_AfterMerge(int32_t  value__) noexcept;

/// @brief Field DeactiveOriginalGameObjects value: I32(1)
static ::GlobalNamespace::RuntimeMeshCombiner_AfterMerge const DeactiveOriginalGameObjects;

/// @brief Field DisableOriginalMeshes value: I32(0)
static ::GlobalNamespace::RuntimeMeshCombiner_AfterMerge const DisableOriginalMeshes;

/// @brief Field DoNothing value: I32(2)
static ::GlobalNamespace::RuntimeMeshCombiner_AfterMerge const DoNothing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4467};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RuntimeMeshCombiner_AfterMerge, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RuntimeMeshCombiner_AfterMerge) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
