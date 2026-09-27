#pragma once
// IWYU pragma private; include "GlobalNamespace/GRHealthMeter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRHealthMeter_def.hpp"
#include "GlobalNamespace/zzzz__GRHealthMeterNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRHealthMeter.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHealthMeter::*)(int32_t)>(&::GlobalNamespace::GRHealthMeter::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589e028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeter*>(),
                        {"Setup", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRHealthMeter.SetHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHealthMeter::*)(int32_t)>(&::GlobalNamespace::GRHealthMeter::SetHP)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x589e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeter*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRHealthMeter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHealthMeter::*)()>(&::GlobalNamespace::GRHealthMeter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589e230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHealthMeterNode>>*& GlobalNamespace::GRHealthMeter::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHealthMeterNode>>* const& GlobalNamespace::GRHealthMeter::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void GlobalNamespace::GRHealthMeter::__cordl_internal_set_nodes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHealthMeterNode>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr int32_t& GlobalNamespace::GRHealthMeter::__cordl_internal_get_maxHP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHP;
}
constexpr int32_t const& GlobalNamespace::GRHealthMeter::__cordl_internal_get_maxHP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHP;
}
constexpr void GlobalNamespace::GRHealthMeter::__cordl_internal_set_maxHP(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHP = value;
}
inline void GlobalNamespace::GRHealthMeter::Setup(int32_t  maxHP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeter*>(),
                        {"Setup", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxHP);
}
inline void GlobalNamespace::GRHealthMeter::SetHP(int32_t  hp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeter*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hp);
}
inline void GlobalNamespace::GRHealthMeter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRHealthMeter* GlobalNamespace::GRHealthMeter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRHealthMeter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRHealthMeter::GRHealthMeter()   {
}
