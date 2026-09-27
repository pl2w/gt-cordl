#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectBaker_TransformPath__Indices.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObjectBaker_TransformPath__Indices__Value_e__FixedBuffer_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkObjectBaker_TransformPath__Indices)
namespace GlobalNamespace {
struct _Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct TransformPath_NetworkObjectBaker__Indices;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TransformPath_NetworkObjectBaker__Indices);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformPath_NetworkObjectBaker__Indices, "Fusion", "NetworkObjectBaker/TransformPath/_Indices");
// Dependencies Fusion.NetworkObjectBaker::TransformPath::_Indices::<Value>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkObjectBaker/TransformPath/_Indices
struct CORDL_TYPE TransformPath_NetworkObjectBaker__Indices {
public:
// Declarations
using _Value_e__FixedBuffer = ::GlobalNamespace::_Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr TransformPath_NetworkObjectBaker__Indices() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::GlobalNamespace::_Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr TransformPath_NetworkObjectBaker__Indices(::GlobalNamespace::_Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23441};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// [FixedBuffer(typeof(System.UInt16), 10)]
/// @brief Field Value, offset: 0x0, size: 0x14, def value: None
 ::GlobalNamespace::_Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformPath_NetworkObjectBaker__Indices, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformPath_NetworkObjectBaker__Indices) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
