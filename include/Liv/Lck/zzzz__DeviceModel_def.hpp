#pragma once
// IWYU pragma private; include "Liv/Lck/DeviceModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceModel)
// Forward declare root types
namespace Liv::Lck {
struct DeviceModel;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::DeviceModel);
DEFINE_IL2CPP_CLASS(::Liv::Lck::DeviceModel, "Liv.Lck", "DeviceModel");
// Dependencies 
namespace Liv::Lck {
// Is value type: true
// CS Name: Liv.Lck.DeviceModel
struct CORDL_TYPE DeviceModel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeviceModel_Unwrapped
enum struct __DeviceModel_Unwrapped : int32_t {
__E_Quest2 = static_cast<int32_t>(0x0),
__E_Quest3 = static_cast<int32_t>(0x1),
__E_Quest3s = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeviceModel_Unwrapped () const noexcept {
return static_cast<__DeviceModel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeviceModel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DeviceModel(int32_t  value__) noexcept;

/// @brief Field Quest2 value: I32(0)
static ::Liv::Lck::DeviceModel const Quest2;

/// @brief Field Quest3 value: I32(1)
static ::Liv::Lck::DeviceModel const Quest3;

/// @brief Field Quest3s value: I32(3)
static ::Liv::Lck::DeviceModel const Quest3s;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24782};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::DeviceModel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::DeviceModel) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck
