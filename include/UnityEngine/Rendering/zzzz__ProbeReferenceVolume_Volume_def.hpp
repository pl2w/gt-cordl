#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_Volume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeReferenceVolume_Volume)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProbeReferenceVolume_Volume;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeReferenceVolume_Volume);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeReferenceVolume_Volume, "UnityEngine.Rendering", "ProbeReferenceVolume/Volume");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/Volume
struct CORDL_TYPE ProbeReferenceVolume_Volume {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ProbeReferenceVolume_Volume>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::ProbeReferenceVolume_Volume>*() ;

/// @brief Method CalculateAABB, addr 0xb15fb08, size 0x108, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds CalculateAABB() ;

/// @brief Method CalculateCenterAndSize, addr 0xb15fc10, size 0x1b0, virtual false, abstract: false, final false
inline void CalculateCenterAndSize(::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  size) ;

/// @brief Method Equals, addr 0xb1600a8, size 0xf4, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::ProbeReferenceVolume_Volume  other) ;

/// @brief Method ToString, addr 0xb15fe58, size 0x250, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Transform, addr 0xb15fdc0, size 0x98, virtual false, abstract: false, final false
inline void Transform(::UnityEngine::Matrix4x4  trs) ;

/// @brief Method .ctor, addr 0xb15faa8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Bounds  bounds) ;

/// @brief Method .ctor, addr 0xb15fa14, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ProbeReferenceVolume_Volume  copy) ;

/// @brief Method .ctor, addr 0xb15f9d4, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  corner, ::UnityEngine::Vector3  X, ::UnityEngine::Vector3  Y, ::UnityEngine::Vector3  Z, float_t  maxSubdivision, float_t  minSubdivision) ;

/// @brief Method .ctor, addr 0xb15f8f0, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Matrix4x4  trs, float_t  maxSubdivision, float_t  minSubdivision) ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ProbeReferenceVolume_Volume>"
constexpr ::System::IEquatable_1<::GlobalNamespace::ProbeReferenceVolume_Volume>* i___System__IEquatable_1___GlobalNamespace__ProbeReferenceVolume_Volume_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProbeReferenceVolume_Volume() ;

// Ctor Parameters [CppParam { name: "corner", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "X", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Y", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Z", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeReferenceVolume_Volume(::UnityEngine::Vector3  corner, ::UnityEngine::Vector3  X, ::UnityEngine::Vector3  Y, ::UnityEngine::Vector3  Z, float_t  maxSubdivisionMultiplier, float_t  minSubdivisionMultiplier) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16818};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field corner, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  corner;

/// @brief Field X, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  X;

/// @brief Field Y, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  Y;

/// @brief Field Z, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  Z;

/// @brief Field maxSubdivisionMultiplier, offset: 0x30, size: 0x4, def value: None
 float_t  maxSubdivisionMultiplier;

/// @brief Field minSubdivisionMultiplier, offset: 0x34, size: 0x4, def value: None
 float_t  minSubdivisionMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_Volume, corner) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_Volume, X) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_Volume, Y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_Volume, Z) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_Volume, maxSubdivisionMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_Volume, minSubdivisionMultiplier) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeReferenceVolume_Volume) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
