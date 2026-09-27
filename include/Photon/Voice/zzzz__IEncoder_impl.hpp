#pragma once
// IWYU pragma private; include "Photon/Voice/IEncoder.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "Photon/Voice/zzzz__FrameFlags_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::IEncoder.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::IEncoder::*)()>(&::Photon::Voice::IEncoder::get_Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IEncoder*>(),
                    {::i2c::class_of<::Photon::Voice::IEncoder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IEncoder.set_Output
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::IEncoder::*)(::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*)>(&::Photon::Voice::IEncoder::set_Output)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IEncoder*>(),
                    {::i2c::class_of<::Photon::Voice::IEncoder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IEncoder.DequeueOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Photon::Voice::IEncoder::*)(::by_ref<::Photon::Voice::FrameFlags>)>(&::Photon::Voice::IEncoder::DequeueOutput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IEncoder*>(),
                    {::i2c::class_of<::Photon::Voice::IEncoder*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IEncoder.EndOfStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::IEncoder::*)()>(&::Photon::Voice::IEncoder::EndOfStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IEncoder*>(),
                    {::i2c::class_of<::Photon::Voice::IEncoder*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW Photon::Voice::IEncoder::get_Error()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IEncoder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::IEncoder::set_Output(::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IEncoder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ArraySegment_1<uint8_t> Photon::Voice::IEncoder::DequeueOutput(::by_ref<::Photon::Voice::FrameFlags>  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IEncoder*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method, flags);
}
inline void Photon::Voice::IEncoder::EndOfStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IEncoder*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename I>
requires(::cordl_internals::reference_type_constraint<I>)
inline I Photon::Voice::IEncoder::GetPlatformAPI()  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Photon::Voice::IEncoder*>(), 4}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<I>()}
                            ));
return ::cordl_internals::RunMethodRethrow<I>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::IEncoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::IEncoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
