#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/InternalErrorException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__InternalErrorException_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::InternalErrorException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::InternalErrorException::*)(::StringW)>(&::Technie::PhysicsCreator::QHull::InternalErrorException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddcac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::InternalErrorException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Technie::PhysicsCreator::QHull::InternalErrorException::_ctor(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::InternalErrorException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline ::Technie::PhysicsCreator::QHull::InternalErrorException* Technie::PhysicsCreator::QHull::InternalErrorException::New_ctor(::StringW  msg)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::InternalErrorException*>(msg));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::QHull::InternalErrorException::InternalErrorException()   {
}
