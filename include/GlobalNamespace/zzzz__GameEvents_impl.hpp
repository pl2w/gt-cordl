#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameEvents_def.hpp"
#include "GorillaNetworking/zzzz__GorillaATMKeyBindings_def.hpp"
#include "GorillaNetworking/zzzz__GorillaKeyboardBindings_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksKeyboardBindings_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEvents::*)()>(&::GlobalNamespace::GameEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579af68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameEvents::setStaticF_OnGorrillaKeyboardButtonPressedEvent(::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaKeyboardBindings>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaKeyboardBindings>*, "OnGorrillaKeyboardButtonPressedEvent", ::GlobalNamespace::GameEvents*>(std::forward<::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaKeyboardBindings>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaKeyboardBindings>* GlobalNamespace::GameEvents::getStaticF_OnGorrillaKeyboardButtonPressedEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaKeyboardBindings>*, "OnGorrillaKeyboardButtonPressedEvent", ::GlobalNamespace::GameEvents*>();
}
inline void GlobalNamespace::GameEvents::setStaticF_OnGorrillaATMKeyButtonPressedEvent(::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaATMKeyBindings>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaATMKeyBindings>*, "OnGorrillaATMKeyButtonPressedEvent", ::GlobalNamespace::GameEvents*>(std::forward<::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaATMKeyBindings>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaATMKeyBindings>* GlobalNamespace::GameEvents::getStaticF_OnGorrillaATMKeyButtonPressedEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaATMKeyBindings>*, "OnGorrillaATMKeyButtonPressedEvent", ::GlobalNamespace::GameEvents*>();
}
inline void GlobalNamespace::GameEvents::setStaticF_ScreenTextChangedEvent(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "ScreenTextChangedEvent", ::GlobalNamespace::GameEvents*>(std::forward<::UnityEngine::Events::UnityEvent_1<::StringW>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* GlobalNamespace::GameEvents::getStaticF_ScreenTextChangedEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "ScreenTextChangedEvent", ::GlobalNamespace::GameEvents*>();
}
inline void GlobalNamespace::GameEvents::setStaticF_ScreenTextMaterialsEvent(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*, "ScreenTextMaterialsEvent", ::GlobalNamespace::GameEvents*>(std::forward<::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>* GlobalNamespace::GameEvents::getStaticF_ScreenTextMaterialsEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*, "ScreenTextMaterialsEvent", ::GlobalNamespace::GameEvents*>();
}
inline void GlobalNamespace::GameEvents::setStaticF_FunctionSelectTextChangedEvent(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "FunctionSelectTextChangedEvent", ::GlobalNamespace::GameEvents*>(std::forward<::UnityEngine::Events::UnityEvent_1<::StringW>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* GlobalNamespace::GameEvents::getStaticF_FunctionSelectTextChangedEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "FunctionSelectTextChangedEvent", ::GlobalNamespace::GameEvents*>();
}
inline void GlobalNamespace::GameEvents::setStaticF_FunctionTextMaterialsEvent(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*, "FunctionTextMaterialsEvent", ::GlobalNamespace::GameEvents*>(std::forward<::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>* GlobalNamespace::GameEvents::getStaticF_FunctionTextMaterialsEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*, "FunctionTextMaterialsEvent", ::GlobalNamespace::GameEvents*>();
}
inline void GlobalNamespace::GameEvents::setStaticF_LanguageEvent(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent*, "LanguageEvent", ::GlobalNamespace::GameEvents*>(std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
inline ::UnityEngine::Events::UnityEvent* GlobalNamespace::GameEvents::getStaticF_LanguageEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent*, "LanguageEvent", ::GlobalNamespace::GameEvents*>();
}
inline void GlobalNamespace::GameEvents::setStaticF_ScoreboardTextChangedEvent(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "ScoreboardTextChangedEvent", ::GlobalNamespace::GameEvents*>(std::forward<::UnityEngine::Events::UnityEvent_1<::StringW>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* GlobalNamespace::GameEvents::getStaticF_ScoreboardTextChangedEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "ScoreboardTextChangedEvent", ::GlobalNamespace::GameEvents*>();
}
inline void GlobalNamespace::GameEvents::setStaticF_ScoreboardMaterialsEvent(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*, "ScoreboardMaterialsEvent", ::GlobalNamespace::GameEvents*>(std::forward<::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>* GlobalNamespace::GameEvents::getStaticF_ScoreboardMaterialsEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*, "ScoreboardMaterialsEvent", ::GlobalNamespace::GameEvents*>();
}
inline void GlobalNamespace::GameEvents::setStaticF_OnSharedBlocksKeyboardButtonPressedEvent(::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings>*, "OnSharedBlocksKeyboardButtonPressedEvent", ::GlobalNamespace::GameEvents*>(std::forward<::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings>* GlobalNamespace::GameEvents::getStaticF_OnSharedBlocksKeyboardButtonPressedEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings>*, "OnSharedBlocksKeyboardButtonPressedEvent", ::GlobalNamespace::GameEvents*>();
}
inline void GlobalNamespace::GameEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEvents* GlobalNamespace::GameEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEvents::GameEvents()   {
}
