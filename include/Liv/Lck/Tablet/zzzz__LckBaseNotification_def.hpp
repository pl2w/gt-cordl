#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckBaseNotification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LckBaseNotification)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckBaseNotification;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckBaseNotification*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckBaseNotification*, "Liv.Lck.Tablet", "LckBaseNotification");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckBaseNotification
class CORDL_TYPE LckBaseNotification : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_RemainOnScreen, put=set_RemainOnScreen)) bool  RemainOnScreen;

 __declspec(property(get=get_ShowDuration, put=set_ShowDuration)) float_t  ShowDuration;

 __declspec(property(get=get_SpawnedGameObject, put=set_SpawnedGameObject)) ::UnityW<::UnityEngine::GameObject>  SpawnedGameObject;

/// @brief Field <RemainOnScreen>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__RemainOnScreen_k__BackingField, put=__cordl_internal_set__RemainOnScreen_k__BackingField)) bool  _RemainOnScreen_k__BackingField;

/// @brief Field <ShowDuration>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShowDuration_k__BackingField, put=__cordl_internal_set__ShowDuration_k__BackingField)) float_t  _ShowDuration_k__BackingField;

/// @brief Field <SpawnedGameObject>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__SpawnedGameObject_k__BackingField, put=__cordl_internal_set__SpawnedGameObject_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _SpawnedGameObject_k__BackingField;

/// @brief Method HideNotification, addr 0x9d5fc70, size 0x88, virtual true, abstract: false, final false
inline void HideNotification() ;

static inline ::Liv::Lck::Tablet::LckBaseNotification* New_ctor() ;

/// @brief Method SetSpawnedGameObject, addr 0x9d58e14, size 0x8, virtual false, abstract: false, final false
inline void SetSpawnedGameObject(::UnityEngine::GameObject*  go) ;

/// @brief Method ShowNotification, addr 0x9d5fbe8, size 0x88, virtual true, abstract: false, final false
inline void ShowNotification() ;

constexpr bool const& __cordl_internal_get__RemainOnScreen_k__BackingField() const;

constexpr bool& __cordl_internal_get__RemainOnScreen_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ShowDuration_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ShowDuration_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__SpawnedGameObject_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__SpawnedGameObject_k__BackingField() ;

constexpr void __cordl_internal_set__RemainOnScreen_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ShowDuration_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__SpawnedGameObject_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d5fcf8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_RemainOnScreen, addr 0x9d5fbb8, size 0x8, virtual false, abstract: false, final false
inline bool get_RemainOnScreen() ;

/// [CompilerGenerated]
/// @brief Method get_ShowDuration, addr 0x9d5fbc8, size 0x8, virtual false, abstract: false, final false
inline float_t get_ShowDuration() ;

/// [CompilerGenerated]
/// @brief Method get_SpawnedGameObject, addr 0x9d5fbd8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_SpawnedGameObject() ;

/// [CompilerGenerated]
/// @brief Method set_RemainOnScreen, addr 0x9d5fbc0, size 0x8, virtual false, abstract: false, final false
inline void set_RemainOnScreen(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShowDuration, addr 0x9d5fbd0, size 0x8, virtual false, abstract: false, final false
inline void set_ShowDuration(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SpawnedGameObject, addr 0x9d5fbe0, size 0x8, virtual false, abstract: false, final false
inline void set_SpawnedGameObject(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckBaseNotification() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckBaseNotification", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckBaseNotification(LckBaseNotification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckBaseNotification", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckBaseNotification(LckBaseNotification const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24959};

/// [CompilerGenerated]
/// [SerializeField]
/// [Header("Settings")]
/// @brief Field <RemainOnScreen>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____RemainOnScreen_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Header("Duration To Show On Screen When Remain On Screen Is False")]
/// @brief Field <ShowDuration>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____ShowDuration_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SpawnedGameObject>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____SpawnedGameObject_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckBaseNotification, ____RemainOnScreen_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckBaseNotification, ____ShowDuration_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckBaseNotification, ____SpawnedGameObject_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckBaseNotification) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
