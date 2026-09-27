#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombiner_MeshCombiningStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshCombiner_MeshCombiningStatus)
// Forward declare root types
namespace GlobalNamespace {
struct MB3_MeshCombiner_MeshCombiningStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus, "DigitalOpus.MB.Core", "MB3_MeshCombiner/MeshCombiningStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombiner/MeshCombiningStatus
struct CORDL_TYPE MB3_MeshCombiner_MeshCombiningStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB3_MeshCombiner_MeshCombiningStatus_Unwrapped
enum struct __MB3_MeshCombiner_MeshCombiningStatus_Unwrapped : int32_t {
__E_preAddDeleteOrUpdate = static_cast<int32_t>(0x0),
__E_readyForApply = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB3_MeshCombiner_MeshCombiningStatus_Unwrapped () const noexcept {
return static_cast<__MB3_MeshCombiner_MeshCombiningStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombiner_MeshCombiningStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB3_MeshCombiner_MeshCombiningStatus(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22619};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field preAddDeleteOrUpdate value: I32(0)
static ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus const preAddDeleteOrUpdate;

/// @brief Field readyForApply value: I32(1)
static ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus const readyForApply;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
