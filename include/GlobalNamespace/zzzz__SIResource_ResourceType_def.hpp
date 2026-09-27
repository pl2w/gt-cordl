#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResource_ResourceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIResource_ResourceType)
// Forward declare root types
namespace GlobalNamespace {
struct SIResource_ResourceType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIResource_ResourceType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResource_ResourceType, "", "SIResource/ResourceType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIResource/ResourceType
struct CORDL_TYPE SIResource_ResourceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIResource_ResourceType_Unwrapped
enum struct __SIResource_ResourceType_Unwrapped : int32_t {
__E_TechPoint = static_cast<int32_t>(0x0),
__E_StrangeWood = static_cast<int32_t>(0x1),
__E_WeirdGear = static_cast<int32_t>(0x2),
__E_VibratingSpring = static_cast<int32_t>(0x3),
__E_BouncySand = static_cast<int32_t>(0x4),
__E_FloppyMetal = static_cast<int32_t>(0x5),
__E_Count = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIResource_ResourceType_Unwrapped () const noexcept {
return static_cast<__SIResource_ResourceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIResource_ResourceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIResource_ResourceType(int32_t  value__) noexcept;

/// @brief Field BouncySand value: I32(4)
static ::GlobalNamespace::SIResource_ResourceType const BouncySand;

/// @brief Field Count value: I32(6)
static ::GlobalNamespace::SIResource_ResourceType const Count;

/// @brief Field FloppyMetal value: I32(5)
static ::GlobalNamespace::SIResource_ResourceType const FloppyMetal;

/// @brief Field StrangeWood value: I32(1)
static ::GlobalNamespace::SIResource_ResourceType const StrangeWood;

/// @brief Field TechPoint value: I32(0)
static ::GlobalNamespace::SIResource_ResourceType const TechPoint;

/// @brief Field VibratingSpring value: I32(3)
static ::GlobalNamespace::SIResource_ResourceType const VibratingSpring;

/// @brief Field WeirdGear value: I32(2)
static ::GlobalNamespace::SIResource_ResourceType const WeirdGear;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{340};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResource_ResourceType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResource_ResourceType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
