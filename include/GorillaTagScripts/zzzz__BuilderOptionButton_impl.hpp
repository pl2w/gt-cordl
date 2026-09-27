#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderOptionButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderOptionButton_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderOptionButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderOptionButton::*)()>(&::GorillaTagScripts::BuilderOptionButton::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b87ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderOptionButton.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderOptionButton::*)()>(&::GorillaTagScripts::BuilderOptionButton::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b87cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderOptionButton.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderOptionButton::*)(::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>*)>(&::GorillaTagScripts::BuilderOptionButton::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b87cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(),
                        {"Setup", {}, {::i2c::type_of<::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderOptionButton.ButtonActivationWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderOptionButton::*)(bool)>(&::GorillaTagScripts::BuilderOptionButton::ButtonActivationWithHand)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b87ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderOptionButton.SetPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderOptionButton::*)(bool)>(&::GorillaTagScripts::BuilderOptionButton::SetPressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b87d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(),
                        {"SetPressed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderOptionButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderOptionButton::*)()>(&::GorillaTagScripts::BuilderOptionButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b87d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>*& GorillaTagScripts::BuilderOptionButton::__cordl_internal_get_onPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPressed;
}
constexpr ::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>* const& GorillaTagScripts::BuilderOptionButton::__cordl_internal_get_onPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPressed;
}
constexpr void GorillaTagScripts::BuilderOptionButton::__cordl_internal_set_onPressed(::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPressed = value;
}
inline void GorillaTagScripts::BuilderOptionButton::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderOptionButton::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderOptionButton::Setup(::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>*  onPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(),
                        {"Setup", {}, {::i2c::type_of<::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onPressed);
}
inline void GorillaTagScripts::BuilderOptionButton::ButtonActivationWithHand(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GorillaTagScripts::BuilderOptionButton::SetPressed(bool  pressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(),
                        {"SetPressed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressed);
}
inline void GorillaTagScripts::BuilderOptionButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderOptionButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderOptionButton* GorillaTagScripts::BuilderOptionButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderOptionButton*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderOptionButton::BuilderOptionButton()   {
}
