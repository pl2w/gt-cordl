#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXSpaceableBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXSpaceableBinder_BinderSpace_def.hpp"
CORDL_MODULE_EXPORT(VFXSpaceableBinder)
namespace GlobalNamespace {
struct VFXSpaceableBinder_BinderSpace;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
struct VFXSpace;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXSpaceableBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXSpaceableBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXSpaceableBinder*, "UnityEngine.VFX.Utility", "VFXSpaceableBinder");
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase, UnityEngine.VFX.Utility.VFXSpaceableBinder::BinderSpace
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXSpaceableBinder
class CORDL_TYPE VFXSpaceableBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
// Declarations
using BinderSpace = ::GlobalNamespace::VFXSpaceableBinder_BinderSpace;

/// @brief Field Space, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Space, put=__cordl_internal_set_Space)) ::GlobalNamespace::VFXSpaceableBinder_BinderSpace  Space;

/// @brief Method ApplySpacePosition, addr 0xb3ea8d4, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ApplySpacePosition(::UnityEngine::VFX::VisualEffect*  component, ::UnityEngine::VFX::Utility::ExposedProperty*  targetProperty, ::UnityEngine::Vector3  sourceWorldPosition) ;

/// @brief Method ApplySpacePositionNormal, addr 0xb3ea4d4, size 0x14c, virtual false, abstract: false, final false
inline void ApplySpacePositionNormal(::UnityEngine::VFX::VisualEffect*  component, ::UnityEngine::VFX::Utility::ExposedProperty*  targetProperty, ::UnityEngine::Transform*  sourceTransform, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal) ;

/// @brief Method ApplySpaceTRS, addr 0xb3eb708, size 0x16c, virtual false, abstract: false, final false
inline void ApplySpaceTRS(::UnityEngine::VFX::VisualEffect*  component, ::UnityEngine::VFX::Utility::ExposedProperty*  targetProperty, ::UnityEngine::Transform*  sourceTransform, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  eulerAngles, ::by_ref<::UnityEngine::Vector3>  scale) ;

/// @brief Method ApplySpaceTS, addr 0xb3eb5f4, size 0x114, virtual false, abstract: false, final false
inline void ApplySpaceTS(::UnityEngine::VFX::VisualEffect*  component, ::UnityEngine::VFX::Utility::ExposedProperty*  targetProperty, ::UnityEngine::Transform*  sourceTransform, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  scale) ;

/// @brief Method GetTargetSpace, addr 0xb3eb578, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::VFX::VFXSpace GetTargetSpace(::UnityEngine::VFX::VisualEffect*  component, ::UnityEngine::VFX::Utility::ExposedProperty*  targetProperty) ;

static inline ::UnityEngine::VFX::Utility::VFXSpaceableBinder* New_ctor() ;

constexpr ::GlobalNamespace::VFXSpaceableBinder_BinderSpace const& __cordl_internal_get_Space() const;

constexpr ::GlobalNamespace::VFXSpaceableBinder_BinderSpace& __cordl_internal_get_Space() ;

constexpr void __cordl_internal_set_Space(::GlobalNamespace::VFXSpaceableBinder_BinderSpace  value) ;

/// @brief Method .ctor, addr 0xb3ea750, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VFXSpaceableBinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VFXSpaceableBinder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VFXSpaceableBinder(VFXSpaceableBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VFXSpaceableBinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VFXSpaceableBinder(VFXSpaceableBinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30078};

/// [SerializeField]
/// @brief Field Space, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::VFXSpaceableBinder_BinderSpace  ___Space;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXSpaceableBinder, ___Space) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXSpaceableBinder) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::VFX::Utility
