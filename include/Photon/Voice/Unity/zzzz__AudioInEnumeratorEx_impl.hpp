#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AudioInEnumeratorEx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__AudioInEnumeratorEx_def.hpp"
#include "Photon/Voice/Unity/zzzz__AudioInEnumeratorEx_def.hpp"
#include "Photon/Voice/zzzz__DeviceInfo_def.hpp"
#include "Photon/Voice/zzzz__IDeviceEnumerator_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::AudioInEnumeratorEx.IDIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Voice::IDeviceEnumerator*, int32_t)>(&::Photon::Voice::Unity::AudioInEnumeratorEx::IDIsValid)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa76741c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumeratorEx*>(),
                        {"IDIsValid", {}, {::i2c::type_of<::Photon::Voice::IDeviceEnumerator*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioInEnumeratorEx.NameAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Photon::Voice::IDeviceEnumerator*, int32_t)>(&::Photon::Voice::Unity::AudioInEnumeratorEx::NameAtIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa7674f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumeratorEx*>(),
                        {"NameAtIndex", {}, {::i2c::type_of<::Photon::Voice::IDeviceEnumerator*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioInEnumeratorEx.IDAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Photon::Voice::IDeviceEnumerator*, int32_t)>(&::Photon::Voice::Unity::AudioInEnumeratorEx::IDAtIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa767588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumeratorEx*>(),
                        {"IDAtIndex", {}, {::i2c::type_of<::Photon::Voice::IDeviceEnumerator*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Photon::Voice::Unity::AudioInEnumeratorEx::IDIsValid(::Photon::Voice::IDeviceEnumerator*  en, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumeratorEx*>(),
                        {"IDIsValid", {}, {::i2c::type_of<::Photon::Voice::IDeviceEnumerator*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, en, id);
}
inline ::StringW Photon::Voice::Unity::AudioInEnumeratorEx::NameAtIndex(::Photon::Voice::IDeviceEnumerator*  en, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumeratorEx*>(),
                        {"NameAtIndex", {}, {::i2c::type_of<::Photon::Voice::IDeviceEnumerator*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, en, index);
}
inline int32_t Photon::Voice::Unity::AudioInEnumeratorEx::IDAtIndex(::Photon::Voice::IDeviceEnumerator*  en, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumeratorEx*>(),
                        {"IDAtIndex", {}, {::i2c::type_of<::Photon::Voice::IDeviceEnumerator*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, en, index);
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::AudioInEnumeratorEx::AudioInEnumeratorEx()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0::*)()>(&::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7674ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0._IDIsValid_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0::*)(::Photon::Voice::DeviceInfo)>(&::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0::_IDIsValid_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa767648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0*>(),
                        {"<IDIsValid>b__0", {}, {::i2c::type_of<::Photon::Voice::DeviceInfo>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
inline void Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0::_IDIsValid_b__0(::Photon::Voice::DeviceInfo  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0*>(),
                        {"<IDIsValid>b__0", {}, {::i2c::type_of<::Photon::Voice::DeviceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, d);
}
inline ::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0* Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0::AudioInEnumeratorEx___c__DisplayClass0_0()   {
}
