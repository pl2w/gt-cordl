#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRRayInteractor_SamplePoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(XRRayInteractor_SamplePoint)
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRRayInteractor_SamplePoint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRRayInteractor_SamplePoint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRRayInteractor_SamplePoint, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRRayInteractor/SamplePoint");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/SamplePoint
struct CORDL_TYPE XRRayInteractor_SamplePoint {
public:
// Declarations
 __declspec(property(get=get_parameter, put=set_parameter)) float_t  parameter;

 __declspec(property(get=get_position, put=set_position)) ::Unity::Mathematics::float3  position;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_parameter, addr 0xb480760, size 0x8, virtual false, abstract: false, final false
inline float_t get_parameter() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_position, addr 0xb480748, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_position() ;

/// [CompilerGenerated]
/// @brief Method set_parameter, addr 0xb480768, size 0x8, virtual false, abstract: false, final false
inline void set_parameter(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_position, addr 0xb480754, size 0xc, virtual false, abstract: false, final false
inline void set_position(::Unity::Mathematics::float3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr XRRayInteractor_SamplePoint() ;

// Ctor Parameters [CppParam { name: "_position_k__BackingField", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_parameter_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr XRRayInteractor_SamplePoint(::Unity::Mathematics::float3  _position_k__BackingField, float_t  _parameter_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11465};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <position>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  _position_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <parameter>k__BackingField, offset: 0xc, size: 0x4, def value: None
 float_t  _parameter_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRRayInteractor_SamplePoint, _position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRRayInteractor_SamplePoint, _parameter_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRRayInteractor_SamplePoint) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
