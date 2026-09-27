#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/VisemeTextureFlipLipSync.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseTextureFlipLipSync_impl.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__VisemeTextureFlipLipSync_def.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__VisemeLipSyncAnimator_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync.get_Renderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::get_Renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e54138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::Awake)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e54140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::OnEnable)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9e5424c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::OnDisable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e543d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e54480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::__cordl_internal_get_visemeRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visemeRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::__cordl_internal_get_visemeRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visemeRenderer;
}
constexpr void Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::__cordl_internal_set_visemeRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visemeRenderer = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>& Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::__cordl_internal_get__lipSyncAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lipSyncAnimator;
}
constexpr ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator> const& Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::__cordl_internal_get__lipSyncAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lipSyncAnimator;
}
constexpr void Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::__cordl_internal_set__lipSyncAnimator(::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lipSyncAnimator = value;
}
inline ::UnityW<::UnityEngine::Renderer> Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::get_Renderer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync* Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync::VisemeTextureFlipLipSync()   {
}
