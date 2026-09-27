#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerTimeSyncRule.hpp"
#include "GlobalNamespace/zzzz__ServerTimeSyncRule_Unit_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ServerTimeSyncRule_def.hpp"
#include "GlobalNamespace/zzzz__ServerTimeSyncRule_Unit_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServerTimeSyncRule.GetPrevious
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::ServerTimeSyncRule::*)(::System::DateTime)>(&::GlobalNamespace::ServerTimeSyncRule::GetPrevious)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5b1e034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeSyncRule*>(),
                        {"GetPrevious", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerTimeSyncRule.GetNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::ServerTimeSyncRule::*)(::System::DateTime)>(&::GlobalNamespace::ServerTimeSyncRule::GetNext)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5b1e2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeSyncRule*>(),
                        {"GetNext", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerTimeSyncRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerTimeSyncRule::*)()>(&::GlobalNamespace::ServerTimeSyncRule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1e594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeSyncRule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ServerTimeSyncRule_Unit& GlobalNamespace::ServerTimeSyncRule::__cordl_internal_get_unit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unit;
}
constexpr ::GlobalNamespace::ServerTimeSyncRule_Unit const& GlobalNamespace::ServerTimeSyncRule::__cordl_internal_get_unit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unit;
}
constexpr void GlobalNamespace::ServerTimeSyncRule::__cordl_internal_set_unit(::GlobalNamespace::ServerTimeSyncRule_Unit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unit = value;
}
constexpr int32_t& GlobalNamespace::ServerTimeSyncRule::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr int32_t const& GlobalNamespace::ServerTimeSyncRule::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GlobalNamespace::ServerTimeSyncRule::__cordl_internal_set_value(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline ::System::DateTime GlobalNamespace::ServerTimeSyncRule::GetPrevious(::System::DateTime  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeSyncRule*>(),
                        {"GetPrevious", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, dt);
}
inline ::System::DateTime GlobalNamespace::ServerTimeSyncRule::GetNext(::System::DateTime  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeSyncRule*>(),
                        {"GetNext", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, dt);
}
inline void GlobalNamespace::ServerTimeSyncRule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeSyncRule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ServerTimeSyncRule* GlobalNamespace::ServerTimeSyncRule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ServerTimeSyncRule*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerTimeSyncRule::ServerTimeSyncRule()   {
}
