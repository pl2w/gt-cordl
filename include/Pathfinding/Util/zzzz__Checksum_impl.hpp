#pragma once
// IWYU pragma private; include "Pathfinding/Util/Checksum.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__Checksum_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::Checksum.GetChecksum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, uint32_t)>(&::Pathfinding::Util::Checksum::GetChecksum)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5edf5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Checksum*>(),
                        {"GetChecksum", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Checksum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::Checksum::*)()>(&::Pathfinding::Util::Checksum::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edf614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Checksum*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Pathfinding::Util::Checksum::GetChecksum(::ArrayW<uint8_t>  arr, uint32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Checksum*>(),
                        {"GetChecksum", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, arr, hash);
}
inline void Pathfinding::Util::Checksum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Checksum*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Util::Checksum* Pathfinding::Util::Checksum::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::Checksum*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::Checksum::Checksum()   {
}
