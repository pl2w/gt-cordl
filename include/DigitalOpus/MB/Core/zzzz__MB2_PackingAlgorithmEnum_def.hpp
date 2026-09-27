#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_PackingAlgorithmEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB2_PackingAlgorithmEnum)
// Forward declare root types
namespace DigitalOpus::MB::Core {
struct MB2_PackingAlgorithmEnum;
}
// Write type traits
MARK_VAL_T(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum, "DigitalOpus.MB.Core", "MB2_PackingAlgorithmEnum");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum
struct CORDL_TYPE MB2_PackingAlgorithmEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB2_PackingAlgorithmEnum_Unwrapped
enum struct __MB2_PackingAlgorithmEnum_Unwrapped : int32_t {
__E_UnitysPackTextures = static_cast<int32_t>(0x0),
__E_MeshBakerTexturePacker = static_cast<int32_t>(0x1),
__E_MeshBakerTexturePacker_Fast = static_cast<int32_t>(0x2),
__E_MeshBakerTexturePacker_Horizontal = static_cast<int32_t>(0x3),
__E_MeshBakerTexturePacker_Vertical = static_cast<int32_t>(0x4),
__E_MeshBakerTexturePaker_Fast_V2_Beta = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB2_PackingAlgorithmEnum_Unwrapped () const noexcept {
return static_cast<__MB2_PackingAlgorithmEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB2_PackingAlgorithmEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB2_PackingAlgorithmEnum(int32_t  value__) noexcept;

/// @brief Field MeshBakerTexturePacker value: I32(1)
static ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum const MeshBakerTexturePacker;

/// @brief Field MeshBakerTexturePacker_Fast value: I32(2)
static ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum const MeshBakerTexturePacker_Fast;

/// @brief Field MeshBakerTexturePacker_Horizontal value: I32(3)
static ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum const MeshBakerTexturePacker_Horizontal;

/// @brief Field MeshBakerTexturePacker_Vertical value: I32(4)
static ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum const MeshBakerTexturePacker_Vertical;

/// @brief Field MeshBakerTexturePaker_Fast_V2_Beta value: I32(5)
static ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum const MeshBakerTexturePaker_Fast_V2_Beta;

/// @brief Field UnitysPackTextures value: I32(0)
static ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum const UnitysPackTextures;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22599};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum) == 0x4, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
