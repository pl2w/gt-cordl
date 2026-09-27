#pragma once
// IWYU pragma private; include "GorillaTagScripts/GameObjectManagerWithId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameObjectManagerWithId)
namespace GorillaTagScripts {
class GameObjectManagerWithId_gameObjectData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts {
class GameObjectManagerWithId;
}
namespace GorillaTagScripts {
class GameObjectManagerWithId_gameObjectData;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GameObjectManagerWithId*);
MARK_REF_T(::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GameObjectManagerWithId*, "GorillaTagScripts", "GameObjectManagerWithId");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*, "GorillaTagScripts", "GameObjectManagerWithId/gameObjectData");
// Dependencies GTZone, UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GameObjectManagerWithId
class CORDL_TYPE GameObjectManagerWithId : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using gameObjectData = ::GorillaTagScripts::GameObjectManagerWithId_gameObjectData;

/// @brief Field objectData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectData, put=__cordl_internal_set_objectData)) ::System::Collections::Generic::List_1<::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*>*  objectData;

/// @brief Field objectsContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsContainer, put=__cordl_internal_set_objectsContainer)) ::UnityW<::UnityEngine::GameObject>  objectsContainer;

/// @brief Field zone, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Method Awake, addr 0x5bc4518, size 0x1dc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::GameObjectManagerWithId* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5bc46fc, size 0x70, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ReceiveEvent, addr 0x5bc476c, size 0x170, virtual false, abstract: false, final false
inline void ReceiveEvent(::StringW  id, ::UnityEngine::Transform*  _transform) ;

/// @brief Method Update, addr 0x5bc48dc, size 0x1ec, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*>* const& __cordl_internal_get_objectData() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*>*& __cordl_internal_get_objectData() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_objectsContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_objectsContainer() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_objectData(::System::Collections::Generic::List_1<::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*>*  value) ;

constexpr void __cordl_internal_set_objectsContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5bc4ac8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectManagerWithId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectManagerWithId", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectManagerWithId(GameObjectManagerWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectManagerWithId", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectManagerWithId(GameObjectManagerWithId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3980};

/// @brief Field objectsContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___objectsContainer;

/// @brief Field zone, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// @brief Field objectData, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*>*  ___objectData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GameObjectManagerWithId, ___objectsContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GameObjectManagerWithId, ___zone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GameObjectManagerWithId, ___objectData) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GameObjectManagerWithId) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GameObjectManagerWithId/gameObjectData
class CORDL_TYPE GameObjectManagerWithId_gameObjectData : public ::System::Object {
public:
// Declarations
/// @brief Field followTransform, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_followTransform, put=__cordl_internal_set_followTransform)) ::UnityW<::UnityEngine::Transform>  followTransform;

/// @brief Field id, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::StringW  id;

/// @brief Field isMatched, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMatched, put=__cordl_internal_set_isMatched)) bool  isMatched;

/// @brief Field transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::UnityW<::UnityEngine::Transform>  transform;

static inline ::GorillaTagScripts::GameObjectManagerWithId_gameObjectData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_followTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_followTransform() ;

constexpr ::StringW const& __cordl_internal_get_id() const;

constexpr ::StringW& __cordl_internal_get_id() ;

constexpr bool const& __cordl_internal_get_isMatched() const;

constexpr bool& __cordl_internal_get_isMatched() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set_followTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_id(::StringW  value) ;

constexpr void __cordl_internal_set_isMatched(bool  value) ;

constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5bc46f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectManagerWithId_gameObjectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectManagerWithId_gameObjectData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectManagerWithId_gameObjectData(GameObjectManagerWithId_gameObjectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectManagerWithId_gameObjectData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectManagerWithId_gameObjectData(GameObjectManagerWithId_gameObjectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3979};

/// @brief Field transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transform;

/// @brief Field followTransform, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___followTransform;

/// @brief Field id, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___id;

/// @brief Field isMatched, offset: 0x28, size: 0x1, def value: None
 bool  ___isMatched;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GameObjectManagerWithId_gameObjectData, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GameObjectManagerWithId_gameObjectData, ___followTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GameObjectManagerWithId_gameObjectData, ___id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GameObjectManagerWithId_gameObjectData, ___isMatched) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GameObjectManagerWithId_gameObjectData) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts
