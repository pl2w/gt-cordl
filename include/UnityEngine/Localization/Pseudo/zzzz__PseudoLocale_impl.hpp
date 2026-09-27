#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/PseudoLocale.hpp"
#include "UnityEngine/Localization/zzzz__Locale_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__PseudoLocale_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__IPseudoLocalizationMethod_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PseudoLocale.get_Methods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>* (::UnityEngine::Localization::Pseudo::PseudoLocale::*)()>(&::UnityEngine::Localization::Pseudo::PseudoLocale::get_Methods)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0264ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(),
                        {"get_Methods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PseudoLocale.CreatePseudoLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Pseudo::PseudoLocale> (*)()>(&::UnityEngine::Localization::Pseudo::PseudoLocale::CreatePseudoLocale)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb0264b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(),
                        {"CreatePseudoLocale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PseudoLocale._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::PseudoLocale::*)()>(&::UnityEngine::Localization::Pseudo::PseudoLocale::_ctor)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xb026528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PseudoLocale.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::PseudoLocale::*)()>(&::UnityEngine::Localization::Pseudo::PseudoLocale::Reset)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb026840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PseudoLocale.GetPseudoString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Pseudo::PseudoLocale::*)(::StringW)>(&::UnityEngine::Localization::Pseudo::PseudoLocale::GetPseudoString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb0269a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PseudoLocale.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Pseudo::PseudoLocale::*)()>(&::UnityEngine::Localization::Pseudo::PseudoLocale::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb026b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>*& UnityEngine::Localization::Pseudo::PseudoLocale::__cordl_internal_get_m_Methods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Methods;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>* const& UnityEngine::Localization::Pseudo::PseudoLocale::__cordl_internal_get_m_Methods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Methods;
}
constexpr void UnityEngine::Localization::Pseudo::PseudoLocale::__cordl_internal_set_m_Methods(::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Methods = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>* UnityEngine::Localization::Pseudo::PseudoLocale::get_Methods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(),
                        {"get_Methods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Pseudo::PseudoLocale> UnityEngine::Localization::Pseudo::PseudoLocale::CreatePseudoLocale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(),
                        {"CreatePseudoLocale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Pseudo::PseudoLocale>>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::PseudoLocale::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::PseudoLocale::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Pseudo::PseudoLocale::GetPseudoString(::StringW  input)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, input);
}
inline ::StringW UnityEngine::Localization::Pseudo::PseudoLocale::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Pseudo::PseudoLocale*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::PseudoLocale* UnityEngine::Localization::Pseudo::PseudoLocale::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::PseudoLocale*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::PseudoLocale::PseudoLocale()   {
}
