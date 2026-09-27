#pragma once
// IWYU pragma private; include "System/Net/IntPtrHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__IntPtrHelper_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Net::IntPtrHelper.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::System::Net::IntPtrHelper::Add)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac59714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IntPtrHelper*>(),
                        {"Add", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IntPtrHelper.Subtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr)>(&::System::Net::IntPtrHelper::Subtract)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac59734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IntPtrHelper*>(),
                        {"Subtract", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr System::Net::IntPtrHelper::Add(::System::IntPtr  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IntPtrHelper*>(),
                        {"Add", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, a, b);
}
inline int64_t System::Net::IntPtrHelper::Subtract(::System::IntPtr  a, ::System::IntPtr  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IntPtrHelper*>(),
                        {"Subtract", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::System::Net::IntPtrHelper::IntPtrHelper()   {
}
