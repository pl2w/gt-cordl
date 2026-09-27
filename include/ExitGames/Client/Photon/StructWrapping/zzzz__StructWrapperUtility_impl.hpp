#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/StructWrapperUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperUtility_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline bool ExitGames::Client::Photon::StructWrapping::StructWrapperUtility::IsType(::System::Object*  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility*>(),
                    {"IsType", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
template<typename T>
inline T ExitGames::Client::Photon::StructWrapping::StructWrapperUtility::Unwrap(::System::Object*  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility*>(),
                    {"Unwrap", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, obj);
}
template<typename T>
inline T ExitGames::Client::Photon::StructWrapping::StructWrapperUtility::Get(::System::Object*  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility*>(),
                    {"Get", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility::StructWrapperUtility()   {
}
