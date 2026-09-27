#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/BoundsUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(BoundsUtils)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class BoundsUtils;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::BoundsUtils*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::BoundsUtils*, "Unity.XR.CoreUtils", "BoundsUtils");
// Dependencies System.Object, UnityEngine.Collider
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.BoundsUtils
class CORDL_TYPE BoundsUtils : public ::System::Object {
public:
// Declarations
/// @brief Field k_Renderers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Renderers, put=setStaticF_k_Renderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  k_Renderers;

/// @brief Field k_Transforms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Transforms, put=setStaticF_k_Transforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  k_Transforms;

/// @brief Method GetBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Collider*>)
static inline ::UnityEngine::Bounds GetBounds(::System::Collections::Generic::List_1<T>*  colliders) ;

/// @brief Method GetBounds, addr 0xb3ede08, size 0x364, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetBounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects) ;

/// @brief Method GetBounds, addr 0xb3eeac0, size 0x14c, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetBounds(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points) ;

/// @brief Method GetBounds, addr 0xb3ee748, size 0x378, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetBounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers) ;

/// @brief Method GetBounds, addr 0xb3ee16c, size 0x390, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetBounds(::UnityEngine::Transform*  transform) ;

/// @brief Method GetBounds, addr 0xb3ee4fc, size 0x24c, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetBounds(::ArrayW<::UnityEngine::Transform*>  transforms) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* getStaticF_k_Renderers() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* getStaticF_k_Transforms() ;

static inline void setStaticF_k_Renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

static inline void setStaticF_k_Transforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoundsUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoundsUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoundsUtils(BoundsUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoundsUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoundsUtils(BoundsUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30379};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::BoundsUtils) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
