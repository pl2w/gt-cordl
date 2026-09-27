#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/SerializableGuid.hpp"
#include "Unity/XR/CoreUtils/zzzz__SerializableGuid_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuid.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::SerializableGuid (*)()>(&::Unity::XR::CoreUtils::SerializableGuid::get_Empty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3fa678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuid.get_Guid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Unity::XR::CoreUtils::SerializableGuid::*)()>(&::Unity::XR::CoreUtils::SerializableGuid::get_Guid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3fa6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"get_Guid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::SerializableGuid::*)(uint64_t, uint64_t)>(&::Unity::XR::CoreUtils::SerializableGuid::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fa6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuid.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::XR::CoreUtils::SerializableGuid::*)()>(&::Unity::XR::CoreUtils::SerializableGuid::GetHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb3fa6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                    {::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::SerializableGuid::*)(::System::Object*)>(&::Unity::XR::CoreUtils::SerializableGuid::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb3fa720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                    {::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::XR::CoreUtils::SerializableGuid::*)()>(&::Unity::XR::CoreUtils::SerializableGuid::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb3fa7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                    {::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::XR::CoreUtils::SerializableGuid::*)(::StringW)>(&::Unity::XR::CoreUtils::SerializableGuid::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb3fa850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::XR::CoreUtils::SerializableGuid::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::XR::CoreUtils::SerializableGuid::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb3fa8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::SerializableGuid::*)(::Unity::XR::CoreUtils::SerializableGuid)>(&::Unity::XR::CoreUtils::SerializableGuid::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb3fa7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::XR::CoreUtils::SerializableGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuid.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::XR::CoreUtils::SerializableGuid, ::Unity::XR::CoreUtils::SerializableGuid)>(&::Unity::XR::CoreUtils::SerializableGuid::op_Equality)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb3fa960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"op_Equality", {}, {::i2c::type_of<::Unity::XR::CoreUtils::SerializableGuid>(), ::i2c::type_of<::Unity::XR::CoreUtils::SerializableGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuid.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::XR::CoreUtils::SerializableGuid, ::Unity::XR::CoreUtils::SerializableGuid)>(&::Unity::XR::CoreUtils::SerializableGuid::op_Inequality)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb3fa9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Unity::XR::CoreUtils::SerializableGuid>(), ::i2c::type_of<::Unity::XR::CoreUtils::SerializableGuid>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::SerializableGuid::setStaticF_k_Empty(::Unity::XR::CoreUtils::SerializableGuid  value)  {
::cordl_internals::setStaticField<::Unity::XR::CoreUtils::SerializableGuid, "k_Empty", ::Unity::XR::CoreUtils::SerializableGuid>(std::forward<::Unity::XR::CoreUtils::SerializableGuid>(value));
}
inline ::Unity::XR::CoreUtils::SerializableGuid Unity::XR::CoreUtils::SerializableGuid::getStaticF_k_Empty()  {
return ::cordl_internals::getStaticField<::Unity::XR::CoreUtils::SerializableGuid, "k_Empty", ::Unity::XR::CoreUtils::SerializableGuid>();
}
inline ::Unity::XR::CoreUtils::SerializableGuid Unity::XR::CoreUtils::SerializableGuid::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::SerializableGuid>(nullptr, ___internal_method);
}
inline ::System::Guid Unity::XR::CoreUtils::SerializableGuid::get_Guid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"get_Guid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline void Unity::XR::CoreUtils::SerializableGuid::_ctor(uint64_t  guidLow, uint64_t  guidHigh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, guidLow, guidHigh);
}
inline int32_t Unity::XR::CoreUtils::SerializableGuid::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::SerializableGuid::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline ::StringW Unity::XR::CoreUtils::SerializableGuid::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::XR::CoreUtils::SerializableGuid::ToString(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format);
}
inline ::StringW Unity::XR::CoreUtils::SerializableGuid::ToString(::StringW  format, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, provider);
}
inline bool Unity::XR::CoreUtils::SerializableGuid::Equals(::Unity::XR::CoreUtils::SerializableGuid  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::XR::CoreUtils::SerializableGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Unity::XR::CoreUtils::SerializableGuid::op_Equality(::Unity::XR::CoreUtils::SerializableGuid  lhs, ::Unity::XR::CoreUtils::SerializableGuid  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"op_Equality", {}, {::i2c::type_of<::Unity::XR::CoreUtils::SerializableGuid>(), ::i2c::type_of<::Unity::XR::CoreUtils::SerializableGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::XR::CoreUtils::SerializableGuid::op_Inequality(::Unity::XR::CoreUtils::SerializableGuid  lhs, ::Unity::XR::CoreUtils::SerializableGuid  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Unity::XR::CoreUtils::SerializableGuid>(), ::i2c::type_of<::Unity::XR::CoreUtils::SerializableGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>"
constexpr  Unity::XR::CoreUtils::SerializableGuid::operator ::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>*()  {
return static_cast<::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>"
constexpr ::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>* Unity::XR::CoreUtils::SerializableGuid::i___System__IEquatable_1___Unity__XR__CoreUtils__SerializableGuid_()  {
return static_cast<::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_GuidLow", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_GuidHigh", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::XR::CoreUtils::SerializableGuid::SerializableGuid(uint64_t  m_GuidLow, uint64_t  m_GuidHigh) noexcept  {
this->m_GuidLow = m_GuidLow;
this->m_GuidHigh = m_GuidHigh;
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::SerializableGuid::SerializableGuid()   {
}
