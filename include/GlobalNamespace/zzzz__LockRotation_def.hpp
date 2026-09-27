#pragma once
// IWYU pragma private; include "GlobalNamespace/LockRotation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(LockRotation)
// Forward declare root types
namespace GlobalNamespace {
class LockRotation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LockRotation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LockRotation*, "", "LockRotation");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: LockRotation
class CORDL_TYPE LockRotation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field lockedRot, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_lockedRot, put=__cordl_internal_set_lockedRot)) ::UnityEngine::Quaternion  lockedRot;

/// @brief Method LateUpdate, addr 0x5a6a714, size 0x2c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::LockRotation* New_ctor() ;

/// @brief Method Start, addr 0x5a6a6e4, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lockedRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lockedRot() ;

constexpr void __cordl_internal_set_lockedRot(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x5a6a740, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LockRotation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LockRotation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LockRotation(LockRotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LockRotation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LockRotation(LockRotation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3094};

/// @brief Field lockedRot, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lockedRot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LockRotation, ___lockedRot) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LockRotation) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
