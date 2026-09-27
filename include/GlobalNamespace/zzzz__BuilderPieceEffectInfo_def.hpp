#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceEffectInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(BuilderPieceEffectInfo)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPieceEffectInfo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPieceEffectInfo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceEffectInfo*, "", "BuilderPieceEffectInfo");
// [CreateAssetMenu(fileName = "BuilderPieceEffectInfo", menuName = "Gorilla Tag/Builder/EffectInfo", order = 0)]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPieceEffectInfo
class CORDL_TYPE BuilderPieceEffectInfo : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field disconnectVFX, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_disconnectVFX, put=__cordl_internal_set_disconnectVFX)) ::UnityW<::UnityEngine::GameObject>  disconnectVFX;

/// @brief Field grabbedVFX, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedVFX, put=__cordl_internal_set_grabbedVFX)) ::UnityW<::UnityEngine::GameObject>  grabbedVFX;

/// @brief Field locationLockVFX, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_locationLockVFX, put=__cordl_internal_set_locationLockVFX)) ::UnityW<::UnityEngine::GameObject>  locationLockVFX;

/// @brief Field placeVFX, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_placeVFX, put=__cordl_internal_set_placeVFX)) ::UnityW<::UnityEngine::GameObject>  placeVFX;

/// @brief Field recycleVFX, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_recycleVFX, put=__cordl_internal_set_recycleVFX)) ::UnityW<::UnityEngine::GameObject>  recycleVFX;

/// @brief Field tooHeavyVFX, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tooHeavyVFX, put=__cordl_internal_set_tooHeavyVFX)) ::UnityW<::UnityEngine::GameObject>  tooHeavyVFX;

static inline ::GlobalNamespace::BuilderPieceEffectInfo* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_disconnectVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_disconnectVFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_grabbedVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_grabbedVFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_locationLockVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_locationLockVFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_placeVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_placeVFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_recycleVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_recycleVFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_tooHeavyVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_tooHeavyVFX() ;

constexpr void __cordl_internal_set_disconnectVFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_grabbedVFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_locationLockVFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_placeVFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_recycleVFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_tooHeavyVFX(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x57b3508, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceEffectInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceEffectInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceEffectInfo(BuilderPieceEffectInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceEffectInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceEffectInfo(BuilderPieceEffectInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1565};

/// @brief Field placeVFX, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___placeVFX;

/// @brief Field disconnectVFX, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___disconnectVFX;

/// @brief Field grabbedVFX, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___grabbedVFX;

/// @brief Field locationLockVFX, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___locationLockVFX;

/// @brief Field recycleVFX, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___recycleVFX;

/// @brief Field tooHeavyVFX, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___tooHeavyVFX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceEffectInfo, ___placeVFX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceEffectInfo, ___disconnectVFX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceEffectInfo, ___grabbedVFX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceEffectInfo, ___locationLockVFX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceEffectInfo, ___recycleVFX) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceEffectInfo, ___tooHeavyVFX) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceEffectInfo) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
