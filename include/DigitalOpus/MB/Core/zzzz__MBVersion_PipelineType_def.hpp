#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MBVersion_PipelineType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MBVersion_PipelineType)
// Forward declare root types
namespace GlobalNamespace {
struct MBVersion_PipelineType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MBVersion_PipelineType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MBVersion_PipelineType, "DigitalOpus.MB.Core", "MBVersion/PipelineType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MBVersion/PipelineType
struct CORDL_TYPE MBVersion_PipelineType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MBVersion_PipelineType_Unwrapped
enum struct __MBVersion_PipelineType_Unwrapped : int32_t {
__E_Unsupported = static_cast<int32_t>(0x0),
__E_Default = static_cast<int32_t>(0x1),
__E_URP = static_cast<int32_t>(0x2),
__E_HDRP = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MBVersion_PipelineType_Unwrapped () const noexcept {
return static_cast<__MBVersion_PipelineType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MBVersion_PipelineType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MBVersion_PipelineType(int32_t  value__) noexcept;

/// @brief Field Default value: I32(1)
static ::GlobalNamespace::MBVersion_PipelineType const Default;

/// @brief Field HDRP value: I32(3)
static ::GlobalNamespace::MBVersion_PipelineType const HDRP;

/// @brief Field URP value: I32(2)
static ::GlobalNamespace::MBVersion_PipelineType const URP;

/// @brief Field Unsupported value: I32(0)
static ::GlobalNamespace::MBVersion_PipelineType const Unsupported;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22609};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MBVersion_PipelineType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MBVersion_PipelineType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
