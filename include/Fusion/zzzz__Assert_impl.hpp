#pragma once
// IWYU pragma private; include "Fusion/Assert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Assert_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::_cordl_Assert.Fail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::_cordl_Assert::Fail)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f442c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Fail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::_cordl_Assert.Fail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Fusion::_cordl_Assert::Fail)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f442f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Fail", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::_cordl_Assert.Fail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::Fusion::_cordl_Assert::Fail)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f44338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Fail", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::_cordl_Assert.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Fusion::_cordl_Assert::Check)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f44380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Check", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::_cordl_Assert.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::Fusion::_cordl_Assert::Check)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f443bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Check", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::_cordl_Assert.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Fusion::_cordl_Assert::Check)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f443f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Check", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::_cordl_Assert.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::Fusion::_cordl_Assert::Check)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f44434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Check", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::_cordl_Assert.AlwaysFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Fusion::_cordl_Assert::AlwaysFail)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f4447c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"AlwaysFail", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::_cordl_Assert.Always
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::Fusion::_cordl_Assert::Always)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f444bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Always", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::_cordl_Assert::Fail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Fail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::_cordl_Assert::Fail(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Fail", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline void Fusion::_cordl_Assert::Fail(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Fail", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline void Fusion::_cordl_Assert::Check(::System::Object*  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Check", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition);
}
inline void Fusion::_cordl_Assert::Check(void*  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Check", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition);
}
inline void Fusion::_cordl_Assert::Check(/* [DoesNotReturnIf(false)] */ bool  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Check", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition);
}
inline void Fusion::_cordl_Assert::Check(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Check", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, error);
}
template<typename T0>
inline void Fusion::_cordl_Assert::Check(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Check", {::i2c::class_of<T0>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, format, arg0);
}
template<typename T0,typename T1>
inline void Fusion::_cordl_Assert::Check(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0, T1  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Check", {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, format, arg0, arg1);
}
template<typename T0,typename T1,typename T2>
inline void Fusion::_cordl_Assert::Check(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0, T1  arg1, T2  arg2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Check", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, format, arg0, arg1, arg2);
}
template<typename T0,typename T1,typename T2,typename T3>
inline void Fusion::_cordl_Assert::Check(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Check", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, format, arg0, arg1, arg2, arg3);
}
template<typename T0>
inline void Fusion::_cordl_Assert::Check(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Check", {::i2c::class_of<T0>()}, {::i2c::type_of<bool>(), ::i2c::type_of<T0>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, arg0);
}
template<typename T0,typename T1>
inline void Fusion::_cordl_Assert::Check(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0, T1  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Check", {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}, {::i2c::type_of<bool>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, arg0, arg1);
}
template<typename T0,typename T1,typename T2>
inline void Fusion::_cordl_Assert::Check(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0, T1  arg1, T2  arg2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Check", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<bool>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, arg0, arg1, arg2);
}
template<typename T0,typename T1,typename T2,typename T3>
inline void Fusion::_cordl_Assert::Check(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0, T1  arg1, T2  arg2, T3  arg3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Check", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<bool>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, arg0, arg1, arg2, arg3);
}
inline void Fusion::_cordl_Assert::AlwaysFail(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"AlwaysFail", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline void Fusion::_cordl_Assert::Always(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                        {"Always", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, error);
}
template<typename T0>
inline void Fusion::_cordl_Assert::Always(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Always", {::i2c::class_of<T0>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, format, arg0);
}
template<typename T0,typename T1>
inline void Fusion::_cordl_Assert::Always(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0, T1  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Always", {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, format, arg0, arg1);
}
template<typename T0,typename T1,typename T2>
inline void Fusion::_cordl_Assert::Always(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0, T1  arg1, T2  arg2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Always", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, format, arg0, arg1, arg2);
}
template<typename T0>
inline void Fusion::_cordl_Assert::Always(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Always", {::i2c::class_of<T0>()}, {::i2c::type_of<bool>(), ::i2c::type_of<T0>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, arg0);
}
template<typename T0,typename T1>
inline void Fusion::_cordl_Assert::Always(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0, T1  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::_cordl_Assert*>(),
                    {"Always", {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}, {::i2c::type_of<bool>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, arg0, arg1);
}
// Ctor Parameters []
constexpr ::Fusion::_cordl_Assert::_cordl_Assert()   {
}
