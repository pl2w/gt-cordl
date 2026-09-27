#pragma once
// IWYU pragma private; include "Liv/Lck/AnotherExamplePlugin.hpp"
#include "Liv/Lck/zzzz__LCKPluginBase_impl.hpp"
#include "Liv/Lck/zzzz__AnotherExamplePlugin_def.hpp"
//  Writing Method size for method: ::Liv::Lck::AnotherExamplePlugin.get_PluginName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::AnotherExamplePlugin::*)()>(&::Liv::Lck::AnotherExamplePlugin::get_PluginName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9cec6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(),
                    {::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::AnotherExamplePlugin.get_PluginVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::AnotherExamplePlugin::*)()>(&::Liv::Lck::AnotherExamplePlugin::get_PluginVersion)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9cec6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(),
                    {::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::AnotherExamplePlugin.OnInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::AnotherExamplePlugin::*)()>(&::Liv::Lck::AnotherExamplePlugin::OnInitialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9cec728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(),
                    {::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::AnotherExamplePlugin.OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::AnotherExamplePlugin::*)()>(&::Liv::Lck::AnotherExamplePlugin::OnShutdown)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9cec7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(),
                    {::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::AnotherExamplePlugin.DoSomethingElse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::AnotherExamplePlugin::*)()>(&::Liv::Lck::AnotherExamplePlugin::DoSomethingElse)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9cec858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(),
                        {"DoSomethingElse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::AnotherExamplePlugin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::AnotherExamplePlugin::*)()>(&::Liv::Lck::AnotherExamplePlugin::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cec8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Liv::Lck::AnotherExamplePlugin::get_PluginName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Liv::Lck::AnotherExamplePlugin::get_PluginVersion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::AnotherExamplePlugin::OnInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::AnotherExamplePlugin::OnShutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::AnotherExamplePlugin::DoSomethingElse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(),
                        {"DoSomethingElse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::AnotherExamplePlugin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::AnotherExamplePlugin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::AnotherExamplePlugin* Liv::Lck::AnotherExamplePlugin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::AnotherExamplePlugin*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::AnotherExamplePlugin::AnotherExamplePlugin()   {
}
