#pragma once
// IWYU pragma private; include "Fusion/VariableFeedback.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__VariableFeedback_def.hpp"
#include "Fusion/zzzz__IFeedbackController_def.hpp"
//  Writing Method size for method: ::Fusion::VariableFeedback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::VariableFeedback::*)(double_t, double_t, double_t, double_t, double_t)>(&::Fusion::VariableFeedback::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6007008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::VariableFeedback*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::VariableFeedback.Fusion_IFeedbackController_Output
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::VariableFeedback::*)()>(&::Fusion::VariableFeedback::Fusion_IFeedbackController_Output)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600b208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::VariableFeedback*>(),
                        {"Fusion.IFeedbackController.Output", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::VariableFeedback.Fusion_IFeedbackController_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::VariableFeedback::*)(double_t, double_t, double_t)>(&::Fusion::VariableFeedback::Fusion_IFeedbackController_Update)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x600b210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::VariableFeedback*>(),
                        {"Fusion.IFeedbackController.Update", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::VariableFeedback.Fusion_IFeedbackController_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::VariableFeedback::*)()>(&::Fusion::VariableFeedback::Fusion_IFeedbackController_Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x600b37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::VariableFeedback*>(),
                        {"Fusion.IFeedbackController.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::VariableFeedback.Fusion_IFeedbackController_ResetOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::VariableFeedback::*)()>(&::Fusion::VariableFeedback::Fusion_IFeedbackController_ResetOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600b388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::VariableFeedback*>(),
                        {"Fusion.IFeedbackController.ResetOutput", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Fusion::VariableFeedback::__cordl_internal_get__Kp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Kp;
}
constexpr double_t const& Fusion::VariableFeedback::__cordl_internal_get__Kp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Kp;
}
constexpr void Fusion::VariableFeedback::__cordl_internal_set__Kp(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Kp = value;
}
constexpr double_t& Fusion::VariableFeedback::__cordl_internal_get__Ki()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ki;
}
constexpr double_t const& Fusion::VariableFeedback::__cordl_internal_get__Ki() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ki;
}
constexpr void Fusion::VariableFeedback::__cordl_internal_set__Ki(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Ki = value;
}
constexpr double_t& Fusion::VariableFeedback::__cordl_internal_get__Kd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Kd;
}
constexpr double_t const& Fusion::VariableFeedback::__cordl_internal_get__Kd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Kd;
}
constexpr void Fusion::VariableFeedback::__cordl_internal_set__Kd(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Kd = value;
}
constexpr double_t& Fusion::VariableFeedback::__cordl_internal_get__outputMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputMin;
}
constexpr double_t const& Fusion::VariableFeedback::__cordl_internal_get__outputMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputMin;
}
constexpr void Fusion::VariableFeedback::__cordl_internal_set__outputMin(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputMin = value;
}
constexpr double_t& Fusion::VariableFeedback::__cordl_internal_get__outputMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputMax;
}
constexpr double_t const& Fusion::VariableFeedback::__cordl_internal_get__outputMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputMax;
}
constexpr void Fusion::VariableFeedback::__cordl_internal_set__outputMax(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputMax = value;
}
constexpr double_t& Fusion::VariableFeedback::__cordl_internal_get__lastSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSample;
}
constexpr double_t const& Fusion::VariableFeedback::__cordl_internal_get__lastSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSample;
}
constexpr void Fusion::VariableFeedback::__cordl_internal_set__lastSample(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSample = value;
}
constexpr double_t& Fusion::VariableFeedback::__cordl_internal_get__sum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sum;
}
constexpr double_t const& Fusion::VariableFeedback::__cordl_internal_get__sum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sum;
}
constexpr void Fusion::VariableFeedback::__cordl_internal_set__sum(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sum = value;
}
constexpr double_t& Fusion::VariableFeedback::__cordl_internal_get__output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr double_t const& Fusion::VariableFeedback::__cordl_internal_get__output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr void Fusion::VariableFeedback::__cordl_internal_set__output(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____output = value;
}
inline void Fusion::VariableFeedback::_ctor(double_t  Kp, double_t  Ki, double_t  Kd, double_t  outputMin, double_t  outputMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::VariableFeedback*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Kp, Ki, Kd, outputMin, outputMax);
}
inline double_t Fusion::VariableFeedback::Fusion_IFeedbackController_Output()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::VariableFeedback*>(),
                        {"Fusion.IFeedbackController.Output", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::VariableFeedback::Fusion_IFeedbackController_Update(double_t  sample, double_t  target, double_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::VariableFeedback*>(),
                        {"Fusion.IFeedbackController.Update", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sample, target, dt);
}
inline void Fusion::VariableFeedback::Fusion_IFeedbackController_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::VariableFeedback*>(),
                        {"Fusion.IFeedbackController.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::VariableFeedback::Fusion_IFeedbackController_ResetOutput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::VariableFeedback*>(),
                        {"Fusion.IFeedbackController.ResetOutput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::VariableFeedback* Fusion::VariableFeedback::New_ctor(double_t  Kp, double_t  Ki, double_t  Kd, double_t  outputMin, double_t  outputMax)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::VariableFeedback*>(Kp, Ki, Kd, outputMin, outputMax));
}
/// @brief Convert operator to "::Fusion::IFeedbackController"
constexpr  Fusion::VariableFeedback::operator ::Fusion::IFeedbackController*() noexcept {
return static_cast<::Fusion::IFeedbackController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IFeedbackController"
constexpr ::Fusion::IFeedbackController* Fusion::VariableFeedback::i___Fusion__IFeedbackController() noexcept {
return static_cast<::Fusion::IFeedbackController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::VariableFeedback::VariableFeedback()   {
}
