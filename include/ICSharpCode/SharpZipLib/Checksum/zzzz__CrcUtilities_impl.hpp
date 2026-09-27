#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Checksum/CrcUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__CrcUtilities_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::CrcUtilities.GenerateSlicingLookupTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(uint32_t, bool)>(&::ICSharpCode::SharpZipLib::Checksum::CrcUtilities::GenerateSlicingLookupTable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9ffd480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::CrcUtilities*>(),
                        {"GenerateSlicingLookupTable", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::CrcUtilities.UpdateDataForNormalPoly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>, uint32_t)>(&::ICSharpCode::SharpZipLib::Checksum::CrcUtilities::UpdateDataForNormalPoly)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9ffd994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::CrcUtilities*>(),
                        {"UpdateDataForNormalPoly", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::CrcUtilities.UpdateDataForReversedPoly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>, uint32_t)>(&::ICSharpCode::SharpZipLib::Checksum::CrcUtilities::UpdateDataForReversedPoly)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9ffda10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::CrcUtilities*>(),
                        {"UpdateDataForReversedPoly", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::CrcUtilities.UpdateDataCommon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>, uint8_t, uint8_t, uint8_t, uint8_t)>(&::ICSharpCode::SharpZipLib::Checksum::CrcUtilities::UpdateDataCommon)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x9ffda88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::CrcUtilities*>(),
                        {"UpdateDataCommon", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint32_t> ICSharpCode::SharpZipLib::Checksum::CrcUtilities::GenerateSlicingLookupTable(uint32_t  polynomial, bool  isReversed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::CrcUtilities*>(),
                        {"GenerateSlicingLookupTable", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, polynomial, isReversed);
}
inline uint32_t ICSharpCode::SharpZipLib::Checksum::CrcUtilities::UpdateDataForNormalPoly(::ArrayW<uint8_t>  input, int32_t  offset, ::ArrayW<uint32_t>  crcTable, uint32_t  checkValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::CrcUtilities*>(),
                        {"UpdateDataForNormalPoly", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, input, offset, crcTable, checkValue);
}
inline uint32_t ICSharpCode::SharpZipLib::Checksum::CrcUtilities::UpdateDataForReversedPoly(::ArrayW<uint8_t>  input, int32_t  offset, ::ArrayW<uint32_t>  crcTable, uint32_t  checkValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::CrcUtilities*>(),
                        {"UpdateDataForReversedPoly", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, input, offset, crcTable, checkValue);
}
inline uint32_t ICSharpCode::SharpZipLib::Checksum::CrcUtilities::UpdateDataCommon(::ArrayW<uint8_t>  input, int32_t  offset, ::ArrayW<uint32_t>  crcTable, uint8_t  x1, uint8_t  x2, uint8_t  x3, uint8_t  x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::CrcUtilities*>(),
                        {"UpdateDataCommon", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, input, offset, crcTable, x1, x2, x3, x4);
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Checksum::CrcUtilities::CrcUtilities()   {
}
