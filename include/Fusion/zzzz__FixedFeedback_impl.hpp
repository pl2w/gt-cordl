#pragma once
// IWYU pragma private; include "Fusion/FixedFeedback.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FixedFeedback_def.hpp"
#include "Fusion/zzzz__IFeedbackController_def.hpp"
//  Writing Method size for method: ::Fusion::FixedFeedback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FixedFeedback::*)(double_t, double_t, double_t, double_t)>(&::Fusion::FixedFeedback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x600adb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedFeedback*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FixedFeedback.Fusion_IFeedbackController_Output
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::FixedFeedback::*)()>(&::Fusion::FixedFeedback::Fusion_IFeedbackController_Output)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600ae74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedFeedback*>(),
                        {"Fusion.IFeedbackController.Output", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FixedFeedback.Fusion_IFeedbackController_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FixedFeedback::*)(double_t, double_t, double_t)>(&::Fusion::FixedFeedback::Fusion_IFeedbackController_Update)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x600ae7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedFeedback*>(),
                        {"Fusion.IFeedbackController.Update", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FixedFeedback.Fusion_IFeedbackController_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FixedFeedback::*)()>(&::Fusion::FixedFeedback::Fusion_IFeedbackController_Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600af6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedFeedback*>(),
                        {"Fusion.IFeedbackController.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FixedFeedback.Fusion_IFeedbackController_ResetOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FixedFeedback::*)()>(&::Fusion::FixedFeedback::Fusion_IFeedbackController_ResetOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600af74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedFeedback*>(),
                        {"Fusion.IFeedbackController.ResetOutput", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Fusion::FixedFeedback::__cordl_internal_get__outputMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputMin;
}
constexpr double_t const& Fusion::FixedFeedback::__cordl_internal_get__outputMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputMin;
}
constexpr void Fusion::FixedFeedback::__cordl_internal_set__outputMin(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputMin = value;
}
constexpr double_t& Fusion::FixedFeedback::__cordl_internal_get__outputMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputMax;
}
constexpr double_t const& Fusion::FixedFeedback::__cordl_internal_get__outputMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputMax;
}
constexpr void Fusion::FixedFeedback::__cordl_internal_set__outputMax(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputMax = value;
}
constexpr double_t& Fusion::FixedFeedback::__cordl_internal_get__deadzoneMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadzoneMin;
}
constexpr double_t const& Fusion::FixedFeedback::__cordl_internal_get__deadzoneMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadzoneMin;
}
constexpr void Fusion::FixedFeedback::__cordl_internal_set__deadzoneMin(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deadzoneMin = value;
}
constexpr double_t& Fusion::FixedFeedback::__cordl_internal_get__deadzoneMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadzoneMax;
}
constexpr double_t const& Fusion::FixedFeedback::__cordl_internal_get__deadzoneMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadzoneMax;
}
constexpr void Fusion::FixedFeedback::__cordl_internal_set__deadzoneMax(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deadzoneMax = value;
}
constexpr double_t& Fusion::FixedFeedback::__cordl_internal_get__output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr double_t const& Fusion::FixedFeedback::__cordl_internal_get__output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr void Fusion::FixedFeedback::__cordl_internal_set__output(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____output = value;
}
inline void Fusion::FixedFeedback::_ctor(double_t  outputMin, double_t  outputMax, double_t  deadzoneMin, double_t  deadzoneMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedFeedback*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputMin, outputMax, deadzoneMin, deadzoneMax);
}
inline double_t Fusion::FixedFeedback::Fusion_IFeedbackController_Output()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedFeedback*>(),
                        {"Fusion.IFeedbackController.Output", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::FixedFeedback::Fusion_IFeedbackController_Update(double_t  sample, double_t  target, double_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedFeedback*>(),
                        {"Fusion.IFeedbackController.Update", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sample, target, dt);
}
inline void Fusion::FixedFeedback::Fusion_IFeedbackController_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedFeedback*>(),
                        {"Fusion.IFeedbackController.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FixedFeedback::Fusion_IFeedbackController_ResetOutput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedFeedback*>(),
                        {"Fusion.IFeedbackController.ResetOutput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FixedFeedback* Fusion::FixedFeedback::New_ctor(double_t  outputMin, double_t  outputMax, double_t  deadzoneMin, double_t  deadzoneMax)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FixedFeedback*>(outputMin, outputMax, deadzoneMin, deadzoneMax));
}
/// @brief Convert operator to "::Fusion::IFeedbackController"
constexpr  Fusion::FixedFeedback::operator ::Fusion::IFeedbackController*() noexcept {
return static_cast<::Fusion::IFeedbackController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IFeedbackController"
constexpr ::Fusion::IFeedbackController* Fusion::FixedFeedback::i___Fusion__IFeedbackController() noexcept {
return static_cast<::Fusion::IFeedbackController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::FixedFeedback::FixedFeedback()   {
}
