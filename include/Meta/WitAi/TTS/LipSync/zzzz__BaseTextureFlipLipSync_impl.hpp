#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/BaseTextureFlipLipSync.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseTextureFlipLipSync_VisemeTextureData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseTextureFlipLipSync_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_def.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseTextureFlipLipSync_VisemeTextureData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync.get_Renderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::get_Renderer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::Reset)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x9e51964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e51d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::Start)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x9e52074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync.RefreshTextureLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::RefreshTextureLookup)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x9e51d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"RefreshTextureLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync.CheckForMissingVisemes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)(::System::Text::StringBuilder*)>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::CheckForMissingVisemes)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x9e52324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"CheckForMissingVisemes", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync.SetViseme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)(::Meta::WitAi::TTS::Data::Viseme)>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::SetViseme)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9e52210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"SetViseme", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync.SetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)(::UnityEngine::Texture2D*)>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::SetTexture)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e526a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync.OnVisemeStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)(::Meta::WitAi::TTS::Data::Viseme)>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::OnVisemeStarted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e5277c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"OnVisemeStarted", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync.OnVisemeFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)(::Meta::WitAi::TTS::Data::Viseme)>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::OnVisemeFinished)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e52780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"OnVisemeFinished", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync.OnVisemeLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)(::Meta::WitAi::TTS::Data::Viseme, ::Meta::WitAi::TTS::Data::Viseme, float_t)>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::OnVisemeLerp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e52784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"OnVisemeLerp", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9e52788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::__cordl_internal_get__log()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____log;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::__cordl_internal_get__log() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____log;
}
constexpr void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::__cordl_internal_set__log(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____log = value;
}
constexpr ::ArrayW<::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData>& Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::__cordl_internal_get_VisemeTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VisemeTextures;
}
constexpr ::ArrayW<::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData> const& Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::__cordl_internal_get_VisemeTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VisemeTextures;
}
constexpr void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::__cordl_internal_set_VisemeTextures(::ArrayW<::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VisemeTextures = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*& Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::__cordl_internal_get__textureLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>* const& Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::__cordl_internal_get__textureLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureLookup;
}
constexpr void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::__cordl_internal_set__textureLookup(::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textureLookup = value;
}
inline ::UnityW<::UnityEngine::Renderer> Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::get_Renderer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::RefreshTextureLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"RefreshTextureLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::CheckForMissingVisemes(::System::Text::StringBuilder*  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"CheckForMissingVisemes", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log);
}
inline void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::SetViseme(::Meta::WitAi::TTS::Data::Viseme  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"SetViseme", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::SetTexture(::UnityEngine::Texture2D*  texture)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture);
}
inline void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::OnVisemeStarted(::Meta::WitAi::TTS::Data::Viseme  viseme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"OnVisemeStarted", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viseme);
}
inline void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::OnVisemeFinished(::Meta::WitAi::TTS::Data::Viseme  viseme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"OnVisemeFinished", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viseme);
}
inline void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::OnVisemeLerp(::Meta::WitAi::TTS::Data::Viseme  oldVieseme, ::Meta::WitAi::TTS::Data::Viseme  newViseme, float_t  percentage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {"OnVisemeLerp", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldVieseme, newViseme, percentage);
}
inline void Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync* Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync::BaseTextureFlipLipSync()   {
}
