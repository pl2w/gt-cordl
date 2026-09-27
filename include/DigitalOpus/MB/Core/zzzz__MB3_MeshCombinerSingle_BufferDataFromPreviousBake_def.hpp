#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_BufferDataFromPreviousBake.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshCombinerSingle_BufferDataFromPreviousBake)
// Forward declare root types
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_BufferDataFromPreviousBake;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/BufferDataFromPreviousBake");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/BufferDataFromPreviousBake
struct CORDL_TYPE MB3_MeshCombinerSingle_BufferDataFromPreviousBake {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_BufferDataFromPreviousBake() ;

// Ctor Parameters [CppParam { name: "numVertsBaked", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshVerticesShift", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshVerticiesWereShifted", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr MB3_MeshCombinerSingle_BufferDataFromPreviousBake(int32_t  numVertsBaked, ::UnityEngine::Vector3  meshVerticesShift, bool  meshVerticiesWereShifted) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22631};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field numVertsBaked, offset: 0x0, size: 0x4, def value: None
 int32_t  numVertsBaked;

/// @brief Field meshVerticesShift, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  meshVerticesShift;

/// @brief Field meshVerticiesWereShifted, offset: 0x10, size: 0x1, def value: None
 bool  meshVerticiesWereShifted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake, numVertsBaked) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake, meshVerticesShift) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake, meshVerticiesWereShifted) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
