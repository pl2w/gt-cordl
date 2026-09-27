#pragma once
// IWYU pragma private; include "Fusion/HeapConfiguration.hpp"
#include "Fusion/zzzz__PageSizes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__HeapConfiguration_def.hpp"
#include "Fusion/zzzz__Allocator_Config_def.hpp"
//  Writing Method size for method: ::Fusion::HeapConfiguration.ToAllocatorConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Allocator_Config (::Fusion::HeapConfiguration::*)()>(&::Fusion::HeapConfiguration::ToAllocatorConfig)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6001c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HeapConfiguration*>(),
                        {"ToAllocatorConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HeapConfiguration.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::HeapConfiguration* (::Fusion::HeapConfiguration::*)(int32_t)>(&::Fusion::HeapConfiguration::Init)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6001c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HeapConfiguration*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HeapConfiguration.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::HeapConfiguration::*)()>(&::Fusion::HeapConfiguration::ToString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6001d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::HeapConfiguration*>(),
                    {::i2c::class_of<::Fusion::HeapConfiguration*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HeapConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HeapConfiguration::*)()>(&::Fusion::HeapConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6001de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HeapConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::PageSizes& Fusion::HeapConfiguration::__cordl_internal_get_PageShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageShift;
}
constexpr ::Fusion::PageSizes const& Fusion::HeapConfiguration::__cordl_internal_get_PageShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageShift;
}
constexpr void Fusion::HeapConfiguration::__cordl_internal_set_PageShift(::Fusion::PageSizes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageShift = value;
}
constexpr int32_t& Fusion::HeapConfiguration::__cordl_internal_get_PageCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageCount;
}
constexpr int32_t const& Fusion::HeapConfiguration::__cordl_internal_get_PageCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageCount;
}
constexpr void Fusion::HeapConfiguration::__cordl_internal_set_PageCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageCount = value;
}
constexpr int32_t& Fusion::HeapConfiguration::__cordl_internal_get_GlobalsSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalsSize;
}
constexpr int32_t const& Fusion::HeapConfiguration::__cordl_internal_get_GlobalsSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalsSize;
}
constexpr void Fusion::HeapConfiguration::__cordl_internal_set_GlobalsSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalsSize = value;
}
inline ::GlobalNamespace::Allocator_Config Fusion::HeapConfiguration::ToAllocatorConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HeapConfiguration*>(),
                        {"ToAllocatorConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Allocator_Config>(this, ___internal_method);
}
inline ::Fusion::HeapConfiguration* Fusion::HeapConfiguration::Init(int32_t  globalsSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HeapConfiguration*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::HeapConfiguration*>(this, ___internal_method, globalsSize);
}
inline ::StringW Fusion::HeapConfiguration::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::HeapConfiguration*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::HeapConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HeapConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::HeapConfiguration* Fusion::HeapConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::HeapConfiguration*>());
}
// Ctor Parameters []
constexpr ::Fusion::HeapConfiguration::HeapConfiguration()   {
}
