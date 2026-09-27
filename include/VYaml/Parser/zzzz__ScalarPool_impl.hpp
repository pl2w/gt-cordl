#pragma once
// IWYU pragma private; include "VYaml/Parser/ScalarPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Parser/zzzz__ScalarPool_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "VYaml/Parser/zzzz__Scalar_def.hpp"
//  Writing Method size for method: ::VYaml::Parser::ScalarPool.Rent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Parser::Scalar* (::VYaml::Parser::ScalarPool::*)()>(&::VYaml::Parser::ScalarPool::Rent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb958ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::ScalarPool*>(),
                        {"Rent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::ScalarPool.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::ScalarPool::*)(::VYaml::Parser::Scalar*)>(&::VYaml::Parser::ScalarPool::Return)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb958bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::ScalarPool*>(),
                        {"Return", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::ScalarPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::ScalarPool::*)()>(&::VYaml::Parser::ScalarPool::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb958c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::ScalarPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Parser::Scalar*>*& VYaml::Parser::ScalarPool::__cordl_internal_get_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Parser::Scalar*>* const& VYaml::Parser::ScalarPool::__cordl_internal_get_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr void VYaml::Parser::ScalarPool::__cordl_internal_set_queue(::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Parser::Scalar*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queue = value;
}
inline void VYaml::Parser::ScalarPool::setStaticF_Shared(::VYaml::Parser::ScalarPool*  value)  {
::cordl_internals::setStaticField<::VYaml::Parser::ScalarPool*, "Shared", ::VYaml::Parser::ScalarPool*>(std::forward<::VYaml::Parser::ScalarPool*>(value));
}
inline ::VYaml::Parser::ScalarPool* VYaml::Parser::ScalarPool::getStaticF_Shared()  {
return ::cordl_internals::getStaticField<::VYaml::Parser::ScalarPool*, "Shared", ::VYaml::Parser::ScalarPool*>();
}
inline ::VYaml::Parser::Scalar* VYaml::Parser::ScalarPool::Rent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::ScalarPool*>(),
                        {"Rent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Parser::Scalar*>(this, ___internal_method);
}
inline void VYaml::Parser::ScalarPool::Return(::VYaml::Parser::Scalar*  scalar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::ScalarPool*>(),
                        {"Return", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scalar);
}
inline void VYaml::Parser::ScalarPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::ScalarPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Parser::ScalarPool* VYaml::Parser::ScalarPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Parser::ScalarPool*>());
}
// Ctor Parameters []
constexpr ::VYaml::Parser::ScalarPool::ScalarPool()   {
}
