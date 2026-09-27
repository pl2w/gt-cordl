#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AttackType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttackType)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
struct AttackType;
}
// Write type traits
MARK_VAL_T(::GT_CustomMapSupportRuntime::AttackType);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::AttackType, "GT_CustomMapSupportRuntime", "AttackType");
// Dependencies 
namespace GT_CustomMapSupportRuntime {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.AttackType
struct CORDL_TYPE AttackType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AttackType_Unwrapped
enum struct __AttackType_Unwrapped : int32_t {
__E_Tag = static_cast<int32_t>(0x0),
__E_UseGT = static_cast<int32_t>(0x1),
__E_UseLuau = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AttackType_Unwrapped () const noexcept {
return static_cast<__AttackType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AttackType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AttackType(int32_t  value__) noexcept;

/// @brief Field Tag value: I32(0)
static ::GT_CustomMapSupportRuntime::AttackType const Tag;

/// @brief Field UseGT value: I32(1)
static ::GT_CustomMapSupportRuntime::AttackType const UseGT;

/// @brief Field UseLuau value: I32(2)
static ::GT_CustomMapSupportRuntime::AttackType const UseLuau;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30873};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::AttackType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::AttackType) == 0x4, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
