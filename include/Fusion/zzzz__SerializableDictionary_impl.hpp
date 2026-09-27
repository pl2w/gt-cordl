#pragma once
// IWYU pragma private; include "Fusion/SerializableDictionary.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SerializableDictionary_def.hpp"
#include "Fusion/zzzz__SerializableDictionary_2_def.hpp"
//  Writing Method size for method: ::Fusion::SerializableDictionary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SerializableDictionary::*)()>(&::Fusion::SerializableDictionary::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
template<typename TKey,typename TValue>
inline ::Fusion::SerializableDictionary_2<TKey,TValue>* Fusion::SerializableDictionary::Create()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::SerializableDictionary*>(),
                    {"Create", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SerializableDictionary_2<TKey,TValue>*>(nullptr, ___internal_method);
}
inline void Fusion::SerializableDictionary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SerializableDictionary* Fusion::SerializableDictionary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SerializableDictionary*>());
}
// Ctor Parameters []
constexpr ::Fusion::SerializableDictionary::SerializableDictionary()   {
}
