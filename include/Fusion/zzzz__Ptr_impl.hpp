#pragma once
// IWYU pragma private; include "Fusion/Ptr.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Ptr_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__Ptr_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Ptr.get_Null
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Ptr (*)()>(&::Fusion::Ptr::get_Null)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6fe0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"get_Null", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Ptr.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Ptr::*)(::Fusion::Ptr)>(&::Fusion::Ptr::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f6fe14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Ptr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Ptr.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Ptr::*)(::System::Object*)>(&::Fusion::Ptr::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f6fe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Ptr>(),
                    {::i2c::class_of<::Fusion::Ptr>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Ptr.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Ptr::*)()>(&::Fusion::Ptr::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6fe9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Ptr>(),
                    {::i2c::class_of<::Fusion::Ptr>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Ptr.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Ptr::*)()>(&::Fusion::Ptr::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f6fea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Ptr>(),
                    {::i2c::class_of<::Fusion::Ptr>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Ptr.op_Implicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Ptr)>(&::Fusion::Ptr::op_Implicit_bool)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6be04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Ptr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Ptr.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Ptr, ::Fusion::Ptr)>(&::Fusion::Ptr::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6daac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Ptr>(), ::i2c::type_of<::Fusion::Ptr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Ptr.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Ptr, ::Fusion::Ptr)>(&::Fusion::Ptr::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6ff1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::Ptr>(), ::i2c::type_of<::Fusion::Ptr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Ptr.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Ptr (*)(::Fusion::Ptr, int32_t)>(&::Fusion::Ptr::op_Addition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6ff28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"op_Addition", {}, {::i2c::type_of<::Fusion::Ptr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Ptr.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Ptr (*)(::Fusion::Ptr, int32_t)>(&::Fusion::Ptr::op_Subtraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6ff30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Fusion::Ptr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Ptr::__cordl_internal_get_Address()  {
return this->___Address;
}
constexpr int32_t const& Fusion::Ptr::__cordl_internal_get_Address() const {
return this->___Address;
}
constexpr void Fusion::Ptr::__cordl_internal_set_Address(int32_t  value)  {
this->___Address = value;
}
inline ::Fusion::Ptr Fusion::Ptr::get_Null()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"get_Null", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Ptr>(nullptr, ___internal_method);
}
inline bool Fusion::Ptr::Equals(::Fusion::Ptr  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Ptr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::Ptr::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Ptr>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::Ptr::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Ptr>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::Ptr::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Ptr>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Fusion::Ptr::op_Implicit_bool(::Fusion::Ptr  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Ptr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a);
}
inline bool Fusion::Ptr::op_Equality(::Fusion::Ptr  a, ::Fusion::Ptr  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Ptr>(), ::i2c::type_of<::Fusion::Ptr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Ptr::op_Inequality(::Fusion::Ptr  a, ::Fusion::Ptr  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::Ptr>(), ::i2c::type_of<::Fusion::Ptr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::Fusion::Ptr Fusion::Ptr::op_Addition(::Fusion::Ptr  p, int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"op_Addition", {}, {::i2c::type_of<::Fusion::Ptr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Ptr>(nullptr, ___internal_method, p, v);
}
inline ::Fusion::Ptr Fusion::Ptr::op_Subtraction(::Fusion::Ptr  p, int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Fusion::Ptr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Ptr>(nullptr, ___internal_method, p, v);
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Ptr>"
constexpr  Fusion::Ptr::operator ::System::IEquatable_1<::Fusion::Ptr>*()  {
return static_cast<::System::IEquatable_1<::Fusion::Ptr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::Ptr>"
constexpr ::System::IEquatable_1<::Fusion::Ptr>* Fusion::Ptr::i___System__IEquatable_1___Fusion__Ptr_()  {
return static_cast<::System::IEquatable_1<::Fusion::Ptr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::Ptr::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::Ptr::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Address", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Ptr::Ptr(int32_t  Address) noexcept  {
this->Address = Address;
}
// Ctor Parameters []
constexpr ::Fusion::Ptr::Ptr()   {
}
//  Writing Method size for method: ::Fusion::Ptr_EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Ptr_EqualityComparer::*)(::Fusion::Ptr, ::Fusion::Ptr)>(&::Fusion::Ptr_EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6ff38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Ptr>(), ::i2c::type_of<::Fusion::Ptr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Ptr_EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Ptr_EqualityComparer::*)(::Fusion::Ptr)>(&::Fusion::Ptr_EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6ff44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::Ptr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Ptr_EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Ptr_EqualityComparer::*)()>(&::Fusion::Ptr_EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6ff4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::Ptr_EqualityComparer::Equals(::Fusion::Ptr  x, ::Fusion::Ptr  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Ptr>(), ::i2c::type_of<::Fusion::Ptr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Fusion::Ptr_EqualityComparer::GetHashCode(::Fusion::Ptr  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::Ptr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Fusion::Ptr_EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Ptr_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Ptr_EqualityComparer* Fusion::Ptr_EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Ptr_EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Ptr>"
constexpr  Fusion::Ptr_EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Ptr>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Ptr>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Ptr>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Ptr>* Fusion::Ptr_EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___Fusion__Ptr_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Ptr>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Ptr_EqualityComparer::Ptr_EqualityComparer()   {
}
