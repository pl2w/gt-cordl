#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/TriggerSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TriggerSource)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
struct TriggerSource;
}
// Write type traits
MARK_VAL_T(::GT_CustomMapSupportRuntime::TriggerSource);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::TriggerSource, "GT_CustomMapSupportRuntime", "TriggerSource");
// Dependencies 
namespace GT_CustomMapSupportRuntime {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.TriggerSource
struct CORDL_TYPE TriggerSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TriggerSource_Unwrapped
enum struct __TriggerSource_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Hands = static_cast<int32_t>(0x1),
__E_Head = static_cast<int32_t>(0x2),
__E_Body = static_cast<int32_t>(0x3),
__E_HeadOrBody = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TriggerSource_Unwrapped () const noexcept {
return static_cast<__TriggerSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TriggerSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TriggerSource(int32_t  value__) noexcept;

/// @brief Field Body value: I32(3)
static ::GT_CustomMapSupportRuntime::TriggerSource const Body;

/// @brief Field Hands value: I32(1)
static ::GT_CustomMapSupportRuntime::TriggerSource const Hands;

/// @brief Field Head value: I32(2)
static ::GT_CustomMapSupportRuntime::TriggerSource const Head;

/// @brief Field HeadOrBody value: I32(4)
static ::GT_CustomMapSupportRuntime::TriggerSource const HeadOrBody;

/// @brief Field None value: I32(0)
static ::GT_CustomMapSupportRuntime::TriggerSource const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30934};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::TriggerSource) == 0x4, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
