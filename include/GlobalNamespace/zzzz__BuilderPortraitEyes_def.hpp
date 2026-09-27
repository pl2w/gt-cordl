#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPortraitEyes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BuilderPortraitEyes)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPortraitEyes;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPortraitEyes*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPortraitEyes*, "", "BuilderPortraitEyes");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPortraitEyes
class CORDL_TYPE BuilderPortraitEyes : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field eyeCenter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeCenter, put=__cordl_internal_set_eyeCenter)) ::UnityW<::UnityEngine::Transform>  eyeCenter;

/// @brief Field eyes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyes, put=__cordl_internal_set_eyes)) ::UnityW<::UnityEngine::GameObject>  eyes;

/// @brief Field moveRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_moveRadius, put=__cordl_internal_set_moveRadius)) float_t  moveRadius;

/// @brief Field scale, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

static inline ::GlobalNamespace::BuilderPortraitEyes* New_ctor() ;

/// @brief Method OnDisable, addr 0x57b3b7c, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57b3b40, size 0x3c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x57b3bdc, size 0x314, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_eyeCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_eyeCenter() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_eyes() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_eyes() ;

constexpr float_t const& __cordl_internal_get_moveRadius() const;

constexpr float_t& __cordl_internal_get_moveRadius() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr void __cordl_internal_set_eyeCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_eyes(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_moveRadius(float_t  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

/// @brief Method .ctor, addr 0x57b3ef0, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPortraitEyes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPortraitEyes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPortraitEyes(BuilderPortraitEyes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPortraitEyes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPortraitEyes(BuilderPortraitEyes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1569};

/// [SerializeField]
/// @brief Field eyeCenter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___eyeCenter;

/// [SerializeField]
/// @brief Field eyes, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___eyes;

/// [SerializeField]
/// @brief Field moveRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___moveRadius;

/// @brief Field scale, offset: 0x34, size: 0x4, def value: None
 float_t  ___scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPortraitEyes, ___eyeCenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPortraitEyes, ___eyes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPortraitEyes, ___moveRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPortraitEyes, ___scale) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPortraitEyes) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
