#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDHandReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(KIDHandReference)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDHandReference;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDHandReference*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDHandReference*, "", "KIDHandReference");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDHandReference
class CORDL_TYPE KIDHandReference : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _leftHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHand, put=__cordl_internal_set__leftHand)) ::UnityW<::UnityEngine::GameObject>  _leftHand;

/// @brief Field _leftHandRef, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__leftHandRef, put=setStaticF__leftHandRef)) ::UnityW<::UnityEngine::GameObject>  _leftHandRef;

/// @brief Field _rightHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHand, put=__cordl_internal_set__rightHand)) ::UnityW<::UnityEngine::GameObject>  _rightHand;

/// @brief Field _rightHandRef, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__rightHandRef, put=setStaticF__rightHandRef)) ::UnityW<::UnityEngine::GameObject>  _rightHandRef;

/// @brief Method Awake, addr 0x5a2c194, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::KIDHandReference* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__leftHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__leftHand() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__rightHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__rightHand() ;

constexpr void __cordl_internal_set__leftHand(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__rightHand(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5a2c200, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF__leftHandRef() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF__rightHandRef() ;

/// @brief Method get_LeftHand, addr 0x5a2c104, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> get_LeftHand() ;

/// @brief Method get_RightHand, addr 0x5a2c14c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> get_RightHand() ;

static inline void setStaticF__leftHandRef(::UnityW<::UnityEngine::GameObject>  value) ;

static inline void setStaticF__rightHandRef(::UnityW<::UnityEngine::GameObject>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDHandReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDHandReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDHandReference(KIDHandReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDHandReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDHandReference(KIDHandReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2915};

/// [SerializeField]
/// @brief Field _leftHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____leftHand;

/// [SerializeField]
/// @brief Field _rightHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____rightHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDHandReference, ____leftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDHandReference, ____rightHand) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDHandReference) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
