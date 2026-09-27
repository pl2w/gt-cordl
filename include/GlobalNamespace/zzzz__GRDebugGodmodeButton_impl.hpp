#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDebugGodmodeButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableReleaseButton_impl.hpp"
#include "GlobalNamespace/zzzz__GRDebugGodmodeButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRDebugGodmodeButton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDebugGodmodeButton::*)()>(&::GlobalNamespace::GRDebugGodmodeButton::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58757e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDebugGodmodeButton.OnPressedButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDebugGodmodeButton::*)()>(&::GlobalNamespace::GRDebugGodmodeButton::OnPressedButton)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587580c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(),
                        {"OnPressedButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDebugGodmodeButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDebugGodmodeButton::*)()>(&::GlobalNamespace::GRDebugGodmodeButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5875810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDebugGodmodeButton.ButtonDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDebugGodmodeButton::*)()>(&::GlobalNamespace::GRDebugGodmodeButton::ButtonDeactivation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5875834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDebugGodmodeButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDebugGodmodeButton::*)()>(&::GlobalNamespace::GRDebugGodmodeButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5875858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GRDebugGodmodeButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDebugGodmodeButton::OnPressedButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(),
                        {"OnPressedButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDebugGodmodeButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDebugGodmodeButton::ButtonDeactivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDebugGodmodeButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugGodmodeButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRDebugGodmodeButton* GlobalNamespace::GRDebugGodmodeButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRDebugGodmodeButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDebugGodmodeButton::GRDebugGodmodeButton()   {
}
