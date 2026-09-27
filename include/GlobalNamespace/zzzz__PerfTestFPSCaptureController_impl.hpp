#pragma once
// IWYU pragma private; include "GlobalNamespace/PerfTestFPSCaptureController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerfTestFPSCaptureController_def.hpp"
#include "GlobalNamespace/zzzz__ScenePerformanceData_def.hpp"
#include "GlobalNamespace/zzzz__SerializablePerformanceReport_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerfTestFPSCaptureController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerfTestFPSCaptureController::*)()>(&::GlobalNamespace::PerfTestFPSCaptureController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bc9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestFPSCaptureController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SerializablePerformanceReport_1<::GlobalNamespace::ScenePerformanceData*>*& GlobalNamespace::PerfTestFPSCaptureController::__cordl_internal_get_performanceSummary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___performanceSummary;
}
constexpr ::GlobalNamespace::SerializablePerformanceReport_1<::GlobalNamespace::ScenePerformanceData*>* const& GlobalNamespace::PerfTestFPSCaptureController::__cordl_internal_get_performanceSummary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___performanceSummary;
}
constexpr void GlobalNamespace::PerfTestFPSCaptureController::__cordl_internal_set_performanceSummary(::GlobalNamespace::SerializablePerformanceReport_1<::GlobalNamespace::ScenePerformanceData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___performanceSummary = value;
}
inline void GlobalNamespace::PerfTestFPSCaptureController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestFPSCaptureController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerfTestFPSCaptureController* GlobalNamespace::PerfTestFPSCaptureController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerfTestFPSCaptureController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerfTestFPSCaptureController::PerfTestFPSCaptureController()   {
}
