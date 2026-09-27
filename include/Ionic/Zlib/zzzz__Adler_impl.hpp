#pragma once
// IWYU pragma private; include "Ionic/Zlib/Adler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Ionic/Zlib/zzzz__Adler_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::Adler.Adler32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::Adler::Adler32)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xa79b40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::Adler*>(),
                        {"Adler32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::Adler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::Adler::*)()>(&::Ionic::Zlib::Adler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79b76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::Adler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Ionic::Zlib::Adler::setStaticF_BASE(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "BASE", ::Ionic::Zlib::Adler*>(std::forward<uint32_t>(value));
}
inline uint32_t Ionic::Zlib::Adler::getStaticF_BASE()  {
return ::cordl_internals::getStaticField<uint32_t, "BASE", ::Ionic::Zlib::Adler*>();
}
inline void Ionic::Zlib::Adler::setStaticF_NMAX(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "NMAX", ::Ionic::Zlib::Adler*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::Adler::getStaticF_NMAX()  {
return ::cordl_internals::getStaticField<int32_t, "NMAX", ::Ionic::Zlib::Adler*>();
}
inline uint32_t Ionic::Zlib::Adler::Adler32(uint32_t  adler, ::ArrayW<uint8_t>  buf, int32_t  index, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::Adler*>(),
                        {"Adler32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, adler, buf, index, len);
}
inline void Ionic::Zlib::Adler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::Adler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ionic::Zlib::Adler* Ionic::Zlib::Adler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::Adler*>());
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::Adler::Adler()   {
}
