#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/SurfaceHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SurfaceHit)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Surfaces::SurfaceHit);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::SurfaceHit, "Oculus.Interaction.Surfaces", "SurfaceHit");
// Dependencies UnityEngine.Vector3
namespace Oculus::Interaction::Surfaces {
// Is value type: true
// CS Name: Oculus.Interaction.Surfaces.SurfaceHit
struct CORDL_TYPE SurfaceHit {
public:
// Declarations
 __declspec(property(get=get_Distance, put=set_Distance)) float_t  Distance;

 __declspec(property(get=get_Normal, put=set_Normal)) ::UnityEngine::Vector3  Normal;

 __declspec(property(get=get_Point, put=set_Point)) ::UnityEngine::Vector3  Point;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Distance, addr 0xa4b6dd8, size 0x8, virtual false, abstract: false, final false
inline float_t get_Distance() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Normal, addr 0xa4b6dc0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Normal() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Point, addr 0xa4b6da8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Point() ;

/// [CompilerGenerated]
/// @brief Method set_Distance, addr 0xa4b6de0, size 0x8, virtual false, abstract: false, final false
inline void set_Distance(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Normal, addr 0xa4b6dcc, size 0xc, virtual false, abstract: false, final false
inline void set_Normal(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_Point, addr 0xa4b6db4, size 0xc, virtual false, abstract: false, final false
inline void set_Point(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SurfaceHit() ;

// Ctor Parameters [CppParam { name: "_Point_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Normal_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SurfaceHit(::UnityEngine::Vector3  _Point_k__BackingField, ::UnityEngine::Vector3  _Normal_k__BackingField, float_t  _Distance_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16228};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// [CompilerGenerated]
/// @brief Field <Point>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _Point_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Normal>k__BackingField, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  _Normal_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Distance>k__BackingField, offset: 0x18, size: 0x4, def value: None
 float_t  _Distance_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::SurfaceHit, _Point_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::SurfaceHit, _Normal_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::SurfaceHit, _Distance_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::SurfaceHit) == 0x1c, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces
