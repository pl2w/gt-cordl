#pragma once
// IWYU pragma private; include "Steamworks/AppId_t.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::AppId_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::AppId_t::*)(uint32_t)>(&::Steamworks::AppId_t::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppId_t>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AppId_t.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::AppId_t::*)()>(&::Steamworks::AppId_t::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::AppId_t>(),
                    {::i2c::class_of<::Steamworks::AppId_t>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AppId_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::AppId_t::*)(::System::Object*)>(&::Steamworks::AppId_t::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f33d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::AppId_t>(),
                    {::i2c::class_of<::Steamworks::AppId_t>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AppId_t.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::AppId_t::*)()>(&::Steamworks::AppId_t::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::AppId_t>(),
                    {::i2c::class_of<::Steamworks::AppId_t>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AppId_t.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AppId_t, ::Steamworks::AppId_t)>(&::Steamworks::AppId_t::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f33e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppId_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AppId_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::AppId_t::*)(::Steamworks::AppId_t)>(&::Steamworks::AppId_t::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f33e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppId_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AppId_t.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::AppId_t::*)(::Steamworks::AppId_t)>(&::Steamworks::AppId_t::CompareTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppId_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::AppId_t::setStaticF_Invalid(::Steamworks::AppId_t  value)  {
::cordl_internals::setStaticField<::Steamworks::AppId_t, "Invalid", ::Steamworks::AppId_t>(std::forward<::Steamworks::AppId_t>(value));
}
inline ::Steamworks::AppId_t Steamworks::AppId_t::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Steamworks::AppId_t, "Invalid", ::Steamworks::AppId_t>();
}
inline void Steamworks::AppId_t::_ctor(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppId_t>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::AppId_t::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::AppId_t>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::AppId_t::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::AppId_t>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::AppId_t::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::AppId_t>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::AppId_t::op_Equality(::Steamworks::AppId_t  x, ::Steamworks::AppId_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppId_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::AppId_t::Equals(::Steamworks::AppId_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppId_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::AppId_t::CompareTo(::Steamworks::AppId_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppId_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::AppId_t>"
constexpr  Steamworks::AppId_t::operator ::System::IEquatable_1<::Steamworks::AppId_t>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::AppId_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::AppId_t>"
constexpr ::System::IEquatable_1<::Steamworks::AppId_t>* Steamworks::AppId_t::i___System__IEquatable_1___Steamworks__AppId_t_()  {
return static_cast<::System::IEquatable_1<::Steamworks::AppId_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::AppId_t>"
constexpr  Steamworks::AppId_t::operator ::System::IComparable_1<::Steamworks::AppId_t>*()  {
return static_cast<::System::IComparable_1<::Steamworks::AppId_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::AppId_t>"
constexpr ::System::IComparable_1<::Steamworks::AppId_t>* Steamworks::AppId_t::i___System__IComparable_1___Steamworks__AppId_t_()  {
return static_cast<::System::IComparable_1<::Steamworks::AppId_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_AppId", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Steamworks::AppId_t::AppId_t(uint32_t  m_AppId) noexcept  {
this->m_AppId = m_AppId;
}
// Ctor Parameters []
constexpr ::Steamworks::AppId_t::AppId_t()   {
}
