#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_PersistData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_PersistData)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_PersistData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_PersistData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_PersistData, "Drawing", "CommandBuilder/PersistData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/PersistData
struct CORDL_TYPE CommandBuilder_PersistData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_PersistData() ;

// Ctor Parameters [CppParam { name: "endTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_PersistData(float_t  endTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27704};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field endTime, offset: 0x0, size: 0x4, def value: None
 float_t  endTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_PersistData, endTime) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_PersistData) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
