#pragma once
// IWYU pragma private; include "Liv/Lck/LCKPlugins.hpp"
#include "Liv/Lck/zzzz__ILCKPlugin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LCKPlugins_def.hpp"
#include "Liv/Lck/zzzz__ILCKPlugin_def.hpp"
#include "Liv/Lck/zzzz__LckService_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LCKPlugins.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LCKPlugins* (*)()>(&::Liv::Lck::LCKPlugins::get_Instance)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9cf0560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPlugins._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPlugins::*)()>(&::Liv::Lck::LCKPlugins::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cf2624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPlugins.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPlugins::*)(::Liv::Lck::LckService*)>(&::Liv::Lck::LCKPlugins::Initialize)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x9cf1270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"Initialize", {}, {::i2c::type_of<::Liv::Lck::LckService*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPlugins.RegisterPlugin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPlugins::*)(::Liv::Lck::ILCKPlugin*)>(&::Liv::Lck::LCKPlugins::RegisterPlugin)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x9cf06ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"RegisterPlugin", {}, {::i2c::type_of<::Liv::Lck::ILCKPlugin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPlugins.HasPlugin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LCKPlugins::*)(::StringW)>(&::Liv::Lck::LCKPlugins::HasPlugin)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cf10c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"HasPlugin", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPlugins.GetPlugin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::ILCKPlugin* (::Liv::Lck::LCKPlugins::*)(::StringW)>(&::Liv::Lck::LCKPlugins::GetPlugin)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9cf1120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"GetPlugin", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPlugins.GetAllPlugins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILCKPlugin*>* (::Liv::Lck::LCKPlugins::*)()>(&::Liv::Lck::LCKPlugins::GetAllPlugins)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9cf1cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"GetAllPlugins", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPlugins.UnregisterPlugin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPlugins::*)(::Liv::Lck::ILCKPlugin*)>(&::Liv::Lck::LCKPlugins::UnregisterPlugin)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x9cf2708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"UnregisterPlugin", {}, {::i2c::type_of<::Liv::Lck::ILCKPlugin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPlugins.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPlugins::*)()>(&::Liv::Lck::LCKPlugins::Clear)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9cf29ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPlugins.get_PluginCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Liv::Lck::LCKPlugins::*)()>(&::Liv::Lck::LCKPlugins::get_PluginCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9cf2aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"get_PluginCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPlugins.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LCKPlugins::*)()>(&::Liv::Lck::LCKPlugins::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf2af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::ILCKPlugin*>*& Liv::Lck::LCKPlugins::__cordl_internal_get__pluginsByType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pluginsByType;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::ILCKPlugin*>* const& Liv::Lck::LCKPlugins::__cordl_internal_get__pluginsByType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pluginsByType;
}
constexpr void Liv::Lck::LCKPlugins::__cordl_internal_set__pluginsByType(::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::ILCKPlugin*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pluginsByType = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILCKPlugin*>*& Liv::Lck::LCKPlugins::__cordl_internal_get__pluginsByName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pluginsByName;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILCKPlugin*>* const& Liv::Lck::LCKPlugins::__cordl_internal_get__pluginsByName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pluginsByName;
}
constexpr void Liv::Lck::LCKPlugins::__cordl_internal_set__pluginsByName(::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILCKPlugin*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pluginsByName = value;
}
constexpr bool& Liv::Lck::LCKPlugins::__cordl_internal_get__isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr bool const& Liv::Lck::LCKPlugins::__cordl_internal_get__isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr void Liv::Lck::LCKPlugins::__cordl_internal_set__isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitialized = value;
}
inline void Liv::Lck::LCKPlugins::setStaticF__instance(::Liv::Lck::LCKPlugins*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::LCKPlugins*, "_instance", ::Liv::Lck::LCKPlugins*>(std::forward<::Liv::Lck::LCKPlugins*>(value));
}
inline ::Liv::Lck::LCKPlugins* Liv::Lck::LCKPlugins::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Liv::Lck::LCKPlugins*, "_instance", ::Liv::Lck::LCKPlugins*>();
}
inline void Liv::Lck::LCKPlugins::setStaticF__lock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "_lock", ::Liv::Lck::LCKPlugins*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Liv::Lck::LCKPlugins::getStaticF__lock()  {
return ::cordl_internals::getStaticField<::System::Object*, "_lock", ::Liv::Lck::LCKPlugins*>();
}
inline ::Liv::Lck::LCKPlugins* Liv::Lck::LCKPlugins::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LCKPlugins*>(nullptr, ___internal_method);
}
inline void Liv::Lck::LCKPlugins::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LCKPlugins::Initialize(::Liv::Lck::LckService*  lckService)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"Initialize", {}, {::i2c::type_of<::Liv::Lck::LckService*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lckService);
}
inline void Liv::Lck::LCKPlugins::RegisterPlugin(::Liv::Lck::ILCKPlugin*  plugin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"RegisterPlugin", {}, {::i2c::type_of<::Liv::Lck::ILCKPlugin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, plugin);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline bool Liv::Lck::LCKPlugins::HasPlugin()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                    {"HasPlugin", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Liv::Lck::LCKPlugins::HasPlugin(::StringW  pluginName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"HasPlugin", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pluginName);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline T Liv::Lck::LCKPlugins::GetPlugin()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                    {"GetPlugin", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::Liv::Lck::ILCKPlugin* Liv::Lck::LCKPlugins::GetPlugin(::StringW  pluginName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"GetPlugin", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::ILCKPlugin*>(this, ___internal_method, pluginName);
}
inline ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILCKPlugin*>* Liv::Lck::LCKPlugins::GetAllPlugins()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"GetAllPlugins", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILCKPlugin*>*>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline ::System::Collections::Generic::IEnumerable_1<T>* Liv::Lck::LCKPlugins::GetPluginsOfType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                    {"GetPluginsOfType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(this, ___internal_method);
}
inline void Liv::Lck::LCKPlugins::UnregisterPlugin(::Liv::Lck::ILCKPlugin*  plugin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"UnregisterPlugin", {}, {::i2c::type_of<::Liv::Lck::ILCKPlugin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, plugin);
}
inline void Liv::Lck::LCKPlugins::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Liv::Lck::LCKPlugins::get_PluginCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"get_PluginCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Liv::Lck::LCKPlugins::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPlugins*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::LCKPlugins* Liv::Lck::LCKPlugins::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LCKPlugins*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LCKPlugins::LCKPlugins()   {
}
