#pragma once
// IWYU pragma private; include "Fusion/IExportedWordCount.hpp"
#include "Fusion/zzzz__IExportedWordCount_def.hpp"
//  Writing Method size for method: ::Fusion::IExportedWordCount.get_WordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::IExportedWordCount::*)()>(&::Fusion::IExportedWordCount::get_WordCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::IExportedWordCount*>(),
                    {::i2c::class_of<::Fusion::IExportedWordCount*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::IExportedWordCount.set_WordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::IExportedWordCount::*)(int32_t)>(&::Fusion::IExportedWordCount::set_WordCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::IExportedWordCount*>(),
                    {::i2c::class_of<::Fusion::IExportedWordCount*>(), 1}
                ));
    return ___internal_method;
  }
};
inline int32_t Fusion::IExportedWordCount::get_WordCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IExportedWordCount*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::IExportedWordCount::set_WordCount(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IExportedWordCount*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
