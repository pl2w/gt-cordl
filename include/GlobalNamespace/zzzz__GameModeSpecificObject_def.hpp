#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSpecificObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameModeSpecificObject_ValidationMethod_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GameModeSpecificObject)
namespace GlobalNamespace {
class GameModeSpecificObject_GameModeSpecificObjectDelegate;
}
namespace GlobalNamespace {
struct GameModeSpecificObject_ValidationMethod;
}
namespace GlobalNamespace {
struct GameModeSpecificObject__Awake_d__15;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GameModeSpecificObject;
}
namespace GlobalNamespace {
class GameModeSpecificObject_GameModeSpecificObjectDelegate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameModeSpecificObject*);
MARK_REF_T(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameModeSpecificObject*, "", "GameModeSpecificObject");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*, "", "GameModeSpecificObject/GameModeSpecificObjectDelegate");
// Dependencies GameModeSpecificObject::ValidationMethod, GorillaGameModes.GameModeType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameModeSpecificObject
class CORDL_TYPE GameModeSpecificObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GameModeSpecificObjectDelegate = ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate;

using ValidationMethod = ::GlobalNamespace::GameModeSpecificObject_ValidationMethod;

using _Awake_d__15 = ::GlobalNamespace::GameModeSpecificObject__Awake_d__15;

 __declspec(property(get=get_GameModes)) ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  GameModes;

/// @brief Field OnAwake, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnAwake, put=setStaticF_OnAwake)) ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  OnAwake;

/// @brief Field OnDestroyed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDestroyed, put=setStaticF_OnDestroyed)) ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  OnDestroyed;

 __declspec(property(get=get_Validation)) ::GlobalNamespace::GameModeSpecificObject_ValidationMethod  Validation;

/// @brief Field _gameModes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameModes, put=__cordl_internal_set__gameModes)) ::ArrayW<::GorillaGameModes::GameModeType>  _gameModes;

/// @brief Field gameModes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModes, put=__cordl_internal_set_gameModes)) ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  gameModes;

/// @brief Field validationMethod, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_validationMethod, put=__cordl_internal_set_validationMethod)) ::GlobalNamespace::GameModeSpecificObject_ValidationMethod  validationMethod;

/// [AsyncStateMachine(typeof(GameModeSpecificObject::<Awake>d__15))]
/// @brief Method Awake, addr 0x57eb44c, size 0xa8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckValid, addr 0x57eb560, size 0x90, virtual false, abstract: false, final false
inline bool CheckValid(::GorillaGameModes::GameModeType  gameMode) ;

static inline ::GlobalNamespace::GameModeSpecificObject* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57eb4f4, size 0x6c, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& __cordl_internal_get__gameModes() const;

constexpr ::ArrayW<::GorillaGameModes::GameModeType>& __cordl_internal_get__gameModes() ;

constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>* const& __cordl_internal_get_gameModes() const;

constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*& __cordl_internal_get_gameModes() ;

constexpr ::GlobalNamespace::GameModeSpecificObject_ValidationMethod const& __cordl_internal_get_validationMethod() const;

constexpr ::GlobalNamespace::GameModeSpecificObject_ValidationMethod& __cordl_internal_get_validationMethod() ;

constexpr void __cordl_internal_set__gameModes(::ArrayW<::GorillaGameModes::GameModeType>  value) ;

constexpr void __cordl_internal_set_gameModes(::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  value) ;

constexpr void __cordl_internal_set_validationMethod(::GlobalNamespace::GameModeSpecificObject_ValidationMethod  value) ;

/// @brief Method .ctor, addr 0x57eb5f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnAwake, addr 0x57eb154, size 0xb8, virtual false, abstract: false, final false
static inline void add_OnAwake(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnDestroyed, addr 0x57eb2c4, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnDestroyed(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value) ;

static inline ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* getStaticF_OnAwake() ;

static inline ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* getStaticF_OnDestroyed() ;

/// @brief Method get_GameModes, addr 0x57eb444, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>* get_GameModes() ;

/// @brief Method get_Validation, addr 0x57eb43c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameModeSpecificObject_ValidationMethod get_Validation() ;

/// [CompilerGenerated]
/// @brief Method remove_OnAwake, addr 0x57eb20c, size 0xb8, virtual false, abstract: false, final false
static inline void remove_OnAwake(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnDestroyed, addr 0x57eb380, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnDestroyed(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value) ;

static inline void setStaticF_OnAwake(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value) ;

static inline void setStaticF_OnDestroyed(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameModeSpecificObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameModeSpecificObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameModeSpecificObject(GameModeSpecificObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameModeSpecificObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameModeSpecificObject(GameModeSpecificObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{171};

/// [SerializeField]
/// @brief Field validationMethod, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GameModeSpecificObject_ValidationMethod  ___validationMethod;

/// [SerializeField]
/// @brief Field _gameModes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GorillaGameModes::GameModeType>  ____gameModes;

/// @brief Field gameModes, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  ___gameModes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameModeSpecificObject, ___validationMethod) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSpecificObject, ____gameModes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSpecificObject, ___gameModes) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameModeSpecificObject) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameModeSpecificObject/GameModeSpecificObjectDelegate
class CORDL_TYPE GameModeSpecificObject_GameModeSpecificObjectDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x57eb714, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GameModeSpecificObject*  gameModeSpecificObject, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x57eb734, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x57eb700, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::GameModeSpecificObject*  gameModeSpecificObject) ;

static inline ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x57eb5f8, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameModeSpecificObject_GameModeSpecificObjectDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameModeSpecificObject_GameModeSpecificObjectDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameModeSpecificObject_GameModeSpecificObjectDelegate(GameModeSpecificObject_GameModeSpecificObjectDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameModeSpecificObject_GameModeSpecificObjectDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameModeSpecificObject_GameModeSpecificObjectDelegate(GameModeSpecificObject_GameModeSpecificObjectDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{168};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
