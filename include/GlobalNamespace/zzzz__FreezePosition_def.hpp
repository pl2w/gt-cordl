#pragma once
// IWYU pragma private; include "GlobalNamespace/FreezePosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(FreezePosition)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FreezePosition;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FreezePosition*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FreezePosition*, "", "FreezePosition");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FreezePosition
class CORDL_TYPE FreezePosition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field localPosition, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_localPosition, put=__cordl_internal_set_localPosition)) ::UnityEngine::Vector3  localPosition;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Method FixedUpdate, addr 0x5705c0c, size 0x88, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate, addr 0x5705c94, size 0x88, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::FreezePosition* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_localPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5705d1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FreezePosition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FreezePosition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FreezePosition(FreezePosition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreezePosition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreezePosition(FreezePosition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{163};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field localPosition, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FreezePosition, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreezePosition, ___localPosition) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FreezePosition) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
