#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/GizmoHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GizmoHelpers)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class GizmoHelpers;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*, "UnityEngine.XR.Interaction.Toolkit", "GizmoHelpers");
// Dependencies System.Object, UnityEngine.Color
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.GizmoHelpers
class CORDL_TYPE GizmoHelpers : public ::System::Object {
public:
// Declarations
/// @brief Field s_AxisMapping, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_AxisMapping, put=setStaticF_s_AxisMapping)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*  s_AxisMapping;

/// @brief Field s_XAxisColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_XAxisColor, put=setStaticF_s_XAxisColor)) ::UnityEngine::Color  s_XAxisColor;

/// @brief Field s_YAxisColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_YAxisColor, put=setStaticF_s_YAxisColor)) ::UnityEngine::Color  s_YAxisColor;

/// @brief Field s_ZAxisColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_ZAxisColor, put=setStaticF_s_ZAxisColor)) ::UnityEngine::Color  s_ZAxisColor;

/// @brief Method DrawAxisArrows, addr 0xb41ad60, size 0x14c, virtual false, abstract: false, final false
static inline void DrawAxisArrows(::UnityEngine::Transform*  transform, float_t  size) ;

/// @brief Method DrawCapsule, addr 0xb41aeac, size 0x4, virtual false, abstract: false, final false
static inline void DrawCapsule(::UnityEngine::Vector3  center, float_t  height, float_t  radius, ::UnityEngine::Vector3  axis, ::UnityEngine::Color  color) ;

/// @brief Method DrawWireCubeOriented, addr 0xb41a678, size 0x6e8, virtual false, abstract: false, final false
static inline void DrawWireCubeOriented(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  size) ;

/// @brief Method DrawWirePlaneOriented, addr 0xb41a3e0, size 0x298, virtual false, abstract: false, final false
static inline void DrawWirePlaneOriented(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  size) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>* getStaticF_s_AxisMapping() ;

static inline ::UnityEngine::Color getStaticF_s_XAxisColor() ;

static inline ::UnityEngine::Color getStaticF_s_YAxisColor() ;

static inline ::UnityEngine::Color getStaticF_s_ZAxisColor() ;

static inline void setStaticF_s_AxisMapping(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*  value) ;

static inline void setStaticF_s_XAxisColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_YAxisColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_ZAxisColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GizmoHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GizmoHelpers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GizmoHelpers(GizmoHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GizmoHelpers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GizmoHelpers(GizmoHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11128};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
