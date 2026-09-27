#pragma once
// IWYU pragma private; include "GlobalNamespace/PerfTestGorillaHarness.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerfTestGorillaHarness_def.hpp"
#include "GlobalNamespace/zzzz__PerfTestGorillaSlot_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerfTestGorillaHarness.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerfTestGorillaHarness::*)()>(&::GlobalNamespace::PerfTestGorillaHarness::Awake)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x56bc9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaHarness*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerfTestGorillaHarness.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerfTestGorillaHarness::*)()>(&::GlobalNamespace::PerfTestGorillaHarness::Update)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x56bcae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaHarness*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerfTestGorillaHarness.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerfTestGorillaHarness::*)()>(&::GlobalNamespace::PerfTestGorillaHarness::StartRecording)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56bcc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaHarness*>(),
                        {"StartRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerfTestGorillaHarness.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerfTestGorillaHarness::*)()>(&::GlobalNamespace::PerfTestGorillaHarness::StopRecording)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x56bcc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaHarness*>(),
                        {"StopRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerfTestGorillaHarness._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerfTestGorillaHarness::*)()>(&::GlobalNamespace::PerfTestGorillaHarness::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x56bcde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaHarness*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PerfTestGorillaSlot>& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get__vrSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrSlot;
}
constexpr ::UnityW<::GlobalNamespace::PerfTestGorillaSlot> const& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get__vrSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrSlot;
}
constexpr void GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_set__vrSlot(::UnityW<::GlobalNamespace::PerfTestGorillaSlot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vrSlot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerfTestGorillaSlot>>*& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get_dummySlots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummySlots;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerfTestGorillaSlot>>* const& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get_dummySlots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummySlots;
}
constexpr void GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_set_dummySlots(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerfTestGorillaSlot>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dummySlots = value;
}
constexpr bool& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get__isRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecording;
}
constexpr bool const& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get__isRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecording;
}
constexpr void GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_set__isRecording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRecording = value;
}
constexpr float_t& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get__nextRandomMoveTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextRandomMoveTime;
}
constexpr float_t const& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get__nextRandomMoveTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextRandomMoveTime;
}
constexpr void GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_set__nextRandomMoveTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextRandomMoveTime = value;
}
constexpr float_t& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get_bounceSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceSpeed;
}
constexpr float_t const& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get_bounceSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceSpeed;
}
constexpr void GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_set_bounceSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceSpeed = value;
}
constexpr float_t& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get_bounceAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAmplitude;
}
constexpr float_t const& GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_get_bounceAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAmplitude;
}
constexpr void GlobalNamespace::PerfTestGorillaHarness::__cordl_internal_set_bounceAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceAmplitude = value;
}
inline void GlobalNamespace::PerfTestGorillaHarness::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaHarness*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerfTestGorillaHarness::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaHarness*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerfTestGorillaHarness::StartRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaHarness*>(),
                        {"StartRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerfTestGorillaHarness::StopRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaHarness*>(),
                        {"StopRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerfTestGorillaHarness::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaHarness*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerfTestGorillaHarness* GlobalNamespace::PerfTestGorillaHarness::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerfTestGorillaHarness*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerfTestGorillaHarness::PerfTestGorillaHarness()   {
}
