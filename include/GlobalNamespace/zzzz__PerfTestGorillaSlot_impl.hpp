#pragma once
// IWYU pragma private; include "GlobalNamespace/PerfTestGorillaSlot.hpp"
#include "GlobalNamespace/zzzz__PerfTestGorillaSlot_SlotType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PerfTestGorillaSlot_def.hpp"
#include "GlobalNamespace/zzzz__PerfTestGorillaSlot_SlotType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerfTestGorillaSlot.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerfTestGorillaSlot::*)()>(&::GlobalNamespace::PerfTestGorillaSlot::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56bce80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaSlot*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerfTestGorillaSlot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerfTestGorillaSlot::*)()>(&::GlobalNamespace::PerfTestGorillaSlot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaSlot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PerfTestGorillaSlot_SlotType& GlobalNamespace::PerfTestGorillaSlot::__cordl_internal_get_slotType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotType;
}
constexpr ::GlobalNamespace::PerfTestGorillaSlot_SlotType const& GlobalNamespace::PerfTestGorillaSlot::__cordl_internal_get_slotType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotType;
}
constexpr void GlobalNamespace::PerfTestGorillaSlot::__cordl_internal_set_slotType(::GlobalNamespace::PerfTestGorillaSlot_SlotType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slotType = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PerfTestGorillaSlot::__cordl_internal_get_localStartPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localStartPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PerfTestGorillaSlot::__cordl_internal_get_localStartPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localStartPosition;
}
constexpr void GlobalNamespace::PerfTestGorillaSlot::__cordl_internal_set_localStartPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localStartPosition = value;
}
inline void GlobalNamespace::PerfTestGorillaSlot::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaSlot*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerfTestGorillaSlot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaSlot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerfTestGorillaSlot* GlobalNamespace::PerfTestGorillaSlot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerfTestGorillaSlot*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerfTestGorillaSlot::PerfTestGorillaSlot()   {
}
