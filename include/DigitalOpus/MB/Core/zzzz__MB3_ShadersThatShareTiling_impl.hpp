#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_ShadersThatShareTiling.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_ShadersThatShareTiling_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_ShadersThatShareTiling_ShaderThatSharesTiling_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling.GetShadersThatShareTiling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling* (*)()>(&::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::GetShadersThatShareTiling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9dbc064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>(),
                        {"GetShadersThatShareTiling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling.GetScaleAndOffsetForTextureProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::GetScaleAndOffsetForTextureProp)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9dbc468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>(),
                        {"GetScaleAndOffsetForTextureProp", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::Init)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x9dbc0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::*)()>(&::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dbc570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling>*& DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::__cordl_internal_get_shadersThatShareTiling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadersThatShareTiling;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling>* const& DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::__cordl_internal_get_shadersThatShareTiling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadersThatShareTiling;
}
constexpr void DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::__cordl_internal_set_shadersThatShareTiling(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadersThatShareTiling = value;
}
inline void DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::setStaticF__singleton(::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*  value)  {
::cordl_internals::setStaticField<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*, "_singleton", ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>(std::forward<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>(value));
}
inline ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling* DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::getStaticF__singleton()  {
return ::cordl_internals::getStaticField<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*, "_singleton", ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>();
}
inline ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling* DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::GetShadersThatShareTiling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>(),
                        {"GetShadersThatShareTiling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>(nullptr, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::GetScaleAndOffsetForTextureProp(::UnityEngine::Material*  m, ::StringW  texturePropName, ::by_ref<::UnityEngine::Vector2>  offset, ::by_ref<::UnityEngine::Vector2>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>(),
                        {"GetScaleAndOffsetForTextureProp", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, texturePropName, offset, scale);
}
inline void DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling* DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling::MB3_ShadersThatShareTiling()   {
}
