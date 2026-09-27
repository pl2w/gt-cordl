#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformReset_OriginalGameObjectTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TransformReset_OriginalGameObjectTransform)
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
namespace GlobalNamespace {
struct TransformReset_OriginalGameObjectTransform;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TransformReset_OriginalGameObjectTransform);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformReset_OriginalGameObjectTransform, "", "TransformReset/OriginalGameObjectTransform");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: TransformReset/OriginalGameObjectTransform
struct CORDL_TYPE TransformReset_OriginalGameObjectTransform {
public:
// Declarations
 __declspec(property(get=get_thisPosition, put=set_thisPosition)) ::UnityEngine::Vector3  thisPosition;

 __declspec(property(get=get_thisRotation, put=set_thisRotation)) ::UnityEngine::Quaternion  thisRotation;

 __declspec(property(get=get_thisTransform, put=set_thisTransform)) ::UnityW<::UnityEngine::Transform>  thisTransform;

/// @brief Method .ctor, addr 0x5745de8, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  constructionTransform) ;

/// @brief Method get_thisPosition, addr 0x5745f94, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_thisPosition() ;

/// @brief Method get_thisRotation, addr 0x5745fac, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_thisRotation() ;

/// @brief Method get_thisTransform, addr 0x5745f84, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_thisTransform() ;

/// @brief Method set_thisPosition, addr 0x5745fa0, size 0xc, virtual false, abstract: false, final false
inline void set_thisPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_thisRotation, addr 0x5745fb8, size 0xc, virtual false, abstract: false, final false
inline void set_thisRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_thisTransform, addr 0x5745f8c, size 0x8, virtual false, abstract: false, final false
inline void set_thisTransform(::UnityEngine::Transform*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformReset_OriginalGameObjectTransform() ;

// Ctor Parameters [CppParam { name: "_thisTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_thisPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_thisRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr TransformReset_OriginalGameObjectTransform(::UnityW<::UnityEngine::Transform>  _thisTransform, ::UnityEngine::Vector3  _thisPosition, ::UnityEngine::Quaternion  _thisRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1267};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _thisTransform, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  _thisTransform;

/// @brief Field _thisPosition, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  _thisPosition;

/// @brief Field _thisRotation, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Quaternion  _thisRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformReset_OriginalGameObjectTransform, _thisTransform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformReset_OriginalGameObjectTransform, _thisPosition) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformReset_OriginalGameObjectTransform, _thisRotation) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformReset_OriginalGameObjectTransform) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
