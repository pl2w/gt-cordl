#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/AotHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__AotHelper_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__AotHelper_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AotHelper.Ensure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Newtonsoft::Json::Utilities::AotHelper::Ensure)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa390284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::AotHelper*>(),
                        {"Ensure", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AotHelper.IsFalse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Newtonsoft::Json::Utilities::AotHelper::IsFalse)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3903e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::AotHelper*>(),
                        {"IsFalse", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::AotHelper::setStaticF_s_alwaysFalse(bool  value)  {
::cordl_internals::setStaticField<bool, "s_alwaysFalse", ::Newtonsoft::Json::Utilities::AotHelper*>(std::forward<bool>(value));
}
inline bool Newtonsoft::Json::Utilities::AotHelper::getStaticF_s_alwaysFalse()  {
return ::cordl_internals::getStaticField<bool, "s_alwaysFalse", ::Newtonsoft::Json::Utilities::AotHelper*>();
}
inline void Newtonsoft::Json::Utilities::AotHelper::Ensure(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::AotHelper*>(),
                        {"Ensure", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
template<typename T>
inline void Newtonsoft::Json::Utilities::AotHelper::EnsureList()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Utilities::AotHelper*>(),
                    {"EnsureList", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Newtonsoft::Json::Utilities::AotHelper::IsFalse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::AotHelper*>(),
                        {"IsFalse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::AotHelper::AotHelper()   {
}
template<typename T>
inline void Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>::setStaticF___9(::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*  value)  {
::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*, "<>9", ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*>(std::forward<::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*>(value));
}
template<typename T>
inline ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>* Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*, "<>9", ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*>();
}
template<typename T>
inline void Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>::setStaticF___9__2_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__2_0", ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*>(std::forward<::System::Action*>(value));
}
template<typename T>
inline ::System::Action* Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__2_0", ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*>();
}
template<typename T>
inline void Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>::_EnsureList_b__2_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*>(),
                        {"<EnsureList>b__2_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>* Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>::AotHelper___c__2_1()   {
}
