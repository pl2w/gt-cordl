#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Hash160.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__Hash160_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::Hash160._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Hash160::*)()>(&::Technie::PhysicsCreator::Hash160::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadc8b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Hash160._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Hash160::*)(::ArrayW<uint8_t>)>(&::Technie::PhysicsCreator::Hash160::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xadc8b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Hash160.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::Hash160::*)()>(&::Technie::PhysicsCreator::Hash160::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xadc8b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Hash160.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::Hash160::*)()>(&::Technie::PhysicsCreator::Hash160::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadc8bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                    {::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Hash160.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::Hash160::*)(::System::Object*)>(&::Technie::PhysicsCreator::Hash160::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xadc8c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                    {::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Hash160.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Technie::PhysicsCreator::Hash160*, ::Technie::PhysicsCreator::Hash160*)>(&::Technie::PhysicsCreator::Hash160::op_Equality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xadc8d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                        {"op_Equality", {}, {::i2c::type_of<::Technie::PhysicsCreator::Hash160*>(), ::i2c::type_of<::Technie::PhysicsCreator::Hash160*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Hash160.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Technie::PhysicsCreator::Hash160*, ::Technie::PhysicsCreator::Hash160*)>(&::Technie::PhysicsCreator::Hash160::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xadc8d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Technie::PhysicsCreator::Hash160*>(), ::i2c::type_of<::Technie::PhysicsCreator::Hash160*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Technie::PhysicsCreator::Hash160::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::ArrayW<uint8_t> const& Technie::PhysicsCreator::Hash160::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Technie::PhysicsCreator::Hash160::__cordl_internal_set_data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void Technie::PhysicsCreator::Hash160::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Hash160::_ctor(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline bool Technie::PhysicsCreator::Hash160::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Technie::PhysicsCreator::Hash160::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::Hash160::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Technie::PhysicsCreator::Hash160::op_Equality(::Technie::PhysicsCreator::Hash160*  lhs, ::Technie::PhysicsCreator::Hash160*  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                        {"op_Equality", {}, {::i2c::type_of<::Technie::PhysicsCreator::Hash160*>(), ::i2c::type_of<::Technie::PhysicsCreator::Hash160*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Technie::PhysicsCreator::Hash160::op_Inequality(::Technie::PhysicsCreator::Hash160*  lhs, ::Technie::PhysicsCreator::Hash160*  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Hash160*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Technie::PhysicsCreator::Hash160*>(), ::i2c::type_of<::Technie::PhysicsCreator::Hash160*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Technie::PhysicsCreator::Hash160* Technie::PhysicsCreator::Hash160::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::Hash160*>());
}
inline ::Technie::PhysicsCreator::Hash160* Technie::PhysicsCreator::Hash160::New_ctor(::ArrayW<uint8_t>  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::Hash160*>(data));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Hash160::Hash160()   {
}
