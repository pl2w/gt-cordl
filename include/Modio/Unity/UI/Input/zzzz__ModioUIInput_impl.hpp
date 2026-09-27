#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Input/zzzz__ModioUIInput_def.hpp"
#include "Modio/Unity/UI/Input/zzzz__ModioUIInput_ModioAction_def.hpp"
#include "Modio/Unity/UI/Input/zzzz__ModioUIInput_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.get_IsUsingGamepad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::Unity::UI::Input::ModioUIInput::get_IsUsingGamepad)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fb4b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"get_IsUsingGamepad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.set_IsUsingGamepad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Modio::Unity::UI::Input::ModioUIInput::set_IsUsingGamepad)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fb4bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"set_IsUsingGamepad", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.get_SuppressNoInputListenerWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::Unity::UI::Input::ModioUIInput::get_SuppressNoInputListenerWarning)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fb4c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"get_SuppressNoInputListenerWarning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.set_SuppressNoInputListenerWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Modio::Unity::UI::Input::ModioUIInput::set_SuppressNoInputListenerWarning)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fb4c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"set_SuppressNoInputListenerWarning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.get_AnyBindingsExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::Unity::UI::Input::ModioUIInput::get_AnyBindingsExist)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fb4cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"get_AnyBindingsExist", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.set_AnyBindingsExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Modio::Unity::UI::Input::ModioUIInput::set_AnyBindingsExist)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fb4d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"set_AnyBindingsExist", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.add_SwappedControlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::Modio::Unity::UI::Input::ModioUIInput::add_SwappedControlScheme)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9fab02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"add_SwappedControlScheme", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.remove_SwappedControlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::Modio::Unity::UI::Input::ModioUIInput::remove_SwappedControlScheme)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9fab120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"remove_SwappedControlScheme", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.PressedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ModioUIInput_ModioAction)>(&::Modio::Unity::UI::Input::ModioUIInput::PressedAction)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x9fb456c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"PressedAction", {}, {::i2c::type_of<::GlobalNamespace::ModioUIInput_ModioAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.AddHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ModioUIInput_ModioAction, ::System::Action*)>(&::Modio::Unity::UI::Input::ModioUIInput::AddHandler)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x9fa3630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"AddHandler", {}, {::i2c::type_of<::GlobalNamespace::ModioUIInput_ModioAction>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.RemoveHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ModioUIInput_ModioAction, ::System::Action*)>(&::Modio::Unity::UI::Input::ModioUIInput::RemoveHandler)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x9fa40d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"RemoveHandler", {}, {::i2c::type_of<::GlobalNamespace::ModioUIInput_ModioAction>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.ControlSchemeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Modio::Unity::UI::Input::ModioUIInput::ControlSchemeChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9fb4edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"ControlSchemeChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.SetButtonPrompts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ModioUIInput_ModioAction, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*)>(&::Modio::Unity::UI::Input::ModioUIInput::SetButtonPrompts)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9fb4f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"SetButtonPrompts", {}, {::i2c::type_of<::GlobalNamespace::ModioUIInput_ModioAction>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.GetInputPromptDisplayInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo* (*)(::GlobalNamespace::ModioUIInput_ModioAction)>(&::Modio::Unity::UI::Input::ModioUIInput::GetInputPromptDisplayInfo)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9fb4d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"GetInputPromptDisplayInfo", {}, {::i2c::type_of<::GlobalNamespace::ModioUIInput_ModioAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput.GetRawCursor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::Modio::Unity::UI::Input::ModioUIInput::GetRawCursor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9fb5090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"GetRawCursor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Input::ModioUIInput::setStaticF_Handlers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*,int32_t>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*,int32_t>>*>*, "Handlers", ::Modio::Unity::UI::Input::ModioUIInput*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*,int32_t>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*,int32_t>>*>* Modio::Unity::UI::Input::ModioUIInput::getStaticF_Handlers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*,int32_t>>*>*, "Handlers", ::Modio::Unity::UI::Input::ModioUIInput*>();
}
inline void Modio::Unity::UI::Input::ModioUIInput::setStaticF_Prompts(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*, "Prompts", ::Modio::Unity::UI::Input::ModioUIInput*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>* Modio::Unity::UI::Input::ModioUIInput::getStaticF_Prompts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*, "Prompts", ::Modio::Unity::UI::Input::ModioUIInput*>();
}
inline void Modio::Unity::UI::Input::ModioUIInput::setStaticF_CachedHandlersForCurrentCall(::System::Collections::Generic::List_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action*>*, "CachedHandlersForCurrentCall", ::Modio::Unity::UI::Input::ModioUIInput*>(std::forward<::System::Collections::Generic::List_1<::System::Action*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Action*>* Modio::Unity::UI::Input::ModioUIInput::getStaticF_CachedHandlersForCurrentCall()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action*>*, "CachedHandlersForCurrentCall", ::Modio::Unity::UI::Input::ModioUIInput*>();
}
inline void Modio::Unity::UI::Input::ModioUIInput::setStaticF_RawCursorProvider(::System::Func_1<::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::Vector2>*, "RawCursorProvider", ::Modio::Unity::UI::Input::ModioUIInput*>(std::forward<::System::Func_1<::UnityEngine::Vector2>*>(value));
}
inline ::System::Func_1<::UnityEngine::Vector2>* Modio::Unity::UI::Input::ModioUIInput::getStaticF_RawCursorProvider()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::Vector2>*, "RawCursorProvider", ::Modio::Unity::UI::Input::ModioUIInput*>();
}
inline void Modio::Unity::UI::Input::ModioUIInput::setStaticF__IsUsingGamepad_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<IsUsingGamepad>k__BackingField", ::Modio::Unity::UI::Input::ModioUIInput*>(std::forward<bool>(value));
}
inline bool Modio::Unity::UI::Input::ModioUIInput::getStaticF__IsUsingGamepad_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<IsUsingGamepad>k__BackingField", ::Modio::Unity::UI::Input::ModioUIInput*>();
}
inline void Modio::Unity::UI::Input::ModioUIInput::setStaticF__SuppressNoInputListenerWarning_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<SuppressNoInputListenerWarning>k__BackingField", ::Modio::Unity::UI::Input::ModioUIInput*>(std::forward<bool>(value));
}
inline bool Modio::Unity::UI::Input::ModioUIInput::getStaticF__SuppressNoInputListenerWarning_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<SuppressNoInputListenerWarning>k__BackingField", ::Modio::Unity::UI::Input::ModioUIInput*>();
}
inline void Modio::Unity::UI::Input::ModioUIInput::setStaticF__AnyBindingsExist_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<AnyBindingsExist>k__BackingField", ::Modio::Unity::UI::Input::ModioUIInput*>(std::forward<bool>(value));
}
inline bool Modio::Unity::UI::Input::ModioUIInput::getStaticF__AnyBindingsExist_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<AnyBindingsExist>k__BackingField", ::Modio::Unity::UI::Input::ModioUIInput*>();
}
inline void Modio::Unity::UI::Input::ModioUIInput::setStaticF_SwappedControlScheme(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "SwappedControlScheme", ::Modio::Unity::UI::Input::ModioUIInput*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* Modio::Unity::UI::Input::ModioUIInput::getStaticF_SwappedControlScheme()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "SwappedControlScheme", ::Modio::Unity::UI::Input::ModioUIInput*>();
}
inline bool Modio::Unity::UI::Input::ModioUIInput::get_IsUsingGamepad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"get_IsUsingGamepad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIInput::set_IsUsingGamepad(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"set_IsUsingGamepad", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Modio::Unity::UI::Input::ModioUIInput::get_SuppressNoInputListenerWarning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"get_SuppressNoInputListenerWarning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIInput::set_SuppressNoInputListenerWarning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"set_SuppressNoInputListenerWarning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Modio::Unity::UI::Input::ModioUIInput::get_AnyBindingsExist()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"get_AnyBindingsExist", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIInput::set_AnyBindingsExist(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"set_AnyBindingsExist", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Unity::UI::Input::ModioUIInput::add_SwappedControlScheme(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"add_SwappedControlScheme", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Unity::UI::Input::ModioUIInput::remove_SwappedControlScheme(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"remove_SwappedControlScheme", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Unity::UI::Input::ModioUIInput::PressedAction(::GlobalNamespace::ModioUIInput_ModioAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"PressedAction", {}, {::i2c::type_of<::GlobalNamespace::ModioUIInput_ModioAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline void Modio::Unity::UI::Input::ModioUIInput::AddHandler(::GlobalNamespace::ModioUIInput_ModioAction  action, ::System::Action*  onPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"AddHandler", {}, {::i2c::type_of<::GlobalNamespace::ModioUIInput_ModioAction>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action, onPressed);
}
inline void Modio::Unity::UI::Input::ModioUIInput::RemoveHandler(::GlobalNamespace::ModioUIInput_ModioAction  action, ::System::Action*  onPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"RemoveHandler", {}, {::i2c::type_of<::GlobalNamespace::ModioUIInput_ModioAction>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action, onPressed);
}
inline void Modio::Unity::UI::Input::ModioUIInput::ControlSchemeChanged(bool  isController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"ControlSchemeChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isController);
}
inline void Modio::Unity::UI::Input::ModioUIInput::SetButtonPrompts(::GlobalNamespace::ModioUIInput_ModioAction  action, ::System::Collections::Generic::List_1<::StringW>*  textPrompts, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*  icons)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"SetButtonPrompts", {}, {::i2c::type_of<::GlobalNamespace::ModioUIInput_ModioAction>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action, textPrompts, icons);
}
inline ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo* Modio::Unity::UI::Input::ModioUIInput::GetInputPromptDisplayInfo(::GlobalNamespace::ModioUIInput_ModioAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"GetInputPromptDisplayInfo", {}, {::i2c::type_of<::GlobalNamespace::ModioUIInput_ModioAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(nullptr, ___internal_method, action);
}
inline ::UnityEngine::Vector2 Modio::Unity::UI::Input::ModioUIInput::GetRawCursor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput*>(),
                        {"GetRawCursor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Input::ModioUIInput::ModioUIInput()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo.get_Icons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>* (::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::*)()>(&::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::get_Icons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb527c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"get_Icons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo.set_Icons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*)>(&::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::set_Icons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb5284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"set_Icons", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo.get_TextPrompts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::*)()>(&::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::get_TextPrompts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb528c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"get_TextPrompts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo.set_TextPrompts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::set_TextPrompts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb5294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"set_TextPrompts", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo.get_InputHasListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::*)()>(&::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::get_InputHasListeners)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb529c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"get_InputHasListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo.set_InputHasListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::*)(bool)>(&::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::set_InputHasListeners)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb52a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"set_InputHasListeners", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo.add_OnUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::*)(::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*)>(&::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::add_OnUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9fb52ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"add_OnUpdated", {}, {::i2c::type_of<::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo.remove_OnUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::*)(::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*)>(&::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::remove_OnUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9fb535c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"remove_OnUpdated", {}, {::i2c::type_of<::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo.UpdateInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::*)(::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*, bool)>(&::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::UpdateInfo)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x9fb540c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo.UpdateListenerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::*)(bool)>(&::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::UpdateListenerInfo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9fb4e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"UpdateListenerInfo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::*)()>(&::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb5088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*& Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_get__Icons_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Icons_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>* const& Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_get__Icons_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Icons_k__BackingField;
}
constexpr void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_set__Icons_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Icons_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_get__TextPrompts_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextPrompts_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_get__TextPrompts_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextPrompts_k__BackingField;
}
constexpr void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_set__TextPrompts_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TextPrompts_k__BackingField = value;
}
constexpr bool& Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_get__InputHasListeners_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputHasListeners_k__BackingField;
}
constexpr bool const& Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_get__InputHasListeners_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputHasListeners_k__BackingField;
}
constexpr void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_set__InputHasListeners_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InputHasListeners_k__BackingField = value;
}
constexpr ::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*& Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_get_OnUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUpdated;
}
constexpr ::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>* const& Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_get_OnUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUpdated;
}
constexpr void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::__cordl_internal_set_OnUpdated(::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnUpdated = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>* Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::get_Icons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"get_Icons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::set_Icons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"set_Icons", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::get_TextPrompts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"get_TextPrompts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::set_TextPrompts(::System::Collections::Generic::List_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"set_TextPrompts", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::get_InputHasListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"get_InputHasListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::set_InputHasListeners(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"set_InputHasListeners", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::add_OnUpdated(::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"add_OnUpdated", {}, {::i2c::type_of<::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::remove_OnUpdated(::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"remove_OnUpdated", {}, {::i2c::type_of<::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::UpdateInfo(::System::Collections::Generic::List_1<::StringW>*  textPrompts, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*  icons, bool  hasListeners)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textPrompts, icons, hasListeners);
}
inline void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::UpdateListenerInfo(bool  hasListeners)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {"UpdateListenerInfo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasListeners);
}
inline void Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo* Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo::ModioUIInput_InputPromptDisplayInfo()   {
}
