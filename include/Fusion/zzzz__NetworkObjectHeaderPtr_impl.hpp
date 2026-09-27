#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderPtr.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderPtr_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderPtr._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderPtr::*)(::Fusion::NetworkObjectHeader*)>(&::Fusion::NetworkObjectHeaderPtr::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fab2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderPtr>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderPtr.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectTypeId (::Fusion::NetworkObjectHeaderPtr::*)()>(&::Fusion::NetworkObjectHeaderPtr::get_Type)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fab2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderPtr>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderPtr.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (::Fusion::NetworkObjectHeaderPtr::*)()>(&::Fusion::NetworkObjectHeaderPtr::get_Id)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fab2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderPtr>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderPtr.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<int32_t> (::Fusion::NetworkObjectHeaderPtr::*)()>(&::Fusion::NetworkObjectHeaderPtr::get_Data)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fa9dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderPtr>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkObjectHeaderPtr::_ctor(::Fusion::NetworkObjectHeader*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderPtr>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr);
}
inline ::Fusion::NetworkObjectTypeId Fusion::NetworkObjectHeaderPtr::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderPtr>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectTypeId>(*this, ___internal_method);
}
inline ::Fusion::NetworkId Fusion::NetworkObjectHeaderPtr::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderPtr>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(*this, ___internal_method);
}
inline ::System::Span_1<int32_t> Fusion::NetworkObjectHeaderPtr::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderPtr>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "::Fusion::NetworkObjectHeader*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectHeaderPtr::NetworkObjectHeaderPtr(::Fusion::NetworkObjectHeader*  Ptr) noexcept  {
this->Ptr = Ptr;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectHeaderPtr::NetworkObjectHeaderPtr()   {
}
