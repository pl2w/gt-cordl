#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SimulationItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SimulationItem_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SimulationItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SimulationItem::*)()>(&::ExitGames::Client::Photon::SimulationItem::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa6c5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SimulationItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SimulationItem.get_Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::SimulationItem::*)()>(&::ExitGames::Client::Photon::SimulationItem::get_Delay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SimulationItem*>(),
                        {"get_Delay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SimulationItem.set_Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SimulationItem::*)(int32_t)>(&::ExitGames::Client::Photon::SimulationItem::set_Delay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SimulationItem*>(),
                        {"set_Delay", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::Stopwatch*& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_stopw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopw;
}
constexpr ::System::Diagnostics::Stopwatch* const& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_stopw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopw;
}
constexpr void ExitGames::Client::Photon::SimulationItem::__cordl_internal_set_stopw(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopw = value;
}
constexpr int32_t& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_TimeToExecute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeToExecute;
}
constexpr int32_t const& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_TimeToExecute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeToExecute;
}
constexpr void ExitGames::Client::Photon::SimulationItem::__cordl_internal_set_TimeToExecute(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TimeToExecute = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_DelayedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayedData;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_DelayedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayedData;
}
constexpr void ExitGames::Client::Photon::SimulationItem::__cordl_internal_set_DelayedData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DelayedData = value;
}
constexpr int32_t& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get__Delay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Delay_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get__Delay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Delay_k__BackingField;
}
constexpr void ExitGames::Client::Photon::SimulationItem::__cordl_internal_set__Delay_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Delay_k__BackingField = value;
}
inline void ExitGames::Client::Photon::SimulationItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SimulationItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::SimulationItem::get_Delay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SimulationItem*>(),
                        {"get_Delay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SimulationItem::set_Delay(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SimulationItem*>(),
                        {"set_Delay", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::SimulationItem* ExitGames::Client::Photon::SimulationItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SimulationItem*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SimulationItem::SimulationItem()   {
}
