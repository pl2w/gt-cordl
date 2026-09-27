#pragma once
// IWYU pragma private; include "Voxels/MemoryMonitor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Voxels/zzzz__MemoryMonitor_def.hpp"
//  Writing Method size for method: ::Voxels::MemoryMonitor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::MemoryMonitor::*)()>(&::Voxels::MemoryMonitor::Update)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5dc37a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MemoryMonitor*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::MemoryMonitor.Collect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::MemoryMonitor::*)()>(&::Voxels::MemoryMonitor::Collect)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5dc37d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MemoryMonitor*>(),
                        {"Collect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::MemoryMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::MemoryMonitor::*)()>(&::Voxels::MemoryMonitor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5dc3864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MemoryMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Voxels::MemoryMonitor::__cordl_internal_get_logInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logInterval;
}
constexpr float_t const& Voxels::MemoryMonitor::__cordl_internal_get_logInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logInterval;
}
constexpr void Voxels::MemoryMonitor::__cordl_internal_set_logInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logInterval = value;
}
constexpr float_t& Voxels::MemoryMonitor::__cordl_internal_get_nextLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLog;
}
constexpr float_t const& Voxels::MemoryMonitor::__cordl_internal_get_nextLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLog;
}
constexpr void Voxels::MemoryMonitor::__cordl_internal_set_nextLog(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextLog = value;
}
inline void Voxels::MemoryMonitor::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MemoryMonitor*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::MemoryMonitor::Collect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MemoryMonitor*>(),
                        {"Collect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::MemoryMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MemoryMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::MemoryMonitor* Voxels::MemoryMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::MemoryMonitor*>());
}
// Ctor Parameters []
constexpr ::Voxels::MemoryMonitor::MemoryMonitor()   {
}
