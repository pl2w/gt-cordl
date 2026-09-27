#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LocalMinima.hpp"
#include "Unity/Cinemachine/zzzz__PathType_impl.hpp"
#include "Unity/Cinemachine/zzzz__LocalMinima_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__PathType_def.hpp"
#include "Unity/Cinemachine/zzzz__Vertex_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::LocalMinima._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::LocalMinima::*)(::Unity::Cinemachine::Vertex*, ::Unity::Cinemachine::PathType, bool)>(&::Unity::Cinemachine::LocalMinima::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaeef244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LocalMinima>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Vertex*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LocalMinima.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::LocalMinima, ::Unity::Cinemachine::LocalMinima)>(&::Unity::Cinemachine::LocalMinima::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaeef274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LocalMinima>(),
                        {"op_Equality", {}, {::i2c::type_of<::Unity::Cinemachine::LocalMinima>(), ::i2c::type_of<::Unity::Cinemachine::LocalMinima>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LocalMinima.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::LocalMinima, ::Unity::Cinemachine::LocalMinima)>(&::Unity::Cinemachine::LocalMinima::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaeef280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LocalMinima>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Unity::Cinemachine::LocalMinima>(), ::i2c::type_of<::Unity::Cinemachine::LocalMinima>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LocalMinima.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::LocalMinima::*)(::System::Object*)>(&::Unity::Cinemachine::LocalMinima::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaeef28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::LocalMinima>(),
                    {::i2c::class_of<::Unity::Cinemachine::LocalMinima>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LocalMinima.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::LocalMinima::*)()>(&::Unity::Cinemachine::LocalMinima::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaeef304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::LocalMinima>(),
                    {::i2c::class_of<::Unity::Cinemachine::LocalMinima>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::LocalMinima::_ctor(::Unity::Cinemachine::Vertex*  vertex, ::Unity::Cinemachine::PathType  polytype, bool  isOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LocalMinima>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Vertex*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertex, polytype, isOpen);
}
inline bool Unity::Cinemachine::LocalMinima::op_Equality(::Unity::Cinemachine::LocalMinima  lm1, ::Unity::Cinemachine::LocalMinima  lm2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LocalMinima>(),
                        {"op_Equality", {}, {::i2c::type_of<::Unity::Cinemachine::LocalMinima>(), ::i2c::type_of<::Unity::Cinemachine::LocalMinima>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lm1, lm2);
}
inline bool Unity::Cinemachine::LocalMinima::op_Inequality(::Unity::Cinemachine::LocalMinima  lm1, ::Unity::Cinemachine::LocalMinima  lm2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LocalMinima>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Unity::Cinemachine::LocalMinima>(), ::i2c::type_of<::Unity::Cinemachine::LocalMinima>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lm1, lm2);
}
inline bool Unity::Cinemachine::LocalMinima::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::LocalMinima>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Unity::Cinemachine::LocalMinima::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::LocalMinima>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "vertex", ty: "::Unity::Cinemachine::Vertex*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "polytype", ty: "::Unity::Cinemachine::PathType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isOpen", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::LocalMinima::LocalMinima(::Unity::Cinemachine::Vertex*  vertex, ::Unity::Cinemachine::PathType  polytype, bool  isOpen) noexcept  {
this->vertex = vertex;
this->polytype = polytype;
this->isOpen = isOpen;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::LocalMinima::LocalMinima()   {
}
