#pragma once
// IWYU pragma private; include "Liv/Lck/ExamplePlugin.hpp"
#include "Liv/Lck/zzzz__LCKPluginBase_impl.hpp"
#include "Liv/Lck/zzzz__ExamplePlugin_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ExamplePlugin.get_PluginName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::ExamplePlugin::*)()>(&::Liv::Lck::ExamplePlugin::get_PluginName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9cebb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                    {::i2c::class_of<::Liv::Lck::ExamplePlugin*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ExamplePlugin.get_PluginVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::ExamplePlugin::*)()>(&::Liv::Lck::ExamplePlugin::get_PluginVersion)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9cebb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                    {::i2c::class_of<::Liv::Lck::ExamplePlugin*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ExamplePlugin.OnInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ExamplePlugin::*)()>(&::Liv::Lck::ExamplePlugin::OnInitialize)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x9cebb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                    {::i2c::class_of<::Liv::Lck::ExamplePlugin*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ExamplePlugin.OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ExamplePlugin::*)()>(&::Liv::Lck::ExamplePlugin::OnShutdown)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9cec098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                    {::i2c::class_of<::Liv::Lck::ExamplePlugin*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ExamplePlugin.OnRecordingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ExamplePlugin::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::ExamplePlugin::OnRecordingStarted)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9cec33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ExamplePlugin.OnRecordingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ExamplePlugin::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::ExamplePlugin::OnRecordingStopped)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9cec44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                        {"OnRecordingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ExamplePlugin.DoSomething
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ExamplePlugin::*)()>(&::Liv::Lck::ExamplePlugin::DoSomething)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9cec55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                        {"DoSomething", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ExamplePlugin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ExamplePlugin::*)()>(&::Liv::Lck::ExamplePlugin::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cec638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Liv::Lck::ExamplePlugin::get_PluginName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ExamplePlugin*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Liv::Lck::ExamplePlugin::get_PluginVersion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ExamplePlugin*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::ExamplePlugin::OnInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ExamplePlugin*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::ExamplePlugin::OnShutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ExamplePlugin*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::ExamplePlugin::OnRecordingStarted(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::ExamplePlugin::OnRecordingStopped(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                        {"OnRecordingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::ExamplePlugin::DoSomething()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                        {"DoSomething", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::ExamplePlugin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ExamplePlugin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::ExamplePlugin* Liv::Lck::ExamplePlugin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::ExamplePlugin*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::ExamplePlugin::ExamplePlugin()   {
}
