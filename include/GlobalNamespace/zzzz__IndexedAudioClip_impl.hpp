#pragma once
// IWYU pragma private; include "GlobalNamespace/IndexedAudioClip.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__IndexedAudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IndexedAudioClip.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::IndexedAudioClip*)>(&::GlobalNamespace::IndexedAudioClip::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56c1db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndexedAudioClip*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::IndexedAudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexedAudioClip.op_Implicit___GlobalNamespace__IndexedAudioClip_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IndexedAudioClip* (*)(int32_t)>(&::GlobalNamespace::IndexedAudioClip::op_Implicit___GlobalNamespace__IndexedAudioClip_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56c1dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndexedAudioClip*>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexedAudioClip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndexedAudioClip::*)(int32_t)>(&::GlobalNamespace::IndexedAudioClip::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56c1e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndexedAudioClip*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::IndexedAudioClip::__cordl_internal_get_intVal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intVal;
}
constexpr int32_t const& GlobalNamespace::IndexedAudioClip::__cordl_internal_get_intVal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intVal;
}
constexpr void GlobalNamespace::IndexedAudioClip::__cordl_internal_set_intVal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intVal = value;
}
inline int32_t GlobalNamespace::IndexedAudioClip::op_Implicit_int32_t(::GlobalNamespace::IndexedAudioClip*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndexedAudioClip*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::IndexedAudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a);
}
inline ::GlobalNamespace::IndexedAudioClip* GlobalNamespace::IndexedAudioClip::op_Implicit___GlobalNamespace__IndexedAudioClip_(int32_t  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndexedAudioClip*>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexedAudioClip*>(nullptr, ___internal_method, a);
}
inline void GlobalNamespace::IndexedAudioClip::_ctor(int32_t  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndexedAudioClip*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
inline ::GlobalNamespace::IndexedAudioClip* GlobalNamespace::IndexedAudioClip::New_ctor(int32_t  a)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IndexedAudioClip*>(a));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndexedAudioClip::IndexedAudioClip()   {
}
