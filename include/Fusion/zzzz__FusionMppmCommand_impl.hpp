#pragma once
// IWYU pragma private; include "Fusion/FusionMppmCommand.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FusionMppmCommand_def.hpp"
//  Writing Method size for method: ::Fusion::FusionMppmCommand.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionMppmCommand::*)()>(&::Fusion::FusionMppmCommand::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionMppmCommand*>(),
                    {::i2c::class_of<::Fusion::FusionMppmCommand*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionMppmCommand.get_NeedsAck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionMppmCommand::*)()>(&::Fusion::FusionMppmCommand::get_NeedsAck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e3838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionMppmCommand*>(),
                    {::i2c::class_of<::Fusion::FusionMppmCommand*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionMppmCommand.get_PersistentKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::FusionMppmCommand::*)()>(&::Fusion::FusionMppmCommand::get_PersistentKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e3840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionMppmCommand*>(),
                    {::i2c::class_of<::Fusion::FusionMppmCommand*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionMppmCommand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionMppmCommand::*)()>(&::Fusion::FusionMppmCommand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e3848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionMppmCommand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionMppmCommand::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionMppmCommand*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::FusionMppmCommand::get_NeedsAck()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionMppmCommand*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Fusion::FusionMppmCommand::get_PersistentKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionMppmCommand*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::FusionMppmCommand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionMppmCommand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FusionMppmCommand* Fusion::FusionMppmCommand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionMppmCommand*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionMppmCommand::FusionMppmCommand()   {
}
