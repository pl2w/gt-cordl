#pragma once
// IWYU pragma private; include "PlayFab/PluginManager.hpp"
#include "PlayFab/zzzz__IPlayFabPlugin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PluginManager_def.hpp"
#include "PlayFab/zzzz__IPlayFabPlugin_def.hpp"
#include "PlayFab/zzzz__ITransportPlugin_def.hpp"
#include "PlayFab/zzzz__PluginContractKey_def.hpp"
#include "PlayFab/zzzz__PluginContract_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::PluginManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PluginManager::*)()>(&::PlayFab::PluginManager::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa7de9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PluginManager.SetPlugin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::IPlayFabPlugin*, ::PlayFab::PluginContract, ::StringW)>(&::PlayFab::PluginManager::SetPlugin)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa7dea5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginManager*>(),
                        {"SetPlugin", {}, {::i2c::type_of<::PlayFab::IPlayFabPlugin*>(), ::i2c::type_of<::PlayFab::PluginContract>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PluginManager.GetPluginInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::IPlayFabPlugin* (::PlayFab::PluginManager::*)(::PlayFab::PluginContract, ::StringW)>(&::PlayFab::PluginManager::GetPluginInternal)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa7debd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginManager*>(),
                        {"GetPluginInternal", {}, {::i2c::type_of<::PlayFab::PluginContract>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PluginManager.SetPluginInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PluginManager::*)(::PlayFab::IPlayFabPlugin*, ::PlayFab::PluginContract, ::StringW)>(&::PlayFab::PluginManager::SetPluginInternal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa7deadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginManager*>(),
                        {"SetPluginInternal", {}, {::i2c::type_of<::PlayFab::IPlayFabPlugin*>(), ::i2c::type_of<::PlayFab::PluginContract>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PluginManager.CreatePlayFabTransportPlugin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::ITransportPlugin* (::PlayFab::PluginManager::*)()>(&::PlayFab::PluginManager::CreatePlayFabTransportPlugin)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa7ded30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginManager*>(),
                        {"CreatePlayFabTransportPlugin", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey,::PlayFab::IPlayFabPlugin*>*& PlayFab::PluginManager::__cordl_internal_get_plugins()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plugins;
}
constexpr ::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey,::PlayFab::IPlayFabPlugin*>* const& PlayFab::PluginManager::__cordl_internal_get_plugins() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plugins;
}
constexpr void PlayFab::PluginManager::__cordl_internal_set_plugins(::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey,::PlayFab::IPlayFabPlugin*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___plugins = value;
}
inline void PlayFab::PluginManager::setStaticF_Instance(::PlayFab::PluginManager*  value)  {
::cordl_internals::setStaticField<::PlayFab::PluginManager*, "Instance", ::PlayFab::PluginManager*>(std::forward<::PlayFab::PluginManager*>(value));
}
inline ::PlayFab::PluginManager* PlayFab::PluginManager::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::PlayFab::PluginManager*, "Instance", ::PlayFab::PluginManager*>();
}
inline void PlayFab::PluginManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::PlayFab::IPlayFabPlugin*>)
inline T PlayFab::PluginManager::GetPlugin(::PlayFab::PluginContract  contract, ::StringW  instanceName)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayFab::PluginManager*>(),
                    {"GetPlugin", {::i2c::class_of<T>()}, {::i2c::type_of<::PlayFab::PluginContract>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, contract, instanceName);
}
inline void PlayFab::PluginManager::SetPlugin(::PlayFab::IPlayFabPlugin*  plugin, ::PlayFab::PluginContract  contract, ::StringW  instanceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginManager*>(),
                        {"SetPlugin", {}, {::i2c::type_of<::PlayFab::IPlayFabPlugin*>(), ::i2c::type_of<::PlayFab::PluginContract>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, plugin, contract, instanceName);
}
inline ::PlayFab::IPlayFabPlugin* PlayFab::PluginManager::GetPluginInternal(::PlayFab::PluginContract  contract, ::StringW  instanceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginManager*>(),
                        {"GetPluginInternal", {}, {::i2c::type_of<::PlayFab::PluginContract>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::IPlayFabPlugin*>(this, ___internal_method, contract, instanceName);
}
inline void PlayFab::PluginManager::SetPluginInternal(::PlayFab::IPlayFabPlugin*  plugin, ::PlayFab::PluginContract  contract, ::StringW  instanceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginManager*>(),
                        {"SetPluginInternal", {}, {::i2c::type_of<::PlayFab::IPlayFabPlugin*>(), ::i2c::type_of<::PlayFab::PluginContract>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, plugin, contract, instanceName);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::PlayFab::IPlayFabPlugin*> && ::cordl_internals::default_constructor_constraint<T>)
inline ::PlayFab::IPlayFabPlugin* PlayFab::PluginManager::CreatePlugin()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayFab::PluginManager*>(),
                    {"CreatePlugin", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::IPlayFabPlugin*>(this, ___internal_method);
}
inline ::PlayFab::ITransportPlugin* PlayFab::PluginManager::CreatePlayFabTransportPlugin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginManager*>(),
                        {"CreatePlayFabTransportPlugin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::ITransportPlugin*>(this, ___internal_method);
}
inline ::PlayFab::PluginManager* PlayFab::PluginManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PluginManager*>());
}
// Ctor Parameters []
constexpr ::PlayFab::PluginManager::PluginManager()   {
}
