#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/DynamicEntityKeywordRegistry.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__DynamicEntityKeywordRegistry_def.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntities_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityKeywordInfo_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDynamicEntitiesProvider_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry.get_HasDynamicEntityRegistry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::get_HasDynamicEntityRegistry)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e9af14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"get_HasDynamicEntityRegistry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry> (*)()>(&::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::get_Instance)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e9af88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::*)()>(&::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e9b058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::*)()>(&::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e9b0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry.RegisterDynamicEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::*)(::StringW, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo)>(&::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::RegisterDynamicEntity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e9b104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"RegisterDynamicEntity", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry.UnregisterDynamicEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::*)(::StringW, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo)>(&::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::UnregisterDynamicEntity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e9b3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"UnregisterDynamicEntity", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry.GetDynamicEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::Entities::WitDynamicEntities* (::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::*)()>(&::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::GetDynamicEntities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9b5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"GetDynamicEntities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::*)()>(&::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e9b5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntities*& Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::__cordl_internal_get_entities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entities;
}
constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntities* const& Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::__cordl_internal_get_entities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entities;
}
constexpr void Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::__cordl_internal_set_entities(::Meta::WitAi::Data::Entities::WitDynamicEntities*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entities = value;
}
inline void Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::setStaticF_instance(::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry>  value)  {
::cordl_internals::setStaticField<::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry>, "instance", ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(std::forward<::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry>>(value));
}
inline ::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry> Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry>, "instance", ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>();
}
inline bool Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::get_HasDynamicEntityRegistry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"get_HasDynamicEntityRegistry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry> Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry>>(nullptr, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::RegisterDynamicEntity(::StringW  entity, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"RegisterDynamicEntity", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity, keyword);
}
inline void Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::UnregisterDynamicEntity(::StringW  entity, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"UnregisterDynamicEntity", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity, keyword);
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::GetDynamicEntities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {"GetDynamicEntities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry* Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*>());
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr  Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::operator ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::i___Meta__WitAi__Interfaces__IDynamicEntitiesProvider() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry::DynamicEntityKeywordRegistry()   {
}
