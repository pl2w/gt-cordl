#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetPositionCache_TimeRange.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_TimeRange_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TargetPositionCache_TimeRange.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TargetPositionCache_TimeRange::*)()>(&::GlobalNamespace::TargetPositionCache_TimeRange::get_IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaebeeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TargetPositionCache_TimeRange>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TargetPositionCache_TimeRange.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TargetPositionCache_TimeRange::*)(float_t)>(&::GlobalNamespace::TargetPositionCache_TimeRange::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaebef44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TargetPositionCache_TimeRange>(),
                        {"Contains", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TargetPositionCache_TimeRange.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TargetPositionCache_TimeRange (*)()>(&::GlobalNamespace::TargetPositionCache_TimeRange::get_Empty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaebef68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TargetPositionCache_TimeRange>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TargetPositionCache_TimeRange.Include
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TargetPositionCache_TimeRange::*)(float_t)>(&::GlobalNamespace::TargetPositionCache_TimeRange::Include)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaebf720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TargetPositionCache_TimeRange>(),
                        {"Include", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::TargetPositionCache_TimeRange::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TargetPositionCache_TimeRange>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::TargetPositionCache_TimeRange::Contains(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TargetPositionCache_TimeRange>(),
                        {"Contains", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time);
}
inline ::GlobalNamespace::TargetPositionCache_TimeRange GlobalNamespace::TargetPositionCache_TimeRange::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TargetPositionCache_TimeRange>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TargetPositionCache_TimeRange>(nullptr, ___internal_method);
}
inline void GlobalNamespace::TargetPositionCache_TimeRange::Include(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TargetPositionCache_TimeRange>(),
                        {"Include", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, time);
}
// Ctor Parameters [CppParam { name: "Start", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "End", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TargetPositionCache_TimeRange::TargetPositionCache_TimeRange(float_t  Start, float_t  End) noexcept  {
this->Start = Start;
this->End = End;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TargetPositionCache_TimeRange::TargetPositionCache_TimeRange()   {
}
