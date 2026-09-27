#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabFreeTransformer_GrabPointDelta.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GrabFreeTransformer_GrabPointDelta)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct GrabFreeTransformer_GrabPointDelta;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GrabFreeTransformer_GrabPointDelta);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrabFreeTransformer_GrabPointDelta, "Oculus.Interaction", "GrabFreeTransformer/GrabPointDelta");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.GrabFreeTransformer/GrabPointDelta
struct CORDL_TYPE GrabFreeTransformer_GrabPointDelta {
public:
// Declarations
 __declspec(property(get=get_CentroidOffset, put=set_CentroidOffset)) ::UnityEngine::Vector3  CentroidOffset;

 __declspec(property(get=get_PrevCentroidOffset, put=set_PrevCentroidOffset)) ::UnityEngine::Vector3  PrevCentroidOffset;

 __declspec(property(get=get_PrevRotation, put=set_PrevRotation)) ::UnityEngine::Quaternion  PrevRotation;

 __declspec(property(get=get_Rotation, put=set_Rotation)) ::UnityEngine::Quaternion  Rotation;

/// @brief Method IsValidAxis, addr 0xa448ca0, size 0x30, virtual false, abstract: false, final false
inline bool IsValidAxis() ;

/// @brief Method UpdateData, addr 0xa448c3c, size 0x64, virtual false, abstract: false, final false
inline void UpdateData(::UnityEngine::Vector3  centroidOffset, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method .ctor, addr 0xa448c1c, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  centroidOffset, ::UnityEngine::Quaternion  rotation) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CentroidOffset, addr 0xa448eb8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CentroidOffset() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_PrevCentroidOffset, addr 0xa448ea0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_PrevCentroidOffset() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_PrevRotation, addr 0xa448ed0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_PrevRotation() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Rotation, addr 0xa448ee8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// [CompilerGenerated]
/// @brief Method set_CentroidOffset, addr 0xa448ec4, size 0xc, virtual false, abstract: false, final false
inline void set_CentroidOffset(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_PrevCentroidOffset, addr 0xa448eac, size 0xc, virtual false, abstract: false, final false
inline void set_PrevCentroidOffset(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_PrevRotation, addr 0xa448edc, size 0xc, virtual false, abstract: false, final false
inline void set_PrevRotation(::UnityEngine::Quaternion  value) ;

/// [CompilerGenerated]
/// @brief Method set_Rotation, addr 0xa448ef4, size 0xc, virtual false, abstract: false, final false
inline void set_Rotation(::UnityEngine::Quaternion  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GrabFreeTransformer_GrabPointDelta() ;

// Ctor Parameters [CppParam { name: "_PrevCentroidOffset_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CentroidOffset_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_PrevRotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Rotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr GrabFreeTransformer_GrabPointDelta(::UnityEngine::Vector3  _PrevCentroidOffset_k__BackingField, ::UnityEngine::Vector3  _CentroidOffset_k__BackingField, ::UnityEngine::Quaternion  _PrevRotation_k__BackingField, ::UnityEngine::Quaternion  _Rotation_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15814};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field _epsilon offset 0xffffffff size 0x4
static constexpr float_t  _epsilon{static_cast<float_t>(1e-6f)};

/// [CompilerGenerated]
/// @brief Field <PrevCentroidOffset>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _PrevCentroidOffset_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CentroidOffset>k__BackingField, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  _CentroidOffset_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PrevRotation>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  _PrevRotation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Rotation>k__BackingField, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Quaternion  _Rotation_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrabFreeTransformer_GrabPointDelta, _PrevCentroidOffset_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabFreeTransformer_GrabPointDelta, _CentroidOffset_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabFreeTransformer_GrabPointDelta, _PrevRotation_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabFreeTransformer_GrabPointDelta, _Rotation_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrabFreeTransformer_GrabPointDelta) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
