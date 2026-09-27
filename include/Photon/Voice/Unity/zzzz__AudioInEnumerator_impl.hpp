#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AudioInEnumerator.hpp"
#include "Photon/Voice/zzzz__DeviceEnumeratorBase_impl.hpp"
#include "Photon/Voice/Unity/zzzz__AudioInEnumerator_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::AudioInEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioInEnumerator::*)(::Photon::Voice::ILogger*)>(&::Photon::Voice::Unity::AudioInEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa75a984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioInEnumerator.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioInEnumerator::*)()>(&::Photon::Voice::Unity::AudioInEnumerator::Refresh)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa75a9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumerator*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::AudioInEnumerator*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioInEnumerator.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::AudioInEnumerator::*)()>(&::Photon::Voice::Unity::AudioInEnumerator::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75ab28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumerator*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::AudioInEnumerator*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioInEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioInEnumerator::*)()>(&::Photon::Voice::Unity::AudioInEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa75ab30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumerator*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::AudioInEnumerator*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::Unity::AudioInEnumerator::_ctor(::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger);
}
inline void Photon::Voice::Unity::AudioInEnumerator::Refresh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::AudioInEnumerator*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Photon::Voice::Unity::AudioInEnumerator::get_Error()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::AudioInEnumerator*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AudioInEnumerator::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::AudioInEnumerator*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::AudioInEnumerator* Photon::Voice::Unity::AudioInEnumerator::New_ctor(::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::AudioInEnumerator*>(logger));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::AudioInEnumerator::AudioInEnumerator()   {
}
