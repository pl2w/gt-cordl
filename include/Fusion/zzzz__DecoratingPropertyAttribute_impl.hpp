#pragma once
// IWYU pragma private; include "Fusion/DecoratingPropertyAttribute.hpp"
#include "Fusion/zzzz__PropertyAttribute_impl.hpp"
#include "Fusion/zzzz__DecoratingPropertyAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::DecoratingPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DecoratingPropertyAttribute::*)()>(&::Fusion::DecoratingPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f3d3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DecoratingPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DecoratingPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DecoratingPropertyAttribute::*)(int32_t)>(&::Fusion::DecoratingPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f3d3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DecoratingPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::DecoratingPropertyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DecoratingPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::DecoratingPropertyAttribute::_ctor(int32_t  order)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DecoratingPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, order);
}
inline ::Fusion::DecoratingPropertyAttribute* Fusion::DecoratingPropertyAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DecoratingPropertyAttribute*>());
}
inline ::Fusion::DecoratingPropertyAttribute* Fusion::DecoratingPropertyAttribute::New_ctor(int32_t  order)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DecoratingPropertyAttribute*>(order));
}
// Ctor Parameters []
constexpr ::Fusion::DecoratingPropertyAttribute::DecoratingPropertyAttribute()   {
}
