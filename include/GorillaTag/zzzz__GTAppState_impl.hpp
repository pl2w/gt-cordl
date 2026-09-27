#pragma once
// IWYU pragma private; include "GorillaTag/GTAppState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/zzzz__GTAppState_def.hpp"
#include "GorillaTag/zzzz__GTAppState_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GorillaTag::GTAppState.get_isQuitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTag::GTAppState::get_isQuitting)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d22b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState*>(),
                        {"get_isQuitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTAppState.set_isQuitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTag::GTAppState::set_isQuitting)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d22b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState*>(),
                        {"set_isQuitting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTAppState.HandleOnSubsystemRegistration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::GTAppState::HandleOnSubsystemRegistration)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5d22be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState*>(),
                        {"HandleOnSubsystemRegistration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTAppState.HandleOnAfterSceneLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::GTAppState::HandleOnAfterSceneLoad)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d22e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState*>(),
                        {"HandleOnAfterSceneLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::GTAppState::setStaticF__isQuitting_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<isQuitting>k__BackingField", ::GorillaTag::GTAppState*>(std::forward<bool>(value));
}
inline bool GorillaTag::GTAppState::getStaticF__isQuitting_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<isQuitting>k__BackingField", ::GorillaTag::GTAppState*>();
}
inline bool GorillaTag::GTAppState::get_isQuitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState*>(),
                        {"get_isQuitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTag::GTAppState::set_isQuitting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState*>(),
                        {"set_isQuitting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTag::GTAppState::HandleOnSubsystemRegistration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState*>(),
                        {"HandleOnSubsystemRegistration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::GTAppState::HandleOnAfterSceneLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState*>(),
                        {"HandleOnAfterSceneLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GorillaTag::GTAppState::GTAppState()   {
}
//  Writing Method size for method: ::GorillaTag::GTAppState___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTAppState___c::*)()>(&::GorillaTag::GTAppState___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d22ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTAppState___c._HandleOnSubsystemRegistration_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTAppState___c::*)()>(&::GorillaTag::GTAppState___c::_HandleOnSubsystemRegistration_b__4_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d22efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState___c*>(),
                        {"<HandleOnSubsystemRegistration>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::GTAppState___c::setStaticF___9(::GorillaTag::GTAppState___c*  value)  {
::cordl_internals::setStaticField<::GorillaTag::GTAppState___c*, "<>9", ::GorillaTag::GTAppState___c*>(std::forward<::GorillaTag::GTAppState___c*>(value));
}
inline ::GorillaTag::GTAppState___c* GorillaTag::GTAppState___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaTag::GTAppState___c*, "<>9", ::GorillaTag::GTAppState___c*>();
}
inline void GorillaTag::GTAppState___c::setStaticF___9__4_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__4_0", ::GorillaTag::GTAppState___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GorillaTag::GTAppState___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__4_0", ::GorillaTag::GTAppState___c*>();
}
inline void GorillaTag::GTAppState___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::GTAppState___c::_HandleOnSubsystemRegistration_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAppState___c*>(),
                        {"<HandleOnSubsystemRegistration>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::GTAppState___c* GorillaTag::GTAppState___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GTAppState___c*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::GTAppState___c::GTAppState___c()   {
}
