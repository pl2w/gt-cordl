#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckGameObjectSwapCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticDependantBehaviourBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckGameObjectSwapCosmetic)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Cosmetics {
class LckGameObjectSwapCosmetic;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*, "Liv.Lck.Cosmetics", "LckGameObjectSwapCosmetic");
// Dependencies Liv.Lck.Cosmetics.LckCosmeticDependantBehaviourBase
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckGameObjectSwapCosmetic
class CORDL_TYPE LckGameObjectSwapCosmetic : public ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase {
public:
// Declarations
/// @brief Field OnCosmeticSpawned, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCosmeticSpawned, put=__cordl_internal_set_OnCosmeticSpawned)) ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  OnCosmeticSpawned;

 __declspec(property(get=get_PlayerId, put=set_PlayerId)) ::StringW  PlayerId;

/// @brief Field _instantiatedCosmetic, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__instantiatedCosmetic, put=__cordl_internal_set__instantiatedCosmetic)) ::UnityW<::UnityEngine::GameObject>  _instantiatedCosmetic;

/// @brief Field _playerId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerId, put=__cordl_internal_set__playerId)) ::StringW  _playerId;

/// @brief Field _targetGameObject, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetGameObject, put=__cordl_internal_set__targetGameObject)) ::UnityW<::UnityEngine::GameObject>  _targetGameObject;

/// @brief Method Awake, addr 0x9d6a418, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic* New_ctor() ;

/// @brief Method OnCosmeticLoaded, addr 0x9d6a4ac, size 0x4f8, virtual true, abstract: false, final false
inline void OnCosmeticLoaded(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  assets) ;

/// @brief Method OnCosmeticReset, addr 0x9d6a41c, size 0x90, virtual true, abstract: false, final false
inline void OnCosmeticReset() ;

/// @brief Method OnDestroy, addr 0x9d6aa70, size 0x98, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetLayerRecursively, addr 0x9d6a9a4, size 0xcc, virtual false, abstract: false, final false
inline void SetLayerRecursively(::UnityEngine::GameObject*  obj, int32_t  layer) ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_OnCosmeticSpawned() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_OnCosmeticSpawned() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__instantiatedCosmetic() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__instantiatedCosmetic() ;

constexpr ::StringW const& __cordl_internal_get__playerId() const;

constexpr ::StringW& __cordl_internal_get__playerId() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__targetGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__targetGameObject() ;

constexpr void __cordl_internal_set_OnCosmeticSpawned(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__instantiatedCosmetic(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__playerId(::StringW  value) ;

constexpr void __cordl_internal_set__targetGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d6ab08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PlayerId, addr 0x9d6a408, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_PlayerId() ;

/// @brief Method set_PlayerId, addr 0x9d6a410, size 0x8, virtual true, abstract: false, final false
inline void set_PlayerId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckGameObjectSwapCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckGameObjectSwapCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckGameObjectSwapCosmetic(LckGameObjectSwapCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckGameObjectSwapCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckGameObjectSwapCosmetic(LckGameObjectSwapCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24991};

/// [Header("Skin Configuration")]
/// [SerializeField]
/// [Tooltip("The target GameObject to be replaced by the cosmetic skin.")]
/// @brief Field _targetGameObject, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____targetGameObject;

/// [FormerlySerializedAs("_overridePlayerId")]
/// [SerializeField]
/// @brief Field _playerId, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____playerId;

/// @brief Field _instantiatedCosmetic, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____instantiatedCosmetic;

/// @brief Field OnCosmeticSpawned, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  ___OnCosmeticSpawned;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic, ____targetGameObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic, ____playerId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic, ____instantiatedCosmetic) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic, ___OnCosmeticSpawned) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic) == 0x60, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
