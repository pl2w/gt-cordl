#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FrustumPlaneCuller_PlanePacket4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrustumPlaneCuller_PlanePacket4)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace GlobalNamespace {
struct FrustumPlaneCuller_PlanePacket4;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FrustumPlaneCuller_PlanePacket4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FrustumPlaneCuller_PlanePacket4, "UnityEngine.Rendering", "FrustumPlaneCuller/PlanePacket4");
// Dependencies Unity.Mathematics.float4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.FrustumPlaneCuller/PlanePacket4
struct CORDL_TYPE FrustumPlaneCuller_PlanePacket4 {
public:
// Declarations
/// @brief Method .ctor, addr 0xb1e9448, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, int32_t  offset, int32_t  limit) ;

// Ctor Parameters []
// @brief default ctor
constexpr FrustumPlaneCuller_PlanePacket4() ;

// Ctor Parameters [CppParam { name: "nx", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "ny", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "nz", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "d", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "nxAbs", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "nyAbs", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "nzAbs", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }]
constexpr FrustumPlaneCuller_PlanePacket4(::Unity::Mathematics::float4  nx, ::Unity::Mathematics::float4  ny, ::Unity::Mathematics::float4  nz, ::Unity::Mathematics::float4  d, ::Unity::Mathematics::float4  nxAbs, ::Unity::Mathematics::float4  nyAbs, ::Unity::Mathematics::float4  nzAbs) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26526};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field nx, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::float4  nx;

/// @brief Field ny, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::float4  ny;

/// @brief Field nz, offset: 0x20, size: 0x10, def value: None
 ::Unity::Mathematics::float4  nz;

/// @brief Field d, offset: 0x30, size: 0x10, def value: None
 ::Unity::Mathematics::float4  d;

/// @brief Field nxAbs, offset: 0x40, size: 0x10, def value: None
 ::Unity::Mathematics::float4  nxAbs;

/// @brief Field nyAbs, offset: 0x50, size: 0x10, def value: None
 ::Unity::Mathematics::float4  nyAbs;

/// @brief Field nzAbs, offset: 0x60, size: 0x10, def value: None
 ::Unity::Mathematics::float4  nzAbs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FrustumPlaneCuller_PlanePacket4, nx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrustumPlaneCuller_PlanePacket4, ny) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrustumPlaneCuller_PlanePacket4, nz) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrustumPlaneCuller_PlanePacket4, d) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrustumPlaneCuller_PlanePacket4, nxAbs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrustumPlaneCuller_PlanePacket4, nyAbs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrustumPlaneCuller_PlanePacket4, nzAbs) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FrustumPlaneCuller_PlanePacket4) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
