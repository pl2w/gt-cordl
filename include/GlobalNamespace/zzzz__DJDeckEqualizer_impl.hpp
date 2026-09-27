#pragma once
// IWYU pragma private; include "GlobalNamespace/DJDeckEqualizer.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "UnityEngine/zzzz__AnimationCurve_impl.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DJDeckEqualizer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DJDeckEqualizer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJDeckEqualizer::*)()>(&::GlobalNamespace::DJDeckEqualizer::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x564b71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJDeckEqualizer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJDeckEqualizer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJDeckEqualizer::*)()>(&::GlobalNamespace::DJDeckEqualizer::Update)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x564b774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJDeckEqualizer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJDeckEqualizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJDeckEqualizer::*)()>(&::GlobalNamespace::DJDeckEqualizer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564b914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJDeckEqualizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_display()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_display() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display;
}
constexpr void GlobalNamespace::DJDeckEqualizer::__cordl_internal_set_display(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___display = value;
}
constexpr ::ArrayW<::UnityEngine::AnimationCurve*>& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_redTrackCurves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redTrackCurves;
}
constexpr ::ArrayW<::UnityEngine::AnimationCurve*> const& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_redTrackCurves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redTrackCurves;
}
constexpr void GlobalNamespace::DJDeckEqualizer::__cordl_internal_set_redTrackCurves(::ArrayW<::UnityEngine::AnimationCurve*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redTrackCurves = value;
}
constexpr ::ArrayW<::UnityEngine::AnimationCurve*>& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_greenTrackCurves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenTrackCurves;
}
constexpr ::ArrayW<::UnityEngine::AnimationCurve*> const& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_greenTrackCurves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenTrackCurves;
}
constexpr void GlobalNamespace::DJDeckEqualizer::__cordl_internal_set_greenTrackCurves(::ArrayW<::UnityEngine::AnimationCurve*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenTrackCurves = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_redTracks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redTracks;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_redTracks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redTracks;
}
constexpr void GlobalNamespace::DJDeckEqualizer::__cordl_internal_set_redTracks(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redTracks = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_greenTracks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenTracks;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_greenTracks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenTracks;
}
constexpr void GlobalNamespace::DJDeckEqualizer::__cordl_internal_set_greenTracks(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenTracks = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void GlobalNamespace::DJDeckEqualizer::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::StringW& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_inputColorProperty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputColorProperty;
}
constexpr ::StringW const& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_inputColorProperty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputColorProperty;
}
constexpr void GlobalNamespace::DJDeckEqualizer::__cordl_internal_set_inputColorProperty(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputColorProperty = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_inputColorHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputColorHash;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::DJDeckEqualizer::__cordl_internal_get_inputColorHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputColorHash;
}
constexpr void GlobalNamespace::DJDeckEqualizer::__cordl_internal_set_inputColorHash(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputColorHash = value;
}
inline void GlobalNamespace::DJDeckEqualizer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJDeckEqualizer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DJDeckEqualizer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJDeckEqualizer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DJDeckEqualizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJDeckEqualizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DJDeckEqualizer* GlobalNamespace::DJDeckEqualizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DJDeckEqualizer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DJDeckEqualizer::DJDeckEqualizer()   {
}
