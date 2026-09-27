#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeTypeSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeTypeSystem_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeTypeSystem.GetPageId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SIUpgradeTypeSystem::GetPageId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59d6a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeTypeSystem*>(),
                        {"GetPageId", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeTypeSystem.GetNodeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SIUpgradeTypeSystem::GetNodeId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59d6a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeTypeSystem*>(),
                        {"GetNodeId", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeTypeSystem.GetUpgradeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SIUpgradeType (*)(int32_t, int32_t)>(&::GlobalNamespace::SIUpgradeTypeSystem::GetUpgradeType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59d6aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeTypeSystem*>(),
                        {"GetUpgradeType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::SIUpgradeTypeSystem::GetPageId(::GlobalNamespace::SIUpgradeType  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeTypeSystem*>(),
                        {"GetPageId", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline int32_t GlobalNamespace::SIUpgradeTypeSystem::GetNodeId(::GlobalNamespace::SIUpgradeType  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeTypeSystem*>(),
                        {"GetNodeId", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline ::GlobalNamespace::SIUpgradeType GlobalNamespace::SIUpgradeTypeSystem::GetUpgradeType(int32_t  pageId, int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeTypeSystem*>(),
                        {"GetUpgradeType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SIUpgradeType>(nullptr, ___internal_method, pageId, nodeId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIUpgradeTypeSystem::SIUpgradeTypeSystem()   {
}
