#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDebugFtueResetButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableReleaseButton_impl.hpp"
#include "GlobalNamespace/zzzz__GRDebugFtueResetButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRDebugFtueResetButton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDebugFtueResetButton::*)()>(&::GlobalNamespace::GRDebugFtueResetButton::Awake)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58756f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDebugFtueResetButton.OnPressedButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDebugFtueResetButton::*)()>(&::GlobalNamespace::GRDebugFtueResetButton::OnPressedButton)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5875728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(),
                        {"OnPressedButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDebugFtueResetButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDebugFtueResetButton::*)()>(&::GlobalNamespace::GRDebugFtueResetButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x587578c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDebugFtueResetButton.ButtonDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDebugFtueResetButton::*)()>(&::GlobalNamespace::GRDebugFtueResetButton::ButtonDeactivation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58757b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDebugFtueResetButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDebugFtueResetButton::*)()>(&::GlobalNamespace::GRDebugFtueResetButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58757e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GRDebugFtueResetButton::__cordl_internal_get_availableOnLive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableOnLive;
}
constexpr bool const& GlobalNamespace::GRDebugFtueResetButton::__cordl_internal_get_availableOnLive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableOnLive;
}
constexpr void GlobalNamespace::GRDebugFtueResetButton::__cordl_internal_set_availableOnLive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___availableOnLive = value;
}
inline void GlobalNamespace::GRDebugFtueResetButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDebugFtueResetButton::OnPressedButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(),
                        {"OnPressedButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDebugFtueResetButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDebugFtueResetButton::ButtonDeactivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDebugFtueResetButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDebugFtueResetButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRDebugFtueResetButton* GlobalNamespace::GRDebugFtueResetButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRDebugFtueResetButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDebugFtueResetButton::GRDebugFtueResetButton()   {
}
