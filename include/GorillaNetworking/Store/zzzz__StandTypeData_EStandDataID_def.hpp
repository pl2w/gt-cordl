#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StandTypeData_EStandDataID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandTypeData_EStandDataID)
// Forward declare root types
namespace GlobalNamespace {
struct StandTypeData_EStandDataID;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StandTypeData_EStandDataID);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StandTypeData_EStandDataID, "GorillaNetworking.Store", "StandTypeData/EStandDataID");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.Store.StandTypeData/EStandDataID
struct CORDL_TYPE StandTypeData_EStandDataID {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StandTypeData_EStandDataID_Unwrapped
enum struct __StandTypeData_EStandDataID_Unwrapped : int32_t {
__E_departmentID = static_cast<int32_t>(0x0),
__E_displayID = static_cast<int32_t>(0x1),
__E_standID = static_cast<int32_t>(0x2),
__E_bustType = static_cast<int32_t>(0x3),
__E_playFabID = static_cast<int32_t>(0x4),
__E_Count = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StandTypeData_EStandDataID_Unwrapped () const noexcept {
return static_cast<__StandTypeData_EStandDataID_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StandTypeData_EStandDataID() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StandTypeData_EStandDataID(int32_t  value__) noexcept;

/// @brief Field Count value: I32(5)
static ::GlobalNamespace::StandTypeData_EStandDataID const Count;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field bustType value: I32(3)
static ::GlobalNamespace::StandTypeData_EStandDataID const bustType;

/// @brief Field departmentID value: I32(0)
static ::GlobalNamespace::StandTypeData_EStandDataID const departmentID;

/// @brief Field displayID value: I32(1)
static ::GlobalNamespace::StandTypeData_EStandDataID const displayID;

/// @brief Field playFabID value: I32(4)
static ::GlobalNamespace::StandTypeData_EStandDataID const playFabID;

/// @brief Field standID value: I32(2)
static ::GlobalNamespace::StandTypeData_EStandDataID const standID;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandTypeData_EStandDataID, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StandTypeData_EStandDataID) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
