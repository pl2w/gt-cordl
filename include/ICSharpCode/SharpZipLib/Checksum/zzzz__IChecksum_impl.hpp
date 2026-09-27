#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Checksum/IChecksum.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__IChecksum_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::IChecksum.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::IChecksum::*)()>(&::ICSharpCode::SharpZipLib::Checksum::IChecksum::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::IChecksum.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Checksum::IChecksum::*)()>(&::ICSharpCode::SharpZipLib::Checksum::IChecksum::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::IChecksum.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::IChecksum::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Checksum::IChecksum::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::IChecksum.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::IChecksum::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Checksum::IChecksum::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::IChecksum.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::IChecksum::*)(::System::ArraySegment_1<uint8_t>)>(&::ICSharpCode::SharpZipLib::Checksum::IChecksum::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Checksum::IChecksum::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Checksum::IChecksum::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Checksum::IChecksum::Update(int32_t  bval)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bval);
}
inline void ICSharpCode::SharpZipLib::Checksum::IChecksum::Update(::ArrayW<uint8_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void ICSharpCode::SharpZipLib::Checksum::IChecksum::Update(::System::ArraySegment_1<uint8_t>  segment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
