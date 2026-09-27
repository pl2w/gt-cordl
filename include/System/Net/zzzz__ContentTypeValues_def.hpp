#pragma once
// IWYU pragma private; include "System/Net/ContentTypeValues.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentTypeValues)
// Forward declare root types
namespace System::Net {
struct ContentTypeValues;
}
// Write type traits
MARK_VAL_T(::System::Net::ContentTypeValues);
DEFINE_IL2CPP_CLASS(::System::Net::ContentTypeValues, "System.Net", "ContentTypeValues");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.ContentTypeValues
struct CORDL_TYPE ContentTypeValues {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContentTypeValues_Unwrapped
enum struct __ContentTypeValues_Unwrapped : int32_t {
__E_ChangeCipherSpec = static_cast<int32_t>(0x14),
__E_Alert = static_cast<int32_t>(0x15),
__E_HandShake = static_cast<int32_t>(0x16),
__E_AppData = static_cast<int32_t>(0x17),
__E_Unrecognized = static_cast<int32_t>(0xff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContentTypeValues_Unwrapped () const noexcept {
return static_cast<__ContentTypeValues_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContentTypeValues() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContentTypeValues(int32_t  value__) noexcept;

/// @brief Field Alert value: I32(21)
static ::System::Net::ContentTypeValues const Alert;

/// @brief Field AppData value: I32(23)
static ::System::Net::ContentTypeValues const AppData;

/// @brief Field ChangeCipherSpec value: I32(20)
static ::System::Net::ContentTypeValues const ChangeCipherSpec;

/// @brief Field HandShake value: I32(22)
static ::System::Net::ContentTypeValues const HandShake;

/// @brief Field Unrecognized value: I32(255)
static ::System::Net::ContentTypeValues const Unrecognized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10517};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ContentTypeValues, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::ContentTypeValues) == 0x4, "Size mismatch!");

} // namespace end def System::Net
