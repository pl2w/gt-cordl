#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TGAWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TGAWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TGAWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Color>, int32_t, int32_t, ::StringW)>(&::DigitalOpus::MB::Core::MB_TGAWriter::Write)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9dbe71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TGAWriter*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TGAWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Color>, int32_t, int32_t, ::System::IO::Stream*)>(&::DigitalOpus::MB::Core::MB_TGAWriter::Write)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x9dbe780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TGAWriter*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB_TGAWriter::Write(::ArrayW<::UnityEngine::Color>  pixels, int32_t  width, int32_t  height, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TGAWriter*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pixels, width, height, path);
}
inline void DigitalOpus::MB::Core::MB_TGAWriter::Write(::ArrayW<::UnityEngine::Color>  pixels, int32_t  width, int32_t  height, ::System::IO::Stream*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TGAWriter*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pixels, width, height, output);
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_TGAWriter::MB_TGAWriter()   {
}
