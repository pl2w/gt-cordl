#pragma once
// IWYU pragma private; include "Fusion/FusionMppm.hpp"
#include "Fusion/zzzz__FusionMppmCommand_impl.hpp"
#include "Fusion/zzzz__FusionMppmStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FusionMppm_def.hpp"
//  Writing Method size for method: ::Fusion::FusionMppm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionMppm::*)()>(&::Fusion::FusionMppm::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e3830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionMppm*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionMppm::setStaticF_Status(::Fusion::FusionMppmStatus  value)  {
::cordl_internals::setStaticField<::Fusion::FusionMppmStatus, "Status", ::Fusion::FusionMppm*>(std::forward<::Fusion::FusionMppmStatus>(value));
}
inline ::Fusion::FusionMppmStatus Fusion::FusionMppm::getStaticF_Status()  {
return ::cordl_internals::getStaticField<::Fusion::FusionMppmStatus, "Status", ::Fusion::FusionMppm*>();
}
inline void Fusion::FusionMppm::setStaticF_MainEditor(::Fusion::FusionMppm*  value)  {
::cordl_internals::setStaticField<::Fusion::FusionMppm*, "MainEditor", ::Fusion::FusionMppm*>(std::forward<::Fusion::FusionMppm*>(value));
}
inline ::Fusion::FusionMppm* Fusion::FusionMppm::getStaticF_MainEditor()  {
return ::cordl_internals::getStaticField<::Fusion::FusionMppm*, "MainEditor", ::Fusion::FusionMppm*>();
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::FusionMppmCommand*>)
inline void Fusion::FusionMppm::Send(T  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionMppm*>(),
                    {"Send", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::FusionMppmCommand*>)
inline void Fusion::FusionMppm::Broadcast(T  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionMppm*>(),
                    {"Broadcast", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void Fusion::FusionMppm::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionMppm*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FusionMppm* Fusion::FusionMppm::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionMppm*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionMppm::FusionMppm()   {
}
