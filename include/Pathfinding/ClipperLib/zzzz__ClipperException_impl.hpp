#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/ClipperException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__ClipperException_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperException::*)(::StringW)>(&::Pathfinding::ClipperLib::ClipperException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa68bb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::ClipperLib::ClipperException::_ctor(::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description);
}
inline ::Pathfinding::ClipperLib::ClipperException* Pathfinding::ClipperLib::ClipperException::New_ctor(::StringW  description)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::ClipperException*>(description));
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::ClipperException::ClipperException()   {
}
