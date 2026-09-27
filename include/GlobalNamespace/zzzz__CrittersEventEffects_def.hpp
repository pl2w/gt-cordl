#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersEventEffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersManager_CritterEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersEventEffects)
namespace GlobalNamespace {
class CrittersEventEffects_CrittersEventResponse;
}
namespace GlobalNamespace {
struct CrittersManager_CritterEvent;
}
namespace GlobalNamespace {
class CrittersManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersEventEffects;
}
namespace GlobalNamespace {
class CrittersEventEffects_CrittersEventResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersEventEffects*);
MARK_REF_T(::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersEventEffects*, "", "CrittersEventEffects");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*, "", "CrittersEventEffects/CrittersEventResponse");
// Dependencies CrittersEventEffects::CrittersEventResponse, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersEventEffects
class CORDL_TYPE CrittersEventEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CrittersEventResponse = ::GlobalNamespace::CrittersEventEffects_CrittersEventResponse;

/// @brief Field effectResponse, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectResponse, put=__cordl_internal_set_effectResponse)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersManager_CritterEvent,::UnityW<::UnityEngine::GameObject>>*  effectResponse;

/// @brief Field eventEffects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventEffects, put=__cordl_internal_set_eventEffects)) ::ArrayW<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>  eventEffects;

/// @brief Field manager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_manager, put=__cordl_internal_set_manager)) ::UnityW<::GlobalNamespace::CrittersManager>  manager;

/// @brief Method Awake, addr 0x55fe340, size 0x240, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleReceivedEvent, addr 0x55fe630, size 0x13c, virtual false, abstract: false, final false
inline void HandleReceivedEvent(::GlobalNamespace::CrittersManager_CritterEvent  eventType, int32_t  sourceActor, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

static inline ::GlobalNamespace::CrittersEventEffects* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersManager_CritterEvent,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_effectResponse() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersManager_CritterEvent,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_effectResponse() ;

constexpr ::ArrayW<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*> const& __cordl_internal_get_eventEffects() const;

constexpr ::ArrayW<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>& __cordl_internal_get_eventEffects() ;

constexpr ::UnityW<::GlobalNamespace::CrittersManager> const& __cordl_internal_get_manager() const;

constexpr ::UnityW<::GlobalNamespace::CrittersManager>& __cordl_internal_get_manager() ;

constexpr void __cordl_internal_set_effectResponse(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersManager_CritterEvent,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_eventEffects(::ArrayW<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>  value) ;

constexpr void __cordl_internal_set_manager(::UnityW<::GlobalNamespace::CrittersManager>  value) ;

/// @brief Method .ctor, addr 0x55fe76c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersEventEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersEventEffects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersEventEffects(CrittersEventEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersEventEffects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersEventEffects(CrittersEventEffects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{96};

/// @brief Field manager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersManager>  ___manager;

/// @brief Field eventEffects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>  ___eventEffects;

/// @brief Field effectResponse, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersManager_CritterEvent,::UnityW<::UnityEngine::GameObject>>*  ___effectResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersEventEffects, ___manager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersEventEffects, ___eventEffects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersEventEffects, ___effectResponse) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersEventEffects) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CrittersManager::CritterEvent, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersEventEffects/CrittersEventResponse
class CORDL_TYPE CrittersEventEffects_CrittersEventResponse : public ::System::Object {
public:
// Declarations
/// @brief Field effect, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_effect, put=__cordl_internal_set_effect)) ::UnityW<::UnityEngine::GameObject>  effect;

/// @brief Field eventType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventType, put=__cordl_internal_set_eventType)) ::GlobalNamespace::CrittersManager_CritterEvent  eventType;

static inline ::GlobalNamespace::CrittersEventEffects_CrittersEventResponse* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_effect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_effect() ;

constexpr ::GlobalNamespace::CrittersManager_CritterEvent const& __cordl_internal_get_eventType() const;

constexpr ::GlobalNamespace::CrittersManager_CritterEvent& __cordl_internal_get_eventType() ;

constexpr void __cordl_internal_set_effect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_eventType(::GlobalNamespace::CrittersManager_CritterEvent  value) ;

/// @brief Method .ctor, addr 0x55fe774, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersEventEffects_CrittersEventResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersEventEffects_CrittersEventResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersEventEffects_CrittersEventResponse(CrittersEventEffects_CrittersEventResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersEventEffects_CrittersEventResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersEventEffects_CrittersEventResponse(CrittersEventEffects_CrittersEventResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{95};

/// @brief Field eventType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::CrittersManager_CritterEvent  ___eventType;

/// @brief Field effect, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___effect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersEventEffects_CrittersEventResponse, ___eventType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersEventEffects_CrittersEventResponse, ___effect) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersEventEffects_CrittersEventResponse) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
