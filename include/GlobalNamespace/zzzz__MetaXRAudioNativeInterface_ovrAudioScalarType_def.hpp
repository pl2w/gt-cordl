#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioNativeInterface_ovrAudioScalarType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAudioNativeInterface_ovrAudioScalarType)
// Forward declare root types
namespace GlobalNamespace {
struct MetaXRAudioNativeInterface_ovrAudioScalarType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType, "", "MetaXRAudioNativeInterface/ovrAudioScalarType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MetaXRAudioNativeInterface/ovrAudioScalarType
struct CORDL_TYPE MetaXRAudioNativeInterface_ovrAudioScalarType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __MetaXRAudioNativeInterface_ovrAudioScalarType_Unwrapped
enum struct __MetaXRAudioNativeInterface_ovrAudioScalarType_Unwrapped : uint32_t {
__E_Int8 = static_cast<uint32_t>(0x0u),
__E_UInt8 = static_cast<uint32_t>(0x1u),
__E_Int16 = static_cast<uint32_t>(0x2u),
__E_UInt16 = static_cast<uint32_t>(0x3u),
__E_Int32 = static_cast<uint32_t>(0x4u),
__E_UInt32 = static_cast<uint32_t>(0x5u),
__E_Int64 = static_cast<uint32_t>(0x6u),
__E_UInt64 = static_cast<uint32_t>(0x7u),
__E_Float16 = static_cast<uint32_t>(0x8u),
__E_Float32 = static_cast<uint32_t>(0x9u),
__E_Float64 = static_cast<uint32_t>(0xau),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MetaXRAudioNativeInterface_ovrAudioScalarType_Unwrapped () const noexcept {
return static_cast<__MetaXRAudioNativeInterface_ovrAudioScalarType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioNativeInterface_ovrAudioScalarType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr MetaXRAudioNativeInterface_ovrAudioScalarType(uint32_t  value__) noexcept;

/// @brief Field Float16 value: U32(8)
static ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType const Float16;

/// @brief Field Float32 value: U32(9)
static ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType const Float32;

/// @brief Field Float64 value: U32(10)
static ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType const Float64;

/// @brief Field Int16 value: U32(2)
static ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType const Int16;

/// @brief Field Int32 value: U32(4)
static ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType const Int32;

/// @brief Field Int64 value: U32(6)
static ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType const Int64;

/// @brief Field Int8 value: U32(0)
static ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType const Int8;

/// @brief Field UInt16 value: U32(3)
static ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType const UInt16;

/// @brief Field UInt32 value: U32(5)
static ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType const UInt32;

/// @brief Field UInt64 value: U32(7)
static ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType const UInt64;

/// @brief Field UInt8 value: U32(1)
static ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType const UInt8;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29945};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
