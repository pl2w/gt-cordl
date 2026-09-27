#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/PoolManagerComponent_PoolDesc_PoolType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoolManagerComponent_PoolDesc_PoolType)
// Forward declare root types
namespace GlobalNamespace {
struct PoolDesc_PoolManagerComponent_PoolType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType, "Meta.XR.MRUtilityKit.SceneDecorator", "PoolManagerComponent/PoolDesc/PoolType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent/PoolDesc/PoolType
struct CORDL_TYPE PoolDesc_PoolManagerComponent_PoolType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PoolDesc_PoolManagerComponent_PoolType_Unwrapped
enum struct __PoolDesc_PoolManagerComponent_PoolType_Unwrapped : int32_t {
__E_CIRCULAR = static_cast<int32_t>(0x0),
__E_FIXED = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PoolDesc_PoolManagerComponent_PoolType_Unwrapped () const noexcept {
return static_cast<__PoolDesc_PoolManagerComponent_PoolType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PoolDesc_PoolManagerComponent_PoolType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PoolDesc_PoolManagerComponent_PoolType(int32_t  value__) noexcept;

/// @brief Field CIRCULAR value: I32(0)
static ::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType const CIRCULAR;

/// @brief Field FIXED value: I32(1)
static ::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType const FIXED;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25960};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
