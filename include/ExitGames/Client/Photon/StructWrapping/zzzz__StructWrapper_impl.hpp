#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/StructWrapper.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__WrappedType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__WrappedType_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StructWrapping::StructWrapper::*)(::System::Type*, ::ExitGames::Client::Photon::StructWrapping::WrappedType)>(&::ExitGames::Client::Photon::StructWrapping::StructWrapper::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6eeec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ExitGames::Client::Photon::StructWrapping::WrappedType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StructWrapping::StructWrapper::*)()>(&::ExitGames::Client::Photon::StructWrapping::StructWrapper::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapper.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::StructWrapping::StructWrapper::*)(bool)>(&::ExitGames::Client::Photon::StructWrapping::StructWrapper::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType& ExitGames::Client::Photon::StructWrapping::StructWrapper::__cordl_internal_get_wrappedType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrappedType;
}
constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType const& ExitGames::Client::Photon::StructWrapping::StructWrapper::__cordl_internal_get_wrappedType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrappedType;
}
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapper::__cordl_internal_set_wrappedType(::ExitGames::Client::Photon::StructWrapping::WrappedType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wrappedType = value;
}
constexpr ::System::Type*& ExitGames::Client::Photon::StructWrapping::StructWrapper::__cordl_internal_get_ttype()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ttype;
}
constexpr ::System::Type* const& ExitGames::Client::Photon::StructWrapping::StructWrapper::__cordl_internal_get_ttype() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ttype;
}
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapper::__cordl_internal_set_ttype(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ttype = value;
}
inline void ExitGames::Client::Photon::StructWrapping::StructWrapper::_ctor(::System::Type*  ttype, ::ExitGames::Client::Photon::StructWrapping::WrappedType  wrappedType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ExitGames::Client::Photon::StructWrapping::WrappedType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ttype, wrappedType);
}
inline void ExitGames::Client::Photon::StructWrapping::StructWrapper::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::StructWrapping::StructWrapper::ToString(bool  writeType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, writeType);
}
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* ExitGames::Client::Photon::StructWrapping::StructWrapper::New_ctor(::System::Type*  ttype, ::ExitGames::Client::Photon::StructWrapping::WrappedType  wrappedType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>(ttype, wrappedType));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ExitGames::Client::Photon::StructWrapping::StructWrapper::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ExitGames::Client::Photon::StructWrapping::StructWrapper::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapper::StructWrapper()   {
}
