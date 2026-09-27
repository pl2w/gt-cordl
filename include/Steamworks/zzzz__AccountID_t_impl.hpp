#pragma once
// IWYU pragma private; include "Steamworks/AccountID_t.hpp"
#include "Steamworks/zzzz__AccountID_t_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::AccountID_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::AccountID_t::*)(uint32_t)>(&::Steamworks::AccountID_t::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AccountID_t>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AccountID_t.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::AccountID_t::*)()>(&::Steamworks::AccountID_t::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::AccountID_t>(),
                    {::i2c::class_of<::Steamworks::AccountID_t>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AccountID_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::AccountID_t::*)(::System::Object*)>(&::Steamworks::AccountID_t::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f33c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::AccountID_t>(),
                    {::i2c::class_of<::Steamworks::AccountID_t>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AccountID_t.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::AccountID_t::*)()>(&::Steamworks::AccountID_t::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::AccountID_t>(),
                    {::i2c::class_of<::Steamworks::AccountID_t>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AccountID_t.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AccountID_t, ::Steamworks::AccountID_t)>(&::Steamworks::AccountID_t::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f33cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AccountID_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AccountID_t.op_Explicit_uint32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::AccountID_t)>(&::Steamworks::AccountID_t::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f33ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AccountID_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AccountID_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::AccountID_t::*)(::Steamworks::AccountID_t)>(&::Steamworks::AccountID_t::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f33cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AccountID_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AccountID_t.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::AccountID_t::*)(::Steamworks::AccountID_t)>(&::Steamworks::AccountID_t::CompareTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AccountID_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::AccountID_t::setStaticF_Invalid(::Steamworks::AccountID_t  value)  {
::cordl_internals::setStaticField<::Steamworks::AccountID_t, "Invalid", ::Steamworks::AccountID_t>(std::forward<::Steamworks::AccountID_t>(value));
}
inline ::Steamworks::AccountID_t Steamworks::AccountID_t::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Steamworks::AccountID_t, "Invalid", ::Steamworks::AccountID_t>();
}
inline void Steamworks::AccountID_t::_ctor(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AccountID_t>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::AccountID_t::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::AccountID_t>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::AccountID_t::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::AccountID_t>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::AccountID_t::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::AccountID_t>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::AccountID_t::op_Equality(::Steamworks::AccountID_t  x, ::Steamworks::AccountID_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AccountID_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline uint32_t Steamworks::AccountID_t::op_Explicit_uint32_t(::Steamworks::AccountID_t  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AccountID_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::AccountID_t::Equals(::Steamworks::AccountID_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AccountID_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::AccountID_t::CompareTo(::Steamworks::AccountID_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AccountID_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::AccountID_t>"
constexpr  Steamworks::AccountID_t::operator ::System::IEquatable_1<::Steamworks::AccountID_t>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::AccountID_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::AccountID_t>"
constexpr ::System::IEquatable_1<::Steamworks::AccountID_t>* Steamworks::AccountID_t::i___System__IEquatable_1___Steamworks__AccountID_t_()  {
return static_cast<::System::IEquatable_1<::Steamworks::AccountID_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::AccountID_t>"
constexpr  Steamworks::AccountID_t::operator ::System::IComparable_1<::Steamworks::AccountID_t>*()  {
return static_cast<::System::IComparable_1<::Steamworks::AccountID_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::AccountID_t>"
constexpr ::System::IComparable_1<::Steamworks::AccountID_t>* Steamworks::AccountID_t::i___System__IComparable_1___Steamworks__AccountID_t_()  {
return static_cast<::System::IComparable_1<::Steamworks::AccountID_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_AccountID", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Steamworks::AccountID_t::AccountID_t(uint32_t  m_AccountID) noexcept  {
this->m_AccountID = m_AccountID;
}
// Ctor Parameters []
constexpr ::Steamworks::AccountID_t::AccountID_t()   {
}
