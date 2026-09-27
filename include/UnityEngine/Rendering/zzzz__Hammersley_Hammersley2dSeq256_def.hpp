#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Hammersley_Hammersley2dSeq256.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__Hammersley_Hammersley2dSeq256__hammersley2dSeq256_e__FixedBuffer_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Hammersley_Hammersley2dSeq256)
namespace GlobalNamespace {
struct Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct Hammersley_Hammersley2dSeq256;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Hammersley_Hammersley2dSeq256);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Hammersley_Hammersley2dSeq256, "UnityEngine.Rendering", "Hammersley/Hammersley2dSeq256");
// [GenerateHLSL((UnityEngine.Rendering.PackingRules)0, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@04755ad51d99\\Runtime\\ShaderLibrary\\Sampling\\Hammersley.cs", needAccessors = false, generateCBuffer = true)]
// Dependencies UnityEngine.Rendering.Hammersley::Hammersley2dSeq256::<hammersley2dSeq256>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Hammersley/Hammersley2dSeq256
struct CORDL_TYPE Hammersley_Hammersley2dSeq256 {
public:
// Declarations
using _hammersley2dSeq256_e__FixedBuffer = ::GlobalNamespace::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr Hammersley_Hammersley2dSeq256() ;

// Ctor Parameters [CppParam { name: "hammersley2dSeq256", ty: "::GlobalNamespace::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr Hammersley_Hammersley2dSeq256(::GlobalNamespace::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer  hammersley2dSeq256) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16937};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1000};

/// [FixedBuffer(typeof(System.Single), 1024)]
/// [HLSLArray(256, typeof(UnityEngine.Vector4))]
/// @brief Field hammersley2dSeq256, offset: 0x0, size: 0x1000, def value: None
 ::GlobalNamespace::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer  hammersley2dSeq256;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Hammersley_Hammersley2dSeq256, hammersley2dSeq256) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Hammersley_Hammersley2dSeq256) == 0x1000, "Size mismatch!");

} // namespace end def GlobalNamespace
