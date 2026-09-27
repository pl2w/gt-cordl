#pragma once
// IWYU pragma private; include "BoingKit/BoingReactor.hpp"
#include "BoingKit/zzzz__BoingBehavior_impl.hpp"
#include "BoingKit/zzzz__BoingReactor_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingReactor.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactor::*)()>(&::BoingKit::BoingReactor::Register)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e1b700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingReactor*>(),
                    {::i2c::class_of<::BoingKit::BoingReactor*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactor.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactor::*)()>(&::BoingKit::BoingReactor::Unregister)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e1b754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingReactor*>(),
                    {::i2c::class_of<::BoingKit::BoingReactor*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactor.PrepareExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactor::*)()>(&::BoingKit::BoingReactor::PrepareExecute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e155dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingReactor*>(),
                    {::i2c::class_of<::BoingKit::BoingReactor*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactor::*)()>(&::BoingKit::BoingReactor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e15b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void BoingKit::BoingReactor::Register()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingReactor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactor::Unregister()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingReactor*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactor::PrepareExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingReactor*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingReactor* BoingKit::BoingReactor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingReactor*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingReactor::BoingReactor()   {
}
