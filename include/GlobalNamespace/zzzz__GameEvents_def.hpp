#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameEvents)
namespace GorillaNetworking {
struct GorillaATMKeyBindings;
}
namespace GorillaNetworking {
struct GorillaKeyboardBindings;
}
namespace GorillaTagScripts::Builder {
struct SharedBlocksKeyboardBindings;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class GameEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEvents*, "", "GameEvents");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEvents
class CORDL_TYPE GameEvents : public ::System::Object {
public:
// Declarations
/// @brief Field FunctionSelectTextChangedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FunctionSelectTextChangedEvent, put=setStaticF_FunctionSelectTextChangedEvent)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  FunctionSelectTextChangedEvent;

/// @brief Field FunctionTextMaterialsEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FunctionTextMaterialsEvent, put=setStaticF_FunctionTextMaterialsEvent)) ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  FunctionTextMaterialsEvent;

/// @brief Field LanguageEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LanguageEvent, put=setStaticF_LanguageEvent)) ::UnityEngine::Events::UnityEvent*  LanguageEvent;

/// @brief Field OnGorrillaATMKeyButtonPressedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGorrillaATMKeyButtonPressedEvent, put=setStaticF_OnGorrillaATMKeyButtonPressedEvent)) ::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaATMKeyBindings>*  OnGorrillaATMKeyButtonPressedEvent;

/// @brief Field OnGorrillaKeyboardButtonPressedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGorrillaKeyboardButtonPressedEvent, put=setStaticF_OnGorrillaKeyboardButtonPressedEvent)) ::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaKeyboardBindings>*  OnGorrillaKeyboardButtonPressedEvent;

/// @brief Field OnSharedBlocksKeyboardButtonPressedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSharedBlocksKeyboardButtonPressedEvent, put=setStaticF_OnSharedBlocksKeyboardButtonPressedEvent)) ::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings>*  OnSharedBlocksKeyboardButtonPressedEvent;

/// @brief Field ScoreboardMaterialsEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScoreboardMaterialsEvent, put=setStaticF_ScoreboardMaterialsEvent)) ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  ScoreboardMaterialsEvent;

/// @brief Field ScoreboardTextChangedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScoreboardTextChangedEvent, put=setStaticF_ScoreboardTextChangedEvent)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  ScoreboardTextChangedEvent;

/// @brief Field ScreenTextChangedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScreenTextChangedEvent, put=setStaticF_ScreenTextChangedEvent)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  ScreenTextChangedEvent;

/// @brief Field ScreenTextMaterialsEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScreenTextMaterialsEvent, put=setStaticF_ScreenTextMaterialsEvent)) ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  ScreenTextMaterialsEvent;

static inline ::GlobalNamespace::GameEvents* New_ctor() ;

/// @brief Method .ctor, addr 0x579af68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Events::UnityEvent_1<::StringW>* getStaticF_FunctionSelectTextChangedEvent() ;

static inline ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>* getStaticF_FunctionTextMaterialsEvent() ;

static inline ::UnityEngine::Events::UnityEvent* getStaticF_LanguageEvent() ;

static inline ::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaATMKeyBindings>* getStaticF_OnGorrillaATMKeyButtonPressedEvent() ;

static inline ::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaKeyboardBindings>* getStaticF_OnGorrillaKeyboardButtonPressedEvent() ;

static inline ::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings>* getStaticF_OnSharedBlocksKeyboardButtonPressedEvent() ;

static inline ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>* getStaticF_ScoreboardMaterialsEvent() ;

static inline ::UnityEngine::Events::UnityEvent_1<::StringW>* getStaticF_ScoreboardTextChangedEvent() ;

static inline ::UnityEngine::Events::UnityEvent_1<::StringW>* getStaticF_ScreenTextChangedEvent() ;

static inline ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>* getStaticF_ScreenTextMaterialsEvent() ;

static inline void setStaticF_FunctionSelectTextChangedEvent(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

static inline void setStaticF_FunctionTextMaterialsEvent(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  value) ;

static inline void setStaticF_LanguageEvent(::UnityEngine::Events::UnityEvent*  value) ;

static inline void setStaticF_OnGorrillaATMKeyButtonPressedEvent(::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaATMKeyBindings>*  value) ;

static inline void setStaticF_OnGorrillaKeyboardButtonPressedEvent(::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaKeyboardBindings>*  value) ;

static inline void setStaticF_OnSharedBlocksKeyboardButtonPressedEvent(::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings>*  value) ;

static inline void setStaticF_ScoreboardMaterialsEvent(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  value) ;

static inline void setStaticF_ScoreboardTextChangedEvent(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

static inline void setStaticF_ScreenTextChangedEvent(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

static inline void setStaticF_ScreenTextMaterialsEvent(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEvents(GameEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEvents(GameEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1481};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameEvents) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
