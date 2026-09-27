#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrusionShapes/SplineShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/ExtrusionShapes/zzzz__SplineShape_Axis_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineShape)
namespace GlobalNamespace {
struct SplineShape_Axis;
}
namespace Unity::Mathematics {
struct float2;
}
namespace UnityEngine::Splines {
class IExtrudeShape;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
class Spline;
}
// Forward declare root types
namespace UnityEngine::Splines::ExtrusionShapes {
class SplineShape;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::ExtrusionShapes::SplineShape*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::ExtrusionShapes::SplineShape*, "UnityEngine.Splines.ExtrusionShapes", "SplineShape");
// Dependencies System.Object, UnityEngine.Splines.ExtrusionShapes.SplineShape::Axis
namespace UnityEngine::Splines::ExtrusionShapes {
// Is value type: false
// CS Name: UnityEngine.Splines.ExtrusionShapes.SplineShape
class CORDL_TYPE SplineShape : public ::System::Object {
public:
// Declarations
using Axis = ::GlobalNamespace::SplineShape_Axis;

 __declspec(property(get=get_SideCount, put=set_SideCount)) int32_t  SideCount;

 __declspec(property(get=get_Spline)) ::UnityEngine::Splines::Spline*  Spline;

 __declspec(property(get=get_SplineContainer, put=set_SplineContainer)) ::UnityW<::UnityEngine::Splines::SplineContainer>  SplineContainer;

 __declspec(property(get=get_SplineIndex, put=set_SplineIndex)) int32_t  SplineIndex;

/// @brief Field m_Axis, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Axis, put=__cordl_internal_set_m_Axis)) ::GlobalNamespace::SplineShape_Axis  m_Axis;

/// @brief Field m_SideCount, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SideCount, put=__cordl_internal_set_m_SideCount)) int32_t  m_SideCount;

/// @brief Field m_SplineIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SplineIndex, put=__cordl_internal_set_m_SplineIndex)) int32_t  m_SplineIndex;

/// @brief Field m_Template, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Template, put=__cordl_internal_set_m_Template)) ::UnityW<::UnityEngine::Splines::SplineContainer>  m_Template;

/// @brief Convert operator to "::UnityEngine::Splines::IExtrudeShape"
constexpr operator  ::UnityEngine::Splines::IExtrudeShape*() noexcept;

/// @brief Method GetPosition, addr 0xb32eca0, size 0x48c, virtual true, abstract: false, final true
inline ::Unity::Mathematics::float2 GetPosition(float_t  t, int32_t  index) ;

static inline ::UnityEngine::Splines::ExtrusionShapes::SplineShape* New_ctor() ;

constexpr ::GlobalNamespace::SplineShape_Axis const& __cordl_internal_get_m_Axis() const;

constexpr ::GlobalNamespace::SplineShape_Axis& __cordl_internal_get_m_Axis() ;

constexpr int32_t const& __cordl_internal_get_m_SideCount() const;

constexpr int32_t& __cordl_internal_get_m_SideCount() ;

constexpr int32_t const& __cordl_internal_get_m_SplineIndex() const;

constexpr int32_t& __cordl_internal_get_m_SplineIndex() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_m_Template() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_m_Template() ;

constexpr void __cordl_internal_set_m_Axis(::GlobalNamespace::SplineShape_Axis  value) ;

constexpr void __cordl_internal_set_m_SideCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_SplineIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_Template(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

/// @brief Method .ctor, addr 0xb32e790, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SideCount, addr 0xb32eb50, size 0x8, virtual true, abstract: false, final true
inline int32_t get_SideCount() ;

/// @brief Method get_Spline, addr 0xb32eb84, size 0x11c, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::Spline* get_Spline() ;

/// @brief Method get_SplineContainer, addr 0xb32eb60, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_SplineContainer() ;

/// @brief Method get_SplineIndex, addr 0xb32eb70, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SplineIndex() ;

/// @brief Convert to "::UnityEngine::Splines::IExtrudeShape"
constexpr ::UnityEngine::Splines::IExtrudeShape* i___UnityEngine__Splines__IExtrudeShape() noexcept;

/// @brief Method set_SideCount, addr 0xb32eb58, size 0x8, virtual false, abstract: false, final false
inline void set_SideCount(int32_t  value) ;

/// @brief Method set_SplineContainer, addr 0xb32eb68, size 0x8, virtual false, abstract: false, final false
inline void set_SplineContainer(::UnityEngine::Splines::SplineContainer*  value) ;

/// @brief Method set_SplineIndex, addr 0xb32eb78, size 0xc, virtual false, abstract: false, final false
inline void set_SplineIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineShape() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineShape", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineShape(SplineShape && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineShape", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineShape(SplineShape const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28025};

/// [SerializeField]
/// @brief Field m_Template, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___m_Template;

/// [SerializeField]
/// [SplineIndex("m_Template")]
/// @brief Field m_SplineIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_SplineIndex;

/// [SerializeField]
/// [Min(2)]
/// @brief Field m_SideCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_SideCount;

/// [SerializeField]
/// [Tooltip("The axis of the template spline to be used when winding the vertices along the extruded mesh.")]
/// @brief Field m_Axis, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SplineShape_Axis  ___m_Axis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::ExtrusionShapes::SplineShape, ___m_Template) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::ExtrusionShapes::SplineShape, ___m_SplineIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::ExtrusionShapes::SplineShape, ___m_SideCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::ExtrusionShapes::SplineShape, ___m_Axis) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::ExtrusionShapes::SplineShape) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Splines::ExtrusionShapes
