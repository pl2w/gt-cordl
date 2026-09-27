#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/StringHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Extensions/zzzz__StringHelper_def.hpp"
#include "Backtrace/Unity/Extensions/zzzz__StringHelper_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Extensions::StringHelper.OnlyLetters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Backtrace::Unity::Extensions::StringHelper::OnlyLetters)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5f25c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StringHelper*>(),
                        {"OnlyLetters", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Extensions::StringHelper.GetSha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Text::StringBuilder*)>(&::Backtrace::Unity::Extensions::StringHelper::GetSha)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f25ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StringHelper*>(),
                        {"GetSha", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Extensions::StringHelper.GetSha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Backtrace::Unity::Extensions::StringHelper::GetSha)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5f25e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StringHelper*>(),
                        {"GetSha", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Backtrace::Unity::Extensions::StringHelper::OnlyLetters(::StringW  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StringHelper*>(),
                        {"OnlyLetters", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, source);
}
inline ::StringW Backtrace::Unity::Extensions::StringHelper::GetSha(::System::Text::StringBuilder*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StringHelper*>(),
                        {"GetSha", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, source);
}
inline ::StringW Backtrace::Unity::Extensions::StringHelper::GetSha(::StringW  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StringHelper*>(),
                        {"GetSha", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Extensions::StringHelper::StringHelper()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Extensions::StringHelper___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Extensions::StringHelper___c::*)()>(&::Backtrace::Unity::Extensions::StringHelper___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f260f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StringHelper___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Extensions::StringHelper___c._OnlyLetters_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Extensions::StringHelper___c::*)(char16_t)>(&::Backtrace::Unity::Extensions::StringHelper___c::_OnlyLetters_b__0_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f260f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StringHelper___c*>(),
                        {"<OnlyLetters>b__0_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Extensions::StringHelper___c::setStaticF___9(::Backtrace::Unity::Extensions::StringHelper___c*  value)  {
::cordl_internals::setStaticField<::Backtrace::Unity::Extensions::StringHelper___c*, "<>9", ::Backtrace::Unity::Extensions::StringHelper___c*>(std::forward<::Backtrace::Unity::Extensions::StringHelper___c*>(value));
}
inline ::Backtrace::Unity::Extensions::StringHelper___c* Backtrace::Unity::Extensions::StringHelper___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Backtrace::Unity::Extensions::StringHelper___c*, "<>9", ::Backtrace::Unity::Extensions::StringHelper___c*>();
}
inline void Backtrace::Unity::Extensions::StringHelper___c::setStaticF___9__0_0(::System::Func_2<char16_t,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<char16_t,bool>*, "<>9__0_0", ::Backtrace::Unity::Extensions::StringHelper___c*>(std::forward<::System::Func_2<char16_t,bool>*>(value));
}
inline ::System::Func_2<char16_t,bool>* Backtrace::Unity::Extensions::StringHelper___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<char16_t,bool>*, "<>9__0_0", ::Backtrace::Unity::Extensions::StringHelper___c*>();
}
inline void Backtrace::Unity::Extensions::StringHelper___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StringHelper___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Extensions::StringHelper___c::_OnlyLetters_b__0_0(char16_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StringHelper___c*>(),
                        {"<OnlyLetters>b__0_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline ::Backtrace::Unity::Extensions::StringHelper___c* Backtrace::Unity::Extensions::StringHelper___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Extensions::StringHelper___c*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Extensions::StringHelper___c::StringHelper___c()   {
}
