#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPidList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPidList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PidList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithPidList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithPidList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithPidList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa53c28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::MessageWithPidList*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPidList.GetPidList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PidList* (::Oculus::Platform::MessageWithPidList::*)()>(&::Oculus::Platform::MessageWithPidList::GetPidList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa53f65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::MessageWithPidList*>(),
                    {::i2c::class_of<::Oculus::Platform::MessageWithPidList*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPidList.GetDataFromMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PidList* (::Oculus::Platform::MessageWithPidList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithPidList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa53f698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::MessageWithPidList*>(),
                    {::i2c::class_of<::Oculus::Platform::MessageWithPidList*>(), 71}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithPidList::_ctor(::System::IntPtr  c_message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::MessageWithPidList*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::PidList* Oculus::Platform::MessageWithPidList::GetPidList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::MessageWithPidList*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PidList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PidList* Oculus::Platform::MessageWithPidList::GetDataFromMessage(::System::IntPtr  c_message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::MessageWithPidList*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PidList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithPidList* Oculus::Platform::MessageWithPidList::New_ctor(::System::IntPtr  c_message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithPidList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithPidList::MessageWithPidList()   {
}
