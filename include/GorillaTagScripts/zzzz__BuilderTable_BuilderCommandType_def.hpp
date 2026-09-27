#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_BuilderCommandType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTable_BuilderCommandType)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTable_BuilderCommandType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTable_BuilderCommandType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTable_BuilderCommandType, "GorillaTagScripts", "BuilderTable/BuilderCommandType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderTable/BuilderCommandType
struct CORDL_TYPE BuilderTable_BuilderCommandType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderTable_BuilderCommandType_Unwrapped
enum struct __BuilderTable_BuilderCommandType_Unwrapped : int32_t {
__E_Create = static_cast<int32_t>(0x0),
__E_Place = static_cast<int32_t>(0x1),
__E_Grab = static_cast<int32_t>(0x2),
__E_Drop = static_cast<int32_t>(0x3),
__E_Remove = static_cast<int32_t>(0x4),
__E_Paint = static_cast<int32_t>(0x5),
__E_Recycle = static_cast<int32_t>(0x6),
__E_ClaimPlot = static_cast<int32_t>(0x7),
__E_FreePlot = static_cast<int32_t>(0x8),
__E_CreateArmShelf = static_cast<int32_t>(0x9),
__E_PlayerLeftRoom = static_cast<int32_t>(0xa),
__E_FunctionalStateChange = static_cast<int32_t>(0xb),
__E_SetSelection = static_cast<int32_t>(0xc),
__E_Repel = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderTable_BuilderCommandType_Unwrapped () const noexcept {
return static_cast<__BuilderTable_BuilderCommandType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderTable_BuilderCommandType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTable_BuilderCommandType(int32_t  value__) noexcept;

/// @brief Field ClaimPlot value: I32(7)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const ClaimPlot;

/// @brief Field Create value: I32(0)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const Create;

/// @brief Field CreateArmShelf value: I32(9)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const CreateArmShelf;

/// @brief Field Drop value: I32(3)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const Drop;

/// @brief Field FreePlot value: I32(8)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const FreePlot;

/// @brief Field FunctionalStateChange value: I32(11)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const FunctionalStateChange;

/// @brief Field Grab value: I32(2)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const Grab;

/// @brief Field Paint value: I32(5)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const Paint;

/// @brief Field Place value: I32(1)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const Place;

/// @brief Field PlayerLeftRoom value: I32(10)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const PlayerLeftRoom;

/// @brief Field Recycle value: I32(6)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const Recycle;

/// @brief Field Remove value: I32(4)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const Remove;

/// @brief Field Repel value: I32(13)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const Repel;

/// @brief Field SetSelection value: I32(12)
static ::GlobalNamespace::BuilderTable_BuilderCommandType const SetSelection;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3941};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommandType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTable_BuilderCommandType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
