#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SplineComponent)
namespace GlobalNamespace {
struct SplineComponent_AlignAxis;
}
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineComponent;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineComponent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineComponent*, "UnityEngine.Splines", "SplineComponent");
// Dependencies Unity.Mathematics.float3, UnityEngine.MonoBehaviour
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineComponent
class CORDL_TYPE SplineComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AlignAxis = ::GlobalNamespace::SplineComponent_AlignAxis;

/// @brief Field m_AlignAxisToVector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AlignAxisToVector, put=__cordl_internal_set_m_AlignAxisToVector)) ::ArrayW<::Unity::Mathematics::float3>  m_AlignAxisToVector;

/// @brief Method GetAxis, addr 0xb31ad3c, size 0x38, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 GetAxis(::GlobalNamespace::SplineComponent_AlignAxis  axis) ;

static inline ::UnityEngine::Splines::SplineComponent* New_ctor() ;

constexpr ::ArrayW<::Unity::Mathematics::float3> const& __cordl_internal_get_m_AlignAxisToVector() const;

constexpr ::ArrayW<::Unity::Mathematics::float3>& __cordl_internal_get_m_AlignAxisToVector() ;

constexpr void __cordl_internal_set_m_AlignAxisToVector(::ArrayW<::Unity::Mathematics::float3>  value) ;

/// @brief Method .ctor, addr 0xb31ada8, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineComponent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineComponent(SplineComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineComponent(SplineComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27953};

/// @brief Field m_AlignAxisToVector, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Unity::Mathematics::float3>  ___m_AlignAxisToVector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineComponent, ___m_AlignAxisToVector) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineComponent) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Splines
