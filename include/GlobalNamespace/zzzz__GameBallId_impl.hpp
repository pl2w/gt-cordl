#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallId.hpp"
#include "GlobalNamespace/zzzz__GameBallId_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameBallId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallId::*)(int32_t)>(&::GlobalNamespace::GameBallId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a14d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallId>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallId.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameBallId::*)()>(&::GlobalNamespace::GameBallId::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57a14d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallId>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallId.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GameBallId, ::GlobalNamespace::GameBallId)>(&::GlobalNamespace::GameBallId::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57a14e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallId>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallId.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GameBallId, ::GlobalNamespace::GameBallId)>(&::GlobalNamespace::GameBallId::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57a14f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameBallId::*)(::System::Object*)>(&::GlobalNamespace::GameBallId::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x57a1500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameBallId>(),
                    {::i2c::class_of<::GlobalNamespace::GameBallId>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallId.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameBallId::*)()>(&::GlobalNamespace::GameBallId::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a1580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameBallId>(),
                    {::i2c::class_of<::GlobalNamespace::GameBallId>(), 2}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameBallId::setStaticF_Invalid(::GlobalNamespace::GameBallId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GameBallId, "Invalid", ::GlobalNamespace::GameBallId>(std::forward<::GlobalNamespace::GameBallId>(value));
}
inline ::GlobalNamespace::GameBallId GlobalNamespace::GameBallId::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GameBallId, "Invalid", ::GlobalNamespace::GameBallId>();
}
inline void GlobalNamespace::GameBallId::_ctor(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallId>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline bool GlobalNamespace::GameBallId::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallId>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameBallId::op_Equality(::GlobalNamespace::GameBallId  obj1, ::GlobalNamespace::GameBallId  obj2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallId>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
inline bool GlobalNamespace::GameBallId::op_Inequality(::GlobalNamespace::GameBallId  obj1, ::GlobalNamespace::GameBallId  obj2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
inline bool GlobalNamespace::GameBallId::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameBallId>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::GameBallId::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameBallId>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameBallId::GameBallId(int32_t  index) noexcept  {
this->index = index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameBallId::GameBallId()   {
}
