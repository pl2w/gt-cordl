#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ScriptableSettingsBase.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettingsBase_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::ScriptableSettingsBase.GetInstanceByType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::XR::CoreUtils::ScriptableSettingsBase> (*)(::System::Type*)>(&::Unity::XR::CoreUtils::ScriptableSettingsBase::GetInstanceByType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb3f9e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(),
                        {"GetInstanceByType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ScriptableSettingsBase.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::ScriptableSettingsBase::*)()>(&::Unity::XR::CoreUtils::ScriptableSettingsBase::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3f9f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ScriptableSettingsBase.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::ScriptableSettingsBase::*)()>(&::Unity::XR::CoreUtils::ScriptableSettingsBase::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3f9f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ScriptableSettingsBase.OnLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::ScriptableSettingsBase::*)()>(&::Unity::XR::CoreUtils::ScriptableSettingsBase::OnLoaded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3f9f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(),
                    {::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ScriptableSettingsBase.ValidatePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>)>(&::Unity::XR::CoreUtils::ScriptableSettingsBase::ValidatePath)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0xb3f9f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(),
                        {"ValidatePath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ScriptableSettingsBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::ScriptableSettingsBase::*)()>(&::Unity::XR::CoreUtils::ScriptableSettingsBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fa43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::ScriptableSettingsBase::setStaticF_k_PathTrimChars(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "k_PathTrimChars", ::Unity::XR::CoreUtils::ScriptableSettingsBase*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> Unity::XR::CoreUtils::ScriptableSettingsBase::getStaticF_k_PathTrimChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "k_PathTrimChars", ::Unity::XR::CoreUtils::ScriptableSettingsBase*>();
}
inline void Unity::XR::CoreUtils::ScriptableSettingsBase::setStaticF_k_InvalidCharacters(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "k_InvalidCharacters", ::Unity::XR::CoreUtils::ScriptableSettingsBase*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> Unity::XR::CoreUtils::ScriptableSettingsBase::getStaticF_k_InvalidCharacters()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "k_InvalidCharacters", ::Unity::XR::CoreUtils::ScriptableSettingsBase*>();
}
inline void Unity::XR::CoreUtils::ScriptableSettingsBase::setStaticF_k_InvalidStrings(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "k_InvalidStrings", ::Unity::XR::CoreUtils::ScriptableSettingsBase*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Unity::XR::CoreUtils::ScriptableSettingsBase::getStaticF_k_InvalidStrings()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "k_InvalidStrings", ::Unity::XR::CoreUtils::ScriptableSettingsBase*>();
}
inline ::UnityW<::Unity::XR::CoreUtils::ScriptableSettingsBase> Unity::XR::CoreUtils::ScriptableSettingsBase::GetInstanceByType(::System::Type*  settingsType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(),
                        {"GetInstanceByType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::XR::CoreUtils::ScriptableSettingsBase>>(nullptr, ___internal_method, settingsType);
}
inline void Unity::XR::CoreUtils::ScriptableSettingsBase::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::ScriptableSettingsBase::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::ScriptableSettingsBase::OnLoaded()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::ScriptableSettingsBase::ValidatePath(::StringW  path, ::by_ref<::StringW>  cleanedPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(),
                        {"ValidatePath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, cleanedPath);
}
inline void Unity::XR::CoreUtils::ScriptableSettingsBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::ScriptableSettingsBase* Unity::XR::CoreUtils::ScriptableSettingsBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::ScriptableSettingsBase*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::ScriptableSettingsBase::ScriptableSettingsBase()   {
}
