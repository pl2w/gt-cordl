#pragma once
// IWYU pragma private; include "GlobalNamespace/ScienceExperimentElementID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScienceExperimentElementID)
// Forward declare root types
namespace GlobalNamespace {
struct ScienceExperimentElementID;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScienceExperimentElementID);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentElementID, "", "ScienceExperimentElementID");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScienceExperimentElementID
struct CORDL_TYPE ScienceExperimentElementID {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScienceExperimentElementID_Unwrapped
enum struct __ScienceExperimentElementID_Unwrapped : int32_t {
__E_Platform1 = static_cast<int32_t>(0x0),
__E_Platform2 = static_cast<int32_t>(0x1),
__E_Platform3 = static_cast<int32_t>(0x2),
__E_Platform4 = static_cast<int32_t>(0x3),
__E_Platform5 = static_cast<int32_t>(0x4),
__E_LiquidMesh = static_cast<int32_t>(0x5),
__E_EntryChamberLiquidMesh = static_cast<int32_t>(0x6),
__E_EntryChamberBridgeQuad = static_cast<int32_t>(0x7),
__E_DrainBlocker = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScienceExperimentElementID_Unwrapped () const noexcept {
return static_cast<__ScienceExperimentElementID_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentElementID() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScienceExperimentElementID(int32_t  value__) noexcept;

/// @brief Field DrainBlocker value: I32(8)
static ::GlobalNamespace::ScienceExperimentElementID const DrainBlocker;

/// @brief Field EntryChamberBridgeQuad value: I32(7)
static ::GlobalNamespace::ScienceExperimentElementID const EntryChamberBridgeQuad;

/// @brief Field EntryChamberLiquidMesh value: I32(6)
static ::GlobalNamespace::ScienceExperimentElementID const EntryChamberLiquidMesh;

/// @brief Field LiquidMesh value: I32(5)
static ::GlobalNamespace::ScienceExperimentElementID const LiquidMesh;

/// @brief Field Platform1 value: I32(0)
static ::GlobalNamespace::ScienceExperimentElementID const Platform1;

/// @brief Field Platform2 value: I32(1)
static ::GlobalNamespace::ScienceExperimentElementID const Platform2;

/// @brief Field Platform3 value: I32(2)
static ::GlobalNamespace::ScienceExperimentElementID const Platform3;

/// @brief Field Platform4 value: I32(3)
static ::GlobalNamespace::ScienceExperimentElementID const Platform4;

/// @brief Field Platform5 value: I32(4)
static ::GlobalNamespace::ScienceExperimentElementID const Platform5;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2532};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentElementID, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentElementID) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
