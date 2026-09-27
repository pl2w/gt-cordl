#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPrefFlags.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlags_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlags_Flag_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerPrefFlags.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PlayerPrefFlags_Flag)>(&::GlobalNamespace::PlayerPrefFlags::Check)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57127b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {"Check", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPrefFlags.Touch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerPrefFlags_Flag)>(&::GlobalNamespace::PlayerPrefFlags::Touch)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x57129ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {"Touch", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPrefFlags.TouchIf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerPrefFlags_Flag, bool)>(&::GlobalNamespace::PlayerPrefFlags::TouchIf)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5712a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {"TouchIf", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPrefFlags.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerPrefFlags_Flag, bool)>(&::GlobalNamespace::PlayerPrefFlags::Set)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5712860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPrefFlags.Flip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PlayerPrefFlags_Flag)>(&::GlobalNamespace::PlayerPrefFlags::Flip)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5712920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {"Flip", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPrefFlags._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPrefFlags::*)()>(&::GlobalNamespace::PlayerPrefFlags::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5712b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerPrefFlags::setStaticF_OnFlagChange(::System::Action_2<::GlobalNamespace::PlayerPrefFlags_Flag,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::PlayerPrefFlags_Flag,bool>*, "OnFlagChange", ::GlobalNamespace::PlayerPrefFlags*>(std::forward<::System::Action_2<::GlobalNamespace::PlayerPrefFlags_Flag,bool>*>(value));
}
inline ::System::Action_2<::GlobalNamespace::PlayerPrefFlags_Flag,bool>* GlobalNamespace::PlayerPrefFlags::getStaticF_OnFlagChange()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::PlayerPrefFlags_Flag,bool>*, "OnFlagChange", ::GlobalNamespace::PlayerPrefFlags*>();
}
inline bool GlobalNamespace::PlayerPrefFlags::Check(::GlobalNamespace::PlayerPrefFlags_Flag  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {"Check", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flag);
}
inline void GlobalNamespace::PlayerPrefFlags::Touch(::GlobalNamespace::PlayerPrefFlags_Flag  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {"Touch", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flag);
}
inline void GlobalNamespace::PlayerPrefFlags::TouchIf(::GlobalNamespace::PlayerPrefFlags_Flag  flag, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {"TouchIf", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flag, value);
}
inline void GlobalNamespace::PlayerPrefFlags::Set(::GlobalNamespace::PlayerPrefFlags_Flag  flag, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flag, value);
}
inline bool GlobalNamespace::PlayerPrefFlags::Flip(::GlobalNamespace::PlayerPrefFlags_Flag  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {"Flip", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flag);
}
inline void GlobalNamespace::PlayerPrefFlags::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlags*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerPrefFlags* GlobalNamespace::PlayerPrefFlags::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerPrefFlags*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerPrefFlags::PlayerPrefFlags()   {
}
