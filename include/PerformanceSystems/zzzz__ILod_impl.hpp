#pragma once
// IWYU pragma private; include "PerformanceSystems/ILod.hpp"
#include "PerformanceSystems/zzzz__ILod_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::PerformanceSystems::ILod.get_CurrentLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::PerformanceSystems::ILod::*)()>(&::PerformanceSystems::ILod::get_CurrentLod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::ILod*>(),
                    {::i2c::class_of<::PerformanceSystems::ILod*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ILod.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::PerformanceSystems::ILod::*)()>(&::PerformanceSystems::ILod::get_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::ILod*>(),
                    {::i2c::class_of<::PerformanceSystems::ILod*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ILod.get_LodRanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::PerformanceSystems::ILod::*)()>(&::PerformanceSystems::ILod::get_LodRanges)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::ILod*>(),
                    {::i2c::class_of<::PerformanceSystems::ILod*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ILod.get_OnLodRangeEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Events::UnityEvent*> (::PerformanceSystems::ILod::*)()>(&::PerformanceSystems::ILod::get_OnLodRangeEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::ILod*>(),
                    {::i2c::class_of<::PerformanceSystems::ILod*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ILod.get_OnCulledEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::PerformanceSystems::ILod::*)()>(&::PerformanceSystems::ILod::get_OnCulledEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::ILod*>(),
                    {::i2c::class_of<::PerformanceSystems::ILod*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ILod.UpdateLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::ILod::*)(::UnityEngine::Vector3)>(&::PerformanceSystems::ILod::UpdateLod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::ILod*>(),
                    {::i2c::class_of<::PerformanceSystems::ILod*>(), 5}
                ));
    return ___internal_method;
  }
};
inline int32_t PerformanceSystems::ILod::get_CurrentLod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::ILod*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 PerformanceSystems::ILod::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::ILod*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::ArrayW<float_t> PerformanceSystems::ILod::get_LodRanges()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::ILod*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Events::UnityEvent*> PerformanceSystems::ILod::get_OnLodRangeEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::ILod*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Events::UnityEvent*>>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* PerformanceSystems::ILod::get_OnCulledEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::ILod*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void PerformanceSystems::ILod::UpdateLod(::UnityEngine::Vector3  refPos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::ILod*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, refPos);
}
