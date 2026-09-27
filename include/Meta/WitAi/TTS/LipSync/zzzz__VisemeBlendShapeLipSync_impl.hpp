#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/VisemeBlendShapeLipSync.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseVisemeBlendShapeLipSync_impl.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__VisemeBlendShapeLipSync_def.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__VisemeLipSyncAnimator_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync.get_SkinnedMeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::SkinnedMeshRenderer> (::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::get_SkinnedMeshRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e53c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::Awake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e53c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::OnEnable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e53d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::OnDisable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e53d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e53e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>& Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::__cordl_internal_get__lipsyncAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lipsyncAnimator;
}
constexpr ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator> const& Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::__cordl_internal_get__lipsyncAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lipsyncAnimator;
}
constexpr void Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::__cordl_internal_set__lipsyncAnimator(::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lipsyncAnimator = value;
}
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::get_SkinnedMeshRenderer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::SkinnedMeshRenderer>>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync* Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync::VisemeBlendShapeLipSync()   {
}
