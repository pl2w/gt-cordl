#pragma once
// IWYU pragma private; include "GlobalNamespace/UnlockCompButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__UnlockCompButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnlockCompButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockCompButton::*)()>(&::GlobalNamespace::UnlockCompButton::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a6890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnlockCompButton*>(),
                    {::i2c::class_of<::GlobalNamespace::UnlockCompButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnlockCompButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockCompButton::*)()>(&::GlobalNamespace::UnlockCompButton::Update)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x59a6898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockCompButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnlockCompButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockCompButton::*)()>(&::GlobalNamespace::UnlockCompButton::ButtonActivation)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59a69a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnlockCompButton*>(),
                    {::i2c::class_of<::GlobalNamespace::UnlockCompButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnlockCompButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockCompButton::*)()>(&::GlobalNamespace::UnlockCompButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a6a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockCompButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::UnlockCompButton::__cordl_internal_get_gameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameMode;
}
constexpr ::StringW const& GlobalNamespace::UnlockCompButton::__cordl_internal_get_gameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameMode;
}
constexpr void GlobalNamespace::UnlockCompButton::__cordl_internal_set_gameMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameMode = value;
}
constexpr bool& GlobalNamespace::UnlockCompButton::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::UnlockCompButton::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::UnlockCompButton::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
inline void GlobalNamespace::UnlockCompButton::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnlockCompButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnlockCompButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockCompButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnlockCompButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnlockCompButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnlockCompButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockCompButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnlockCompButton* GlobalNamespace::UnlockCompButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnlockCompButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnlockCompButton::UnlockCompButton()   {
}
