#pragma once
// IWYU pragma private; include "GlobalNamespace/PropPlacementRB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PropPlacementRB)
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace GlobalNamespace {
class PropHuntPropZone;
}
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
namespace GorillaTag {
template<typename TObject>
class GTAssetRef_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PropPlacementRB;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropPlacementRB*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropPlacementRB*, "", "PropPlacementRB");
// Dependencies UnityEngine.MeshCollider, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropPlacementRB
class CORDL_TYPE PropPlacementRB : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _colliders, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliders, put=__cordl_internal_set__colliders)) ::ArrayW<::UnityW<::UnityEngine::MeshCollider>>  _colliders;

/// @brief Field _isInstantiatingAsync, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInstantiatingAsync, put=__cordl_internal_set__isInstantiatingAsync)) bool  _isInstantiatingAsync;

/// @brief Field _parentZone, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentZone, put=__cordl_internal_set__parentZone)) ::UnityW<::GlobalNamespace::PropHuntPropZone>  _parentZone;

/// @brief Field _placingProp, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__placingProp, put=__cordl_internal_set__placingProp)) ::UnityW<::UnityEngine::GameObject>  _placingProp;

/// @brief Field m_rb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rb, put=__cordl_internal_set_m_rb)) ::UnityW<::UnityEngine::Rigidbody>  m_rb;

/// @brief Field m_simDurationBeforeFreeze, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_simDurationBeforeFreeze, put=__cordl_internal_set_m_simDurationBeforeFreeze)) float_t  m_simDurationBeforeFreeze;

/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

/// @brief Method DestroyProp_NoPool, addr 0x563fd84, size 0x7c, virtual false, abstract: false, final false
inline void DestroyProp_NoPool() ;

/// @brief Method IDelayedExecListener.OnDelayedAction, addr 0x563fe00, size 0x4, virtual true, abstract: false, final true
inline void IDelayedExecListener_OnDelayedAction(int32_t  contextId) ;

static inline ::GlobalNamespace::PropPlacementRB* New_ctor() ;

/// @brief Method OnDestroy, addr 0x563faf4, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPropFell, addr 0x563fe04, size 0xcc, virtual false, abstract: false, final false
inline void OnPropFell() ;

/// @brief Method OnPropLoaded_NoPool, addr 0x563fb84, size 0x200, virtual false, abstract: false, final false
inline void OnPropLoaded_NoPool(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  handle) ;

/// @brief Method PlaceProp_NoPool, addr 0x563f7dc, size 0x270, virtual false, abstract: false, final false
inline void PlaceProp_NoPool(::GlobalNamespace::PropHuntPropZone*  parentZone, ::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  propRef, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::GorillaTag::CosmeticSystem::CosmeticSO*  debugCosmeticSO) ;

/// @brief Method TryPrepPropTemplate, addr 0x563c944, size 0x70c, virtual false, abstract: false, final false
static inline bool TryPrepPropTemplate(::GlobalNamespace::PropPlacementRB*  rb, ::UnityEngine::GameObject*  rendererGobj, ::GorillaTag::CosmeticSystem::CosmeticSO*  _debugCosmeticSO) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshCollider>> const& __cordl_internal_get__colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshCollider>>& __cordl_internal_get__colliders() ;

constexpr bool const& __cordl_internal_get__isInstantiatingAsync() const;

constexpr bool& __cordl_internal_get__isInstantiatingAsync() ;

constexpr ::UnityW<::GlobalNamespace::PropHuntPropZone> const& __cordl_internal_get__parentZone() const;

constexpr ::UnityW<::GlobalNamespace::PropHuntPropZone>& __cordl_internal_get__parentZone() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__placingProp() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__placingProp() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_rb() ;

constexpr float_t const& __cordl_internal_get_m_simDurationBeforeFreeze() const;

constexpr float_t& __cordl_internal_get_m_simDurationBeforeFreeze() ;

constexpr void __cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::MeshCollider>>  value) ;

constexpr void __cordl_internal_set__isInstantiatingAsync(bool  value) ;

constexpr void __cordl_internal_set__parentZone(::UnityW<::GlobalNamespace::PropHuntPropZone>  value) ;

constexpr void __cordl_internal_set__placingProp(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_m_simDurationBeforeFreeze(float_t  value) ;

/// @brief Method .ctor, addr 0x563fed0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropPlacementRB() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropPlacementRB", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropPlacementRB(PropPlacementRB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropPlacementRB", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropPlacementRB(PropPlacementRB const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{643};

/// [FormerlySerializedAs("rb")]
/// [SerializeField]
/// @brief Field m_rb, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___m_rb;

/// [FormerlySerializedAs("simDurationBeforeFreeze")]
/// [SerializeField]
/// @brief Field m_simDurationBeforeFreeze, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_simDurationBeforeFreeze;

/// @brief Field _parentZone, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHuntPropZone>  ____parentZone;

/// [SerializeField]
/// @brief Field _placingProp, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____placingProp;

/// [SerializeField]
/// @brief Field _colliders, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshCollider>>  ____colliders;

/// @brief Field _isInstantiatingAsync, offset: 0x48, size: 0x1, def value: None
 bool  ____isInstantiatingAsync;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropPlacementRB, ___m_rb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropPlacementRB, ___m_simDurationBeforeFreeze) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropPlacementRB, ____parentZone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropPlacementRB, ____placingProp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropPlacementRB, ____colliders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropPlacementRB, ____isInstantiatingAsync) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropPlacementRB) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
