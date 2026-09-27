#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/SharedUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__SharedUtils_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::SharedUtils.URShift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Pathfinding::Ionic::Zlib::SharedUtils::URShift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ac908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::SharedUtils*>(),
                        {"URShift", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Pathfinding::Ionic::Zlib::SharedUtils::URShift(int32_t  number, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::SharedUtils*>(),
                        {"URShift", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, number, bits);
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::SharedUtils::SharedUtils()   {
}
