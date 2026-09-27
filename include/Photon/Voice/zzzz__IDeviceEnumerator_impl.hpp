#pragma once
// IWYU pragma private; include "Photon/Voice/IDeviceEnumerator.hpp"
#include "Photon/Voice/zzzz__IDeviceEnumerator_def.hpp"
#include "Photon/Voice/zzzz__DeviceInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::IDeviceEnumerator.get_IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::IDeviceEnumerator::*)()>(&::Photon::Voice::IDeviceEnumerator::get_IsSupported)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IDeviceEnumerator*>(),
                    {::i2c::class_of<::Photon::Voice::IDeviceEnumerator*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IDeviceEnumerator.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::IDeviceEnumerator::*)()>(&::Photon::Voice::IDeviceEnumerator::Refresh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IDeviceEnumerator*>(),
                    {::i2c::class_of<::Photon::Voice::IDeviceEnumerator*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IDeviceEnumerator.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::IDeviceEnumerator::*)()>(&::Photon::Voice::IDeviceEnumerator::get_Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IDeviceEnumerator*>(),
                    {::i2c::class_of<::Photon::Voice::IDeviceEnumerator*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool Photon::Voice::IDeviceEnumerator::get_IsSupported()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IDeviceEnumerator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::IDeviceEnumerator::Refresh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IDeviceEnumerator*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Photon::Voice::IDeviceEnumerator::get_Error()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IDeviceEnumerator*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::IDeviceEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::IDeviceEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>"
constexpr  Photon::Voice::IDeviceEnumerator::operator ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>* Photon::Voice::IDeviceEnumerator::i___System__Collections__Generic__IEnumerable_1___Photon__Voice__DeviceInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Photon::Voice::IDeviceEnumerator::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Photon::Voice::IDeviceEnumerator::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
