#pragma once
// IWYU pragma private; include "GlobalNamespace/GizmoUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GizmoUtils)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GizmoUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GizmoUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GizmoUtils*, "", "GizmoUtils");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GizmoUtils
class CORDL_TYPE GizmoUtils : public ::System::Object {
public:
// Declarations
/// @brief Field gColliderToColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gColliderToColor, put=setStaticF_gColliderToColor)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Color>*  gColliderToColor;

/// [Extension]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method DrawGizmo, addr 0x5b07c84, size 0x650, virtual false, abstract: false, final false
static inline void DrawGizmo(::UnityEngine::Collider*  c, ::UnityEngine::Color  color) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method DrawWireCubeTRS, addr 0x5b082d4, size 0x4, virtual false, abstract: false, final false
static inline void DrawWireCubeTRS(::UnityEngine::Vector3  t, ::UnityEngine::Quaternion  r, ::UnityEngine::Vector3  s) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Color>* getStaticF_gColliderToColor() ;

static inline void setStaticF_gColliderToColor(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Color>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GizmoUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GizmoUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GizmoUtils(GizmoUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GizmoUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GizmoUtils(GizmoUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3502};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GizmoUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
