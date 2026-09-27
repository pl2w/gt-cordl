#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimHashId.hpp"
#include "GlobalNamespace/zzzz__AnimHashId_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimHashId.get_text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AnimHashId::*)()>(&::GlobalNamespace::AnimHashId::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae0e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                        {"get_text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimHashId.get_hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AnimHashId::*)()>(&::GlobalNamespace::AnimHashId::get_hash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae0e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                        {"get_hash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimHashId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimHashId::*)(::StringW)>(&::GlobalNamespace::AnimHashId::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ae0e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimHashId.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AnimHashId::*)()>(&::GlobalNamespace::AnimHashId::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae0e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                    {::i2c::class_of<::GlobalNamespace::AnimHashId>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimHashId.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AnimHashId::*)()>(&::GlobalNamespace::AnimHashId::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae0e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                    {::i2c::class_of<::GlobalNamespace::AnimHashId>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimHashId.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::AnimHashId)>(&::GlobalNamespace::AnimHashId::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae0e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::AnimHashId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimHashId.op_Implicit___GlobalNamespace__AnimHashId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AnimHashId (*)(::StringW)>(&::GlobalNamespace::AnimHashId::op_Implicit___GlobalNamespace__AnimHashId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ae0e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::AnimHashId::get_text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                        {"get_text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::AnimHashId::get_hash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                        {"get_hash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::AnimHashId::_ctor(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text);
}
inline ::StringW GlobalNamespace::AnimHashId::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AnimHashId>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::AnimHashId::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AnimHashId>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::AnimHashId::op_Implicit_int32_t(::GlobalNamespace::AnimHashId  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::AnimHashId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, h);
}
inline ::GlobalNamespace::AnimHashId GlobalNamespace::AnimHashId::op_Implicit___GlobalNamespace__AnimHashId(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimHashId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AnimHashId>(nullptr, ___internal_method, s);
}
// Ctor Parameters [CppParam { name: "_text", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_hash", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AnimHashId::AnimHashId(::StringW  _text, int32_t  _hash) noexcept  {
this->_text = _text;
this->_hash = _hash;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimHashId::AnimHashId()   {
}
