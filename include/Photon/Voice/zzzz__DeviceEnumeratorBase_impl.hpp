#pragma once
// IWYU pragma private; include "Photon/Voice/DeviceEnumeratorBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__DeviceEnumeratorBase_def.hpp"
#include "Photon/Voice/zzzz__DeviceInfo_def.hpp"
#include "Photon/Voice/zzzz__IDeviceEnumerator_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceEnumeratorBase::*)(::Photon::Voice::ILogger*)>(&::Photon::Voice::DeviceEnumeratorBase::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa7461a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorBase.get_IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::DeviceEnumeratorBase::*)()>(&::Photon::Voice::DeviceEnumeratorBase::get_IsSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa746240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(),
                    {::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorBase.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::DeviceEnumeratorBase::*)()>(&::Photon::Voice::DeviceEnumeratorBase::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa746248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(),
                    {::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorBase.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceEnumeratorBase::*)(::StringW)>(&::Photon::Voice::DeviceEnumeratorBase::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa746250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(),
                    {::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorBase.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Photon::Voice::DeviceInfo>* (::Photon::Voice::DeviceEnumeratorBase::*)()>(&::Photon::Voice::DeviceEnumeratorBase::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa746258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorBase.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceEnumeratorBase::*)()>(&::Photon::Voice::DeviceEnumeratorBase::Refresh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(),
                    {::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorBase.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Photon::Voice::DeviceEnumeratorBase::*)()>(&::Photon::Voice::DeviceEnumeratorBase::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7462e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorBase.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceEnumeratorBase::*)()>(&::Photon::Voice::DeviceEnumeratorBase::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(),
                    {::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(), 14}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Photon::Voice::DeviceInfo>*& Photon::Voice::DeviceEnumeratorBase::__cordl_internal_get_devices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devices;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Voice::DeviceInfo>* const& Photon::Voice::DeviceEnumeratorBase::__cordl_internal_get_devices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devices;
}
constexpr void Photon::Voice::DeviceEnumeratorBase::__cordl_internal_set_devices(::System::Collections::Generic::List_1<::Photon::Voice::DeviceInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___devices = value;
}
constexpr ::Photon::Voice::ILogger*& Photon::Voice::DeviceEnumeratorBase::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Photon::Voice::ILogger* const& Photon::Voice::DeviceEnumeratorBase::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Photon::Voice::DeviceEnumeratorBase::__cordl_internal_set_logger(::Photon::Voice::ILogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr ::StringW& Photon::Voice::DeviceEnumeratorBase::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::StringW const& Photon::Voice::DeviceEnumeratorBase::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void Photon::Voice::DeviceEnumeratorBase::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
inline void Photon::Voice::DeviceEnumeratorBase::_ctor(::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger);
}
inline bool Photon::Voice::DeviceEnumeratorBase::get_IsSupported()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Photon::Voice::DeviceEnumeratorBase::get_Error()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::DeviceEnumeratorBase::set_Error(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::DeviceInfo>* Photon::Voice::DeviceEnumeratorBase::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Photon::Voice::DeviceInfo>*>(this, ___internal_method);
}
inline void Photon::Voice::DeviceEnumeratorBase::Refresh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Photon::Voice::DeviceEnumeratorBase::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Photon::Voice::DeviceEnumeratorBase::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceEnumeratorBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::DeviceEnumeratorBase* Photon::Voice::DeviceEnumeratorBase::New_ctor(::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::DeviceEnumeratorBase*>(logger));
}
/// @brief Convert operator to "::Photon::Voice::IDeviceEnumerator"
constexpr  Photon::Voice::DeviceEnumeratorBase::operator ::Photon::Voice::IDeviceEnumerator*() noexcept {
return static_cast<::Photon::Voice::IDeviceEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IDeviceEnumerator"
constexpr ::Photon::Voice::IDeviceEnumerator* Photon::Voice::DeviceEnumeratorBase::i___Photon__Voice__IDeviceEnumerator() noexcept {
return static_cast<::Photon::Voice::IDeviceEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::DeviceEnumeratorBase::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::DeviceEnumeratorBase::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>"
constexpr  Photon::Voice::DeviceEnumeratorBase::operator ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>* Photon::Voice::DeviceEnumeratorBase::i___System__Collections__Generic__IEnumerable_1___Photon__Voice__DeviceInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Photon::Voice::DeviceEnumeratorBase::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Photon::Voice::DeviceEnumeratorBase::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::DeviceEnumeratorBase::DeviceEnumeratorBase()   {
}
