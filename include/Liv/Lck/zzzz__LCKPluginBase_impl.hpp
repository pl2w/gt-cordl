#pragma once
// IWYU pragma private; include "Liv/Lck/LCKPluginBase.hpp"
#include "Liv/Lck/zzzz__ILCKPlugin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LCKPluginBase_def.hpp"
#include "Liv/Lck/zzzz__ILCKPlugin_def.hpp"
#include "Liv/Lck/zzzz__LckService_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.get_LckService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckService* (::Liv::Lck::LCKPluginBase::*)()>(&::Liv::Lck::LCKPluginBase::get_LckService)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf0540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"get_LckService", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.set_LckService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPluginBase::*)(::Liv::Lck::LckService*)>(&::Liv::Lck::LCKPluginBase::set_LckService)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf0548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"set_LckService", {}, {::i2c::type_of<::Liv::Lck::LckService*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LCKPluginBase::*)()>(&::Liv::Lck::LCKPluginBase::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf0550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.set_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPluginBase::*)(bool)>(&::Liv::Lck::LCKPluginBase::set_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf0558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.get_PluginName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::LCKPluginBase::*)()>(&::Liv::Lck::LCKPluginBase::get_PluginName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                    {::i2c::class_of<::Liv::Lck::LCKPluginBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.get_PluginVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::LCKPluginBase::*)()>(&::Liv::Lck::LCKPluginBase::get_PluginVersion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                    {::i2c::class_of<::Liv::Lck::LCKPluginBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPluginBase::*)()>(&::Liv::Lck::LCKPluginBase::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9cec63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPluginBase::*)(::Liv::Lck::LckService*)>(&::Liv::Lck::LCKPluginBase::Initialize)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x9cf0b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"Initialize", {}, {::i2c::type_of<::Liv::Lck::LckService*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPluginBase::*)()>(&::Liv::Lck::LCKPluginBase::Shutdown)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x9cf0e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.OnInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPluginBase::*)()>(&::Liv::Lck::LCKPluginBase::OnInitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cf10c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                    {::i2c::class_of<::Liv::Lck::LCKPluginBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPluginBase::*)()>(&::Liv::Lck::LCKPluginBase::OnShutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cf10c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                    {::i2c::class_of<::Liv::Lck::LCKPluginBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.HasPlugin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LCKPluginBase::*)(::StringW)>(&::Liv::Lck::LCKPluginBase::HasPlugin)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9cebe78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"HasPlugin", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginBase.GetPlugin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::ILCKPlugin* (::Liv::Lck::LCKPluginBase::*)(::StringW)>(&::Liv::Lck::LCKPluginBase::GetPlugin)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9cebed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"GetPlugin", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::LckService*& Liv::Lck::LCKPluginBase::__cordl_internal_get__LckService_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LckService_k__BackingField;
}
constexpr ::Liv::Lck::LckService* const& Liv::Lck::LCKPluginBase::__cordl_internal_get__LckService_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LckService_k__BackingField;
}
constexpr void Liv::Lck::LCKPluginBase::__cordl_internal_set__LckService_k__BackingField(::Liv::Lck::LckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LckService_k__BackingField = value;
}
constexpr bool& Liv::Lck::LCKPluginBase::__cordl_internal_get__IsInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr bool const& Liv::Lck::LCKPluginBase::__cordl_internal_get__IsInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr void Liv::Lck::LCKPluginBase::__cordl_internal_set__IsInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInitialized_k__BackingField = value;
}
inline ::Liv::Lck::LckService* Liv::Lck::LCKPluginBase::get_LckService()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"get_LckService", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckService*>(this, ___internal_method);
}
inline void Liv::Lck::LCKPluginBase::set_LckService(::Liv::Lck::LckService*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"set_LckService", {}, {::i2c::type_of<::Liv::Lck::LckService*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Liv::Lck::LCKPluginBase::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LCKPluginBase::set_IsInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Liv::Lck::LCKPluginBase::get_PluginName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LCKPluginBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Liv::Lck::LCKPluginBase::get_PluginVersion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LCKPluginBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::LCKPluginBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LCKPluginBase::Initialize(::Liv::Lck::LckService*  lckService)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"Initialize", {}, {::i2c::type_of<::Liv::Lck::LckService*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lckService);
}
inline void Liv::Lck::LCKPluginBase::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LCKPluginBase::OnInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LCKPluginBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LCKPluginBase::OnShutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LCKPluginBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline bool Liv::Lck::LCKPluginBase::HasPlugin()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                    {"HasPlugin", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Liv::Lck::LCKPluginBase::HasPlugin(::StringW  pluginName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"HasPlugin", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pluginName);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline T Liv::Lck::LCKPluginBase::GetPlugin()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                    {"GetPlugin", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::Liv::Lck::ILCKPlugin* Liv::Lck::LCKPluginBase::GetPlugin(::StringW  pluginName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginBase*>(),
                        {"GetPlugin", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::ILCKPlugin*>(this, ___internal_method, pluginName);
}
inline ::Liv::Lck::LCKPluginBase* Liv::Lck::LCKPluginBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LCKPluginBase*>());
}
/// @brief Convert operator to "::Liv::Lck::ILCKPlugin"
constexpr  Liv::Lck::LCKPluginBase::operator ::Liv::Lck::ILCKPlugin*() noexcept {
return static_cast<::Liv::Lck::ILCKPlugin*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILCKPlugin"
constexpr ::Liv::Lck::ILCKPlugin* Liv::Lck::LCKPluginBase::i___Liv__Lck__ILCKPlugin() noexcept {
return static_cast<::Liv::Lck::ILCKPlugin*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LCKPluginBase::LCKPluginBase()   {
}
