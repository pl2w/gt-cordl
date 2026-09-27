#pragma once
// IWYU pragma private; include "Fusion/Protocol/DummyTrafficSync.hpp"
#include "Fusion/Protocol/zzzz__Message_impl.hpp"
#include "Fusion/Protocol/zzzz__DummyTrafficSync_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::DummyTrafficSync.get_SendInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Protocol::DummyTrafficSync::*)()>(&::Fusion::Protocol::DummyTrafficSync::get_SendInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6023764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                        {"get_SendInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::DummyTrafficSync.set_SendInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::DummyTrafficSync::*)(int32_t)>(&::Fusion::Protocol::DummyTrafficSync::set_SendInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602376c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                        {"set_SendInterval", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::DummyTrafficSync.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Protocol::DummyTrafficSync::*)()>(&::Fusion::Protocol::DummyTrafficSync::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6023774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::DummyTrafficSync.set_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::DummyTrafficSync::*)(int32_t)>(&::Fusion::Protocol::DummyTrafficSync::set_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602377c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                        {"set_Size", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::DummyTrafficSync.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::DummyTrafficSync::*)()>(&::Fusion::Protocol::DummyTrafficSync::get_IsValid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6023784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                    {::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::DummyTrafficSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::DummyTrafficSync::*)()>(&::Fusion::Protocol::DummyTrafficSync::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60237c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::DummyTrafficSync.SerializeProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::DummyTrafficSync::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::DummyTrafficSync::SerializeProtected)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x60237e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                    {::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::DummyTrafficSync.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::DummyTrafficSync::*)()>(&::Fusion::Protocol::DummyTrafficSync::ToString)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x60238b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                    {::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Protocol::DummyTrafficSync::__cordl_internal_get__SendInterval_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SendInterval_k__BackingField;
}
constexpr int32_t const& Fusion::Protocol::DummyTrafficSync::__cordl_internal_get__SendInterval_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SendInterval_k__BackingField;
}
constexpr void Fusion::Protocol::DummyTrafficSync::__cordl_internal_set__SendInterval_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SendInterval_k__BackingField = value;
}
constexpr int32_t& Fusion::Protocol::DummyTrafficSync::__cordl_internal_get__Size_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Size_k__BackingField;
}
constexpr int32_t const& Fusion::Protocol::DummyTrafficSync::__cordl_internal_get__Size_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Size_k__BackingField;
}
constexpr void Fusion::Protocol::DummyTrafficSync::__cordl_internal_set__Size_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Size_k__BackingField = value;
}
inline int32_t Fusion::Protocol::DummyTrafficSync::get_SendInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                        {"get_SendInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Protocol::DummyTrafficSync::set_SendInterval(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                        {"set_SendInterval", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Protocol::DummyTrafficSync::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Protocol::DummyTrafficSync::set_Size(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                        {"set_Size", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Protocol::DummyTrafficSync::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Protocol::DummyTrafficSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::DummyTrafficSync::SerializeProtected(::Fusion::Protocol::BitStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::StringW Fusion::Protocol::DummyTrafficSync::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::DummyTrafficSync*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Protocol::DummyTrafficSync* Fusion::Protocol::DummyTrafficSync::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::DummyTrafficSync*>());
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::DummyTrafficSync::DummyTrafficSync()   {
}
