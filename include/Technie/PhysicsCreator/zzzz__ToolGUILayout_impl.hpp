#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/ToolGUILayout.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__ToolGUILayout_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::ToolGUILayout.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Vector2>)>(&::Technie::PhysicsCreator::ToolGUILayout::Button)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xadd5cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {"Button", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::ToolGUILayout.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::Technie::PhysicsCreator::ToolGUILayout::Button)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xadd5e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {"Button", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::ToolGUILayout.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::Technie::PhysicsCreator::ToolGUILayout::Button)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xadd5f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {"Button", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::ToolGUILayout.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::Technie::PhysicsCreator::ToolGUILayout::Button)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xadd60f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {"Button", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::ToolGUILayout.GetButtonPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::StringW)>(&::Technie::PhysicsCreator::ToolGUILayout::GetButtonPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xadd62b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {"GetButtonPosition", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::ToolGUILayout._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::ToolGUILayout::*)()>(&::Technie::PhysicsCreator::ToolGUILayout::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd6330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Technie::PhysicsCreator::ToolGUILayout::setStaticF_buttonPositions(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector2>*, "buttonPositions", ::Technie::PhysicsCreator::ToolGUILayout*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector2>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector2>* Technie::PhysicsCreator::ToolGUILayout::getStaticF_buttonPositions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector2>*, "buttonPositions", ::Technie::PhysicsCreator::ToolGUILayout*>();
}
inline bool Technie::PhysicsCreator::ToolGUILayout::Button(::StringW  buttonName, ::by_ref<::UnityEngine::Vector2>  buttonPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {"Button", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonName, buttonPos);
}
inline bool Technie::PhysicsCreator::ToolGUILayout::Button(::StringW  buttonId, ::UnityEngine::Rect  rect, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {"Button", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonId, rect, content, style);
}
inline bool Technie::PhysicsCreator::ToolGUILayout::Button(::StringW  buttonId, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {"Button", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonId, content, style, options);
}
inline bool Technie::PhysicsCreator::ToolGUILayout::Button(::StringW  buttonId, ::StringW  buttonName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {"Button", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonId, buttonName);
}
inline ::UnityEngine::Vector2 Technie::PhysicsCreator::ToolGUILayout::GetButtonPosition(::StringW  buttonId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {"GetButtonPosition", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, buttonId);
}
inline void Technie::PhysicsCreator::ToolGUILayout::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ToolGUILayout*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::ToolGUILayout* Technie::PhysicsCreator::ToolGUILayout::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::ToolGUILayout*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::ToolGUILayout::ToolGUILayout()   {
}
