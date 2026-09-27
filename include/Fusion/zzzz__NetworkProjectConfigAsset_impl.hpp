#pragma once
// IWYU pragma private; include "Fusion/NetworkProjectConfigAsset.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObject_1_impl.hpp"
#include "Fusion/zzzz__NetworkPrefabTableOptions_impl.hpp"
#include "Fusion/zzzz__NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta_impl.hpp"
#include "Fusion/zzzz__NetworkProjectConfigAsset_def.hpp"
#include "Fusion/zzzz__INetworkPrefabSource_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkProjectConfigAsset.get_Global
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkProjectConfigAsset> (*)()>(&::Fusion::NetworkProjectConfigAsset::get_Global)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fd86bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"get_Global", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfigAsset.TryGetGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Fusion::NetworkProjectConfigAsset*>)>(&::Fusion::NetworkProjectConfigAsset::TryGetGlobal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd9004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"TryGetGlobal", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkProjectConfigAsset*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfigAsset.get_IsGlobalLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Fusion::NetworkProjectConfigAsset::get_IsGlobalLoaded)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fd904c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"get_IsGlobalLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfigAsset.UnloadGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkProjectConfigAsset::UnloadGlobal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fd8700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"UnloadGlobal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfigAsset.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkProjectConfigAsset::*)()>(&::Fusion::NetworkProjectConfigAsset::OnEnable)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x5fd908c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfigAsset.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkProjectConfigAsset::*)()>(&::Fusion::NetworkProjectConfigAsset::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fd9538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                    {::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfigAsset.GenerateDefaultContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Fusion::NetworkProjectConfigAsset::GenerateDefaultContents)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fd95c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"GenerateDefaultContents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfigAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkProjectConfigAsset::*)()>(&::Fusion::NetworkProjectConfigAsset::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5fd961c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkProjectConfig*& Fusion::NetworkProjectConfigAsset::__cordl_internal_get_Config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr ::Fusion::NetworkProjectConfig* const& Fusion::NetworkProjectConfigAsset::__cordl_internal_get_Config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr void Fusion::NetworkProjectConfigAsset::__cordl_internal_set_Config(::Fusion::NetworkProjectConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Config = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*& Fusion::NetworkProjectConfigAsset::__cordl_internal_get_Prefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prefabs;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>* const& Fusion::NetworkProjectConfigAsset::__cordl_internal_get_Prefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prefabs;
}
constexpr void Fusion::NetworkProjectConfigAsset::__cordl_internal_set_Prefabs(::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prefabs = value;
}
constexpr ::Fusion::NetworkPrefabTableOptions& Fusion::NetworkProjectConfigAsset::__cordl_internal_get_PrefabOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabOptions;
}
constexpr ::Fusion::NetworkPrefabTableOptions const& Fusion::NetworkProjectConfigAsset::__cordl_internal_get_PrefabOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabOptions;
}
constexpr void Fusion::NetworkProjectConfigAsset::__cordl_internal_set_PrefabOptions(::Fusion::NetworkPrefabTableOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrefabOptions = value;
}
constexpr ::ArrayW<::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta>& Fusion::NetworkProjectConfigAsset::__cordl_internal_get_BehaviourMeta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BehaviourMeta;
}
constexpr ::ArrayW<::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta> const& Fusion::NetworkProjectConfigAsset::__cordl_internal_get_BehaviourMeta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BehaviourMeta;
}
constexpr void Fusion::NetworkProjectConfigAsset::__cordl_internal_set_BehaviourMeta(::ArrayW<::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BehaviourMeta = value;
}
inline ::UnityW<::Fusion::NetworkProjectConfigAsset> Fusion::NetworkProjectConfigAsset::get_Global()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"get_Global", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkProjectConfigAsset>>(nullptr, ___internal_method);
}
inline bool Fusion::NetworkProjectConfigAsset::TryGetGlobal(::by_ref<::Fusion::NetworkProjectConfigAsset*>  global)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"TryGetGlobal", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkProjectConfigAsset*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, global);
}
inline bool Fusion::NetworkProjectConfigAsset::get_IsGlobalLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"get_IsGlobalLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Fusion::NetworkProjectConfigAsset::UnloadGlobal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"UnloadGlobal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::NetworkProjectConfigAsset::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkProjectConfigAsset::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Fusion::NetworkProjectConfigAsset::GenerateDefaultContents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {"GenerateDefaultContents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Fusion::NetworkProjectConfigAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfigAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkProjectConfigAsset* Fusion::NetworkProjectConfigAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkProjectConfigAsset*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkProjectConfigAsset::NetworkProjectConfigAsset()   {
}
