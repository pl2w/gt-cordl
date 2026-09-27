#pragma once
// IWYU pragma private; include "GlobalNamespace/Id32.hpp"
#include "GlobalNamespace/zzzz__Id32_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Id32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Id32::*)(::StringW)>(&::GlobalNamespace::Id32::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5a1d00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id32>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id32.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::Id32)>(&::GlobalNamespace::Id32::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1d0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id32>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Id32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id32.op_Implicit___GlobalNamespace__Id32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id32 (*)(::StringW)>(&::GlobalNamespace::Id32::op_Implicit___GlobalNamespace__Id32)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a1d0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id32>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id32.ComputeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id32 (*)(::StringW)>(&::GlobalNamespace::Id32::ComputeID)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a1d190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id32>(),
                        {"ComputeID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id32.ComputeHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::Id32::ComputeHash)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a1d22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id32>(),
                        {"ComputeHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id32.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Id32::*)()>(&::GlobalNamespace::Id32::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1d2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Id32>(),
                    {::i2c::class_of<::GlobalNamespace::Id32>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id32.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Id32::*)()>(&::GlobalNamespace::Id32::ToString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a1d2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Id32>(),
                    {::i2c::class_of<::GlobalNamespace::Id32>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Id32::_ctor(::StringW  idString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id32>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, idString);
}
inline int32_t GlobalNamespace::Id32::op_Implicit_int32_t(::GlobalNamespace::Id32  i32)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id32>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Id32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i32);
}
inline ::GlobalNamespace::Id32 GlobalNamespace::Id32::op_Implicit___GlobalNamespace__Id32(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id32>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id32>(nullptr, ___internal_method, s);
}
inline ::GlobalNamespace::Id32 GlobalNamespace::Id32::ComputeID(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id32>(),
                        {"ComputeID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id32>(nullptr, ___internal_method, s);
}
inline int32_t GlobalNamespace::Id32::ComputeHash(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id32>(),
                        {"ComputeHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline int32_t GlobalNamespace::Id32::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Id32>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::Id32::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Id32>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_id", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Id32::Id32(int32_t  _id) noexcept  {
this->_id = _id;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Id32::Id32()   {
}
