#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GREnemyTypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GREnemyTypeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GREnemyType_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions.GetEnemyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::GhostReactor::GREnemyType (*)(::GlobalNamespace::GameEntity*)>(&::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions::GetEnemyType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c19838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions*>(),
                        {"GetEnemyType", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions.Pluralize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GorillaTagScripts::GhostReactor::GREnemyType)>(&::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions::Pluralize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c19914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions*>(),
                        {"Pluralize", {}, {::i2c::type_of<::GorillaTagScripts::GhostReactor::GREnemyType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GorillaTagScripts::GhostReactor::GREnemyType GorillaTagScripts::GhostReactor::GREnemyTypeExtensions::GetEnemyType(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions*>(),
                        {"GetEnemyType", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::GhostReactor::GREnemyType>(nullptr, ___internal_method, entity);
}
inline ::StringW GorillaTagScripts::GhostReactor::GREnemyTypeExtensions::Pluralize(::GorillaTagScripts::GhostReactor::GREnemyType  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions*>(),
                        {"Pluralize", {}, {::i2c::type_of<::GorillaTagScripts::GhostReactor::GREnemyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions::GREnemyTypeExtensions()   {
}
