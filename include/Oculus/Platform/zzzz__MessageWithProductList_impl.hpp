#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithProductList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithProductList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ProductList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithProductList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithProductList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithProductList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa53c2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::MessageWithProductList*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithProductList.GetProductList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ProductList* (::Oculus::Platform::MessageWithProductList::*)()>(&::Oculus::Platform::MessageWithProductList::GetProductList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa53f72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::MessageWithProductList*>(),
                    {::i2c::class_of<::Oculus::Platform::MessageWithProductList*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithProductList.GetDataFromMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ProductList* (::Oculus::Platform::MessageWithProductList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithProductList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa53f768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::MessageWithProductList*>(),
                    {::i2c::class_of<::Oculus::Platform::MessageWithProductList*>(), 71}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithProductList::_ctor(::System::IntPtr  c_message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::MessageWithProductList*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ProductList* Oculus::Platform::MessageWithProductList::GetProductList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::MessageWithProductList*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ProductList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ProductList* Oculus::Platform::MessageWithProductList::GetDataFromMessage(::System::IntPtr  c_message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::MessageWithProductList*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ProductList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithProductList* Oculus::Platform::MessageWithProductList::New_ctor(::System::IntPtr  c_message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithProductList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithProductList::MessageWithProductList()   {
}
