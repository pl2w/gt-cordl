#pragma once
// IWYU pragma private; include "Meta/Conduit/ConduitDispatcherFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Conduit/zzzz__ConduitDispatcherFactory_def.hpp"
#include "Meta/Conduit/zzzz__IConduitDispatcher_def.hpp"
#include "Meta/Conduit/zzzz__IInstanceResolver_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcherFactory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ConduitDispatcherFactory::*)(::Meta::Conduit::IInstanceResolver*)>(&::Meta::Conduit::ConduitDispatcherFactory::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e1e868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcherFactory*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Conduit::IInstanceResolver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcherFactory.GetDispatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Conduit::IConduitDispatcher* (::Meta::Conduit::ConduitDispatcherFactory::*)()>(&::Meta::Conduit::ConduitDispatcherFactory::GetDispatcher)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e1e898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcherFactory*>(),
                        {"GetDispatcher", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Conduit::IInstanceResolver*& Meta::Conduit::ConduitDispatcherFactory::__cordl_internal_get__instanceResolver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instanceResolver;
}
constexpr ::Meta::Conduit::IInstanceResolver* const& Meta::Conduit::ConduitDispatcherFactory::__cordl_internal_get__instanceResolver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instanceResolver;
}
constexpr void Meta::Conduit::ConduitDispatcherFactory::__cordl_internal_set__instanceResolver(::Meta::Conduit::IInstanceResolver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instanceResolver = value;
}
inline void Meta::Conduit::ConduitDispatcherFactory::setStaticF_Instance(::Meta::Conduit::IConduitDispatcher*  value)  {
::cordl_internals::setStaticField<::Meta::Conduit::IConduitDispatcher*, "Instance", ::Meta::Conduit::ConduitDispatcherFactory*>(std::forward<::Meta::Conduit::IConduitDispatcher*>(value));
}
inline ::Meta::Conduit::IConduitDispatcher* Meta::Conduit::ConduitDispatcherFactory::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Meta::Conduit::IConduitDispatcher*, "Instance", ::Meta::Conduit::ConduitDispatcherFactory*>();
}
inline void Meta::Conduit::ConduitDispatcherFactory::_ctor(::Meta::Conduit::IInstanceResolver*  instanceResolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcherFactory*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Conduit::IInstanceResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceResolver);
}
inline ::Meta::Conduit::IConduitDispatcher* Meta::Conduit::ConduitDispatcherFactory::GetDispatcher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcherFactory*>(),
                        {"GetDispatcher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Conduit::IConduitDispatcher*>(this, ___internal_method);
}
inline ::Meta::Conduit::ConduitDispatcherFactory* Meta::Conduit::ConduitDispatcherFactory::New_ctor(::Meta::Conduit::IInstanceResolver*  instanceResolver)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::ConduitDispatcherFactory*>(instanceResolver));
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ConduitDispatcherFactory::ConduitDispatcherFactory()   {
}
