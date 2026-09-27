#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/StructWrapperPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__WrappedType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool.GetWrappedType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::StructWrapping::WrappedType (*)(::System::Type*)>(&::ExitGames::Client::Photon::StructWrapping::StructWrapperPool::GetWrappedType)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa6eef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>(),
                        {"GetWrappedType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StructWrapping::StructWrapperPool::*)()>(&::ExitGames::Client::Photon::StructWrapping::StructWrapperPool::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ef0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::ExitGames::Client::Photon::StructWrapping::WrappedType ExitGames::Client::Photon::StructWrapping::StructWrapperPool::GetWrappedType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>(),
                        {"GetWrappedType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::WrappedType>(nullptr, ___internal_method, type);
}
inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool* ExitGames::Client::Photon::StructWrapping::StructWrapperPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool::StructWrapperPool()   {
}
