#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedTexture.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedTexture_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedTexture_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedTexture.ApplyDataBindingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingResult (::UnityEngine::Localization::LocalizedTexture::*)(::by_ref<::UnityEngine::UIElements::BindingContext>, ::UnityEngine::Texture*)>(&::UnityEngine::Localization::LocalizedTexture::ApplyDataBindingValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb00eff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedTexture*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedTexture*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedTexture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedTexture::*)()>(&::UnityEngine::Localization::LocalizedTexture::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb00f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTexture*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::BindingResult UnityEngine::Localization::LocalizedTexture::ApplyDataBindingValue(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context, ::UnityEngine::Texture*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedTexture*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingResult>(this, ___internal_method, context, value);
}
inline void UnityEngine::Localization::LocalizedTexture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTexture*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::LocalizedTexture* UnityEngine::Localization::LocalizedTexture::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedTexture*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalizedTexture::LocalizedTexture()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData::Register)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb00f0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData*>(),
                        {"Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData::*)()>(&::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData::CreateInstance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb00f0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData::*)()>(&::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb00f14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::LocalizedTexture_UxmlSerializedData::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::LocalizedTexture_UxmlSerializedData::CreateInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedTexture_UxmlSerializedData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData* UnityEngine::Localization::LocalizedTexture_UxmlSerializedData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData::LocalizedTexture_UxmlSerializedData()   {
}
