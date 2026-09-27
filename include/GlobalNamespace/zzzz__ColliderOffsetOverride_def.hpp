#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderOffsetOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColliderOffsetOverride)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class ColliderOffsetOverride;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColliderOffsetOverride*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColliderOffsetOverride*, "", "ColliderOffsetOverride");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColliderOffsetOverride
class CORDL_TYPE ColliderOffsetOverride : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field autoSearch, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoSearch, put=__cordl_internal_set_autoSearch)) bool  autoSearch;

/// @brief Field colliders, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field targetScale, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetScale, put=__cordl_internal_set_targetScale)) float_t  targetScale;

/// @brief Method AutoDisabled, addr 0x55ee8dc, size 0xc, virtual false, abstract: false, final false
inline void AutoDisabled() ;

/// @brief Method AutoEnabled, addr 0x55ee8e8, size 0x8, virtual false, abstract: false, final false
inline void AutoEnabled() ;

/// @brief Method Awake, addr 0x55ee2c8, size 0x1a4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindColliders, addr 0x55ee46c, size 0x238, virtual false, abstract: false, final false
inline void FindColliders() ;

/// @brief Method FindCollidersRecursively, addr 0x55ee6a4, size 0x238, virtual false, abstract: false, final false
inline void FindCollidersRecursively() ;

static inline ::GlobalNamespace::ColliderOffsetOverride* New_ctor() ;

constexpr bool const& __cordl_internal_get_autoSearch() const;

constexpr bool& __cordl_internal_get_autoSearch() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr float_t const& __cordl_internal_get_targetScale() const;

constexpr float_t& __cordl_internal_get_targetScale() ;

constexpr void __cordl_internal_set_autoSearch(bool  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_targetScale(float_t  value) ;

/// @brief Method .ctor, addr 0x55ee8f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderOffsetOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderOffsetOverride", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderOffsetOverride(ColliderOffsetOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderOffsetOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderOffsetOverride(ColliderOffsetOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{60};

/// @brief Field colliders, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// [HideInInspector]
/// @brief Field autoSearch, offset: 0x28, size: 0x1, def value: None
 bool  ___autoSearch;

/// @brief Field targetScale, offset: 0x2c, size: 0x4, def value: None
 float_t  ___targetScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColliderOffsetOverride, ___colliders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderOffsetOverride, ___autoSearch) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderOffsetOverride, ___targetScale) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColliderOffsetOverride) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
