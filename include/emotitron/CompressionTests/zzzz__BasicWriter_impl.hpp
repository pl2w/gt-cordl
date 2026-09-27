#pragma once
// IWYU pragma private; include "emotitron/CompressionTests/BasicWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "emotitron/CompressionTests/zzzz__BasicWriter_def.hpp"
//  Writing Method size for method: ::emotitron::CompressionTests::BasicWriter.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::emotitron::CompressionTests::BasicWriter::Reset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ddc1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::CompressionTests::BasicWriter*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::CompressionTests::BasicWriter.BasicWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, uint8_t)>(&::emotitron::CompressionTests::BasicWriter::BasicWrite)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ddc22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::CompressionTests::BasicWriter*>(),
                        {"BasicWrite", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::CompressionTests::BasicWriter.BasicRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::ArrayW<uint8_t>)>(&::emotitron::CompressionTests::BasicWriter::BasicRead)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ddc2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::CompressionTests::BasicWriter*>(),
                        {"BasicRead", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::CompressionTests::BasicWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::emotitron::CompressionTests::BasicWriter::*)()>(&::emotitron::CompressionTests::BasicWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddca68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::CompressionTests::BasicWriter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void emotitron::CompressionTests::BasicWriter::setStaticF_pos(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "pos", ::emotitron::CompressionTests::BasicWriter*>(std::forward<int32_t>(value));
}
inline int32_t emotitron::CompressionTests::BasicWriter::getStaticF_pos()  {
return ::cordl_internals::getStaticField<int32_t, "pos", ::emotitron::CompressionTests::BasicWriter*>();
}
inline void emotitron::CompressionTests::BasicWriter::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::CompressionTests::BasicWriter*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> emotitron::CompressionTests::BasicWriter::BasicWrite(::ArrayW<uint8_t>  buffer, uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::CompressionTests::BasicWriter*>(),
                        {"BasicWrite", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, buffer, value);
}
inline uint8_t emotitron::CompressionTests::BasicWriter::BasicRead(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::CompressionTests::BasicWriter*>(),
                        {"BasicRead", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, buffer);
}
inline void emotitron::CompressionTests::BasicWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::CompressionTests::BasicWriter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::emotitron::CompressionTests::BasicWriter* emotitron::CompressionTests::BasicWriter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::emotitron::CompressionTests::BasicWriter*>());
}
// Ctor Parameters []
constexpr ::emotitron::CompressionTests::BasicWriter::BasicWriter()   {
}
