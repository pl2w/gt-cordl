#pragma once
// IWYU pragma private; include "Utilities/NetTimeAverages.hpp"
#include "Utilities/zzzz__DoubleAverages_impl.hpp"
#include "Utilities/zzzz__NetTimeAverages_def.hpp"
//  Writing Method size for method: ::Utilities::NetTimeAverages._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Utilities::NetTimeAverages::*)(int32_t)>(&::Utilities::NetTimeAverages::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7102c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::NetTimeAverages*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::NetTimeAverages.DefaultTypeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Utilities::NetTimeAverages::*)()>(&::Utilities::NetTimeAverages::DefaultTypeValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b71030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::NetTimeAverages*>(),
                    {::i2c::class_of<::Utilities::NetTimeAverages*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void Utilities::NetTimeAverages::_ctor(int32_t  sampleCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::NetTimeAverages*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleCount);
}
inline double_t Utilities::NetTimeAverages::DefaultTypeValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::NetTimeAverages*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::Utilities::NetTimeAverages* Utilities::NetTimeAverages::New_ctor(int32_t  sampleCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Utilities::NetTimeAverages*>(sampleCount));
}
// Ctor Parameters []
constexpr ::Utilities::NetTimeAverages::NetTimeAverages()   {
}
