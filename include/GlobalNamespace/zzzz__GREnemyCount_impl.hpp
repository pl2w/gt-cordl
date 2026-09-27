#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyCount.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GREnemyType_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyCount_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GREnemyType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREnemyCount.GetEnemyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::GhostReactor::GREnemyType (::GlobalNamespace::GREnemyCount::*)()>(&::GlobalNamespace::GREnemyCount::GetEnemyType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x588b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyCount>(),
                        {"GetEnemyType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyCount.GetEnemyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GREnemyCount::*)()>(&::GlobalNamespace::GREnemyCount::GetEnemyName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x588b848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyCount>(),
                        {"GetEnemyName", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GorillaTagScripts::GhostReactor::GREnemyType GlobalNamespace::GREnemyCount::GetEnemyType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyCount>(),
                        {"GetEnemyType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::GhostReactor::GREnemyType>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::GREnemyCount::GetEnemyName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyCount>(),
                        {"GetEnemyName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "EnemyType", ty: "::GorillaTagScripts::GhostReactor::GREnemyType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GREnemyCount::GREnemyCount(::GorillaTagScripts::GhostReactor::GREnemyType  EnemyType, int32_t  Count) noexcept  {
this->EnemyType = EnemyType;
this->Count = Count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyCount::GREnemyCount()   {
}
