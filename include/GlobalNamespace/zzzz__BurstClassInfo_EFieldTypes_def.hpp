#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstClassInfo_EFieldTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstClassInfo_EFieldTypes)
// Forward declare root types
namespace GlobalNamespace {
struct BurstClassInfo_EFieldTypes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstClassInfo_EFieldTypes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstClassInfo_EFieldTypes, "", "BurstClassInfo/EFieldTypes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BurstClassInfo/EFieldTypes
struct CORDL_TYPE BurstClassInfo_EFieldTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BurstClassInfo_EFieldTypes_Unwrapped
enum struct __BurstClassInfo_EFieldTypes_Unwrapped : int32_t {
__E_Float = static_cast<int32_t>(0x0),
__E_Int = static_cast<int32_t>(0x1),
__E_Double = static_cast<int32_t>(0x2),
__E_Bool = static_cast<int32_t>(0x3),
__E_String = static_cast<int32_t>(0x4),
__E_LightUserData = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BurstClassInfo_EFieldTypes_Unwrapped () const noexcept {
return static_cast<__BurstClassInfo_EFieldTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BurstClassInfo_EFieldTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BurstClassInfo_EFieldTypes(int32_t  value__) noexcept;

/// @brief Field Bool value: I32(3)
static ::GlobalNamespace::BurstClassInfo_EFieldTypes const Bool;

/// @brief Field Double value: I32(2)
static ::GlobalNamespace::BurstClassInfo_EFieldTypes const Double;

/// @brief Field Float value: I32(0)
static ::GlobalNamespace::BurstClassInfo_EFieldTypes const Float;

/// @brief Field Int value: I32(1)
static ::GlobalNamespace::BurstClassInfo_EFieldTypes const Int;

/// @brief Field LightUserData value: I32(5)
static ::GlobalNamespace::BurstClassInfo_EFieldTypes const LightUserData;

/// @brief Field String value: I32(4)
static ::GlobalNamespace::BurstClassInfo_EFieldTypes const String;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3203};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstClassInfo_EFieldTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BurstClassInfo_EFieldTypes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
