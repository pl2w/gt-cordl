#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/RuntimeMeshCombiner_CombineOnStart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeMeshCombiner_CombineOnStart)
// Forward declare root types
namespace GlobalNamespace {
struct RuntimeMeshCombiner_CombineOnStart;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart, "MTAssets.EasyMeshCombiner", "RuntimeMeshCombiner/CombineOnStart");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MTAssets.EasyMeshCombiner.RuntimeMeshCombiner/CombineOnStart
struct CORDL_TYPE RuntimeMeshCombiner_CombineOnStart {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RuntimeMeshCombiner_CombineOnStart_Unwrapped
enum struct __RuntimeMeshCombiner_CombineOnStart_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_OnStart = static_cast<int32_t>(0x1),
__E_OnAwake = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RuntimeMeshCombiner_CombineOnStart_Unwrapped () const noexcept {
return static_cast<__RuntimeMeshCombiner_CombineOnStart_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RuntimeMeshCombiner_CombineOnStart() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeMeshCombiner_CombineOnStart(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(0)
static ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart const Disabled;

/// @brief Field OnAwake value: I32(2)
static ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart const OnAwake;

/// @brief Field OnStart value: I32(1)
static ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart const OnStart;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4466};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
