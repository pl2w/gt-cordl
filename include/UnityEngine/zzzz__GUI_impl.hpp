#pragma once
// IWYU pragma private; include "UnityEngine/GUI.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__GUI_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUISkin_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__GUI_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngineInternal/zzzz__GenericStack_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUI.get_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::GUI::get_color)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb63db84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_color", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::UnityEngine::GUI::set_color)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb63dc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_backgroundColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::GUI::get_backgroundColor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb63dd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_backgroundColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_backgroundColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::UnityEngine::GUI::set_backgroundColor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb63ddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_backgroundColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_contentColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::GUI::get_contentColor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb63de8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_contentColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_contentColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::UnityEngine::GUI::set_contentColor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb63df50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_contentColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::GUI::get_changed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb63e010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_changed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::GUI::set_changed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb63e038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_changed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::GUI::get_enabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb63e074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::GUI::set_enabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb63e09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_usePageScrollbars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::GUI::get_usePageScrollbars)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb63e0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_usePageScrollbars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.GrabMouseControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUI::GrabMouseControl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb63e100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"GrabMouseControl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.HasMouseControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::GUI::HasMouseControl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb63e13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HasMouseControl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.ReleaseMouseControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUI::ReleaseMouseControl)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb63e178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"ReleaseMouseControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.InternalRepaintEditorWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUI::InternalRepaintEditorWindow)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb63e1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"InternalRepaintEditorWindow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Internal_DoWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(int32_t, int32_t, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::System::Object*, bool)>(&::UnityEngine::GUI::Internal_DoWindow)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb63e1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Internal_DoWindow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DragWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect)>(&::UnityEngine::GUI::DragWindow)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb63e34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DragWindow", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_scrollTroughSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::GUI::get_scrollTroughSide)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb63e6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_scrollTroughSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_scrollTroughSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUI::set_scrollTroughSide)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb63e71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_scrollTroughSide", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_nextScrollStepTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)()>(&::UnityEngine::GUI::get_nextScrollStepTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb63e778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_nextScrollStepTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_nextScrollStepTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime)>(&::UnityEngine::GUI::set_nextScrollStepTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb63e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_nextScrollStepTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_skin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUISkin*)>(&::UnityEngine::GUI::set_skin)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb63e82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_skin", {}, {::i2c::type_of<::UnityEngine::GUISkin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_skin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GUISkin> (*)()>(&::UnityEngine::GUI::get_skin)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb63ea34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_skin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoSetSkin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUISkin*)>(&::UnityEngine::GUI::DoSetSkin)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb63e964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoSetSkin", {}, {::i2c::type_of<::UnityEngine::GUISkin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_matrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)()>(&::UnityEngine::GUI::get_matrix)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb63ec14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_matrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_matrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::GUI::set_matrix)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb63ecec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_matrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::StringW)>(&::UnityEngine::GUI::Label)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb63ed74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::StringW, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Label)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb63efc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Label)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb63ef0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Box
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::StringW)>(&::UnityEngine::GUI::Box)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb63f31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Box
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::StringW, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Box)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb63f590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Box
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Box)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb63f3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, ::StringW)>(&::UnityEngine::GUI::Button)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb63f798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, ::StringW, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Button)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb63f954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Button)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb63f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Button)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb63fac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.PasswordFieldGetStrToShow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t)>(&::UnityEngine::GUI::PasswordFieldGetStrToShow)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb63fc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"PasswordFieldGetStrToShow", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoTextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, bool, int32_t, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::DoTextField)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb63fd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoTextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, bool, int32_t, ::UnityEngine::GUIStyle*, ::StringW)>(&::UnityEngine::GUI::DoTextField)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb63fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoTextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, bool, int32_t, ::UnityEngine::GUIStyle*, ::StringW, char16_t)>(&::UnityEngine::GUI::DoTextField)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xb63ff08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.HandleTextFieldEventForTouchscreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, bool, int32_t, ::UnityEngine::GUIStyle*, ::StringW, char16_t, ::UnityEngine::TextEditor*)>(&::UnityEngine::GUI::HandleTextFieldEventForTouchscreen)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0xb6402bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HandleTextFieldEventForTouchscreen", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::UnityEngine::TextEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.HandleTextFieldEventForDesktop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, bool, int32_t, ::UnityEngine::GUIStyle*, ::UnityEngine::TextEditor*)>(&::UnityEngine::GUI::HandleTextFieldEventForDesktop)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0xb640730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HandleTextFieldEventForDesktop", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::TextEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Toggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, bool, ::StringW)>(&::UnityEngine::GUI::Toggle)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb641228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Toggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Toggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, bool, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Toggle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb641310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Toggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, int32_t, bool, bool, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::DoControl)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xb641510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoControl", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::DoLabel)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xb63f090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoLabel", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, int32_t, bool, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::DoToggle)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb6413f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoToggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::DoButton)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb63fb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoButton", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.HorizontalSlider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rect, float_t, float_t, float_t, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::HorizontalSlider)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb641cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HorizontalSlider", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Slider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rect, float_t, float_t, float_t, float_t, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, bool, int32_t, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Slider)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb641da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Slider", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.BeginGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect)>(&::UnityEngine::GUI::BeginGroup)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb641f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginGroup", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.BeginGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::BeginGroup)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb6420c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginGroup", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.BeginGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::Vector2)>(&::UnityEngine::GUI::BeginGroup)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xb642198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginGroup", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.EndGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUI::EndGroup)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb64248c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"EndGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_scrollViewStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngineInternal::GenericStack* (*)()>(&::UnityEngine::GUI::get_scrollViewStates)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb642520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_scrollViewStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Window
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(int32_t, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Window)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb642578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Window", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(int32_t, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUISkin*, bool)>(&::UnityEngine::GUI::DoWindow)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb642658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoWindow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUISkin*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.CallWindowDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUI_WindowFunction*, int32_t, int32_t, ::UnityEngine::GUISkin*, int32_t, float_t, float_t, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::CallWindowDelegate)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xb642754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"CallWindowDelegate", {}, {::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUISkin*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DragWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUI::DragWindow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb643198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DragWindow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_color_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::get_color_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb63dc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_color_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::set_color_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb63dccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_backgroundColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::get_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb63dd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_backgroundColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_backgroundColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::set_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb63de50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_backgroundColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_contentColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::get_contentColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb63df14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_contentColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_contentColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::set_contentColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb63dfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_contentColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Internal_DoWindow_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::by_ref<::UnityEngine::Rect>, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::System::Object*, bool, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::GUI::Internal_DoWindow_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb63e2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Internal_DoWindow_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DragWindow_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::GUI::DragWindow_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb63e3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DragWindow_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::GUI::setStaticF_s_HotTextField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_HotTextField", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_HotTextField()  {
return ::cordl_internals::getStaticField<int32_t, "s_HotTextField", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_BoxHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_BoxHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_BoxHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_BoxHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ButonHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ButonHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ButonHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_ButonHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_RepeatButtonHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_RepeatButtonHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_RepeatButtonHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_RepeatButtonHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ToggleHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ToggleHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ToggleHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_ToggleHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ButtonGridHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ButtonGridHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ButtonGridHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_ButtonGridHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_SliderHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_SliderHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_SliderHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_SliderHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_BeginGroupHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_BeginGroupHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_BeginGroupHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_BeginGroupHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ScrollviewHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ScrollviewHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ScrollviewHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_ScrollviewHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF__scrollTroughSide_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<scrollTroughSide>k__BackingField", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF__scrollTroughSide_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<scrollTroughSide>k__BackingField", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF__nextScrollStepTime_k__BackingField(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "<nextScrollStepTime>k__BackingField", ::UnityEngine::GUI*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime UnityEngine::GUI::getStaticF__nextScrollStepTime_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::DateTime, "<nextScrollStepTime>k__BackingField", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_Skin(::UnityW<::UnityEngine::GUISkin>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GUISkin>, "s_Skin", ::UnityEngine::GUI*>(std::forward<::UnityW<::UnityEngine::GUISkin>>(value));
}
inline ::UnityW<::UnityEngine::GUISkin> UnityEngine::GUI::getStaticF_s_Skin()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GUISkin>, "s_Skin", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ToolTipRect(::UnityEngine::Rect  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rect, "s_ToolTipRect", ::UnityEngine::GUI*>(std::forward<::UnityEngine::Rect>(value));
}
inline ::UnityEngine::Rect UnityEngine::GUI::getStaticF_s_ToolTipRect()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rect, "s_ToolTipRect", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF__scrollViewStates_k__BackingField(::UnityEngineInternal::GenericStack*  value)  {
::cordl_internals::setStaticField<::UnityEngineInternal::GenericStack*, "<scrollViewStates>k__BackingField", ::UnityEngine::GUI*>(std::forward<::UnityEngineInternal::GenericStack*>(value));
}
inline ::UnityEngineInternal::GenericStack* UnityEngine::GUI::getStaticF__scrollViewStates_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngineInternal::GenericStack*, "<scrollViewStates>k__BackingField", ::UnityEngine::GUI*>();
}
inline ::UnityEngine::Color UnityEngine::GUI::get_color()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_color", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_color(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::GUI::get_backgroundColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_backgroundColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_backgroundColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_backgroundColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::GUI::get_contentColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_contentColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_contentColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_contentColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::GUI::get_changed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_changed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_changed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_changed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::GUI::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::GUI::get_usePageScrollbars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_usePageScrollbars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::GrabMouseControl(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"GrabMouseControl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
inline bool UnityEngine::GUI::HasMouseControl(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HasMouseControl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id);
}
inline void UnityEngine::GUI::ReleaseMouseControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"ReleaseMouseControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::InternalRepaintEditorWindow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"InternalRepaintEditorWindow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::GUI::Internal_DoWindow(int32_t  id, int32_t  instanceID, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, /* [Unmarshalled] */ ::UnityEngine::GUIStyle*  style, ::System::Object*  skin, bool  forceRectOnLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Internal_DoWindow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, id, instanceID, clientRect, func, title, style, skin, forceRectOnLayout);
}
inline void UnityEngine::GUI::DragWindow(::UnityEngine::Rect  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DragWindow", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position);
}
inline int32_t UnityEngine::GUI::get_scrollTroughSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_scrollTroughSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_scrollTroughSide(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_scrollTroughSide", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::DateTime UnityEngine::GUI::get_nextScrollStepTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_nextScrollStepTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_nextScrollStepTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_nextScrollStepTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::set_skin(::UnityEngine::GUISkin*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_skin", {}, {::i2c::type_of<::UnityEngine::GUISkin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GUISkin> UnityEngine::GUI::get_skin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_skin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GUISkin>>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::DoSetSkin(::UnityEngine::GUISkin*  newSkin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoSetSkin", {}, {::i2c::type_of<::UnityEngine::GUISkin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newSkin);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::GUI::get_matrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_matrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_matrix(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_matrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::Label(::UnityEngine::Rect  position, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text);
}
inline void UnityEngine::GUI::Label(::UnityEngine::Rect  position, ::StringW  text, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, style);
}
inline void UnityEngine::GUI::Label(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline void UnityEngine::GUI::Box(::UnityEngine::Rect  position, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text);
}
inline void UnityEngine::GUI::Box(::UnityEngine::Rect  position, ::StringW  text, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, style);
}
inline void UnityEngine::GUI::Box(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline bool UnityEngine::GUI::Button(::UnityEngine::Rect  position, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, text);
}
inline bool UnityEngine::GUI::Button(::UnityEngine::Rect  position, ::StringW  text, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, text, style);
}
inline bool UnityEngine::GUI::Button(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, content, style);
}
inline bool UnityEngine::GUI::Button(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, id, content, style);
}
inline ::StringW UnityEngine::GUI::PasswordFieldGetStrToShow(::StringW  password, char16_t  maskChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"PasswordFieldGetStrToShow", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, password, maskChar);
}
inline void UnityEngine::GUI::DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, id, content, multiline, maxLength, style);
}
inline void UnityEngine::GUI::DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, id, content, multiline, maxLength, style, secureText);
}
inline void UnityEngine::GUI::DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText, char16_t  maskChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, id, content, multiline, maxLength, style, secureText, maskChar);
}
inline void UnityEngine::GUI::HandleTextFieldEventForTouchscreen(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText, char16_t  maskChar, ::UnityEngine::TextEditor*  editor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HandleTextFieldEventForTouchscreen", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::UnityEngine::TextEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, id, content, multiline, maxLength, style, secureText, maskChar, editor);
}
inline void UnityEngine::GUI::HandleTextFieldEventForDesktop(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::UnityEngine::TextEditor*  editor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HandleTextFieldEventForDesktop", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::TextEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, id, content, multiline, maxLength, style, editor);
}
inline bool UnityEngine::GUI::Toggle(::UnityEngine::Rect  position, bool  value, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Toggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, value, text);
}
inline bool UnityEngine::GUI::Toggle(::UnityEngine::Rect  position, bool  value, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Toggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, value, content, style);
}
inline bool UnityEngine::GUI::DoControl(::UnityEngine::Rect  position, int32_t  id, bool  on, bool  hover, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoControl", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, id, on, hover, content, style);
}
inline void UnityEngine::GUI::DoLabel(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoLabel", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline bool UnityEngine::GUI::DoToggle(::UnityEngine::Rect  position, int32_t  id, bool  value, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoToggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, id, value, content, style);
}
inline bool UnityEngine::GUI::DoButton(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoButton", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, id, content, style);
}
inline float_t UnityEngine::GUI::HorizontalSlider(::UnityEngine::Rect  position, float_t  value, float_t  leftValue, float_t  rightValue, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HorizontalSlider", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, position, value, leftValue, rightValue, slider, thumb);
}
inline float_t UnityEngine::GUI::Slider(::UnityEngine::Rect  position, float_t  value, float_t  size, float_t  start, float_t  end, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, bool  horiz, int32_t  id, ::UnityEngine::GUIStyle*  thumbExtent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Slider", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, position, value, size, start, end, slider, thumb, horiz, id, thumbExtent);
}
inline void UnityEngine::GUI::BeginGroup(::UnityEngine::Rect  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginGroup", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position);
}
inline void UnityEngine::GUI::BeginGroup(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginGroup", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline void UnityEngine::GUI::BeginGroup(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::UnityEngine::Vector2  scrollOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginGroup", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style, scrollOffset);
}
inline void UnityEngine::GUI::EndGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"EndGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngineInternal::GenericStack* UnityEngine::GUI::get_scrollViewStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_scrollViewStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngineInternal::GenericStack*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::GUI::Window(int32_t  id, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Window", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, id, clientRect, func, title, style);
}
inline ::UnityEngine::Rect UnityEngine::GUI::DoWindow(int32_t  id, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style, ::UnityEngine::GUISkin*  skin, bool  forceRectOnLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoWindow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUISkin*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, id, clientRect, func, title, style, skin, forceRectOnLayout);
}
inline void UnityEngine::GUI::CallWindowDelegate(::UnityEngine::GUI_WindowFunction*  func, int32_t  id, int32_t  instanceID, ::UnityEngine::GUISkin*  _skin, int32_t  forceRect, float_t  width, float_t  height, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"CallWindowDelegate", {}, {::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUISkin*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func, id, instanceID, _skin, forceRect, width, height, style);
}
inline void UnityEngine::GUI::DragWindow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DragWindow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::get_color_Injected(::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::GUI::set_color_Injected(::by_ref<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::get_backgroundColor_Injected(::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_backgroundColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::GUI::set_backgroundColor_Injected(::by_ref<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_backgroundColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::get_contentColor_Injected(::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_contentColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::GUI::set_contentColor_Injected(::by_ref<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_contentColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::Internal_DoWindow_Injected(int32_t  id, int32_t  instanceID, ::by_ref<::UnityEngine::Rect>  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style, ::System::Object*  skin, bool  forceRectOnLayout, ::by_ref<::UnityEngine::Rect>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Internal_DoWindow_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, instanceID, clientRect, func, title, style, skin, forceRectOnLayout, ret);
}
inline void UnityEngine::GUI::DragWindow_Injected(::by_ref<::UnityEngine::Rect>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DragWindow_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUI::GUI()   {
}
//  Writing Method size for method: ::UnityEngine::GUI_WindowFunction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUI_WindowFunction::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::GUI_WindowFunction::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb6431f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI_WindowFunction.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUI_WindowFunction::*)(int32_t)>(&::UnityEngine::GUI_WindowFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb643298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(),
                    {::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::GUI_WindowFunction::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::GUI_WindowFunction::Invoke(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::UnityEngine::GUI_WindowFunction* UnityEngine::GUI_WindowFunction::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUI_WindowFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUI_WindowFunction::GUI_WindowFunction()   {
}
