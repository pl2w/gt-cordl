#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/BaseVisemeBlendShapeLipSync.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseVisemeBlendShapeLipSync_VisemeBlendShapeData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseVisemeBlendShapeLipSync_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_def.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseVisemeBlendShapeLipSync_VisemeBlendShapeData_def.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync.get_SkinnedMeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::SkinnedMeshRenderer> (::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::get_SkinnedMeshRenderer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::Reset)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x9e528fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e52cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync.RefreshBlendShapeLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::RefreshBlendShapeLookup)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x9e52cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {"RefreshBlendShapeLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync.OnVisemeStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::*)(::Meta::WitAi::TTS::Data::Viseme)>(&::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::OnVisemeStarted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e536cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {"OnVisemeStarted", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync.OnVisemeFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::*)(::Meta::WitAi::TTS::Data::Viseme)>(&::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::OnVisemeFinished)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e536d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {"OnVisemeFinished", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync.OnVisemeLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::*)(::Meta::WitAi::TTS::Data::Viseme, ::Meta::WitAi::TTS::Data::Viseme, float_t)>(&::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::OnVisemeLerp)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x9e536d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync.GetBlendShapeWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::*)(::Meta::WitAi::TTS::Data::Viseme, ::StringW)>(&::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::GetBlendShapeWeight)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9e53a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {"GetBlendShapeWeight", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync.GetBlendShapeNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::GetBlendShapeNames)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9e53418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {"GetBlendShapeNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::*)()>(&::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9e53b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_get_blendShapeWeightScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeWeightScale;
}
constexpr float_t const& Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_get_blendShapeWeightScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeWeightScale;
}
constexpr void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_set_blendShapeWeightScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapeWeightScale = value;
}
constexpr ::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>& Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_get_VisemeBlendShapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VisemeBlendShapes;
}
constexpr ::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData> const& Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_get_VisemeBlendShapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VisemeBlendShapes;
}
constexpr void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_set_VisemeBlendShapes(::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VisemeBlendShapes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*& Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_get__visemeLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visemeLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>* const& Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_get__visemeLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visemeLookup;
}
constexpr void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_set__visemeLookup(::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visemeLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_get__blendShapeLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blendShapeLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_get__blendShapeLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blendShapeLookup;
}
constexpr void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_set__blendShapeLookup(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blendShapeLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_get__blendShapeNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blendShapeNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_get__blendShapeNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blendShapeNames;
}
constexpr void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::__cordl_internal_set__blendShapeNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blendShapeNames = value;
}
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::get_SkinnedMeshRenderer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::SkinnedMeshRenderer>>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::RefreshBlendShapeLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {"RefreshBlendShapeLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::OnVisemeStarted(::Meta::WitAi::TTS::Data::Viseme  viseme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {"OnVisemeStarted", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viseme);
}
inline void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::OnVisemeFinished(::Meta::WitAi::TTS::Data::Viseme  viseme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {"OnVisemeFinished", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viseme);
}
inline void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::OnVisemeLerp(::Meta::WitAi::TTS::Data::Viseme  fromEvent, ::Meta::WitAi::TTS::Data::Viseme  toEvent, float_t  percentage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromEvent, toEvent, percentage);
}
inline float_t Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::GetBlendShapeWeight(::Meta::WitAi::TTS::Data::Viseme  viseme, ::StringW  blendShapeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {"GetBlendShapeWeight", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, viseme, blendShapeName);
}
inline ::ArrayW<::StringW> Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::GetBlendShapeNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {"GetBlendShapeNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync* Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync::BaseVisemeBlendShapeLipSync()   {
}
