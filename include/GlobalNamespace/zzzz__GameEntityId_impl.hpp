#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityId.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameEntityId.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityId::*)()>(&::GlobalNamespace::GameEntityId::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58321ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityId>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityId.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GameEntityId, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntityId::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58321fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityId>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityId.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GameEntityId, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntityId::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5832208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityId::*)(::System::Object*)>(&::GlobalNamespace::GameEntityId::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5832214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityId>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityId>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityId.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntityId::*)()>(&::GlobalNamespace::GameEntityId::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5832294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityId>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityId>(), 2}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameEntityId::setStaticF_Invalid(::GlobalNamespace::GameEntityId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GameEntityId, "Invalid", ::GlobalNamespace::GameEntityId>(std::forward<::GlobalNamespace::GameEntityId>(value));
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntityId::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GameEntityId, "Invalid", ::GlobalNamespace::GameEntityId>();
}
inline bool GlobalNamespace::GameEntityId::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityId>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameEntityId::op_Equality(::GlobalNamespace::GameEntityId  obj1, ::GlobalNamespace::GameEntityId  obj2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityId>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
inline bool GlobalNamespace::GameEntityId::op_Inequality(::GlobalNamespace::GameEntityId  obj1, ::GlobalNamespace::GameEntityId  obj2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
inline bool GlobalNamespace::GameEntityId::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityId>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::GameEntityId::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityId>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameEntityId::GameEntityId(int32_t  index) noexcept  {
this->index = index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityId::GameEntityId()   {
}
