#pragma once
// IWYU pragma private; include "GlobalNamespace/FrameStamp.hpp"
#include "GlobalNamespace/zzzz__FrameStamp_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FrameStamp.get_framesElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FrameStamp::*)()>(&::GlobalNamespace::FrameStamp::get_framesElapsed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a1ab80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FrameStamp>(),
                        {"get_framesElapsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameStamp.Now
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FrameStamp (*)()>(&::GlobalNamespace::FrameStamp::Now)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FrameStamp>(),
                        {"Now", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameStamp.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FrameStamp::*)()>(&::GlobalNamespace::FrameStamp::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a1aba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FrameStamp>(),
                    {::i2c::class_of<::GlobalNamespace::FrameStamp>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameStamp.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FrameStamp::*)()>(&::GlobalNamespace::FrameStamp::GetHashCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a1ac2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FrameStamp>(),
                    {::i2c::class_of<::GlobalNamespace::FrameStamp>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameStamp.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::FrameStamp)>(&::GlobalNamespace::FrameStamp::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a1ac94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FrameStamp>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::FrameStamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameStamp.op_Implicit___GlobalNamespace__FrameStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FrameStamp (*)(int32_t)>(&::GlobalNamespace::FrameStamp::op_Implicit___GlobalNamespace__FrameStamp)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a1acb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FrameStamp>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::FrameStamp::get_framesElapsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FrameStamp>(),
                        {"get_framesElapsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::FrameStamp GlobalNamespace::FrameStamp::Now()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FrameStamp>(),
                        {"Now", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FrameStamp>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::FrameStamp::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FrameStamp>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::FrameStamp::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FrameStamp>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::FrameStamp::op_Implicit_int32_t(::GlobalNamespace::FrameStamp  fs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FrameStamp>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::FrameStamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs);
}
inline ::GlobalNamespace::FrameStamp GlobalNamespace::FrameStamp::op_Implicit___GlobalNamespace__FrameStamp(int32_t  framesElapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FrameStamp>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FrameStamp>(nullptr, ___internal_method, framesElapsed);
}
// Ctor Parameters [CppParam { name: "_lastFrame", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FrameStamp::FrameStamp(int32_t  _lastFrame) noexcept  {
this->_lastFrame = _lastFrame;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FrameStamp::FrameStamp()   {
}
