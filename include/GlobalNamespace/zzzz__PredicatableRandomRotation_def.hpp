#pragma once
// IWYU pragma private; include "GlobalNamespace/PredicatableRandomRotation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(PredicatableRandomRotation)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PredicatableRandomRotation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PredicatableRandomRotation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PredicatableRandomRotation*, "", "PredicatableRandomRotation");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PredicatableRandomRotation
class CORDL_TYPE PredicatableRandomRotation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field rot, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_rot, put=__cordl_internal_set_rot)) ::UnityEngine::Vector3  rot;

/// @brief Field source, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::UnityW<::UnityEngine::Transform>  source;

static inline ::GlobalNamespace::PredicatableRandomRotation* New_ctor() ;

/// @brief Method Start, addr 0x5b0e894, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5b0e924, size 0xfc, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rot() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_source() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_rot(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5b0ea20, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PredicatableRandomRotation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PredicatableRandomRotation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PredicatableRandomRotation(PredicatableRandomRotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PredicatableRandomRotation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PredicatableRandomRotation(PredicatableRandomRotation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3543};

/// [SerializeField]
/// @brief Field rot, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rot;

/// [SerializeField]
/// @brief Field source, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PredicatableRandomRotation, ___rot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PredicatableRandomRotation, ___source) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PredicatableRandomRotation) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
