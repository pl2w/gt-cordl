#pragma once
// IWYU pragma private; include "GorillaTag/DelegateListProcessor.hpp"
#include "GorillaTag/zzzz__DelegateListProcessorPlusMinus_2_impl.hpp"
#include "GorillaTag/zzzz__DelegateListProcessor_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GorillaTag::DelegateListProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DelegateListProcessor::*)()>(&::GorillaTag::DelegateListProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d3684c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DelegateListProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DelegateListProcessor::*)(int32_t)>(&::GorillaTag::DelegateListProcessor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d36894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DelegateListProcessor.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DelegateListProcessor::*)()>(&::GorillaTag::DelegateListProcessor::Invoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d368ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessor*>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DelegateListProcessor.InvokeSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DelegateListProcessor::*)()>(&::GorillaTag::DelegateListProcessor::InvokeSafe)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d368f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessor*>(),
                        {"InvokeSafe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DelegateListProcessor.ProcessItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DelegateListProcessor::*)(::by_ref<::System::Action*>)>(&::GorillaTag::DelegateListProcessor::ProcessItem)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d36904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::DelegateListProcessor*>(),
                    {::i2c::class_of<::GorillaTag::DelegateListProcessor*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void GorillaTag::DelegateListProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::DelegateListProcessor::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void GorillaTag::DelegateListProcessor::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessor*>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::DelegateListProcessor::InvokeSafe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessor*>(),
                        {"InvokeSafe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::DelegateListProcessor::ProcessItem(/* [IsReadOnly] */ ::by_ref<::System::Action*>  del)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::DelegateListProcessor*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, del);
}
inline ::GorillaTag::DelegateListProcessor* GorillaTag::DelegateListProcessor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::DelegateListProcessor*>());
}
inline ::GorillaTag::DelegateListProcessor* GorillaTag::DelegateListProcessor::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::DelegateListProcessor*>(capacity));
}
// Ctor Parameters []
constexpr ::GorillaTag::DelegateListProcessor::DelegateListProcessor()   {
}
