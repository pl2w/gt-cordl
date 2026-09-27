#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/ICustomAnchorPrefabSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICustomAnchorPrefabSpawner)
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class ICustomAnchorPrefabSpawner;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner*, "Meta.XR.MRUtilityKit", "ICustomAnchorPrefabSpawner");
// Dependencies 
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.ICustomAnchorPrefabSpawner
class CORDL_TYPE ICustomAnchorPrefabSpawner {
public:
// Declarations
/// @brief Method CustomPrefabAlignment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 CustomPrefabAlignment(::UnityEngine::Rect  anchorPlaneRect, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds) ;

/// @brief Method CustomPrefabAlignment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 CustomPrefabAlignment(::UnityEngine::Bounds  anchorVolumeBounds, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds) ;

/// @brief Method CustomPrefabScaling, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector2 CustomPrefabScaling(::UnityEngine::Vector2  localScale) ;

/// @brief Method CustomPrefabScaling, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 CustomPrefabScaling(::UnityEngine::Vector3  localScale) ;

/// @brief Method CustomPrefabSelection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::GameObject> CustomPrefabSelection(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  prefabs) ;

// Ctor Parameters [CppParam { name: "", ty: "ICustomAnchorPrefabSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICustomAnchorPrefabSpawner(ICustomAnchorPrefabSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25852};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::XR::MRUtilityKit
