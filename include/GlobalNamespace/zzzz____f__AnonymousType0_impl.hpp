#pragma once
// IWYU pragma private; include "GlobalNamespace/__f__AnonymousType0.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz____f__AnonymousType0_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__f__AnonymousType0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::__f__AnonymousType0::*)()>(&::GlobalNamespace::__f__AnonymousType0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e40c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::__f__AnonymousType0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__f__AnonymousType0.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::__f__AnonymousType0::*)(::System::Object*)>(&::GlobalNamespace::__f__AnonymousType0::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x55e40cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::__f__AnonymousType0*>(),
                    {::i2c::class_of<::GlobalNamespace::__f__AnonymousType0*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__f__AnonymousType0.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::__f__AnonymousType0::*)()>(&::GlobalNamespace::__f__AnonymousType0::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e4134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::__f__AnonymousType0*>(),
                    {::i2c::class_of<::GlobalNamespace::__f__AnonymousType0*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__f__AnonymousType0.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::__f__AnonymousType0::*)()>(&::GlobalNamespace::__f__AnonymousType0::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x55e413c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::__f__AnonymousType0*>(),
                    {::i2c::class_of<::GlobalNamespace::__f__AnonymousType0*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__f__AnonymousType0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::__f__AnonymousType0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::__f__AnonymousType0::Equals(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::__f__AnonymousType0*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::__f__AnonymousType0::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::__f__AnonymousType0*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__f__AnonymousType0::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::__f__AnonymousType0*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::__f__AnonymousType0* GlobalNamespace::__f__AnonymousType0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::__f__AnonymousType0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__f__AnonymousType0::__f__AnonymousType0()   {
}
