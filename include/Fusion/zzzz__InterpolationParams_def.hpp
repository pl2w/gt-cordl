#pragma once
// IWYU pragma private; include "Fusion/InterpolationParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Status_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(InterpolationParams)
// Forward declare root types
namespace Fusion {
struct InterpolationParams;
}
// Write type traits
MARK_VAL_T(::Fusion::InterpolationParams);
DEFINE_IL2CPP_CLASS(::Fusion::InterpolationParams, "Fusion", "InterpolationParams");
// Dependencies Fusion.Status, Fusion.Tick
namespace Fusion {
// Is value type: true
// CS Name: Fusion.InterpolationParams
struct CORDL_TYPE InterpolationParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InterpolationParams() ;

// Ctor Parameters [CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "From", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }, CppParam { name: "To", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }, CppParam { name: "Alpha", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "::Fusion::Status", modifiers: "", def_value: None, comment: None }]
constexpr InterpolationParams(double_t  Time, ::Fusion::Tick  From, ::Fusion::Tick  To, float_t  Alpha, ::Fusion::Status  Status) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19300};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Time, offset: 0x0, size: 0x8, def value: None
 double_t  Time;

/// @brief Field From, offset: 0x8, size: 0x4, def value: None
 ::Fusion::Tick  From;

/// @brief Field To, offset: 0xc, size: 0x4, def value: None
 ::Fusion::Tick  To;

/// @brief Field Alpha, offset: 0x10, size: 0x4, def value: None
 float_t  Alpha;

/// @brief Field Status, offset: 0x14, size: 0x4, def value: None
 ::Fusion::Status  Status;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::InterpolationParams, Time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolationParams, From) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolationParams, To) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolationParams, Alpha) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolationParams, Status) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Fusion::InterpolationParams) == 0x18, "Size mismatch!");

} // namespace end def Fusion
