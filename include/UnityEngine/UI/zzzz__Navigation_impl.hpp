#pragma once
// IWYU pragma private; include "UnityEngine/UI/Navigation.hpp"
#include "UnityEngine/UI/zzzz__Navigation_Mode_impl.hpp"
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UI/zzzz__Navigation_Mode_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Navigation_Mode (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Navigation::*)(::GlobalNamespace::Navigation_Mode)>(&::UnityEngine::UI::Navigation::set_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_mode", {}, {::i2c::type_of<::GlobalNamespace::Navigation_Mode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_wrapAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_wrapAround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_wrapAround", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_wrapAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Navigation::*)(bool)>(&::UnityEngine::UI::Navigation::set_wrapAround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_wrapAround", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_selectOnUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_selectOnUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&::UnityEngine::UI::Navigation::set_selectOnUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_selectOnUp", {}, {::i2c::type_of<::UnityEngine::UI::Selectable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_selectOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_selectOnDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&::UnityEngine::UI::Navigation::set_selectOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_selectOnDown", {}, {::i2c::type_of<::UnityEngine::UI::Selectable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_selectOnLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_selectOnLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&::UnityEngine::UI::Navigation::set_selectOnLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_selectOnLeft", {}, {::i2c::type_of<::UnityEngine::UI::Selectable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_selectOnRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_selectOnRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&::UnityEngine::UI::Navigation::set_selectOnRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8fdd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_selectOnRight", {}, {::i2c::type_of<::UnityEngine::UI::Selectable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_defaultNavigation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::Navigation (*)()>(&::UnityEngine::UI::Navigation::get_defaultNavigation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb8fdd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_defaultNavigation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Navigation)>(&::UnityEngine::UI::Navigation::Equals)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb8fdd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::UI::Navigation>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::Navigation_Mode UnityEngine::UI::Navigation::get_mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Navigation_Mode>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_mode(::GlobalNamespace::Navigation_Mode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_mode", {}, {::i2c::type_of<::GlobalNamespace::Navigation_Mode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::Navigation::get_wrapAround()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_wrapAround", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_wrapAround(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_wrapAround", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Navigation::get_selectOnUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_selectOnUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnUp(::UnityEngine::UI::Selectable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_selectOnUp", {}, {::i2c::type_of<::UnityEngine::UI::Selectable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Navigation::get_selectOnDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_selectOnDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnDown(::UnityEngine::UI::Selectable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_selectOnDown", {}, {::i2c::type_of<::UnityEngine::UI::Selectable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Navigation::get_selectOnLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_selectOnLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnLeft(::UnityEngine::UI::Selectable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_selectOnLeft", {}, {::i2c::type_of<::UnityEngine::UI::Selectable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Navigation::get_selectOnRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_selectOnRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnRight(::UnityEngine::UI::Selectable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"set_selectOnRight", {}, {::i2c::type_of<::UnityEngine::UI::Selectable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Navigation UnityEngine::UI::Navigation::get_defaultNavigation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"get_defaultNavigation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Navigation>(nullptr, ___internal_method);
}
inline bool UnityEngine::UI::Navigation::Equals(::UnityEngine::UI::Navigation  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Navigation>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::UI::Navigation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UI::Navigation>"
constexpr  UnityEngine::UI::Navigation::operator ::System::IEquatable_1<::UnityEngine::UI::Navigation>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::UI::Navigation>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UI::Navigation>"
constexpr ::System::IEquatable_1<::UnityEngine::UI::Navigation>* UnityEngine::UI::Navigation::i___System__IEquatable_1___UnityEngine__UI__Navigation_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::UI::Navigation>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Mode", ty: "::GlobalNamespace::Navigation_Mode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_WrapAround", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SelectOnUp", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SelectOnDown", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SelectOnLeft", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SelectOnRight", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UI::Navigation::Navigation(::GlobalNamespace::Navigation_Mode  m_Mode, bool  m_WrapAround, ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnUp, ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnDown, ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnLeft, ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnRight) noexcept  {
this->m_Mode = m_Mode;
this->m_WrapAround = m_WrapAround;
this->m_SelectOnUp = m_SelectOnUp;
this->m_SelectOnDown = m_SelectOnDown;
this->m_SelectOnLeft = m_SelectOnLeft;
this->m_SelectOnRight = m_SelectOnRight;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Navigation::Navigation()   {
}
