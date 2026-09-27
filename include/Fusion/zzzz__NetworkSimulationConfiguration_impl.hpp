#pragma once
// IWYU pragma private; include "Fusion/NetworkSimulationConfiguration.hpp"
#include "Fusion/Sockets/zzzz__NetConfigSimulationOscillator_WaveShape_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkSimulationConfiguration_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfigSimulation_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkSimulationConfiguration.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSimulationConfiguration* (::Fusion::NetworkSimulationConfiguration::*)()>(&::Fusion::NetworkSimulationConfiguration::Clone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6001fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSimulationConfiguration*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSimulationConfiguration.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConfigSimulation (::Fusion::NetworkSimulationConfiguration::*)()>(&::Fusion::NetworkSimulationConfiguration::Create)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6002064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSimulationConfiguration*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSimulationConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSimulationConfiguration::*)()>(&::Fusion::NetworkSimulationConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x600227c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSimulationConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr bool const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
constexpr ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_DelayShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayShape;
}
constexpr ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_DelayShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayShape;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_DelayShape(::GlobalNamespace::NetConfigSimulationOscillator_WaveShape  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DelayShape = value;
}
constexpr double_t& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_DelayMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayMin;
}
constexpr double_t const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_DelayMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayMin;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_DelayMin(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DelayMin = value;
}
constexpr double_t& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_DelayMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayMax;
}
constexpr double_t const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_DelayMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayMax;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_DelayMax(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DelayMax = value;
}
constexpr double_t& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_DelayPeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayPeriod;
}
constexpr double_t const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_DelayPeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayPeriod;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_DelayPeriod(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DelayPeriod = value;
}
constexpr double_t& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_DelayThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayThreshold;
}
constexpr double_t const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_DelayThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayThreshold;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_DelayThreshold(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DelayThreshold = value;
}
constexpr double_t& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_AdditionalJitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdditionalJitter;
}
constexpr double_t const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_AdditionalJitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdditionalJitter;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_AdditionalJitter(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdditionalJitter = value;
}
constexpr ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_LossChanceShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LossChanceShape;
}
constexpr ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_LossChanceShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LossChanceShape;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_LossChanceShape(::GlobalNamespace::NetConfigSimulationOscillator_WaveShape  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LossChanceShape = value;
}
constexpr double_t& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_LossChanceMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LossChanceMin;
}
constexpr double_t const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_LossChanceMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LossChanceMin;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_LossChanceMin(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LossChanceMin = value;
}
constexpr double_t& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_LossChanceMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LossChanceMax;
}
constexpr double_t const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_LossChanceMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LossChanceMax;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_LossChanceMax(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LossChanceMax = value;
}
constexpr double_t& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_LossChanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LossChanceThreshold;
}
constexpr double_t const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_LossChanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LossChanceThreshold;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_LossChanceThreshold(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LossChanceThreshold = value;
}
constexpr double_t& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_LossChancePeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LossChancePeriod;
}
constexpr double_t const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_LossChancePeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LossChancePeriod;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_LossChancePeriod(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LossChancePeriod = value;
}
constexpr double_t& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_AdditionalLoss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdditionalLoss;
}
constexpr double_t const& Fusion::NetworkSimulationConfiguration::__cordl_internal_get_AdditionalLoss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdditionalLoss;
}
constexpr void Fusion::NetworkSimulationConfiguration::__cordl_internal_set_AdditionalLoss(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdditionalLoss = value;
}
inline ::Fusion::NetworkSimulationConfiguration* Fusion::NetworkSimulationConfiguration::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSimulationConfiguration*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSimulationConfiguration*>(this, ___internal_method);
}
inline ::Fusion::Sockets::NetConfigSimulation Fusion::NetworkSimulationConfiguration::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSimulationConfiguration*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConfigSimulation>(this, ___internal_method);
}
inline void Fusion::NetworkSimulationConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSimulationConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkSimulationConfiguration* Fusion::NetworkSimulationConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSimulationConfiguration*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSimulationConfiguration::NetworkSimulationConfiguration()   {
}
