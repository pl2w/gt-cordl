#pragma once
// IWYU pragma private; include "GlobalNamespace/GRTransformLook.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GRTransformLook)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRTransformLook;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRTransformLook*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRTransformLook*, "", "GRTransformLook");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRTransformLook
class CORDL_TYPE GRTransformLook : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field followPlayer, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_followPlayer, put=__cordl_internal_set_followPlayer)) bool  followPlayer;

/// @brief Field lookTarget, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookTarget, put=__cordl_internal_set_lookTarget)) ::UnityW<::UnityEngine::Transform>  lookTarget;

/// @brief Field offsetRotation, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_offsetRotation, put=__cordl_internal_set_offsetRotation)) ::UnityEngine::Vector3  offsetRotation;

/// @brief Method Awake, addr 0x58d1438, size 0x44, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x58d147c, size 0x118, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GRTransformLook* New_ctor() ;

constexpr bool const& __cordl_internal_get_followPlayer() const;

constexpr bool& __cordl_internal_get_followPlayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lookTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lookTarget() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsetRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsetRotation() ;

constexpr void __cordl_internal_set_followPlayer(bool  value) ;

constexpr void __cordl_internal_set_lookTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_offsetRotation(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x58d1594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRTransformLook() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRTransformLook", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRTransformLook(GRTransformLook && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRTransformLook", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRTransformLook(GRTransformLook const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2097};

/// @brief Field followPlayer, offset: 0x20, size: 0x1, def value: None
 bool  ___followPlayer;

/// @brief Field lookTarget, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lookTarget;

/// @brief Field offsetRotation, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offsetRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRTransformLook, ___followPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTransformLook, ___lookTarget) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTransformLook, ___offsetRotation) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRTransformLook) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
