#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMGUIContainer.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_GUIGlobals_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_GUIGlobals_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_NotUITKScope_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_UITKScope_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_MeasureMode_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__GUILayoutUtility_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__ObjectGUIState_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_onGUIHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_onGUIHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8b676c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_onGUIHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.set_onGUIHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::System::Action*)>(&::UnityEngine::UIElements::IMGUIContainer::set_onGUIHandler)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb8b6774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"set_onGUIHandler", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_guiState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ObjectGUIState* (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_guiState)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb8b67d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_guiState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_lastWorldClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_lastWorldClip)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb8b689c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_lastWorldClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.set_lastWorldClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Rect)>(&::UnityEngine::UIElements::IMGUIContainer::set_lastWorldClip)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb8b68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"set_lastWorldClip", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_cullingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_cullingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8b68c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_cullingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.set_cullingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(bool)>(&::UnityEngine::UIElements::IMGUIContainer::set_cullingEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb8b68cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"set_cullingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_cache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutUtility_LayoutCache* (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_cache)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb8b695c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_cache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_layoutMeasuredWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredWidth)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb8b69d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_layoutMeasuredWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_layoutMeasuredHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredHeight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb8b69fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_layoutMeasuredHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_contextType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ContextType (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_contextType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8b6a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_contextType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.set_contextType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::ContextType)>(&::UnityEngine::UIElements::IMGUIContainer::set_contextType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb8b6a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"set_contextType", {}, {::i2c::type_of<::UnityEngine::UIElements::ContextType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_focusOnlyIfHasFocusableControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_focusOnlyIfHasFocusableControls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8b6ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_focusOnlyIfHasFocusableControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_canGrabFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_canGrabFocus)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb8b6ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8b6fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::System::Action*)>(&::UnityEngine::UIElements::IMGUIContainer::_ctor)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xb8b6fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.OnGenerateVisualContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(Il2CppObject*)>(&::UnityEngine::UIElements::IMGUIContainer::OnGenerateVisualContent)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb8b7234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"OnGenerateVisualContent", {}, {::i2c::type_of<Il2CppObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SaveGlobals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::SaveGlobals)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb8b7398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"SaveGlobals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.RestoreGlobals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::RestoreGlobals)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb8b74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"RestoreGlobals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.DoOnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, bool, ::UnityEngine::Rect, ::System::Action*, bool)>(&::UnityEngine::UIElements::IMGUIContainer::DoOnGUI)> {
  constexpr static std::size_t size = 0xda8;
  constexpr static std::size_t addrs = 0xb8b761c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"DoOnGUI", {}, {::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.MarkDirtyLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::MarkDirtyLayout)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb8b83c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"MarkDirtyLayout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.DoIMGUIRepaint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::DoIMGUIRepaint)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0xb8b83d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"DoIMGUIRepaint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SendEventToIMGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*, bool, bool)>(&::UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUI)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xb8b8b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"SendEventToIMGUI", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SendEventToIMGUIRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*, bool, bool)>(&::UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUIRaw)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb8b8de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"SendEventToIMGUIRaw", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.VerifyBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::IMGUIContainer::VerifyBounds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb8b8ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"VerifyBounds", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsContainerCapturingTheMouse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::IsContainerCapturingTheMouse)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb8b8f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"IsContainerCapturingTheMouse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsLocalEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::IMGUIContainer::IsLocalEvent)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb8b908c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"IsLocalEvent", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsEventInsideLocalWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::IMGUIContainer::IsEventInsideLocalWindow)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb8b9290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"IsEventInsideLocalWindow", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsDockAreaMouseUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::IMGUIContainer::IsDockAreaMouseUp)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb8b9444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"IsDockAreaMouseUp", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleIMGUIEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, bool)>(&::UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb8b8f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"HandleIMGUIEvent", {}, {::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleIMGUIEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, ::System::Action*, bool)>(&::UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb8b9578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"HandleIMGUIEvent", {}, {::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleIMGUIEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, ::System::Action*, bool)>(&::UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0xb8b876c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"HandleIMGUIEvent", {}, {::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleEventBubbleUpDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::IMGUIContainer::HandleEventBubbleUpDisabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb8b98b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleEventBubbleUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::IMGUIContainer::HandleEventBubbleUp)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0xb8b98c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SetFoldoutDepthClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::SetFoldoutDepthClass)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb8b9d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"SetFoldoutDepthClass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.DoMeasure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::IMGUIContainer::*)(float_t, ::GlobalNamespace::VisualElement_MeasureMode, float_t, ::GlobalNamespace::VisualElement_MeasureMode)>(&::UnityEngine::UIElements::IMGUIContainer::DoMeasure)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xb8b9ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 132}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.GetCurrentClipRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::GetCurrentClipRect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb8b9540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"GetCurrentClipRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.GetCurrentTransformAndClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IMGUIContainer*, ::UnityEngine::Event*, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::UIElements::IMGUIContainer::GetCurrentTransformAndClip)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb8b9640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"GetCurrentTransformAndClip", {}, {::i2c::type_of<::UnityEngine::UIElements::IMGUIContainer*>(), ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb8ba178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(bool)>(&::UnityEngine::UIElements::IMGUIContainer::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb8ba1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 135}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer._DoOnGUI_b__61_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::_DoOnGUI_b__61_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb8ba200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"<DoOnGUI>b__61_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_OnGUIHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnGUIHandler;
}
constexpr ::System::Action* const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_OnGUIHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnGUIHandler;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_OnGUIHandler(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnGUIHandler = value;
}
constexpr ::UnityEngine::ObjectGUIState*& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_ObjectGUIState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectGUIState;
}
constexpr ::UnityEngine::ObjectGUIState* const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_ObjectGUIState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectGUIState;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_ObjectGUIState(::UnityEngine::ObjectGUIState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ObjectGUIState = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_useOwnerObjectGUIState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useOwnerObjectGUIState;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_useOwnerObjectGUIState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useOwnerObjectGUIState;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_useOwnerObjectGUIState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useOwnerObjectGUIState = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get__lastWorldClip_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWorldClip_k__BackingField;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get__lastWorldClip_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWorldClip_k__BackingField;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set__lastWorldClip_k__BackingField(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWorldClip_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CullingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingEnabled;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CullingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingEnabled;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_CullingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CullingEnabled = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_IsFocusDelegated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsFocusDelegated;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_IsFocusDelegated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsFocusDelegated;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_IsFocusDelegated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsFocusDelegated = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_RefreshCachedLayout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefreshCachedLayout;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_RefreshCachedLayout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefreshCachedLayout;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_RefreshCachedLayout(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RefreshCachedLayout = value;
}
constexpr ::UnityEngine::GUILayoutUtility_LayoutCache*& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_Cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr ::UnityEngine::GUILayoutUtility_LayoutCache* const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_Cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_Cache(::UnityEngine::GUILayoutUtility_LayoutCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Cache = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CachedClippingRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedClippingRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CachedClippingRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedClippingRect;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_CachedClippingRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedClippingRect = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CachedTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedTransform;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CachedTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedTransform;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_CachedTransform(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedTransform = value;
}
constexpr ::UnityEngine::UIElements::ContextType& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_ContextType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContextType;
}
constexpr ::UnityEngine::UIElements::ContextType const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_ContextType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContextType;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_ContextType(::UnityEngine::UIElements::ContextType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ContextType = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_lostFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lostFocus;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_lostFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lostFocus;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_lostFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lostFocus = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_receivedFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivedFocus;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_receivedFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivedFocus;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_receivedFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receivedFocus = value;
}
constexpr ::UnityEngine::UIElements::FocusChangeDirection*& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_focusChangeDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusChangeDirection;
}
constexpr ::UnityEngine::UIElements::FocusChangeDirection* const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_focusChangeDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusChangeDirection;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_focusChangeDirection(::UnityEngine::UIElements::FocusChangeDirection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focusChangeDirection = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_hasFocusableControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFocusableControls;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_hasFocusableControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFocusableControls;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_hasFocusableControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasFocusableControls = value;
}
constexpr int32_t& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_newKeyboardFocusControlID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newKeyboardFocusControlID;
}
constexpr int32_t const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_newKeyboardFocusControlID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newKeyboardFocusControlID;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_newKeyboardFocusControlID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newKeyboardFocusControlID = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get__focusOnlyIfHasFocusableControls_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusOnlyIfHasFocusableControls_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get__focusOnlyIfHasFocusableControls_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusOnlyIfHasFocusableControls_k__BackingField;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set__focusOnlyIfHasFocusableControls_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____focusOnlyIfHasFocusableControls_k__BackingField = value;
}
constexpr ::GlobalNamespace::IMGUIContainer_GUIGlobals& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_GUIGlobals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GUIGlobals;
}
constexpr ::GlobalNamespace::IMGUIContainer_GUIGlobals const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_GUIGlobals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GUIGlobals;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_GUIGlobals(::GlobalNamespace::IMGUIContainer_GUIGlobals  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GUIGlobals = value;
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_cullingEnabledProperty(::UnityEngine::UIElements::BindingId  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "cullingEnabledProperty", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::IMGUIContainer::getStaticF_cullingEnabledProperty()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "cullingEnabledProperty", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_contextTypeProperty(::UnityEngine::UIElements::BindingId  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "contextTypeProperty", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::IMGUIContainer::getStaticF_contextTypeProperty()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "contextTypeProperty", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_ussClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::IMGUIContainer::getStaticF_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_ussFoldoutChildDepthClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussFoldoutChildDepthClassName", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::IMGUIContainer::getStaticF_ussFoldoutChildDepthClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussFoldoutChildDepthClassName", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_ussFoldoutChildDepthClassNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "ussFoldoutChildDepthClassNames", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::UIElements::IMGUIContainer::getStaticF_ussFoldoutChildDepthClassNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "ussFoldoutChildDepthClassNames", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_k_OnGUIMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_OnGUIMarker", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::IMGUIContainer::getStaticF_k_OnGUIMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_OnGUIMarker", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_k_ImmediateCallbackMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ImmediateCallbackMarker", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::IMGUIContainer::getStaticF_k_ImmediateCallbackMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ImmediateCallbackMarker", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_s_DefaultMeasureEvent(::UnityEngine::Event*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Event*, "s_DefaultMeasureEvent", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::UIElements::IMGUIContainer::getStaticF_s_DefaultMeasureEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_DefaultMeasureEvent", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_s_MeasureEvent(::UnityEngine::Event*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Event*, "s_MeasureEvent", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::UIElements::IMGUIContainer::getStaticF_s_MeasureEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_MeasureEvent", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_s_CurrentEvent(::UnityEngine::Event*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Event*, "s_CurrentEvent", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::UIElements::IMGUIContainer::getStaticF_s_CurrentEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_CurrentEvent", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline ::System::Action* UnityEngine::UIElements::IMGUIContainer::get_onGUIHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_onGUIHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::set_onGUIHandler(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"set_onGUIHandler", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ObjectGUIState* UnityEngine::UIElements::IMGUIContainer::get_guiState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_guiState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ObjectGUIState*>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::IMGUIContainer::get_lastWorldClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_lastWorldClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::set_lastWorldClip(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"set_lastWorldClip", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::IMGUIContainer::get_cullingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_cullingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::set_cullingEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"set_cullingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUILayoutUtility_LayoutCache* UnityEngine::UIElements::IMGUIContainer::get_cache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_cache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutUtility_LayoutCache*>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_layoutMeasuredWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_layoutMeasuredHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ContextType UnityEngine::UIElements::IMGUIContainer::get_contextType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_contextType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ContextType>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::set_contextType(::UnityEngine::UIElements::ContextType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"set_contextType", {}, {::i2c::type_of<::UnityEngine::UIElements::ContextType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::IMGUIContainer::get_focusOnlyIfHasFocusableControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"get_focusOnlyIfHasFocusableControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IMGUIContainer::get_canGrabFocus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::_ctor(::System::Action*  onGUIHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onGUIHandler);
}
inline void UnityEngine::UIElements::IMGUIContainer::OnGenerateVisualContent(Il2CppObject*  mgc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"OnGenerateVisualContent", {}, {::i2c::type_of<Il2CppObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc);
}
inline void UnityEngine::UIElements::IMGUIContainer::SaveGlobals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"SaveGlobals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::RestoreGlobals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"RestoreGlobals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::DoOnGUI(::UnityEngine::Event*  evt, ::UnityEngine::Matrix4x4  parentTransform, ::UnityEngine::Rect  clippingRect, bool  isComputingLayout, ::UnityEngine::Rect  layoutSize, ::System::Action*  onGUIHandler, bool  canAffectFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"DoOnGUI", {}, {::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, parentTransform, clippingRect, isComputingLayout, layoutSize, onGUIHandler, canAffectFocus);
}
inline void UnityEngine::UIElements::IMGUIContainer::MarkDirtyLayout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"MarkDirtyLayout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::DoIMGUIRepaint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"DoIMGUIRepaint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUI(::UnityEngine::UIElements::EventBase*  evt, bool  canAffectFocus, bool  verifyBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"SendEventToIMGUI", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt, canAffectFocus, verifyBounds);
}
inline bool UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUIRaw(::UnityEngine::UIElements::EventBase*  evt, bool  canAffectFocus, bool  verifyBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"SendEventToIMGUIRaw", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt, canAffectFocus, verifyBounds);
}
inline bool UnityEngine::UIElements::IMGUIContainer::VerifyBounds(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"VerifyBounds", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsContainerCapturingTheMouse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"IsContainerCapturingTheMouse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsLocalEvent(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"IsLocalEvent", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsEventInsideLocalWindow(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"IsEventInsideLocalWindow", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsDockAreaMouseUp(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"IsDockAreaMouseUp", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent(::UnityEngine::Event*  e, bool  canAffectFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"HandleIMGUIEvent", {}, {::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, canAffectFocus);
}
inline bool UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent(::UnityEngine::Event*  e, ::System::Action*  onGUIHandler, bool  canAffectFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"HandleIMGUIEvent", {}, {::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, onGUIHandler, canAffectFocus);
}
inline bool UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent(::UnityEngine::Event*  e, ::UnityEngine::Matrix4x4  worldTransform, ::UnityEngine::Rect  clippingRect, ::System::Action*  onGUIHandler, bool  canAffectFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"HandleIMGUIEvent", {}, {::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, worldTransform, clippingRect, onGUIHandler, canAffectFocus);
}
inline void UnityEngine::UIElements::IMGUIContainer::HandleEventBubbleUpDisabled(::UnityEngine::UIElements::EventBase*  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::IMGUIContainer::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase*  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::IMGUIContainer::SetFoldoutDepthClass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"SetFoldoutDepthClass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::IMGUIContainer::DoMeasure(float_t  desiredWidth, ::GlobalNamespace::VisualElement_MeasureMode  widthMode, float_t  desiredHeight, ::GlobalNamespace::VisualElement_MeasureMode  heightMode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 132}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, desiredWidth, widthMode, desiredHeight, heightMode);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::IMGUIContainer::GetCurrentClipRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"GetCurrentClipRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::GetCurrentTransformAndClip(::UnityEngine::UIElements::IMGUIContainer*  container, ::UnityEngine::Event*  evt, ::by_ref<::UnityEngine::Matrix4x4>  transform, ::by_ref<::UnityEngine::Rect>  clipRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"GetCurrentTransformAndClip", {}, {::i2c::type_of<::UnityEngine::UIElements::IMGUIContainer*>(), ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, evt, transform, clipRect);
}
inline void UnityEngine::UIElements::IMGUIContainer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::Dispose(bool  disposeManaged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 135}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposeManaged);
}
inline void UnityEngine::UIElements::IMGUIContainer::_DoOnGUI_b__61_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                        {"<DoOnGUI>b__61_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IMGUIContainer* UnityEngine::UIElements::IMGUIContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::IMGUIContainer*>());
}
inline ::UnityEngine::UIElements::IMGUIContainer* UnityEngine::UIElements::IMGUIContainer::New_ctor(::System::Action*  onGUIHandler)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::IMGUIContainer*>(onGUIHandler));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UIElements::IMGUIContainer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::IMGUIContainer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IMGUIContainer::IMGUIContainer()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer_UxmlTraits::*)()>(&::UnityEngine::UIElements::IMGUIContainer_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb8ba254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer_UxmlTraits*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IMGUIContainer_UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer_UxmlTraits*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits* UnityEngine::UIElements::IMGUIContainer_UxmlTraits::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::IMGUIContainer_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits::IMGUIContainer_UxmlTraits()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer_UxmlFactory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer_UxmlFactory::*)()>(&::UnityEngine::UIElements::IMGUIContainer_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb8ba20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer_UxmlFactory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IMGUIContainer_UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer_UxmlFactory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IMGUIContainer_UxmlFactory* UnityEngine::UIElements::IMGUIContainer_UxmlFactory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::IMGUIContainer_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IMGUIContainer_UxmlFactory::IMGUIContainer_UxmlFactory()   {
}
